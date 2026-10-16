#pragma once

#include "igi/mission_scene.hpp"

#include <span>

namespace igi::gameplay {

struct RayHit final {
    bool hit{};
    float distance{};
    Vector3 position;
    Vector3 normal;
};

class CollisionWorld final {
  public:
    explicit CollisionWorld(std::span<const CollisionTriangle> triangles);
    [[nodiscard]] RayHit raycast(Vector3 origin, Vector3 direction, float maximum_distance,
                                 bool walkable_only = false) const;
    [[nodiscard]] Vector3 move_capsule(Vector3 feet, Vector3 displacement, float height,
                                      float radius = 0.3f) const;

  private:
    struct Bounds final { Vector3 minimum; Vector3 maximum; };
    struct Node final {
        Bounds bounds;
        std::size_t begin{};
        std::size_t count{};
        std::size_t first_child{};
        std::size_t second_child{};
    };
    [[nodiscard]] std::size_t build(std::size_t begin, std::size_t end);
    void overlapping(std::size_t node_index, const Bounds& bounds,
                     std::vector<std::size_t>& candidates) const;
    std::span<const CollisionTriangle> triangles_;
    std::vector<std::size_t> indices_;
    std::vector<Node> nodes_;
};

} // namespace igi::gameplay
