#include "igi/scene_renderer.hpp"

#include <iostream>
#include <stdexcept>

using namespace igi::gameplay;

int main() {
    try {
        MissionScene scene;
        scene.collision_triangles = {
            {{Vector3{-10, -10, 0}, Vector3{10, -10, 0}, Vector3{10, 10, 0}}},
            {{Vector3{-10, -10, 0}, Vector3{10, 10, 0}, Vector3{-10, 10, 0}}}};
        scene.textures = {{1, 1, {0xffff0000u}}, {1, 1, {0xff00ff00u}}};
        scene.static_triangles.push_back({{SceneVertex{{-4, 4, -1}, 0, 0},
            SceneVertex{{4, 4, -1}, 1, 0}, SceneVertex{{0, 4, 5}, 0.5f, 1}}, 0});
        scene.static_triangles.push_back({{SceneVertex{{-8, 8, -1}, 0, 0},
            SceneVertex{{8, 8, -1}, 1, 0}, SceneVertex{{0, 8, 8}, 0.5f, 1}}, 1});
        GameSimulation simulation(scene);
        SceneRenderer renderer(640, 480);
        renderer.render(scene, simulation);
        const auto center_color = renderer.pixels()[250 * 640 + 340];
        if (((center_color >> 16) & 255) < 40 || ((center_color >> 8) & 255) != 0) {
            throw std::runtime_error("Depth buffer must keep the nearer red triangle over the farther green triangle");
        }
        scene.static_triangles[0].vertices[0].position.y = -1;
        renderer.render(scene, simulation);
        if (renderer.visible_triangles() == 0) { throw std::runtime_error("Near-plane clipping discarded all visible geometry"); }
        scene.static_triangles[0].texture_index = 400;
        bool rejected_missing_texture = false;
        try { renderer.render(scene, simulation); } catch (const std::runtime_error&) { rejected_missing_texture = true; }
        if (!rejected_missing_texture) { throw std::runtime_error("Renderer must reject unavailable texture indices"); }
        scene.static_triangles.clear();
        scene.weapon_mesh = std::make_shared<SceneMesh>();
        scene.weapon_mesh->triangles.push_back({{SceneVertex{{-1, 2, -1}, 0, 0},
            SceneVertex{{1, 2, -1}, 1, 0}, SceneVertex{{0, 2, 1}, 0.5f, 1}}, 0, true});
        renderer.render(scene, simulation);
        if (renderer.visible_triangles() != 0) { throw std::runtime_error("Gun-flame attachments must be hidden while idle"); }
        PlayerInput firing;
        firing.firing = true;
        simulation.tick(firing);
        renderer.render(scene, simulation);
        if (renderer.visible_triangles() == 0) { throw std::runtime_error("A shot must expose its gun-flame attachment"); }
        for (int tick_index = 0; tick_index < 3; ++tick_index) { simulation.tick({}); }
        renderer.render(scene, simulation);
        if (renderer.visible_triangles() != 0) { throw std::runtime_error("Gun-flame attachments must disappear after the shot"); }
        std::cout << "Renderer probe passed: perspective projection, nearest depth, near-plane clipping, invalid texture\n";
        return 0;
    } catch (const std::exception& exception) {
        std::cerr << "Renderer probe failed: " << exception.what() << '\n';
        return 1;
    }
}
