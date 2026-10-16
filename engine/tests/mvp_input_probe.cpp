#include "igi/input_controller.hpp"
#include "igi/mission_gameplay.hpp"

#include <SDL.h>

#include <array>
#include <exception>
#include <iostream>
#include <stdexcept>

using namespace igi::gameplay;
using igi::assets::ScriptCall;
using igi::assets::ScriptValue;

void require(bool condition, const char* message) {
    if (!condition) { throw std::runtime_error(message); }
}

ScriptValue text_value(std::string text) { return {0, std::move(text)}; }

int main(int argument_count, char** arguments) {
    try {
        SDL_SetMainReady();
        if (SDL_Init(0) != 0) { throw std::runtime_error(SDL_GetError()); }
        std::vector<ScriptCall> calls = {
            {"GOStart", {{1, {}}}}, {"GOPlayer", {text_value("First")}},
            {"GOInRemap", {text_value("Fire"), text_value("INPUTPORT_DEVICE_MOUSE"), text_value("MOUSE_BUTTON_1")}},
            {"GOInRemap", {text_value("Reload"), text_value("INPUTPORT_DEVICE_KEYBOARD"), text_value("KEY_F")}},
            {"GOInRemap", {text_value("Jump"), text_value("INPUTPORT_DEVICE_KEYBOARD"), text_value("KEY_E")}},
            {"GOInRemap", {text_value("NextWeapon"), text_value("INPUTPORT_DEVICE_MOUSE"), text_value("MOUSE_BUTTON_2")}},
            {"GOInRemap", {text_value("WeaponCategory1"), text_value("INPUTPORT_DEVICE_KEYBOARD"), text_value("KEY_1")}},
            {"GOInMouSens", {{0.4, {}}}},
            {"GOPlayer", {text_value("Second")}},
            {"GOInRemap", {text_value("Fire"), text_value("INPUTPORT_DEVICE_KEYBOARD"), text_value("KEY_SPACE")}}};
        const auto configuration = parse_input_configuration(calls);
        require(configuration.profile_name == "First" && configuration.bindings.at("Reload").control == "KEY_F",
                "Config must retain the selected profile instead of overwriting it with the last profile");
        require(parse_input_configuration(calls, "Second").bindings.at("Fire").control == "KEY_SPACE",
                "Explicit profile selection must load that profile's bindings");
        InputController controller(configuration);
        std::array<std::uint8_t, SDL_NUM_SCANCODES> keyboard{};
        auto input = controller.sample(keyboard, SDL_BUTTON_LMASK);
        require(input.firing, "Original mouse button 1 must fire");
        input = controller.sample(keyboard, SDL_BUTTON_RMASK);
        require(input.weapon_cycle == 1 && !input.firing, "Original mouse button 2 must mean SDL right mouse button");
        require(controller.sample(keyboard, SDL_BUTTON_RMASK).weapon_cycle == 0, "Held next-weapon binding must not cycle every tick");
        keyboard[SDL_SCANCODE_E] = 1;
        keyboard[SDL_SCANCODE_F] = 1;
        keyboard[SDL_SCANCODE_1] = 1;
        input = controller.sample(keyboard, 0);
        require(input.jumping && input.reloading && input.weapon_category == 0,
                "Jump, reload, and category selection must come from config.qvm bindings");
        keyboard.fill(0);
        controller.reset();
        require(!controller.sample(keyboard, 0).firing, "Focus reset must not leave fire pressed");
        MissionScene scene;
        scene.collision_triangles = {
            {{Vector3{-100, -100, 0}, Vector3{100, -100, 0}, Vector3{100, 100, 0}}},
            {{Vector3{-100, -100, 0}, Vector3{100, 100, 0}, Vector3{-100, 100, 0}}}};
        GameSimulation simulation(scene);
        input = controller.sample(keyboard, SDL_BUTTON_LMASK);
        simulation.tick(input);
        require(simulation.weapon().shots_fired == 1 && simulation.weapon().magazine == 31,
                "Configured mouse fire must reach the real weapon simulation");

        ScriptValue cinematic_child;
        cinematic_child.call_index = 0;
        const std::vector<ScriptCall> task_calls = {
            {"Task_New", {{333, {}}, text_value("HumanSoldier"), {}}},
            {"Task_New", {{4000, {}}, text_value("ConditionalContainer"), {}, text_value("!CutScene_666.isFinished"), cinematic_child}},
            {"Task_New", {{2000, {}}, text_value("HumanSoldier"), {}}}};
        const auto enabled = igi::assets::gameplay_task_mask(task_calls);
        require(!enabled[0] && !enabled[1] && enabled[2], "Cinematic containers must suppress their children while leaving gameplay soldiers active");
        if (argument_count == 2) {
            const auto original = load_input_configuration(arguments[1]);
            InputController original_controller(original);
            require(original_controller.sample(keyboard, SDL_BUTTON_LMASK).firing,
                    "The installed original config must map the player's mouse fire correctly");
        }
        SDL_Quit();
        std::cout << "Input probe passed: profiles, original remaps, mouse buttons, firing, action edges, cutscene object gating\n";
        return 0;
    } catch (const std::exception& exception) {
        SDL_Quit();
        std::cerr << "Input probe failed: " << exception.what() << '\n';
        return 1;
    }
}
