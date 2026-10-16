#include "igi/game_simulation.hpp"
#include "igi/diagnostics.hpp"
#include "igi/scene_renderer.hpp"

#include <exception>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>
#include <stdexcept>

using namespace igi::gameplay;

void require(bool condition, const char* message) {
    if (!condition) { throw std::runtime_error(message); }
}

int main(int argument_count, char** arguments) {
    try {
        if (argument_count != 3 && argument_count != 4) { throw std::runtime_error("Expected original game and cache directories, and optional replay output"); }
        std::ofstream replay_output;
        if (argument_count == 4) {
            replay_output.open(arguments[3]);
            if (!replay_output) { throw std::runtime_error("Cannot create combat replay"); }
            replay_output << std::setprecision(9);
        }
        const auto scene = load_mission(arguments[1], arguments[2]);
        require(scene.missing_object_count == 0 && scene.loaded_object_count > 300 && scene.actors.size() >= 20,
                "Real mission must load its original models and soldiers");
        bool disabled_cinematic_actor = false;
        for (const auto& actor : scene.actors) {
            if (actor.identifier == 3031) { disabled_cinematic_actor = !actor.gameplay_enabled; }
        }
        require(disabled_cinematic_actor, "Level 1's cinematic train actor must remain outside gameplay");
        GameSimulation movement(scene);
        const auto start = movement.player_position();
        PlayerInput input;
        input.forward = 1;
        for (int tick_index = 0; tick_index < 10; ++tick_index) { movement.tick(input); }
        require(length(movement.player_position() - start) > 0.5f, "Player must move through the original level");
        input = {};
        input.jumping = true;
        movement.tick(input);
        require(!movement.grounded(), "Player must jump on original collision geometry");
        input.jumping = false;
        float highest = movement.player_position().z;
        for (int tick_index = 0; tick_index < 80; ++tick_index) {
            movement.tick(input);
            highest = std::max(highest, movement.player_position().z);
        }
        require(highest > start.z + 0.2f && movement.grounded(), "Original level jump must rise and land");

        GameSimulation combat(scene);
        std::size_t target_index = scene.actors.size();
        float target_distance = std::numeric_limits<float>::max();
        for (std::size_t actor_index = 0; actor_index < combat.actors().size(); ++actor_index) {
            if (!combat.actors()[actor_index].active || scene.actors[actor_index].team == 0) { continue; }
            const auto aim_point = combat.actors()[actor_index].position + Vector3{0, 0, 1.2f};
            const auto difference = aim_point - combat.camera_position();
            const float distance = length(difference);
            const auto obstruction = combat.world().raycast(combat.camera_position(), normalized(difference), distance);
            if ((!obstruction.hit || obstruction.distance > distance - 0.3f) && distance < target_distance && distance < 350) {
                target_index = actor_index;
                target_distance = distance;
            }
        }
        if (target_index == scene.actors.size()) {
            input = {};
            input.firing = true;
            for (int tick_index = 0; tick_index < 100; ++tick_index) { combat.tick(input); }
            require(combat.weapon().shots_fired == 32 && combat.weapon().magazine == 0,
                    "Original level must simulate player fire even when active guards are out of sight");
            SceneRenderer renderer(640, 480);
            renderer.render(scene, combat);
            require(renderer.visible_triangles() > 100, "Original scene must render its textured geometry");
            std::cout << "Real-level probe passed: load, move, jump, land, fire, render; gameplay guards outside spawn view\n";
            return 0;
        }
        std::cout << "Original soldier target: " << scene.actors[target_index].identifier << "; distance=" << target_distance << '\n';
        for (int tick_index = 0; tick_index < 120 && combat.weapon().kills == 0 && combat.health() > 0; ++tick_index) {
            const auto difference = combat.actors()[target_index].position + Vector3{0, 0, 1.2f} - combat.camera_position();
            input = {};
            input.heading_change = std::atan2(-difference.x, difference.y) - combat.heading();
            input.pitch_change = std::atan2(difference.z, std::sqrt(difference.x * difference.x + difference.y * difference.y)) - combat.pitch();
            input.firing = true;
            if (replay_output.is_open()) {
                replay_output << "0,0," << input.heading_change << ',' << input.pitch_change << ",0,0,0,1,0,0\n";
            }
            combat.tick(input);
        }
        require(combat.weapon().hits > 0 && combat.weapon().kills == 1, "Player projectiles must defeat an original scene soldier");
        if (replay_output.is_open()) {
            replay_output.flush();
            require(static_cast<bool>(replay_output), "Combat replay output failed");
        }
        SceneRenderer renderer(640, 480);
        renderer.render(scene, combat);
        require(renderer.visible_triangles() > 100, "Original scene must produce visible textured geometry");
        std::cout << "Real-level probe passed: load, move, jump, land, aim, fire, damage, defeat, render; shots="
                  << combat.weapon().shots_fired << ", hits=" << combat.weapon().hits << '\n';
        return 0;
    } catch (const std::exception& exception) {
        igi::diagnostics::log(igi::diagnostics::Severity::error, "real-level-probe", exception.what());
        return 1;
    }
}
