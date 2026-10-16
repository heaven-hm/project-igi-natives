#include "igi/human_movement_integrator.hpp"

#include <cmath>

namespace igi::gameplay {
namespace {

constexpr float slope_slide_threshold_degrees = 45.0f;
constexpr float medium_slope_slide_threshold_degrees = 50.0f;
constexpr float steep_slope_slide_threshold_degrees = 60.0f;
constexpr float extreme_slope_slide_threshold_degrees = 80.0f;
constexpr float medium_slope_acceleration = 18.962963f;
constexpr float steep_slope_acceleration = 56.888889f;
constexpr float very_steep_slope_acceleration = 948.0f;
constexpr float extreme_slope_acceleration = 1137.0f;
constexpr float velocity_damping = 0.9f;
constexpr float degrees_per_radian = 57.295776f;
constexpr float grounded_query_budget = 2048.0f;
constexpr float sliding_query_budget = 8192.0f;

[[nodiscard]] float clamp_unit_interval(float value) noexcept {
    if (value < -1.0f) {
        return -1.0f;
    }
    if (value > 1.0f) {
        return 1.0f;
    }
    return value;
}

[[nodiscard]] float calculate_slope_angle_degrees(const Vector3& slope_normal) noexcept {
    const long double arcsine =
        std::asin(static_cast<long double>(clamp_unit_interval(slope_normal.z)));
    return static_cast<float>(90.0L - arcsine * static_cast<long double>(degrees_per_radian));
}

[[nodiscard]] Vector3 normalized_slope_normal(Vector3 slope_normal) noexcept {
    if (slope_normal.x == 0.0f && slope_normal.y == 0.0f && slope_normal.z == 0.0f) {
        return slope_normal;
    }

    const long double length_squared = static_cast<long double>(slope_normal.x) * slope_normal.x +
                                       static_cast<long double>(slope_normal.y) * slope_normal.y +
                                       static_cast<long double>(slope_normal.z) * slope_normal.z;
    const float inverse_length = static_cast<float>(1.0L / std::sqrt(length_squared));
    slope_normal.x *= inverse_length;
    slope_normal.y *= inverse_length;
    slope_normal.z *= inverse_length;
    return slope_normal;
}

void damp_vector(Vector3& vector) noexcept {
    vector.x *= velocity_damping;
    vector.y *= velocity_damping;
    vector.z *= velocity_damping;
}

[[nodiscard]] Vector3 add_vectors(const Vector3& first_vector, const Vector3& second_vector,
                                  const Vector3& third_vector,
                                  const Vector3& fourth_vector) noexcept {
    return {
        first_vector.x + second_vector.x + third_vector.x + fourth_vector.x,
        first_vector.y + second_vector.y + third_vector.y + fourth_vector.y,
        first_vector.z + second_vector.z + third_vector.z + fourth_vector.z,
    };
}

} // namespace

bool HumanMovementIntegrator::update_slope_slide(HumanMovementState& human) noexcept {
    const bool is_grounded = (human.movement_flags & grounded_flag) != 0;
    if (!human.slope_processing_enabled || !is_grounded) {
        human.slide_acceleration = {};
        return false;
    }

    const Vector3 slope_normal = normalized_slope_normal(human.slope_normal);
    const float slope_angle_degrees = calculate_slope_angle_degrees(slope_normal);

    if (slope_angle_degrees > extreme_slope_slide_threshold_degrees) {
        human.slide_acceleration = {
            slope_normal.x * extreme_slope_acceleration,
            slope_normal.y * extreme_slope_acceleration,
            0.0f,
        };
        return true;
    }

    if (slope_angle_degrees > steep_slope_slide_threshold_degrees) {
        human.slide_acceleration = {
            slope_normal.x * very_steep_slope_acceleration,
            slope_normal.y * very_steep_slope_acceleration,
            0.0f,
        };
        return true;
    }

    if (slope_angle_degrees > medium_slope_slide_threshold_degrees) {
        human.slide_acceleration.x += slope_normal.x * steep_slope_acceleration;
        human.slide_acceleration.y += slope_normal.y * steep_slope_acceleration;
        return true;
    }

    if (slope_angle_degrees > slope_slide_threshold_degrees) {
        human.slide_acceleration.x += slope_normal.x * medium_slope_acceleration;
        human.slide_acceleration.y += slope_normal.y * medium_slope_acceleration;
        return true;
    }

    human.slide_acceleration = {};
    return false;
}

void HumanMovementIntegrator::apply_collision_queries(HumanMovementState& human,
                                                      HumanMovementWorld& world,
                                                      const WorldPosition3& starting_position,
                                                      WorldPosition3& destination_position,
                                                      Vector3& movement_delta, bool is_sliding) {
    if (human.collision_disabled) {
        return;
    }

    if (human.wall_sweep_enabled) {
        world.sweep_walls(human, starting_position, destination_position, movement_delta);
    }

    if (human.ground_query_enabled) {
        float vertical_query_budget = 0.0f;
        if ((human.movement_flags & grounded_flag) != 0) {
            vertical_query_budget = grounded_query_budget;
        }
        if (is_sliding) {
            vertical_query_budget = sliding_query_budget;
        }

        world.query_ground(human, starting_position, destination_position, movement_delta,
                           vertical_query_budget);
    }

    if (human.separation_enabled) {
        world.separate_humans(human, starting_position, destination_position, movement_delta);
    }
}

void HumanMovementIntegrator::update(HumanMovementState& human, HumanMovementWorld& world) const {
    const bool is_sliding = update_slope_slide(human);

    damp_vector(human.slide_acceleration);
    damp_vector(human.velocity);
    human.movement_flags &= ~roof_contact_flag;

    Vector3 movement_delta = add_vectors(human.base_movement, human.animation_movement,
                                         human.velocity, human.slide_acceleration);

    WorldPosition3 starting_position{
        human.world_position.x + static_cast<double>(human.position_adjustment.x),
        human.world_position.y + static_cast<double>(human.position_adjustment.y),
        human.world_position.z + static_cast<double>(human.position_adjustment.z),
    };
    WorldPosition3 destination_position{
        starting_position.x + static_cast<double>(movement_delta.x),
        starting_position.y + static_cast<double>(movement_delta.y),
        starting_position.z + static_cast<double>(movement_delta.z),
    };

    apply_collision_queries(human, world, starting_position, destination_position, movement_delta,
                            is_sliding);

    world.commit_transform(human, destination_position, human.collision_radius);
    human.committed_movement = {
        movement_delta.x + human.position_adjustment.x,
        movement_delta.y + human.position_adjustment.y,
        movement_delta.z + human.position_adjustment.z,
    };
}

} // namespace igi::gameplay
