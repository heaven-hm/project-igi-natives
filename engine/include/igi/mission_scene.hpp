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

enum class TerrainDetail { low, high };

struct SceneTexture final {
    std::uint32_t width{};
    std::uint32_t height{};
    std::vector<std::uint32_t> pixels;
};

struct SceneVertex final {
    Vector3 position;
    float texture_u{};
    float texture_v{};
    std::uint32_t bone_index = static_cast<std::uint32_t>(-1);
    Vector3 bone_local_position{};
};

struct SceneTriangle final {
    std::array<SceneVertex, 3> vertices;
    std::uint32_t texture_index{};
    bool firing_only{};
};

struct CollisionTriangle final {
    std::array<Vector3, 3> positions;
    bool non_solid_portal{};
};

struct SceneMesh final {
    std::vector<SceneTriangle> triangles;
    std::vector<CollisionTriangle> collision;
    std::vector<Vector3> bone_rest_positions;
    std::size_t attachment_count{};
    std::size_t maximum_attachment_depth{};
    std::vector<CollisionTriangle> movement_collision;
};

struct SkeletalAnimationSet;

struct SceneActor final {
    Vector3 position;
    float heading{};
    int identifier{};
    int team = 1;
    std::shared_ptr<SceneMesh> mesh;
    int navigation_graph_identifier = -1;
    int patrol_path_identifier = -1;
    std::string weapon_identifier = "WEAPON_ID_AK47";
    std::size_t source_call_index = static_cast<std::size_t>(-1);
    bool gameplay_enabled = true;
    int skeleton_identifier = 1;
    int stand_animation = 2;
    std::shared_ptr<SkeletalAnimationSet> animations{};
    float damage_scale = 1.0f;
};

struct NavigationNode final {
    int identifier{};
    Vector3 position;
    std::vector<std::size_t> neighbors;
};

struct NavigationGraph final {
    int identifier{};
    std::vector<NavigationNode> nodes;
};

struct PatrolCommand final { int kind{}; int operand{}; };
struct PatrolPath final { int identifier{}; std::vector<PatrolCommand> commands; };

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
    float maximum_distance = 400.0f;
    bool automatic = true;
    bool melee{};
};

struct SceneWeapon final {
    std::string identifier;
    WeaponParameters parameters;
    std::shared_ptr<SceneMesh> mesh;
    std::uint32_t initial_reserve{};
    bool initially_owned{};
    std::string ammunition_identifier;
    int stand_animation = 18;
    int move_animation = 19;
    int fire_animation = 20;
    int reload_animation = 21;
};

struct WeaponPickup final {
    Vector3 position;
    std::string weapon_identifier;
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
    std::vector<NavigationGraph> navigation_graphs;
    std::vector<PatrolPath> patrol_paths;
    std::vector<SceneWeapon> weapons;
    std::vector<WeaponPickup> weapon_pickups;
    int mission_number = 1;
    std::vector<std::vector<std::string>> weapon_categories;
    std::size_t attached_model_count{};
    std::size_t maximum_attachment_depth{};
    std::shared_ptr<SceneMesh> first_person_mesh{};
    std::shared_ptr<SkeletalAnimationSet> first_person_animations{};
    std::size_t terrain_triangle_count{};
    std::vector<CollisionTriangle> movement_collision_triangles;
};

[[nodiscard]] MissionScene load_mission(const std::filesystem::path& game_directory,
                                      const std::filesystem::path& cache_directory,
                                      int mission_number = 1, TerrainDetail terrain_detail = TerrainDetail::high);

} // namespace igi::gameplay
