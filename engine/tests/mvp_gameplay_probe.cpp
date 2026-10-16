#include "igi/game_simulation.hpp"

#include <exception>
#include <iostream>
#include <numbers>
#include <stdexcept>

using namespace igi::gameplay;

void require(bool condition, const char* message) {
    if (!condition) { throw std::runtime_error(message); }
}

MissionScene make_scene(bool enemy, bool occluded) {
    MissionScene scene;
    scene.collision_triangles = {
        {{Vector3{-100, -100, -2}, Vector3{100, -100, -2}, Vector3{100, 100, -2}}},
        {{Vector3{-100, -100, -2}, Vector3{100, 100, -2}, Vector3{-100, 100, -2}}}};
    if (occluded) {
        scene.collision_triangles.push_back({{Vector3{-3, 3, -2}, Vector3{3, 3, -2}, Vector3{3, 3, 3}}});
        scene.collision_triangles.push_back({{Vector3{-3, 3, -2}, Vector3{3, 3, 3}, Vector3{-3, 3, 3}}});
    }
    if (enemy) {
        scene.actors.push_back({{0, 6, -2}, std::numbers::pi_v<float>, 21, 1, {}});
    }
    const Vector3 derivative{0, 12288.0f / 4800.0f, 0};
    scene.root_motion_clips[4] = {4800, {{0, {}, derivative, derivative},
        {4800, {0, 12288, 0}, derivative, derivative}}};
    return scene;
}

int main() {
    try {
        const auto movement_scene = make_scene(false, false);
        GameSimulation movement(movement_scene);
        PlayerInput input;
        input.forward = 1;
        for (int tick_index = 0; tick_index < 6; ++tick_index) { movement.tick(input); }
        require(movement.player_position().y > 1.04f && movement.player_position().y < 1.06f,
                "Walking must use animation-track displacement and translation scale");
        GameSimulation looping(movement_scene);
        for (int tick_index = 0; tick_index < 120; ++tick_index) { looping.tick(input); }
        require(std::abs(looping.player_position().y - 21.0f) < 0.01f,
                "Looping root motion must preserve travel across animation seams");
        input = {};
        input.jumping = true;
        movement.tick(input);
        require(!movement.grounded(), "Jump input must leave the ground");
        const float ground_height = -2;
        float maximum_height = movement.player_position().z;
        input.jumping = false;
        for (int tick_index = 0; tick_index < 90; ++tick_index) {
            movement.tick(input);
            maximum_height = std::max(maximum_height, movement.player_position().z);
        }
        require(maximum_height > ground_height + 0.3f && movement.grounded(),
                "Jump must rise and return to the real collision floor");
        input.crouching = true;
        movement.tick(input);
        require(movement.camera_position().z < ground_height + 1.0f, "Crouching must lower the camera");

        const auto combat_scene = make_scene(true, false);
        GameSimulation combat(combat_scene);
        input = {};
        input.firing = true;
        for (int tick_index = 0; tick_index < 100; ++tick_index) { combat.tick(input); }
        require(combat.weapon().shots_fired == 32 && combat.weapon().magazine == 0,
                "Automatic fire must respect the magazine capacity");
        require(combat.weapon().kills == 1 && combat.weapon().hits >= 20 &&
                combat.actors().front().behavior == ActorBehavior::dead,
                "Projectiles must damage and defeat the target");
        require(combat.health() < 3, "Visible soldier must acquire and damage the player");
        input = {};
        input.reloading = true;
        combat.tick(input);
        require(combat.weapon().reload_remaining > 0, "Reload must begin before ammunition is transferred");
        input.reloading = false;
        for (int tick_index = 0; tick_index < 62; ++tick_index) { combat.tick(input); }
        require(combat.weapon().magazine == 32 && combat.weapon().reserve == 164,
                "Reload must transfer ammunition only after the configured duration");

        const auto blocked_scene = make_scene(true, true);
        GameSimulation blocked(blocked_scene);
        input.firing = true;
        for (int tick_index = 0; tick_index < 100; ++tick_index) { blocked.tick(input); }
        require(blocked.weapon().hits == 0 && blocked.actors().front().health == 3,
                "World geometry must occlude projectiles and protect the soldier");
        require(blocked.health() == 3, "Occluded guard must not damage the player through a wall");
        require(blocked.actors().front().behavior == ActorBehavior::investigating,
                "An occluded guard hearing a shot must investigate rather than shoot through the wall");
        GameSimulation replay_first(movement_scene);
        GameSimulation replay_second(movement_scene);
        for (int tick_index = 0; tick_index < 100; ++tick_index) {
            PlayerInput replay_input;
            replay_input.forward = tick_index < 20 ? 1.0f : 0.0f;
            replay_input.jumping = tick_index == 30;
            replay_input.firing = tick_index >= 40 && tick_index < 70;
            replay_first.tick(replay_input);
            replay_second.tick(replay_input);
            require(length(replay_first.player_position() - replay_second.player_position()) == 0 &&
                    replay_first.weapon().magazine == replay_second.weapon().magazine &&
                    replay_first.health() == replay_second.health(), "Identical replay input must produce identical simulation state");
        }
        combat.restart();
        require(combat.weapon().shots_fired == 0 && combat.weapon().kills == 0 && combat.actors().front().health == 3,
                "Restart must reset combat and actor state");
        std::cout << "Gameplay probe passed: root motion, jump, landing, crouch, automatic fire, damage, death, reload, occlusion, restart\n";
        return 0;
    } catch (const std::exception& exception) {
        std::cerr << "Gameplay probe failed: " << exception.what() << '\n';
        return 1;
    }
}
