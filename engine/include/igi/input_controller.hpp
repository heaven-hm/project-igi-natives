#pragma once

#include "igi/game_simulation.hpp"
#include "igi/input_configuration.hpp"

#include <span>

namespace igi::gameplay {

class InputController final {
  public:
    explicit InputController(InputConfiguration configuration);
    [[nodiscard]] PlayerInput sample(std::span<const std::uint8_t> keyboard, std::uint32_t mouse_buttons);
    void reset() noexcept;
    [[nodiscard]] float mouse_sensitivity() const noexcept { return configuration_.mouse_sensitivity; }
    [[nodiscard]] bool invert_mouse() const noexcept { return configuration_.invert_mouse; }

  private:
    struct Binding final { std::string action; int scancode = -1; std::uint32_t mouse_mask{}; };
    InputConfiguration configuration_;
    std::vector<Binding> bindings_;
    std::unordered_map<std::string, bool> previous_actions_;
    bool walking_{};
};

}
