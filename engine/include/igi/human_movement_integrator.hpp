#pragma once

#include "igi/human_motion.hpp"

#include <cstdint>

namespace igi::gameplay {

struct WorldPosition3 final {
    double x{};
    double y{};
    double z{};
};

struct HumanMovementState final {
    WorldPosition3 world_position{};
    Vector3 position_adjustment{};
    Vector3 base_movement{};
    Vector3 animation_movement{};
    Vector3 velocity{};
    Vector3 slide_acceleration{};
    Vector3 slope_normal{};
    Vector3 committed_movement{};
    std::uint32_t movement_flags{};
    bool slope_processing_enabled{};
    bool collision_disabled{};
    bool wall_sweep_enabled{};
    bool ground_query_enabled{};
    bool separation_enabled{};
    double roof_distance{};
    float collision_radius{};
};

class HumanMovementWorld {
  public:
    virtual ~HumanMovementWorld() = default;

    virtual void sweep_walls(HumanMovementState& human, const WorldPosition3& starting_position,
                             WorldPosition3& destination_position, Vector3& movement_delta) = 0;

    virtual void query_ground(HumanMovementState& human, const WorldPosition3& starting_position,
                              WorldPosition3& destination_position, Vector3& movement_delta,
                              float vertical_query_budget) = 0;

    virtual void separate_humans(HumanMovementState& human, const WorldPosition3& starting_position,
                                 WorldPosition3& destination_position, Vector3& movement_delta) = 0;

    virtual void commit_transform(HumanMovementState& human,
                                  const WorldPosition3& destination_position,
                                  float collision_radius) = 0;
};

class HumanMovementIntegrator final {
  public:
    static constexpr std::uint32_t grounded_flag = 0x04;
    static constexpr std::uint32_t roof_contact_flag = 0x10;

    void update(HumanMovementState& human, HumanMovementWorld& world) const;

  private:
    [[nodiscard]] static bool update_slope_slide(HumanMovementState& human) noexcept;
    static void apply_collision_queries(HumanMovementState& human, HumanMovementWorld& world,
                                        const WorldPosition3& starting_position,
                                        WorldPosition3& destination_position,
                                        Vector3& movement_delta, bool is_sliding);
};

} // namespace igi::gameplay
