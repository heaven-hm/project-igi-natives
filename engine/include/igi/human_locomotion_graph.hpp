#pragma once

#include <array>
#include <cstddef>
#include <span>

namespace igi::gameplay {

// Retail state IDs and ordered transition targets, extracted from the 49
// HumanPlayer per-tick functions. Target order is priority order in retail.
class HumanLocomotionGraph final {
public:
    static constexpr std::size_t state_count = 49;
    static constexpr int falling = 29;
    static constexpr int jump = 28;
    static constexpr int movement_state_count = 28;

    [[nodiscard]] static std::span<const int> transitions(int state) noexcept;
    [[nodiscard]] static int run_walk_counterpart(int state);
    [[nodiscard]] static bool is_reachable_from_idle(int state) noexcept;
};

} // namespace igi::gameplay
