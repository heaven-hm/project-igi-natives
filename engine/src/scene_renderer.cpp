#include "igi/scene_renderer.hpp"

#include <algorithm>
#include <array>
#include <cctype>
#include <stdexcept>

namespace igi::gameplay {
namespace {

std::uint32_t mix_color(std::uint32_t first, std::uint32_t second, float weight) {
    std::uint32_t result = 0xff000000u;
    for (const auto shift : {0, 8, 16}) {
        const float channel = static_cast<float>((first >> shift) & 255) * (1 - weight) +
                              static_cast<float>((second >> shift) & 255) * weight;
        result |= static_cast<std::uint32_t>(std::clamp(channel, 0.0f, 255.0f)) << shift;
    }
    return result;
}

std::uint32_t texture_sample(const SceneTexture& texture, float horizontal, float vertical) {
    if (!std::isfinite(horizontal) || !std::isfinite(vertical)) { return 0; }
    horizontal = (horizontal - std::floor(horizontal)) * static_cast<float>(texture.width) - 0.5f;
    vertical = (vertical - std::floor(vertical)) * static_cast<float>(texture.height) - 0.5f;
    const int left = static_cast<int>(std::floor(horizontal));
    const int top = static_cast<int>(std::floor(vertical));
    const auto horizontal_weight = static_cast<std::uint32_t>((horizontal - static_cast<float>(left)) * 256);
    const auto vertical_weight = static_cast<std::uint32_t>((vertical - static_cast<float>(top)) * 256);
    const auto sample = [&](int column, int row) {
        const auto wrapped_column = (texture.width & (texture.width - 1)) == 0 ?
            static_cast<std::uint32_t>(column) & (texture.width - 1) :
            static_cast<std::uint32_t>(column < 0 ? column + static_cast<int>(texture.width) : column) % texture.width;
        const auto wrapped_row = (texture.height & (texture.height - 1)) == 0 ?
            static_cast<std::uint32_t>(row) & (texture.height - 1) :
            static_cast<std::uint32_t>(row < 0 ? row + static_cast<int>(texture.height) : row) % texture.height;
        return texture.pixels[static_cast<std::size_t>(wrapped_row) * texture.width + wrapped_column];
    };
    const std::array<std::uint32_t, 4> samples{sample(left, top), sample(left + 1, top),
                                             sample(left, top + 1), sample(left + 1, top + 1)};
    std::uint32_t color = 0;
    for (const int shift : {0, 8, 16, 24}) {
        const auto lower = ((samples[0] >> shift) & 255) * (256 - horizontal_weight) +
                           ((samples[1] >> shift) & 255) * horizontal_weight;
        const auto upper = ((samples[2] >> shift) & 255) * (256 - horizontal_weight) +
                           ((samples[3] >> shift) & 255) * horizontal_weight;
        color |= ((lower * (256 - vertical_weight) + upper * vertical_weight) >> 16) << shift;
    }
    return color;
}

} // namespace

SceneRenderer::SceneRenderer(int width, int height) : width_(width), height_(height) {
    if (width < 160 || height < 120 || width > 3840 || height > 2160) {
        throw std::runtime_error("Render dimensions are outside the supported range");
    }
    pixels_.resize(static_cast<std::size_t>(width) * height);
    depth_.resize(pixels_.size());
}

void SceneRenderer::triangle(const SceneTriangle& original, const std::vector<SceneTexture>& textures,
                             Vector3 camera, Vector3 right, Vector3 up, Vector3 forward,
                             float focal_length, bool weapon) {
    SceneTriangle transformed = original;
    for (auto& vertex : transformed.vertices) {
        const auto relative = vertex.position - camera;
        vertex.position = {dot(relative, right), dot(relative, up), dot(relative, forward)};
    }
    const auto& vertices = transformed.vertices;
    if (std::max({vertices[0].position.z, vertices[1].position.z, vertices[2].position.z}) < 0.05f ||
        std::min({vertices[0].position.z, vertices[1].position.z, vertices[2].position.z}) > 1400.0f) { return; }
    const auto normal = normalized(cross(original.vertices[1].position - original.vertices[0].position,
                                          original.vertices[2].position - original.vertices[0].position));
    const float illumination = weapon ? 0.95f : 0.58f + 0.36f * std::abs(dot(normal, normalized(Vector3{-0.3f, -0.5f, 1})));
    std::array<SceneVertex, 5> clipped;
    std::size_t vertex_count = 0;
    for (std::size_t corner = 0; corner < 3; ++corner) {
        const auto& current = vertices[corner];
        const auto& previous = vertices[(corner + 2) % 3];
        const bool current_inside = current.position.z >= 0.05f;
        const bool previous_inside = previous.position.z >= 0.05f;
        if (current_inside != previous_inside) {
            const float fraction = (0.05f - previous.position.z) / (current.position.z - previous.position.z);
            clipped[vertex_count++] = {previous.position + (current.position - previous.position) * fraction,
                previous.texture_u + (current.texture_u - previous.texture_u) * fraction,
                previous.texture_v + (current.texture_v - previous.texture_v) * fraction};
        }
        if (current_inside) { clipped[vertex_count++] = current; }
    }
    if (original.texture_index >= textures.size()) {
        throw std::runtime_error("Render triangle references an unavailable texture");
    }
    for (std::size_t corner = 1; corner + 1 < vertex_count; ++corner) {
        SceneTriangle clipped_triangle{{clipped[0], clipped[corner], clipped[corner + 1]}, original.texture_index};
        rasterize(clipped_triangle, textures[original.texture_index], focal_length, illumination, weapon);
    }
}

void SceneRenderer::rasterize(const SceneTriangle& triangle, const SceneTexture& texture,
                              float focal_length, float illumination, bool weapon) {
    struct Projected final { float horizontal; float vertical; float inverse_depth; float texture_u; float texture_v; };
    std::array<Projected, 3> projected;
    for (std::size_t corner = 0; corner < 3; ++corner) {
        const auto& vertex = triangle.vertices[corner];
        const float inverse = 1.0f / vertex.position.z;
        projected[corner] = {width_ * 0.5f + vertex.position.x * inverse * focal_length,
                             height_ * 0.5f - vertex.position.y * inverse * focal_length,
                             inverse, vertex.texture_u * inverse, vertex.texture_v * inverse};
    }
    const auto& first = projected[0];
    const auto& second = projected[1];
    const auto& third = projected[2];
    const float area = (second.horizontal - first.horizontal) * (third.vertical - first.vertical) -
                        (second.vertical - first.vertical) * (third.horizontal - first.horizontal);
    if (!std::isfinite(area) || std::abs(area) < 0.001f) { return; }
    const float minimum_horizontal = std::min({first.horizontal, second.horizontal, third.horizontal});
    const float maximum_horizontal = std::max({first.horizontal, second.horizontal, third.horizontal});
    const float minimum_vertical = std::min({first.vertical, second.vertical, third.vertical});
    const float maximum_vertical = std::max({first.vertical, second.vertical, third.vertical});
    if (minimum_horizontal >= width_ || maximum_horizontal < 0 || minimum_vertical >= height_ || maximum_vertical < 0) { return; }
    const int left = static_cast<int>(std::clamp(minimum_horizontal, 0.0f, static_cast<float>(width_ - 1)));
    const int right = static_cast<int>(std::clamp(maximum_horizontal, 0.0f, static_cast<float>(width_ - 1)));
    const int top = static_cast<int>(std::clamp(minimum_vertical, 0.0f, static_cast<float>(height_ - 1)));
    const int bottom = static_cast<int>(std::clamp(maximum_vertical, 0.0f, static_cast<float>(height_ - 1)));
    const float first_step = (second.vertical - third.vertical) / area;
    const float second_step = (third.vertical - first.vertical) / area;
    const float third_step = (first.vertical - second.vertical) / area;
    for (int row = top; row <= bottom; ++row) {
        const float horizontal = static_cast<float>(left) + 0.5f;
        const float vertical = static_cast<float>(row) + 0.5f;
        float first_weight = ((second.horizontal - horizontal) * (third.vertical - vertical) -
                              (second.vertical - vertical) * (third.horizontal - horizontal)) / area;
        float second_weight = ((third.horizontal - horizontal) * (first.vertical - vertical) -
                               (third.vertical - vertical) * (first.horizontal - horizontal)) / area;
        float third_weight = 1.0f - first_weight - second_weight;
        for (int column = left; column <= right; ++column) {
            const std::size_t pixel_index = static_cast<std::size_t>(row) * width_ + column;
            const float inverse_depth = first_weight * first.inverse_depth + second_weight * second.inverse_depth + third_weight * third.inverse_depth;
            if (first_weight >= -0.00001f && second_weight >= -0.00001f && third_weight >= -0.00001f &&
                inverse_depth > depth_[pixel_index]) {
                const float pixel_depth = 1.0f / inverse_depth;
                const float texture_u = (first_weight * first.texture_u + second_weight * second.texture_u + third_weight * third.texture_u) * pixel_depth;
                const float texture_v = (first_weight * first.texture_v + second_weight * second.texture_v + third_weight * third.texture_v) * pixel_depth;
                const auto sampled = texture_sample(texture, texture_u, texture_v);
                if ((sampled >> 24) >= 96) {
                    std::uint32_t shaded = 0xff000000u;
                    for (const auto shift : {0, 8, 16}) {
                        shaded |= static_cast<std::uint32_t>(static_cast<float>((sampled >> shift) & 255) * illumination) << shift;
                    }
                    const float fog = weapon ? 0.0f : std::clamp((pixel_depth - 80.0f) / 700.0f, 0.0f, 1.0f);
                    pixels_[pixel_index] = mix_color(shaded, 0xffa6aaa2u, fog);
                    depth_[pixel_index] = inverse_depth;
                }
            }
            first_weight += first_step;
            second_weight += second_step;
            third_weight += third_step;
        }
    }
    ++visible_triangles_;
}

void SceneRenderer::rectangle(int left, int top, int width, int height, std::uint32_t color) {
    for (int row = std::max(0, top); row < std::min(height_, top + height); ++row) {
        for (int column = std::max(0, left); column < std::min(width_, left + width); ++column) {
            pixels_[static_cast<std::size_t>(row) * width_ + column] = color;
        }
    }
}

void SceneRenderer::text(int left, int top, std::string_view message, std::uint32_t color, int scale) {
    static constexpr std::array<std::array<std::uint8_t, 7>, 36> glyphs{{
        {{14,17,19,21,25,17,14}}, {{4,12,4,4,4,4,14}}, {{14,17,1,2,4,8,31}},
        {{30,1,1,14,1,1,30}}, {{2,6,10,18,31,2,2}}, {{31,16,16,30,1,1,30}},
        {{14,16,16,30,17,17,14}}, {{31,1,2,4,8,8,8}}, {{14,17,17,14,17,17,14}},
        {{14,17,17,15,1,1,14}}, {{14,17,17,31,17,17,17}}, {{30,17,17,30,17,17,30}},
        {{14,17,16,16,16,17,14}}, {{30,17,17,17,17,17,30}}, {{31,16,16,30,16,16,31}},
        {{31,16,16,30,16,16,16}}, {{14,17,16,23,17,17,15}}, {{17,17,17,31,17,17,17}},
        {{14,4,4,4,4,4,14}}, {{7,2,2,2,2,18,12}}, {{17,18,20,24,20,18,17}},
        {{16,16,16,16,16,16,31}}, {{17,27,21,21,17,17,17}}, {{17,25,21,19,17,17,17}},
        {{14,17,17,17,17,17,14}}, {{30,17,17,30,16,16,16}}, {{14,17,17,17,21,18,13}},
        {{30,17,17,30,20,18,17}}, {{15,16,16,14,1,1,30}}, {{31,4,4,4,4,4,4}},
        {{17,17,17,17,17,17,14}}, {{17,17,17,17,17,10,4}}, {{17,17,17,21,21,21,10}},
        {{17,17,10,4,10,17,17}}, {{17,17,10,4,4,4,4}}, {{31,1,2,4,8,16,31}}
    }};
    for (const auto character : message) {
        const auto uppercase = static_cast<char>(std::toupper(static_cast<unsigned char>(character)));
        const int glyph_index = uppercase >= '0' && uppercase <= '9' ? uppercase - '0' :
                                uppercase >= 'A' && uppercase <= 'Z' ? uppercase - 'A' + 10 : -1;
        if (glyph_index >= 0) {
            for (int row = 0; row < 7; ++row) {
                for (int column = 0; column < 5; ++column) {
                    if ((glyphs[glyph_index][row] & (1 << (4 - column))) != 0) {
                        rectangle(left + column * scale, top + row * scale, scale, scale, color);
                    }
                }
            }
        } else if (character == '/') {
            for (int row = 0; row < 7; ++row) { rectangle(left + (4 - row * 4 / 6) * scale, top + row * scale, scale, scale, color); }
        }
        left += 6 * scale;
    }
}

void SceneRenderer::render(const MissionScene& scene, const GameSimulation& simulation) {
    if (scene.textures.empty()) { throw std::runtime_error("Scene has no texture data"); }
    visible_triangles_ = 0;
    std::fill(depth_.begin(), depth_.end(), 0.0f);
    for (int row = 0; row < height_; ++row) {
        const auto sky = mix_color(0xff899dacu, 0xffc4c2afu, static_cast<float>(row) / height_);
        std::fill_n(pixels_.begin() + static_cast<std::ptrdiff_t>(row) * width_, width_, sky);
    }
    const auto camera = simulation.camera_position();
    const auto forward = simulation.aim_direction();
    const Vector3 right{std::cos(simulation.heading()), std::sin(simulation.heading()), 0};
    const Vector3 up = normalized(cross(right, forward));
    const float focal_length = static_cast<float>(width_) * (simulation.aiming() ? 0.85f : 0.55f);
    for (const auto& surface : scene.static_triangles) {
        triangle(surface, scene.textures, camera, right, up, forward, focal_length);
    }
    for (std::size_t actor_index = 0; actor_index < simulation.actors().size(); ++actor_index) {
        const auto& actor = simulation.actors()[actor_index];
        const auto& mesh = scene.actors[actor_index].mesh;
        if (!mesh || length(actor.position - camera) > 450) { continue; }
        const float cosine = std::cos(actor.heading);
        const float sine = std::sin(actor.heading);
        for (auto surface : mesh->triangles) {
            for (auto& vertex : surface.vertices) {
                auto position = vertex.position;
                if (actor.behavior == ActorBehavior::dead) { position = {position.x, position.z, 0.1f - position.y}; }
                vertex.position = {position.x * cosine - position.y * sine + actor.position.x,
                                   position.x * sine + position.y * cosine + actor.position.y,
                                   position.z + actor.position.z};
            }
            triangle(surface, scene.textures, camera, right, up, forward, focal_length);
        }
    }
    if (scene.weapon_mesh && simulation.health() > 0) {
        std::fill(depth_.begin(), depth_.end(), 0.0f);
        const float reload_drop = simulation.weapon().reload_remaining > 0 ? 0.35f : 0;
        for (auto surface : scene.weapon_mesh->triangles) {
            for (auto& vertex : surface.vertices) {
                vertex.position = {vertex.position.x + (simulation.aiming() ? 0 : 0.22f),
                                   vertex.position.z - 0.31f - reload_drop,
                                   vertex.position.y + 0.55f};
            }
            triangle(surface, scene.textures, {}, {1, 0, 0}, {0, 1, 0}, {0, 0, 1},
                     static_cast<float>(width_) * 0.55f, true);
        }
    }
    const int center_x = width_ / 2;
    const int center_y = height_ / 2;
    const auto crosshair_color = simulation.weapon().hit_marker_remaining > 0 ? 0xffffb171u : 0xffdce1d1u;
    rectangle(center_x - 9, center_y, 5, 1, crosshair_color);
    rectangle(center_x + 5, center_y, 5, 1, crosshair_color);
    rectangle(center_x, center_y - 9, 1, 5, crosshair_color);
    rectangle(center_x, center_y + 5, 1, 5, crosshair_color);
    rectangle(14, height_ - 55, 195, 40, 0xff17211bu);
    text(24, height_ - 46, "HEALTH", 0xffa8bd99u);
    const float health_fraction = std::clamp(simulation.health() / scene.player_parameters.maximum_health, 0.0f, 1.0f);
    rectangle(24, height_ - 29, 170, 7, 0xff384233u);
    rectangle(24, height_ - 29, static_cast<int>(170 * health_fraction), 7, 0xff9cba81u);
    rectangle(width_ - 210, height_ - 55, 196, 40, 0xff17211bu);
    text(width_ - 197, height_ - 46, scene.weapon_parameters.name, 0xffa8bd99u);
    text(width_ - 197, height_ - 31, std::to_string(simulation.weapon().magazine) + " / " +
         std::to_string(simulation.weapon().reserve), 0xffe5e7cfu, 2);
    if (simulation.weapon().reload_remaining > 0) { text(center_x - 30, center_y + 25, "RELOADING", 0xffdce1d1u); }
    if (simulation.health() <= 0) {
        rectangle(center_x - 180, center_y - 50, 360, 90, 0xff17211bu);
        text(center_x - 120, center_y - 27, "MISSION FAILED", 0xffdab4a2u, 3);
        text(center_x - 90, center_y + 13, "ENTER TO RESTART", 0xffdce1d1u, 2);
    }
}

} // namespace igi::gameplay
