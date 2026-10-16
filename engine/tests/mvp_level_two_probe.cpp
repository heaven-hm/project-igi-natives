#include "igi/game_simulation.hpp"
#include "igi/scene_renderer.hpp"

#include <exception>
#include <iostream>
#include <stdexcept>

using namespace igi::gameplay;

void require(bool condition, const char* message) {
    if (!condition) { throw std::runtime_error(message); }
}

int main(int argument_count, char** arguments) {
    try {
        if (argument_count != 3) { throw std::runtime_error("Expected game directory and cache directory"); }
        const auto scene = load_mission(arguments[1], arguments[2], 2);
        require(scene.actors.size() == 25 && scene.missing_object_count == 0, "Level 2 must load all 25 original soldiers and scene models");
        require(scene.navigation_graphs.size() == 14 && scene.patrol_paths.size() == 22, "Level 2 must load original graphs and patrol scripts");
        std::size_t node_count = 0;
        for (const auto& graph : scene.navigation_graphs) { node_count += graph.nodes.size(); }
        require(node_count == 465, "Level 2 graph nodes must match the original files");
        require(scene.static_triangles.size() > 100000, "High detail must retain additional original terrain geometry");
        GameSimulation simulation(scene);
        require(simulation.inventory_size() == 3, "Level 2 must start with its three declared weapons");
        const auto initial_actors = simulation.actors();
        std::size_t active_actors = 0;
        for (std::size_t actor_index = 0; actor_index < scene.actors.size(); ++actor_index) {
            if (initial_actors[actor_index].active) { ++active_actors; }
            if (scene.actors[actor_index].identifier == 333) {
                require(!initial_actors[actor_index].active, "Cutscene Jones must never become a gameplay enemy");
            }
        }
        require(active_actors == 22, "Level 2 must activate its 22 gameplay guards and exclude cutscene actors");
        for (int tick_index = 0; tick_index < 300; ++tick_index) { simulation.tick({}); }
        std::size_t moved_actors = 0;
        for (std::size_t actor_index = 0; actor_index < initial_actors.size(); ++actor_index) {
            if (length(simulation.actors()[actor_index].position - initial_actors[actor_index].position) > 0.5f) { ++moved_actors; }
        }
        require(moved_actors >= 5, "Original patrol routes must move multiple Level 2 soldiers");
        SceneRenderer renderer(640, 480);
        renderer.render(scene, simulation);
        require(renderer.visible_triangles() > 100, "Level 2 must render its real textured scene");
        std::cout << "Level 2 probe passed: soldiers=" << scene.actors.size() << ", navigation_nodes=" << node_count
                  << ", patrolling_soldiers=" << moved_actors << ", terrain_and_model_triangles=" << scene.static_triangles.size()
                  << ", health=" << simulation.health() << '\n';
        return 0;
    } catch (const std::exception& exception) {
        std::cerr << "Level 2 probe failed: " << exception.what() << '\n';
        return 1;
    }
}
