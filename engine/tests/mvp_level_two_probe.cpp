#include "igi/game_simulation.hpp"
#include "igi/scene_renderer.hpp"
#include "igi/skeletal_animation.hpp"

#include <algorithm>
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
        require(scene.attached_model_count > 0 && scene.maximum_attachment_depth >= 2,
                "Level 2 must include recursively nested original ATTA parts");
        require(scene.static_triangles.size() > 100000, "High detail must retain additional original terrain geometry");
        const auto low_detail = load_mission(arguments[1], arguments[2], 2, TerrainDetail::low);
        require(scene.terrain_triangle_count > low_detail.terrain_triangle_count * 2 &&
                scene.actors.size() == low_detail.actors.size(),
                "High detail must select denser original terrain without changing enemy declarations");
        GameSimulation simulation(scene);
        std::size_t portal_faces = 0;
        bool entered_original_portal = false;
        for (const auto& triangle : scene.collision_triangles) {
            if (!triangle.non_solid_portal) { continue; }
            ++portal_faces;
            if (entered_original_portal) { continue; }
            const auto center = (triangle.positions[0] + triangle.positions[1] + triangle.positions[2]) * (1.0f / 3.0f);
            const auto normal = normalized(cross(triangle.positions[1] - triangle.positions[0],
                                                 triangle.positions[2] - triangle.positions[0]));
            if (std::abs(normal.z) > 0.1f) { continue; }
            const auto starting = center - normal * 0.7f - Vector3{0, 0, 0.9f};
            const auto destination = simulation.world().move_capsule(starting, normal * 1.4f, 1.8f);
            entered_original_portal = dot(destination - starting, normal) > 1.3f;
        }
        require(portal_faces > 0 && entered_original_portal,
                "Original Level 2 doorway portal faces must allow a capsule crossing through real scene geometry");
        const auto ak47 = std::find_if(scene.weapons.begin(), scene.weapons.end(), [](const auto& weapon) {
            return weapon.identifier == "WEAPON_ID_AK47";
        });
        require(ak47 != scene.weapons.end() && ak47->mesh &&
                std::any_of(ak47->mesh->triangles.begin(), ak47->mesh->triangles.end(),
                    [](const auto& triangle) { return triangle.firing_only; }),
                "Original TASKTYPE_GUNFLAME attachments must retain their firing-only classification");
        require(simulation.inventory_size() == 3, "Level 2 must start with its three declared weapons");
        require(scene.first_person_mesh && scene.first_person_animations && scene.first_person_animations->parents.size() == 56 &&
                scene.first_person_animations->clips.size() == 78, "Player view must load the original 005 hand rig and animation set");
        GameSimulation weapon_view(scene);
        weapon_view.tick({});
        require(weapon_view.weapon().animation_identifier == 18, "MP5 idle must use its declared view animation");
        PlayerInput weapon_input;
        weapon_input.firing = true;
        weapon_view.tick(weapon_input);
        require(weapon_view.weapon().animation_identifier == 20 && weapon_view.weapon().shots_fired == 1,
                "Firing must reach both projectile simulation and the original view clip");
        weapon_input = {};
        weapon_input.reloading = true;
        weapon_view.tick(weapon_input);
        require(weapon_view.weapon().animation_identifier == 21, "MP5 reload must use its declared view animation");
        weapon_input = {};
        weapon_input.weapon_category = 0;
        weapon_view.tick(weapon_input);
        require(weapon_view.weapon().animation_identifier == 26 && weapon_view.weapon_parameters().melee,
                "Knife selection must change the original hand pose and held weapon together");
        const auto initial_actors = simulation.actors();
        std::size_t active_actors = 0;
        for (std::size_t actor_index = 0; actor_index < scene.actors.size(); ++actor_index) {
            if (initial_actors[actor_index].active) { ++active_actors; }
            if (scene.actors[actor_index].identifier == 333) {
                require(!initial_actors[actor_index].active, "Cutscene Jones must never become a gameplay enemy");
            }
        }
        require(active_actors == 22, "Level 2 must activate its 22 gameplay guards and exclude cutscene actors");
        const auto& soldier = scene.actors.front();
        require(soldier.animations && soldier.animations->parents.size() == 33 && soldier.animations->clips.size() == 95,
                "Soldiers must use the original 001.IFF skeleton and clips");
        const auto first_pose = sample_bone_pose(*soldier.animations, 34, 0);
        const auto next_pose = sample_bone_pose(*soldier.animations, 34, 640);
        bool vertex_moved = false;
        for (const auto& triangle : soldier.mesh->triangles) {
            for (const auto& vertex : triangle.vertices) {
                const auto first = skin_vertex(vertex, first_pose);
                const auto next = skin_vertex(vertex, next_pose);
                require(finite(first) && finite(next) && length(first) < 10 && length(next) < 10,
                        "Skinned original vertices must remain finite and in model-local space");
                vertex_moved = vertex_moved || length(next - first) > 0.001f;
            }
        }
        require(vertex_moved, "Original walking tracks must deform the soldier mesh");
        for (int tick_index = 0; tick_index < 300; ++tick_index) { simulation.tick({}); }
        std::size_t moved_actors = 0;
        std::uint64_t enemy_shots = 0;
        for (std::size_t actor_index = 0; actor_index < initial_actors.size(); ++actor_index) {
            if (length(simulation.actors()[actor_index].position - initial_actors[actor_index].position) > 0.5f) { ++moved_actors; }
            const auto& actor = simulation.actors()[actor_index];
            enemy_shots += actor.shots_fired;
            if (actor.active && actor.behavior == ActorBehavior::attacking && scene.actors[actor_index].animations) {
                require(actor.animation_identifier == 56, "An attacking soldier must use its firing pose instead of the idle/walk clip");
            }
        }
        require(moved_actors >= 5, "Original patrol routes must move multiple Level 2 soldiers");
        require(enemy_shots > 0, "Level 2 gameplay guards must fire at a visible player");
        SceneRenderer renderer(640, 480);
        renderer.render(scene, simulation);
        require(renderer.visible_triangles() > 100, "Level 2 must render its real textured scene");
        std::cout << "Level 2 probe passed: soldiers=" << scene.actors.size() << ", navigation_nodes=" << node_count
                  << ", patrolling_soldiers=" << moved_actors << ", terrain_and_model_triangles=" << scene.static_triangles.size()
                  << ", health=" << simulation.health() << '\n';
        std::cout << "ATTA instances=" << scene.attached_model_count << ", attachment_depth=" << scene.maximum_attachment_depth << '\n';
        std::cout << "Non-solid portal faces=" << portal_faces << ", enemy shots=" << enemy_shots << '\n';
        return 0;
    } catch (const std::exception& exception) {
        std::cerr << "Level 2 probe failed: " << exception.what() << '\n';
        return 1;
    }
}
