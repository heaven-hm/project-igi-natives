#include "igi/mission_scene.hpp"
#include "igi/diagnostics.hpp"

#include <exception>
#include <iostream>

int main(int argument_count, char** arguments) {
    try {
        if (argument_count != 3) {
            std::cerr << "Usage: igi_inspect_scene <game-directory> <cache-directory>\n";
            return 2;
        }
        igi::diagnostics::configure(false);
        const auto scene = igi::gameplay::load_mission(arguments[1], arguments[2]);
        std::cout << "Render triangles: " << scene.static_triangles.size()
                  << "; collision triangles: " << scene.collision_triangles.size()
                  << "; missing objects: " << scene.missing_object_count << '\n';
        for (const auto animation_identifier : {4u, 57u, 17u, 25u}) {
            const auto& clip = scene.root_motion_clips.at(animation_identifier);
            std::cout << "Animation " << animation_identifier << ": duration=" << clip.duration
                      << "; keys=" << clip.keys.size();
            if (!clip.keys.empty()) {
                const auto displacement = clip.keys.back().position - clip.keys.front().position;
                std::cout << "; displacement=" << displacement.x << ',' << displacement.y << ',' << displacement.z;
            }
            std::cout << '\n';
        }
        if (scene.static_triangles.empty() || scene.collision_triangles.empty() || scene.actors.empty()) {
            throw std::runtime_error("Original level did not produce a complete scene");
        }
        return 0;
    } catch (const std::exception& exception) {
        igi::diagnostics::log(igi::diagnostics::Severity::error, "scene-probe", exception.what());
        return 1;
    }
}
