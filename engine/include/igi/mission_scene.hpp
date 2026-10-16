#pragma once

#include "igi/vector_math.hpp"

#include <array>
#include <cstdint>
#include <filesystem>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

namespace igi::gameplay {

struct SceneTexture final {
    std::uint32_t width{};
    std::uint32_t height{};
    std::vector<std::uint32_t> pixels;
};

struct SceneVertex final {
    Vector3 position;
    float texture_u{};
    float texture_v{};
};

struct SceneTriangle final {
    std::array<SceneVertex, 3> vertices;
    std::uint32_t texture_index{};
};

struct CollisionTriangle final {
    std::array<Vector3, 3> positions;
};

struct SceneMesh final {
    std::vector<SceneTriangle> triangles;
    std::vector<CollisionTriangle> collision;
};

struct SceneActor final {
    Vector3 position;
    float heading{};
    int identifier{};
    int team = 1;
    std::shared_ptr<SceneMesh> mesh;
};

struct PlayerParameters final {
    float root_translation_scale = 1.75f;
    float jump_horizontal_per_tick = 17.5f / 3.6f / 30.0f;
    float jump_vertical_per_tick = 27.0f / 3.6f / 30.0f;
    float airborne_control_per_tick = 0.5f / 3.6f / 30.0f;
    float maximum_health = 3.0f;
};

struct WeaponParameters final {
    std::string name = "MP5 SD3";
    std::uint32_t magazine_capacity = 32;
    float shots_per_minute = 700.0f;
    float damage = 0.15f;
    float muzzle_velocity = 400.0f;
    float reload_seconds = 2.0f;
};

struct RootMotionKey final {
    float time{};
    Vector3 position;
    Vector3 incoming_tangent;
    Vector3 outgoing_tangent;
};

struct RootMotionClip final {
    float duration{};
    std::vector<RootMotionKey> keys;
};

struct MissionScene final {
    std::vector<SceneTexture> textures;
    std::vector<SceneTriangle> static_triangles;
    std::vector<CollisionTriangle> collision_triangles;
    std::vector<SceneActor> actors;
    std::shared_ptr<SceneMesh> weapon_mesh;
    PlayerParameters player_parameters;
    WeaponParameters weapon_parameters;
    std::uint32_t initial_reserve_ammunition = 196;
    std::unordered_map<std::uint32_t, RootMotionClip> root_motion_clips;
    float player_heading{};
    std::size_t loaded_object_count{};
    std::size_t missing_object_count{};
    std::filesystem::path game_directory;
};

[[nodiscard]] MissionScene load_mission(const std::filesystem::path& game_directory,
                                      const std::filesystem::path& cache_directory,
                                      int mission_number = 1);

} // namespace igi::gameplay
