#pragma once

#include "igi/collision_world.hpp"
#include "igi/human_movement_integrator.hpp"

namespace igi::gameplay {

struct PlayerInput final {
    float forward{};
    float sideways{};
    float heading_change{};
    float pitch_change{};
    bool walking{};
    bool crouching{};
    bool jumping{};
    bool firing{};
    bool reloading{};
    bool aiming{};
    int weapon_slot = -1;
    int weapon_cycle{};
    bool interacting{};
};

enum class ActorBehavior { guarding, investigating, attacking, dead };

struct ActorState final {
    Vector3 position;
    Vector3 last_seen_position;
    float heading{};
    float health = 3.0f;
    float cooldown{};
    float awareness_time{};
    ActorBehavior behavior = ActorBehavior::guarding;
    float reaction_time{};
    float patrol_delay{};
    std::size_t patrol_command_index{};
    std::vector<Vector3> route;
    std::size_t route_index{};
    Vector3 route_destination;
    float route_retry_time{};
    bool active = true;
};

struct WeaponState final {
    std::uint32_t magazine{};
    std::uint32_t reserve = 196;
    float cooldown{};
    float reload_remaining{};
    float muzzle_flash_remaining{};
    float hit_marker_remaining{};
    std::uint64_t shots_fired{};
    std::uint64_t hits{};
    std::uint64_t kills{};
};

struct Projectile final {
    Vector3 position;
    Vector3 direction;
    float remaining_distance = 400.0f;
    float speed{};
    float damage{};
    int owner = -1;
};

struct InventoryWeapon final {
    std::size_t definition_index{};
    WeaponState state;
};

class GameSimulation final : private HumanMovementWorld {
  public:
    explicit GameSimulation(const MissionScene& scene);
    void restart();
    void tick(const PlayerInput& input);
    [[nodiscard]] Vector3 player_position() const noexcept;
    [[nodiscard]] Vector3 camera_position() const noexcept;
    [[nodiscard]] Vector3 aim_direction() const noexcept;
    [[nodiscard]] float heading() const noexcept { return heading_; }
    [[nodiscard]] float pitch() const noexcept { return pitch_; }
    [[nodiscard]] float health() const noexcept { return health_; }
    [[nodiscard]] int locomotion_state() const noexcept { return locomotion_state_; }
    [[nodiscard]] bool grounded() const noexcept;
    [[nodiscard]] bool aiming() const noexcept { return aiming_; }
    [[nodiscard]] bool crouching() const noexcept { return crouching_; }
    [[nodiscard]] const WeaponState& weapon() const noexcept { return weapon_; }
    [[nodiscard]] const WeaponParameters& weapon_parameters() const noexcept;
    [[nodiscard]] std::shared_ptr<SceneMesh> weapon_mesh() const noexcept;
    [[nodiscard]] std::size_t inventory_size() const noexcept { return inventory_.size(); }
    [[nodiscard]] std::size_t selected_weapon_slot() const noexcept { return selected_weapon_slot_; }
    [[nodiscard]] float damage_flash_remaining() const noexcept { return damage_flash_remaining_; }
    [[nodiscard]] const std::vector<ActorState>& actors() const noexcept { return actors_; }
    [[nodiscard]] const CollisionWorld& world() const noexcept { return world_; }
    [[nodiscard]] std::uint64_t tick_count() const noexcept { return tick_count_; }

  private:
    void advance_player(const PlayerInput& input);
    void advance_weapon(const PlayerInput& input);
    void advance_actors();
    void advance_projectiles();
    void select_weapon(std::size_t slot);
    void collect_weapons();
    void advance_patrol(std::size_t actor_index);
    void move_actor(std::size_t actor_index, Vector3 destination, float speed);
    [[nodiscard]] Vector3 animation_delta(int state);
    void sweep_walls(HumanMovementState&, const WorldPosition3&, WorldPosition3&, Vector3&) override;
    void query_ground(HumanMovementState&, const WorldPosition3&, WorldPosition3&, Vector3&, float) override;
    void separate_humans(HumanMovementState&, const WorldPosition3&, WorldPosition3&, Vector3&) override;
    void commit_transform(HumanMovementState&, const WorldPosition3&, float) override;
    const MissionScene& scene_;
    CollisionWorld world_;
    HumanMovementState player_;
    HumanMovementIntegrator integrator_;
    WeaponState weapon_;
    std::vector<ActorState> actors_;
    std::vector<Projectile> projectiles_;
    std::vector<InventoryWeapon> inventory_;
    std::vector<bool> pickups_collected_;
    std::vector<bool> soldier_weapons_collected_;
    std::size_t selected_weapon_slot_{};
    bool fire_was_pressed_{};
    float damage_flash_remaining_{};
    float heading_{};
    float pitch_{};
    float health_{};
    float animation_time_{};
    int locomotion_state_{};
    int previous_animation_state_ = -1;
    bool jump_was_pressed_{};
    bool crouching_{};
    bool aiming_{};
    std::uint64_t tick_count_{};
};

} // namespace igi::gameplay
