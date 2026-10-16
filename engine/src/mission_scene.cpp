#include "igi/mission_scene.hpp"

#include "igi/asset_io.hpp"
#include "igi/diagnostics.hpp"
#include "igi/mission_assets.hpp"
#include "igi/mission_gameplay.hpp"
#include "igi/qvm_initializer.hpp"
#include "igi/terrain_surface.hpp"
#include "iff_parser.h"

#include <algorithm>
#include <cmath>
#include <functional>
#include <stdexcept>

namespace igi::gameplay {
namespace {

constexpr double units_per_metre = 4096.0;
constexpr std::array<std::array<int, 8>, 8> child_slots{{
    {{0, 1, 2, 3, 4, 5, 6, 7}}, {{2, 0, 3, 1, 6, 4, 7, 5}},
    {{3, 2, 1, 0, 7, 6, 5, 4}}, {{1, 3, 0, 2, 5, 7, 4, 6}},
    {{1, 0, 3, 2, 5, 4, 7, 6}}, {{3, 1, 2, 0, 7, 5, 6, 4}},
    {{2, 3, 0, 1, 6, 7, 4, 5}}, {{0, 2, 1, 3, 4, 6, 5, 7}}
}};

Vector3 rotate(Vector3 position, float heading) {
    const float cosine = std::cos(heading);
    const float sine = std::sin(heading);
    return {cosine * position.x - sine * position.y,
            sine * position.x + cosine * position.y, position.z};
}

std::pair<int, int> orient(int orientation, int horizontal, int vertical) {
    const int mirrored = (orientation & 4) != 0 ? -horizontal : horizontal;
    if ((orientation & 1) != 0) {
        return (orientation & 2) != 0 ? std::pair{vertical, -mirrored} : std::pair{-vertical, mirrored};
    }
    return (orientation & 2) != 0 ? std::pair{-mirrored, -vertical} : std::pair{mirrored, vertical};
}

void append_terrain(MissionScene& scene, const std::filesystem::path& mission_directory,
                    const std::array<double, 3>& origin, const std::vector<std::uint32_t>& textures,
                    const assets::TerrainSurface& surface, TerrainDetail detail) {
    const auto tree_bytes = assets::read_file(assets::resolve_path(mission_directory, "terrain/terrain.ctr"));
    const auto command_bytes = assets::read_file(assets::resolve_path(mission_directory, "terrain/terrain.cmd"));
    const assets::BinaryView tree(tree_bytes);
    const assets::BinaryView commands(command_bytes);
    if (tree.size() < 64 || tree.size() % 32 != 0 || textures.empty()) {
        throw std::runtime_error("Invalid terrain record table or texture atlas");
    }
    std::size_t visits = 0;
    std::function<void(std::size_t, int, int, std::array<double, 3>)> descend;
    descend = [&](std::size_t node_index, int depth, int orientation, std::array<double, 3> centre) {
        if (++visits > 2000000 || depth > 20 || node_index >= tree.size() / 32) {
            throw std::runtime_error("Terrain tree exceeds bounds or traversal budget");
        }
        const double extent = std::ldexp(1073741824.0, -depth);
        const double distance = std::max(std::abs(centre[0] - origin[0]), std::abs(centre[1] - origin[1]));
        if (distance - extent > 1400.0 * units_per_metre ||
            std::abs(centre[2] - origin[2]) - extent > 800.0 * units_per_metre) {
            return;
        }
        const std::size_t node_offset = node_index * 32;
        const auto child_mask = tree.byte(node_offset + 24);
        const int wanted_depth = detail == TerrainDetail::high ?
            (distance < 80.0 * units_per_metre ? 19 : distance < 180.0 * units_per_metre ? 18 :
             distance < 500.0 * units_per_metre ? 16 : distance < 900.0 * units_per_metre ? 14 : 12) :
            (distance < 180.0 * units_per_metre ? 16 : distance < 500.0 * units_per_metre ? 14 : 11);
        if (child_mask != 0 && depth < wanted_depth) {
            for (int octant = 0; octant < 8; ++octant) {
                const int child_slot = child_slots[orientation][octant];
                if ((child_mask & (1 << child_slot)) == 0) {
                    continue;
                }
                const int child_orientation = tree.byte(node_offset + 16 + child_slot);
                if (child_orientation > 7) {
                    throw std::runtime_error("Terrain child orientation is invalid");
                }
                const int combined_orientation = (orientation & 4) == 0 ?
                    (child_orientation & 4) | ((orientation + child_orientation) & 3) :
                    ((child_orientation & 4) ^ 4) | ((orientation - child_orientation) & 3);
                auto child_centre = centre;
                for (int axis_index = 0; axis_index < 3; ++axis_index) {
                    child_centre[axis_index] += (octant & (1 << axis_index)) != 0 ? extent * 0.5 : -extent * 0.5;
                }
                descend(tree.unsigned_short(node_offset + child_slot * 2), depth + 1,
                        combined_orientation, child_centre);
            }
            return;
        }
        if (depth < 7) {
            return;
        }
        const auto command_offset = tree.unsigned_integer(node_offset + 28);
        const std::size_t triangle_count = commands.unsigned_short(command_offset);
        const std::size_t triangle_bytes = commands.unsigned_short(command_offset + 2);
        const std::size_t vertex_count = commands.unsigned_short(command_offset + 4) +
                                         commands.unsigned_short(command_offset + 6);
        if (triangle_bytes != triangle_count * 4 || vertex_count > 256) {
            throw std::runtime_error("Terrain command header is invalid");
        }
        commands.require_range(command_offset + 8, triangle_bytes + vertex_count * 4);
        std::vector<Vector3> positions;
        std::vector<int> texture_axes;
        const double vertex_scale = extent / 24.0;
        for (std::size_t vertex_index = 0; vertex_index < vertex_count; ++vertex_index) {
            const auto packed = commands.unsigned_integer(command_offset + 8 + triangle_bytes + vertex_index * 4);
            const auto [horizontal, vertical] = orient(orientation,
                static_cast<int>((packed >> 26) & 63) - 24,
                static_cast<int>((packed >> 20) & 63) - 24);
            const double world_x = centre[0] + horizontal * vertex_scale;
            const double world_y = centre[1] + vertical * vertex_scale;
            const double displacement = depth >= 14 ? surface.height(world_x, world_y) : 0;
            positions.push_back({static_cast<float>((world_x - origin[0]) / units_per_metre),
                static_cast<float>((world_y - origin[1]) / units_per_metre),
                static_cast<float>((centre[2] + (static_cast<int>((packed >> 14) & 63) - 24) * vertex_scale + displacement - origin[2]) / units_per_metre)});
            texture_axes.push_back(static_cast<int>((packed >> 6) & 3));
        }
        for (std::size_t triangle_index = 0; triangle_index < triangle_count; ++triangle_index) {
            const auto packed = commands.unsigned_integer(command_offset + 8 + triangle_index * 4);
            SceneTriangle triangle;
            for (int corner_index = 0; corner_index < 3; ++corner_index) {
                const auto vertex_index = (packed >> (corner_index * 8)) & 255;
                if (vertex_index >= positions.size()) {
                    throw std::runtime_error("Terrain triangle index is invalid");
                }
                const auto position = positions[vertex_index];
                triangle.vertices[corner_index] = {position, position.x / 8.0f, position.y / 8.0f};
            }
            const auto centroid = (triangle.vertices[0].position + triangle.vertices[1].position +
                                    triangle.vertices[2].position) * (1.0f / 3.0f);
            const int material = surface.material(centroid.x * units_per_metre + origin[0],
                                                   centroid.y * units_per_metre + origin[1]);
            const auto projection = surface.projection(material, depth, centre);
            if (projection.tile >= textures.size()) { throw std::runtime_error("Terrain material selects a missing atlas tile"); }
            triangle.texture_index = textures[projection.tile];
            for (int corner_index = 0; corner_index < 3; ++corner_index) {
                auto& vertex = triangle.vertices[corner_index];
                const int axis = texture_axes[(packed >> (corner_index * 8)) & 255];
                const double offset_x = vertex.position.x * units_per_metre + origin[0] - centre[0];
                const double offset_y = vertex.position.y * units_per_metre + origin[1] - centre[1];
                const double offset_z = vertex.position.z * units_per_metre + origin[2] - centre[2];
                const bool use_y = (((orientation & 1) ^ axis) & 1) != 0;
                vertex.texture_u = static_cast<float>(axis == 0 || !use_y ?
                    projection.origin_u + offset_x * projection.rate : projection.origin_v + offset_y * projection.rate);
                vertex.texture_v = static_cast<float>(axis == 0 ? projection.origin_v + offset_y * projection.rate :
                    projection.origin_w + offset_z * projection.rate);
            }
            scene.static_triangles.push_back(triangle);
            scene.collision_triangles.push_back({{triangle.vertices[0].position,
                                                  triangle.vertices[1].position,
                                                  triangle.vertices[2].position}});
        }
    };
    descend(1, 0, 0, {});
    diagnostics::log(diagnostics::Severity::information, "terrain",
                     "Loaded " + std::to_string(scene.static_triangles.size()) + " original terrain triangles");
}

void append_model(MissionScene& scene, const SceneMesh& mesh, Vector3 position, float heading) {
    for (auto triangle : mesh.triangles) {
        for (auto& vertex : triangle.vertices) {
            vertex.position = rotate(vertex.position, heading) + position;
        }
        scene.static_triangles.push_back(triangle);
    }
    if (mesh.collision.empty()) {
        for (const auto& triangle : mesh.triangles) {
            CollisionTriangle collision;
            for (std::size_t corner_index = 0; corner_index < 3; ++corner_index) {
                collision.positions[corner_index] = rotate(triangle.vertices[corner_index].position, heading) + position;
            }
            scene.collision_triangles.push_back(collision);
        }
    } else {
        for (auto triangle : mesh.collision) {
            for (auto& vertex : triangle.positions) {
                vertex = rotate(vertex, heading) + position;
            }
            scene.collision_triangles.push_back(triangle);
        }
    }
}

} // namespace

MissionScene load_mission(const std::filesystem::path& game_directory,
                          const std::filesystem::path& cache_directory, int mission_number, TerrainDetail terrain_detail) {
    if (mission_number < 1 || mission_number > 14) {
        throw std::runtime_error("Mission number must be between 1 and 14");
    }
    MissionScene scene;
    scene.mission_number = mission_number;
    scene.game_directory = game_directory;
    const auto mission_directory = assets::resolve_path(game_directory,
        "missions/location0/level" + std::to_string(mission_number));
    const auto object_bytes = assets::read_file(assets::resolve_path(mission_directory, "objects.qvm"));
    const assets::QvmInitializer initializer{assets::BinaryView(object_bytes)};
    std::array<double, 3> origin{};
    bool found_player = false;
    for (const auto& call : initializer.calls()) {
        if (call.function == "Task_New" && call.arguments.size() >= 9 && call.arguments[1].text == "HumanPlayer") {
            origin = {call.arguments[3].number, call.arguments[4].number, call.arguments[5].number};
            scene.player_heading = static_cast<float>(call.arguments[6].number);
            found_player = true;
            break;
        }
    }
    if (!found_player) {
        throw std::runtime_error("Original mission script has no player spawn");
    }
    assets::MissionAssets library(game_directory, mission_directory, cache_directory);
    const auto tiles = library.terrain_textures(assets::resolve_path(mission_directory, "terrain/terrain.tex"));
    const assets::TerrainSurface terrain_surface(mission_directory, initializer.calls());
    append_terrain(scene, mission_directory, origin, tiles, terrain_surface, terrain_detail);
    const auto enabled_tasks = assets::gameplay_task_mask(initializer.calls());
    for (const auto& call : initializer.calls()) {
        if (call.function == "Task_New" && call.arguments.size() >= 5 && call.arguments[1].text == "AddAmmo") {
            const double ammunition = call.arguments[4].number;
            if (!std::isfinite(ammunition) || ammunition < 0 || ammunition > 10000) {
                throw std::runtime_error("Original player reserve ammunition is invalid");
            }
            scene.initial_reserve_ammunition = static_cast<std::uint32_t>(ammunition);
        }
        if (call.function != "Task_New" || call.arguments.size() < 9) {
            continue;
        }
        const auto& arguments = call.arguments;
        const auto& task_type = arguments[1].text;
        const bool soldier = task_type == "HumanSoldier";
        const bool rigid = task_type == "EditRigidObj" || task_type == "Building" || task_type == "ExplodeObject";
        const bool enabled = enabled_tasks[static_cast<std::size_t>(&call - initializer.calls().data())];
        if (!enabled && !soldier) { continue; }
        if (!soldier && !rigid) {
            continue;
        }
        const std::size_t model_argument = soldier ? 7 : 9;
        if (arguments.size() <= model_argument || arguments[model_argument].text.empty()) {
            continue;
        }
        const Vector3 position{
            static_cast<float>((arguments[3].number - origin[0]) / units_per_metre),
            static_cast<float>((arguments[4].number - origin[1]) / units_per_metre),
            static_cast<float>((arguments[5].number - origin[2]) / units_per_metre)};
        if (!finite(position) || length(position) > 1600.0f) {
            continue;
        }
        const float heading = static_cast<float>(arguments[soldier ? 6 : 8].number);
        try {
            const auto mesh = library.model(arguments[model_argument].text);
            if (soldier) {
                const int team = arguments.size() > 8 ? static_cast<int>(arguments[8].number) : 1;
                scene.actors.push_back({position, heading, static_cast<int>(arguments[0].number), team, mesh});
                scene.actors.back().source_call_index = static_cast<std::size_t>(&call - initializer.calls().data());
            } else {
                append_model(scene, *mesh, position, heading);
            }
            ++scene.loaded_object_count;
        } catch (const std::exception& exception) {
            ++scene.missing_object_count;
            diagnostics::log(diagnostics::Severity::warning, "scene", exception.what());
        }
    }
    const auto parameter_bytes = assets::read_file(assets::resolve_path(game_directory, "humanplayer/humanplayer.qvm"));
    const assets::QvmInitializer parameters{assets::BinaryView(parameter_bytes)};
    for (const auto& call : parameters.calls()) {
        if (call.function == "DefineHumanPlayerWeaponCategory") {
            for (std::size_t argument_index = 0; argument_index < call.arguments.size();) {
                const double count = call.arguments[argument_index++].number;
                if (!std::isfinite(count) || count < 0 || count > 32 || count > call.arguments.size() - argument_index) {
                    throw std::runtime_error("Original weapon category table is invalid");
                }
                std::vector<std::string> category;
                for (std::size_t member_index = 0; member_index < static_cast<std::size_t>(count); ++member_index) {
                    category.push_back(call.arguments[argument_index++].text);
                }
                scene.weapon_categories.push_back(std::move(category));
            }
        }
        if (call.function == "DefineHumanPlayerGeneral" && call.arguments.size() == 43) {
            scene.player_parameters = {static_cast<float>(call.arguments[0].number),
                static_cast<float>(call.arguments[1].number / 3.6 / 30.0),
                static_cast<float>(call.arguments[2].number / 3.6 / 30.0),
                static_cast<float>(call.arguments[3].number / 3.6 / 30.0),
                static_cast<float>(call.arguments[7].number)};
        }
    }
    const auto weapon_bytes = assets::read_file(assets::resolve_path(game_directory, "weapons/mp5sd/weapon.qvm"));
    const assets::QvmInitializer weapon_parameters{assets::BinaryView(weapon_bytes)};
    for (const auto& call : weapon_parameters.calls()) {
        if (call.function == "DefineWeaponType" && call.arguments.size() >= 17) {
            const double capacity = call.arguments[16].number;
            if (!std::isfinite(capacity) || capacity < 1 || capacity > 1000) {
                throw std::runtime_error("Original weapon magazine capacity is invalid");
            }
            scene.weapon_parameters.name = call.arguments[2].text;
            scene.weapon_parameters.magazine_capacity = static_cast<std::uint32_t>(call.arguments[16].number);
            scene.weapon_parameters.shots_per_minute = static_cast<float>(call.arguments[15].number);
            scene.weapon_parameters.damage = static_cast<float>(call.arguments[10].number);
            scene.weapon_parameters.muzzle_velocity = static_cast<float>(call.arguments[13].number);
            scene.weapon_parameters.reload_seconds = static_cast<float>(call.arguments[12].number);
        }
    }
    const auto animations = IFF_Parse(assets::resolve_path(game_directory, "common/anims/000.iff").string());
    if (!animations.valid) {
        throw std::runtime_error("Cannot read original player animation tracks");
    }
    for (const auto& original_clip : animations.clips) {
        if (!std::isfinite(original_clip.duration) || original_clip.duration < 0) {
            throw std::runtime_error("Original animation duration is invalid");
        }
        RootMotionClip clip{original_clip.duration, {}};
        for (const auto& key : original_clip.root_translations) {
            if (!std::isfinite(key.time) || !finite(Vector3{key.pos[0], key.pos[1], key.pos[2]})) {
                throw std::runtime_error("Original animation translation key is invalid");
            }
            clip.keys.push_back({key.time, {key.pos[0], key.pos[1], key.pos[2]},
                {key.tangent_in[0], key.tangent_in[1], key.tangent_in[2]},
                {key.tangent_out[0], key.tangent_out[1], key.tangent_out[2]}});
        }
        scene.root_motion_clips[original_clip.animation_id] = std::move(clip);
    }
    scene.weapon_mesh = library.model("103_01_1");
    assets::load_mission_gameplay(scene, library, mission_directory, origin, initializer.calls());
    scene.textures = library.take_textures();
    diagnostics::log(diagnostics::Severity::information, "scene",
        "Ready: " + std::to_string(scene.loaded_object_count) + " objects, " +
        std::to_string(scene.actors.size()) + " soldiers, " + std::to_string(scene.textures.size()) +
        " textures, " + std::to_string(scene.root_motion_clips.size()) + " root-motion clips");
    return scene;
}

} // namespace igi::gameplay
