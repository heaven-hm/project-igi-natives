#include "igi/collision_world.hpp"

#include <exception>
#include <iostream>
#include <limits>
#include <stdexcept>

using namespace igi::gameplay;

void require(bool condition, const char* message) {
    if (!condition) { throw std::runtime_error(message); }
}

int main() {
    try {
        const std::vector<CollisionTriangle> geometry{
            {{Vector3{-10, -10, 0}, Vector3{10, -10, 0}, Vector3{10, 10, 0}}},
            {{Vector3{-10, -10, 0}, Vector3{10, 10, 0}, Vector3{-10, 10, 0}}},
            {{Vector3{2, -10, 0}, Vector3{2, 10, 0}, Vector3{2, 10, 4}}},
            {{Vector3{2, -10, 0}, Vector3{2, 10, 4}, Vector3{2, -10, 4}}},
            {{Vector3{-10, -10, 3}, Vector3{10, 10, 3}, Vector3{10, -10, 3}}},
            {{Vector3{-10, -10, 3}, Vector3{-10, 10, 3}, Vector3{10, 10, 3}}}
        };
        const CollisionWorld world(geometry);
        const auto ground = world.raycast({0, 0, 2}, {0, 0, -1}, 4, true);
        require(ground.hit && std::abs(ground.position.z) < 0.0001f && ground.normal.z > 0.99f,
                "Floor ray must return the actual triangle plane and upward normal");
        require(!world.raycast({20, 0, 2}, {0, 0, -1}, 4).hit,
                "Ground query must not invent a floor outside the mesh");
        const auto wall = world.raycast({0, 0, 1}, {1, 0, 0}, 10);
        require(wall.hit && std::abs(wall.distance - 2.0f) < 0.0001f, "Ray must hit the nearest wall");
        const auto blocked = world.move_capsule({0, 0, 0}, {4, 0, 0}, 1.8f);
        require(blocked.x < 1.701f && blocked.x > 1.68f, "Capsule must not tunnel through a thin wall");
        const auto sliding = world.move_capsule({0, 0, 0}, {4, 2, 0}, 1.8f);
        require(sliding.x < 1.701f && sliding.y > 1.9f, "Capsule must slide along the wall");
        const auto landing = world.move_capsule({0, 0, 1}, {0, 0, -2}, 1.8f);
        require(landing.z > -0.001f && landing.z < 0.01f, "Capsule must land on the mesh floor");
        const auto ceiling = world.move_capsule({0, 0, 0}, {0, 0, 2}, 1.8f);
        require(ceiling.z < 1.201f, "Standing capsule must stop at the ceiling");
        bool rejected_invalid_ray = false;
        try {
            static_cast<void>(world.raycast({std::numeric_limits<float>::quiet_NaN(), 0, 0}, {0, 0, -1}, 1));
        } catch (const std::runtime_error&) { rejected_invalid_ray = true; }
        require(rejected_invalid_ray, "Non-finite collision input must fail explicitly");
        std::cout << "Collision probe passed: floor, bounds, ray occlusion, wall sweep, slide, landing, ceiling, invalid input\n";
        return 0;
    } catch (const std::exception& exception) {
        std::cerr << "Collision probe failed: " << exception.what() << '\n';
        return 1;
    }
}
