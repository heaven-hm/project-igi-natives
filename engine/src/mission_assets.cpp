#include "igi/mission_assets.hpp"

#include "igi/asset_io.hpp"
#include "igi/diagnostics.hpp"
#include "mef_native.h"
#include "mtp_parser.h"
#include "res_parser.h"
#include "tex_parser.h"

#include <fstream>
#include <stdexcept>

namespace igi::assets {

gameplay::SceneTexture decode_original_texture(const TEXImage& image) {
    const std::size_t pixel_count = static_cast<std::size_t>(image.width) * image.height;
    const std::size_t bytes_per_pixel = image.mode == 2 ? 2 : 4;
    if (pixel_count == 0 || pixel_count > 16777216 || image.pixels.size() < pixel_count * bytes_per_pixel) {
        throw std::runtime_error("Invalid decoded texture dimensions or pixel data");
    }
    gameplay::SceneTexture texture{image.width, image.height, {}};
    texture.pixels.reserve(pixel_count);
    const BinaryView pixels(image.pixels);
    for (std::size_t pixel_index = 0; pixel_index < pixel_count; ++pixel_index) {
        if (image.mode == 2) {
            const auto packed = pixels.unsigned_short(pixel_index * 2);
            const auto red = ((packed >> 10) & 31) * 255 / 31;
            const auto green = ((packed >> 5) & 31) * 255 / 31;
            const auto blue = (packed & 31) * 255 / 31;
            const std::uint32_t alpha = (packed & 0x8000) != 0 ? 0xff000000u : 0;
            texture.pixels.push_back(alpha | (red << 16) | (green << 8) | blue);
        } else if (image.mode == 3 || image.mode == 67) {
            texture.pixels.push_back(pixels.unsigned_integer(pixel_index * 4));
        } else {
            throw std::runtime_error("Unsupported decoded texture mode");
        }
    }
    return texture;
}

MissionAssets::MissionAssets(const std::filesystem::path& game_directory,
                             const std::filesystem::path& mission_directory,
                             const std::filesystem::path& cache_directory) {
    textures_.push_back({2, 2, {0xffa5a59bu, 0xff919188u, 0xff919188u, 0xffa5a59bu}});
    const auto common_directory = resolve_path(game_directory, "missions/location0/common");
    for (const auto& base_directory : {resolve_path(game_directory, "common"), common_directory, mission_directory}) {
        for (const auto& entry : std::filesystem::directory_iterator(base_directory)) {
            if (entry.is_regular_file() && normalize_name(entry.path().extension().string()) == ".mtp") {
                load_mapping(entry.path());
            }
            if (!entry.is_directory()) {
                continue;
            }
            const auto folder_name = normalize_name(entry.path().filename().string());
            if (folder_name != "models" && folder_name != "textures") {
                continue;
            }
            for (const auto& archive : std::filesystem::directory_iterator(entry.path())) {
                if (normalize_name(archive.path().extension().string()) == ".res") {
                    load_archive(archive.path(), cache_directory / base_directory.filename() / folder_name);
                }
            }
        }
    }
    diagnostics::log(diagnostics::Severity::information, "assets",
                     "Indexed " + std::to_string(files_.size()) + " original resources and " +
                     std::to_string(material_names_.size()) + " model material mappings");
}

void MissionAssets::load_archive(const std::filesystem::path& path,
                                 const std::filesystem::path& cache_directory) {
    if (std::filesystem::file_size(path) > 512 * 1024 * 1024) {
        throw std::runtime_error("Resource archive exceeds size limit: " + path.string());
    }
    std::filesystem::create_directories(cache_directory);
    std::string error;
    const bool valid = RES_ForEachEntry(path.string(), [&](const std::string& name,
                                        const std::uint8_t* bytes, std::size_t length) {
        const auto normalized = normalize_name(name);
        const auto separator = normalized.find_last_of("/:");
        const auto filename = normalized.substr(separator == std::string::npos ? 0 : separator + 1);
        if (filename.empty() || filename == "." || filename == ".." || length > 64 * 1024 * 1024) {
            throw std::runtime_error("Invalid archive resource name or size in " + path.string());
        }
        const auto output_path = cache_directory / filename;
        std::ofstream output(output_path, std::ios::binary);
        if (!output.write(reinterpret_cast<const char*>(bytes), static_cast<std::streamsize>(length))) {
            throw std::runtime_error("Cannot cache original resource: " + output_path.string());
        }
        files_[filename] = output_path;
    }, error);
    if (!valid) {
        throw std::runtime_error("Cannot parse resource archive " + path.string() + ": " + error);
    }
}

void MissionAssets::load_mapping(const std::filesystem::path& path) {
    const auto mapping = MTP_Parse(path.string());
    if (!mapping.valid) {
        throw std::runtime_error("Cannot parse material mapping " + path.string() + ": " + mapping.error);
    }
    for (const auto& model_mapping : mapping.mappings) {
        material_names_[normalize_name(model_mapping.modelName)] = model_mapping.textureNames;
    }
}

std::uint32_t MissionAssets::texture(const std::string& name) {
    const auto normalized = normalize_name(name);
    if (const auto found = texture_indices_.find(normalized); found != texture_indices_.end()) {
        return found->second;
    }
    const auto resource = files_.find(normalized + ".tex");
    if (resource == files_.end()) {
        diagnostics::log(diagnostics::Severity::warning, "assets", "Missing original texture: " + name);
        texture_indices_[normalized] = 0;
        return 0;
    }
    const auto parsed = TEX_Parse(resource->second.string());
    if (!parsed.valid || parsed.images.empty()) {
        throw std::runtime_error("Cannot decode " + resource->second.string() + ": " + parsed.error);
    }
    const auto texture_index = static_cast<std::uint32_t>(textures_.size());
    textures_.push_back(decode_original_texture(parsed.images.front()));
    texture_indices_[normalized] = texture_index;
    return texture_index;
}

std::vector<std::uint32_t> MissionAssets::terrain_textures(const std::filesystem::path& path) {
    const auto parsed = TEX_Parse(path.string());
    if (!parsed.valid || parsed.images.empty()) {
        throw std::runtime_error("Cannot decode terrain textures: " + parsed.error);
    }
    std::vector<std::uint32_t> indices;
    for (const auto& image : parsed.images) {
        indices.push_back(static_cast<std::uint32_t>(textures_.size()));
        textures_.push_back(decode_original_texture(image));
    }
    return indices;
}

std::shared_ptr<gameplay::SceneMesh> MissionAssets::model(const std::string& name) {
    const auto normalized = normalize_name(name);
    if (const auto found = meshes_.find(normalized); found != meshes_.end()) {
        return found->second;
    }
    const auto resource = files_.find(normalized + ".mef");
    if (resource == files_.end()) {
        throw std::runtime_error("Original model is missing: " + name);
    }
    const auto geometry = ParseMefFile(resource->second.string());
    auto mesh = std::make_shared<gameplay::SceneMesh>();
    std::vector<std::uint32_t> materials;
    if (const auto mapping = material_names_.find(normalized); mapping != material_names_.end()) {
        for (const auto& texture_name : mapping->second) {
            materials.push_back(texture(texture_name));
        }
    }
    std::vector<std::uint32_t> triangle_materials(geometry.triangles.size());
    for (const auto& block : geometry.renderBlocks) {
        if (block.triangleStart > triangle_materials.size() ||
            block.triangleCount > triangle_materials.size() - block.triangleStart) {
            throw std::runtime_error("Decoded MEF render block exceeds triangle array: " + name);
        }
        const auto material_index = block.materialSlot >= 0 &&
            static_cast<std::size_t>(block.materialSlot) < materials.size() ? materials[block.materialSlot] : 0;
        std::fill_n(triangle_materials.begin() + static_cast<std::ptrdiff_t>(block.triangleStart),
                    block.triangleCount, material_index);
    }
    for (std::size_t triangle_index = 0; triangle_index < geometry.triangles.size(); ++triangle_index) {
        gameplay::SceneTriangle triangle;
        triangle.texture_index = triangle_materials[triangle_index];
        for (std::size_t corner_index = 0; corner_index < 3; ++corner_index) {
            const auto vertex_index = geometry.triangles[triangle_index][corner_index];
            if (vertex_index >= geometry.vertices.size()) {
                throw std::runtime_error("Decoded MEF index exceeds vertex array: " + name);
            }
            const auto& vertex = geometry.vertices[vertex_index];
            const gameplay::Vector3 position{vertex.pos.x * 0.01f, vertex.pos.y * 0.01f, vertex.pos.z * 0.01f};
            if (!gameplay::finite(position) || !std::isfinite(vertex.uv.x) || !std::isfinite(vertex.uv.y)) {
                throw std::runtime_error("Decoded MEF vertex is not finite: " + name);
            }
            triangle.vertices[corner_index] = {position, vertex.uv.x, vertex.uv.y};
        }
        mesh->triangles.push_back(triangle);
    }
    for (const auto& face : geometry.ecfcFaces) {
        const std::array<std::uint16_t, 3> indices{face.a, face.b, face.c};
        gameplay::CollisionTriangle triangle;
        for (std::size_t corner_index = 0; corner_index < 3; ++corner_index) {
            if (indices[corner_index] >= geometry.xtvcVerts.size()) {
                throw std::runtime_error("Decoded MEF collision index is invalid: " + name);
            }
            const auto& vertex = geometry.xtvcVerts[indices[corner_index]];
            triangle.positions[corner_index] = {vertex.px / 4096.0f, vertex.py / 4096.0f, vertex.pz / 4096.0f};
        }
        mesh->collision.push_back(triangle);
    }
    meshes_[normalized] = mesh;
    return mesh;
}

} // namespace igi::assets
