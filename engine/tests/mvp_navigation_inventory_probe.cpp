#include "igi/game_simulation.hpp"
#include "igi/navigation.hpp"

#include <exception>
#include <iostream>
#include <stdexcept>

using namespace igi::gameplay;

void require(bool condition, const char* message) {
    if (!condition) { throw std::runtime_error(message); }
}

MissionScene test_scene() {
    MissionScene scene;
    scene.collision_triangles = {
        {{Vector3{-100, -100, -2}, Vector3{100, -100, -2}, Vector3{100, 100, -2}}},
        {{Vector3{-100, -100, -2}, Vector3{100, 100, -2}, Vector3{-100, 100, -2}}}};
    SceneWeapon pistol;
    pistol.identifier = "WEAPON_ID_GLOCK";
    pistol.parameters.name = "Glock";
    pistol.parameters.magazine_capacity = 17;
    pistol.parameters.automatic = false;
    pistol.initial_reserve = 49;
    pistol.initially_owned = true;
    pistol.ammunition_identifier = "AMMO_ID_919";
    SceneWeapon rifle = pistol;
    rifle.identifier = "WEAPON_ID_MP5SD";
    rifle.parameters = {};
    SceneWeapon knife = pistol;
    knife.identifier = "WEAPON_ID_KNIFE";
    knife.parameters.melee = true;
    knife.parameters.magazine_capacity = 1;
    knife.parameters.maximum_distance = 1.8f;
    knife.ammunition_identifier = "AMMO_ID_NONE";
    SceneWeapon pickup = pistol;
    pickup.identifier = "WEAPON_ID_AK47";
    pickup.initially_owned = false;
    pickup.ammunition_identifier = "AMMO_ID_762";
    scene.weapons = {pistol, rifle, knife, pickup};
    scene.weapon_categories = {{"WEAPON_ID_KNIFE"}, {"WEAPON_ID_GLOCK"}, {"WEAPON_ID_MP5SD"}};
    scene.weapon_pickups.push_back({{0, 0, -2}, "WEAPON_ID_AK47"});
    return scene;
}

int main() {
    try {
        NavigationGraph graph{7, {{1, {0, 6, -2}, {1}}, {2, {-5, 6, -2}, {0, 2}},
            {3, {-5, 12, -2}, {1, 3}}, {4, {0, 12, -2}, {2}}, {5, {50, 50, -2}, {}}}};
        const auto route = find_navigation_path(graph, {0, 6, -2}, {0, 12, -2});
        require(route.size() == 4 && route[1].x == -5 && route[2].y == 12,
                "Pathfinding must follow graph connectivity around an obstacle");
        require(find_navigation_path(graph, {0, 6, -2}, {50, 50, -2}).empty(),
                "Disconnected graph components must not invent a route");
        graph.nodes[0].neighbors.push_back(999);
        bool rejected = false;
        try { static_cast<void>(find_navigation_path(graph, {0, 6, -2}, {0, 12, -2})); }
        catch (const std::runtime_error&) { rejected = true; }
        require(rejected, "Invalid navigation edges must produce a controlled error");
        graph.nodes[0].neighbors.pop_back();

        auto scene = test_scene();
        GameSimulation simulation(scene);
        for (int tick_index = 0; tick_index < 600; ++tick_index) { simulation.tick({}); }
        require(simulation.health() == scene.player_parameters.maximum_health, "Health must not drain without a projectile hit");
        require(simulation.inventory_size() == 3 && simulation.selected_weapon_slot() == 1, "Initial loadout must select the MP5");
        PlayerInput input;
        input.weapon_category = 0;
        simulation.tick(input);
        require(simulation.weapon_parameters().melee, "Original weapon category 1 must select the knife");
        input.weapon_category = 2;
        simulation.tick(input);
        require(simulation.selected_weapon_slot() == 1, "Original weapon category 3 must select the MP5");
        input = {};
        input.firing = true;
        for (int tick_index = 0; tick_index < 100; ++tick_index) { simulation.tick(input); }
        input = {};
        input.reloading = true;
        simulation.tick(input);
        require(simulation.weapon().reload_remaining > 0, "Reload must start");
        input = {};
        input.weapon_slot = 0;
        simulation.tick(input);
        require(simulation.weapon().magazine == 17 && simulation.weapon().reload_remaining == 0, "Switch must equip pistol and cancel reload");
        input = {};
        input.firing = true;
        const auto shots_before = simulation.weapon().shots_fired;
        for (int tick_index = 0; tick_index < 60; ++tick_index) { simulation.tick(input); }
        require(simulation.weapon().shots_fired == shots_before + 1, "Semiautomatic pistol must require trigger release");
        input = {};
        input.reloading = true;
        simulation.tick(input);
        input = {};
        for (int tick_index = 0; tick_index < 62; ++tick_index) { simulation.tick(input); }
        require(simulation.weapon().reserve == 48, "Reload must consume the shared ammunition pool");
        input.weapon_slot = 1;
        simulation.tick(input);
        require(simulation.weapon().magazine == 0 && simulation.weapon().reserve == 48,
                "Switch must preserve each magazine and synchronize shared ammunition");
        input.weapon_slot = 999;
        simulation.tick(input);
        require(simulation.selected_weapon_slot() == 1, "Unowned weapon slots must be ignored");
        input = {};
        input.weapon_cycle = 1;
        simulation.tick(input);
        require(simulation.selected_weapon_slot() == 2, "Wheel cycle must select next owned weapon");
        input = {};
        input.firing = true;
        simulation.tick(input);
        require(simulation.weapon().magazine == 1, "Knife must not consume ammunition");
        input = {};
        input.interacting = true;
        simulation.tick(input);
        require(simulation.inventory_size() == 4, "Nearby original weapon pickup must enter inventory");
        simulation.tick(input);
        require(simulation.inventory_size() == 4, "A pickup must not be collected twice");
        simulation.restart();
        require(simulation.inventory_size() == 3 && simulation.weapon().magazine == 32 && simulation.health() == 3,
                "Restart must restore the original loadout and health");

        scene.navigation_graphs.push_back(graph);
        scene.patrol_paths.push_back({2400, {{2, 4}}});
        SceneActor soldier;
        soldier.position = {0, 6, -2};
        soldier.identifier = 2000;
        soldier.navigation_graph_identifier = 7;
        soldier.patrol_path_identifier = 2400;
        scene.actors.push_back(soldier);
        scene.collision_triangles.push_back({{Vector3{-3, 8, -2}, Vector3{3, 8, -2}, Vector3{3, 8, 3}}});
        scene.collision_triangles.push_back({{Vector3{-3, 8, -2}, Vector3{3, 8, 3}, Vector3{-3, 8, 3}}});
        GameSimulation patrol(scene);
        for (int tick_index = 0; tick_index < 500; ++tick_index) { patrol.tick({}); }
        require(patrol.actors().front().position.y > 11 && patrol.actors().front().behavior == ActorBehavior::guarding,
                "Authored patrol must navigate around a wall while ignoring an unseen player");
        std::cout << "Navigation/inventory probe passed: connected paths, disconnection, bounds, health, switching, ammo, pickups, patrol\n";
        return 0;
    } catch (const std::exception& exception) {
        std::cerr << "Navigation/inventory probe failed: " << exception.what() << '\n';
        return 1;
    }
}
