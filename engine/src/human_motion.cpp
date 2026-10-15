#include "igi/human_motion.hpp"

namespace igi::gameplay {

Vector3 HumanMotion::integrate_airborne(
    Vector3 velocity, bool axis_negative, bool axis_positive,
    bool side_positive, bool side_negative,
    const Basis3x3& basis, float air_control_per_tick) noexcept {
    float first_axis = axis_negative ? -air_control_per_tick : 0.0f;
    if (axis_positive) first_axis = air_control_per_tick + first_axis;
    float second_axis = side_positive ? air_control_per_tick : 0.0f;
    if (side_negative) second_axis -= air_control_per_tick;

    const float next_z = velocity.z - gravity_per_tick;
    velocity.x = first_axis * basis.m11 + second_axis * basis.m12 + velocity.x;
    velocity.y = first_axis * basis.m21 + second_axis * basis.m22 + velocity.y;
    velocity.z = next_z + first_axis * basis.m31 + second_axis * basis.m32;
    return velocity;
}

Vector3 HumanMotion::integrate_ladder_slide(Vector3 velocity) noexcept {
    velocity.x *= ladder_drag_per_tick;
    velocity.y *= ladder_drag_per_tick;
    velocity.z = (velocity.z - ladder_gravity_per_tick) * ladder_drag_per_tick;
    return velocity;
}

Vector3 HumanMotion::apply_root_motion(
    Vector3 delta, const Basis3x3& basis, float translation_scale,
    bool suppress_scale) noexcept {
    if (!suppress_scale) {
        delta.x *= translation_scale;
        delta.y *= translation_scale;
        delta.z *= translation_scale;
    }
    return {
        basis.m11 * delta.x + basis.m12 * delta.y + basis.m13 * delta.z,
        basis.m21 * delta.x + basis.m22 * delta.y + basis.m23 * delta.z,
        basis.m31 * delta.x + basis.m32 * delta.y + basis.m33 * delta.z,
    };
}

} // namespace igi::gameplay
