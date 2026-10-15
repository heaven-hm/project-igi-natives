#pragma once

namespace igi::gameplay {

struct Vector3 {
    float x{};
    float y{};
    float z{};
};

// The body's three orientation rows, used by the retail player movement code.
struct Basis3x3 {
    float m11{}, m12{}, m13{};
    float m21{}, m22{}, m23{};
    float m31{}, m32{}, m33{};
};

class HumanMotion final {
public:
    static constexpr float gravity_per_tick = 84.74169f;
    static constexpr float ladder_gravity_per_tick = 44.600887f;
    static constexpr float ladder_drag_per_tick = 0.99f;

    // Four retail movement slots contribute signed air-control speed on the
    // body's two horizontal axes, then on its vertical axis, after gravity.
    [[nodiscard]] static Vector3 integrate_airborne(
        Vector3 velocity, bool axis_negative, bool axis_positive,
        bool side_positive, bool side_negative,
        const Basis3x3& body_basis, float air_control_per_tick) noexcept;

    // Ladder-slide gravity is applied before the retail 0.99 damping.
    [[nodiscard]] static Vector3 integrate_ladder_slide(Vector3 velocity) noexcept;

    // Animation delta is scaled before it is transformed by the body's basis.
    [[nodiscard]] static Vector3 apply_root_motion(
        Vector3 animation_delta, const Basis3x3& body_basis,
        float translation_scale, bool suppress_scale = false) noexcept;
};

} // namespace igi::gameplay
