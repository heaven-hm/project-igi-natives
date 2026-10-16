#include "igi/input_controller.hpp"

#include "igi/diagnostics.hpp"

#include <SDL.h>

#include <algorithm>

namespace igi::gameplay {
namespace {

SDL_Scancode keyboard_scancode(std::string name) {
    if (!name.starts_with("KEY_")) { return SDL_SCANCODE_UNKNOWN; }
    name.erase(0, 4);
    if (name == "LEFT_CTRL") { return SDL_SCANCODE_LCTRL; }
    if (name == "RIGHT_CTRL") { return SDL_SCANCODE_RCTRL; }
    if (name == "LEFT_SHIFT") { return SDL_SCANCODE_LSHIFT; }
    if (name == "RIGHT_SHIFT") { return SDL_SCANCODE_RSHIFT; }
    if (name == "LEFT_ALT") { return SDL_SCANCODE_LALT; }
    if (name == "RIGHT_ALT") { return SDL_SCANCODE_RALT; }
    if (name.starts_with("NUMPAD")) { name.replace(0, 6, "Keypad "); }
    std::replace(name.begin(), name.end(), '_', ' ');
    return SDL_GetScancodeFromName(name.c_str());
}

}

InputController::InputController(InputConfiguration configuration) : configuration_(std::move(configuration)) {
    for (const auto& [action, input] : configuration_.bindings) {
        Binding binding{action};
        if (input.device == "INPUTPORT_DEVICE_KEYBOARD") {
            const auto scancode = keyboard_scancode(input.control);
            if (scancode != SDL_SCANCODE_UNKNOWN) { binding.scancode = scancode; }
        } else if (input.device == "INPUTPORT_DEVICE_MOUSE") {
            if (input.control == "MOUSE_BUTTON_1") { binding.mouse_mask = SDL_BUTTON_LMASK; }
            else if (input.control == "MOUSE_BUTTON_2") { binding.mouse_mask = SDL_BUTTON_RMASK; }
            else if (input.control == "MOUSE_BUTTON_3") { binding.mouse_mask = SDL_BUTTON_MMASK; }
        }
        if (binding.scancode == -1 && binding.mouse_mask == 0) {
            diagnostics::log(diagnostics::Severity::warning, "input", "Unsupported config binding: " + action + " = " + input.control);
        }
        bindings_.push_back(std::move(binding));
    }
}

PlayerInput InputController::sample(std::span<const std::uint8_t> keyboard, std::uint32_t mouse_buttons) {
    std::unordered_map<std::string, bool> actions;
    for (const auto& binding : bindings_) {
        const bool keyboard_pressed = binding.scancode >= 0 && static_cast<std::size_t>(binding.scancode) < keyboard.size() && keyboard[binding.scancode] != 0;
        actions[binding.action] = keyboard_pressed || (mouse_buttons & binding.mouse_mask) != 0;
    }
    const auto pressed = [&](const std::string& action) { return actions.contains(action) && actions.at(action); };
    const auto rising = [&](const std::string& action) {
        return pressed(action) && (!previous_actions_.contains(action) || !previous_actions_.at(action));
    };
    if (rising("ToggleWalkRun")) { walking_ = !walking_; }
    PlayerInput input;
    input.forward = static_cast<float>(pressed("MoveUp")) - static_cast<float>(pressed("MoveDown"));
    input.sideways = static_cast<float>(pressed("MoveRight")) - static_cast<float>(pressed("MoveLeft"));
    input.walking = walking_;
    input.crouching = pressed("Crouch");
    input.jumping = pressed("Jump");
    input.firing = pressed("Fire");
    input.reloading = rising("Reload");
    input.interacting = rising("Activate");
    input.aiming = pressed("AlternateFire");
    input.weapon_cycle = static_cast<int>(rising("NextWeapon")) - static_cast<int>(rising("PrevWeapon"));
    for (int category_index = 0; category_index < 9; ++category_index) {
        if (rising("WeaponCategory" + std::to_string(category_index + 1))) { input.weapon_category = category_index; }
    }
    previous_actions_ = std::move(actions);
    return input;
}

void InputController::reset() noexcept { previous_actions_.clear(); }

}
