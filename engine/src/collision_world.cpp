#include "igi/collision_world.hpp"

#include <algorithm>
#include <limits>
#include <numeric>
#include <stdexcept>

namespace igi::gameplay {
namespace {

float component(Vector3 vector, int axis) {
    return axis == 0 ? vector.x : axis == 1 ? vector.y : vector.z;
}

bool triangle_intersection(const CollisionTriangle& triangle, Vector3 origin, Vector3 direction,
                           float maximum_distance, float& distance) {
    const Vector3 first_edge = triangle.positions[1] - triangle.positions[0];
    const Vector3 second_edge = triangle.positions[2] - triangle.positions[0];
    const Vector3 perpendicular = cross(direction, second_edge);
    const float determinant = dot(first_edge, perpendicular);
    if (std::abs(determinant) < 0.000001f) {
        return false;
    }
    const float inverse = 1.0f / determinant;
    const Vector3 relative = origin - triangle.positions[0];
    const float first_weight = dot(relative, perpendicular) * inverse;
    const Vector3 second_cross = cross(relative, first_edge);
    const float second_weight = dot(direction, second_cross) * inverse;
    distance = dot(second_edge, second_cross) * inverse;
    return first_weight >= 0.0f && second_weight >= 0.0f &&
           first_weight + second_weight <= 1.0f && distance >= 0.0f && distance <= maximum_distance;
}

Vector3 closest_on_triangle(Vector3 point, const CollisionTriangle& triangle) {
    const Vector3 first = triangle.positions[0];
    const Vector3 second = triangle.positions[1];
    const Vector3 third = triangle.positions[2];
    const Vector3 first_edge = second - first;
    const Vector3 second_edge = third - first;
    const Vector3 first_relative = point - first;
    const float first_dot = dot(first_edge, first_relative);
    const float second_dot = dot(second_edge, first_relative);
    if (first_dot <= 0 && second_dot <= 0) { return first; }
    const Vector3 second_relative = point - second;
    const float third_dot = dot(first_edge, second_relative);
    const float fourth_dot = dot(second_edge, second_relative);
    if (third_dot >= 0 && fourth_dot <= third_dot) { return second; }
    const float first_area = first_dot * fourth_dot - third_dot * second_dot;
    if (first_area <= 0 && first_dot >= 0 && third_dot <= 0) {
        return first + first_edge * (first_dot / (first_dot - third_dot));
    }
    const Vector3 third_relative = point - third;
    const float fifth_dot = dot(first_edge, third_relative);
    const float sixth_dot = dot(second_edge, third_relative);
    if (sixth_dot >= 0 && fifth_dot <= sixth_dot) { return third; }
    const float second_area = fifth_dot * second_dot - first_dot * sixth_dot;
    if (second_area <= 0 && second_dot >= 0 && sixth_dot <= 0) {
        return first + second_edge * (second_dot / (second_dot - sixth_dot));
    }
    const float third_area = third_dot * sixth_dot - fifth_dot * fourth_dot;
    if (third_area <= 0 && fourth_dot - third_dot >= 0 && fifth_dot - sixth_dot >= 0) {
        return second + (third - second) * ((fourth_dot - third_dot) /
               ((fourth_dot - third_dot) + (fifth_dot - sixth_dot)));
    }
    const float inverse_area = 1.0f / (first_area + second_area + third_area);
    return first + first_edge * (second_area * inverse_area) + second_edge * (first_area * inverse_area);
}

std::pair<Vector3, Vector3> closest_segments(Vector3 first_start, Vector3 first_end,
                                           Vector3 second_start, Vector3 second_end) {
    const Vector3 first_direction = first_end - first_start;
    const Vector3 second_direction = second_end - second_start;
    const Vector3 relative = first_start - second_start;
    const float first_length = dot(first_direction, first_direction);
    const float second_length = dot(second_direction, second_direction);
    const float mixed = dot(first_direction, second_direction);
    const float first_relative = dot(first_direction, relative);
    const float second_relative = dot(second_direction, relative);
    const float denominator = first_length * second_length - mixed * mixed;
    float first_parameter = denominator > 0.000001f ?
        std::clamp((mixed * second_relative - first_relative * second_length) / denominator, 0.0f, 1.0f) : 0.0f;
    float second_parameter = second_length > 0.000001f ?
        std::clamp((mixed * first_parameter + second_relative) / second_length, 0.0f, 1.0f) : 0.0f;
    first_parameter = first_length > 0.000001f ?
        std::clamp((mixed * second_parameter - first_relative) / first_length, 0.0f, 1.0f) : 0.0f;
    return {first_start + first_direction * first_parameter, second_start + second_direction * second_parameter};
}

std::pair<Vector3, Vector3> closest_capsule_triangle(Vector3 lower, Vector3 upper,
                                                   const CollisionTriangle& triangle) {
    std::pair<Vector3, Vector3> closest{lower, closest_on_triangle(lower, triangle)};
    float distance_squared = dot(closest.first - closest.second, closest.first - closest.second);
    const auto consider = [&](Vector3 capsule_point, Vector3 triangle_point) {
        const float candidate_distance = dot(capsule_point - triangle_point, capsule_point - triangle_point);
        if (candidate_distance < distance_squared) {
            closest = {capsule_point, triangle_point};
            distance_squared = candidate_distance;
        }
    };
    consider(upper, closest_on_triangle(upper, triangle));
    for (std::size_t edge_index = 0; edge_index < 3; ++edge_index) {
        const auto points = closest_segments(lower, upper, triangle.positions[edge_index],
                                             triangle.positions[(edge_index + 1) % 3]);
        consider(points.first, points.second);
    }
    const float segment_length = length(upper - lower);
    float distance = 0;
    if (segment_length > 0 && triangle_intersection(triangle, lower,
        (upper - lower) * (1.0f / segment_length), segment_length, distance)) {
        const auto intersection = lower + (upper - lower) * (distance / segment_length);
        return {intersection, intersection};
    }
    return closest;
}

} // namespace

CollisionWorld::CollisionWorld(std::span<const CollisionTriangle> triangles) : triangles_(triangles) {
    for (std::size_t triangle_index = 0; triangle_index < triangles.size(); ++triangle_index) {
        const auto& triangle = triangles[triangle_index];
        if (!finite(triangle.positions[0]) || !finite(triangle.positions[1]) || !finite(triangle.positions[2])) {
            throw std::runtime_error("Collision mesh contains a non-finite vertex");
        }
        if (length(cross(triangle.positions[1] - triangle.positions[0],
                         triangle.positions[2] - triangle.positions[0])) > 0.000001f) {
            indices_.push_back(triangle_index);
        }
    }
    if (!indices_.empty()) {
        static_cast<void>(build(0, indices_.size()));
    }
}

std::size_t CollisionWorld::build(std::size_t begin, std::size_t end) {
    const float infinity = std::numeric_limits<float>::infinity();
    Node node{{{infinity, infinity, infinity}, {-infinity, -infinity, -infinity}}, begin, end - begin, 0, 0};
    for (std::size_t offset = begin; offset < end; ++offset) {
        for (const auto& position : triangles_[indices_[offset]].positions) {
            node.bounds.minimum = {std::min(node.bounds.minimum.x, position.x),
                                   std::min(node.bounds.minimum.y, position.y), std::min(node.bounds.minimum.z, position.z)};
            node.bounds.maximum = {std::max(node.bounds.maximum.x, position.x),
                                   std::max(node.bounds.maximum.y, position.y), std::max(node.bounds.maximum.z, position.z)};
        }
    }
    const auto node_index = nodes_.size();
    nodes_.push_back(node);
    if (end - begin > 8) {
        const Vector3 extent = node.bounds.maximum - node.bounds.minimum;
        const int axis = extent.x > extent.y && extent.x > extent.z ? 0 : extent.y > extent.z ? 1 : 2;
        const auto middle = begin + (end - begin) / 2;
        std::nth_element(indices_.begin() + static_cast<std::ptrdiff_t>(begin),
                         indices_.begin() + static_cast<std::ptrdiff_t>(middle),
                         indices_.begin() + static_cast<std::ptrdiff_t>(end), [&](auto first, auto second) {
            const auto& first_triangle = triangles_[first].positions;
            const auto& second_triangle = triangles_[second].positions;
            return component(first_triangle[0] + first_triangle[1] + first_triangle[2], axis) <
                   component(second_triangle[0] + second_triangle[1] + second_triangle[2], axis);
        });
        const auto first_child = build(begin, middle);
        const auto second_child = build(middle, end);
        nodes_[node_index].first_child = first_child;
        nodes_[node_index].second_child = second_child;
        nodes_[node_index].count = 0;
    }
    return node_index;
}

void CollisionWorld::overlapping(std::size_t node_index, const Bounds& bounds,
                                 std::vector<std::size_t>& candidates) const {
    const auto& node = nodes_[node_index];
    if (node.bounds.minimum.x > bounds.maximum.x || node.bounds.maximum.x < bounds.minimum.x ||
        node.bounds.minimum.y > bounds.maximum.y || node.bounds.maximum.y < bounds.minimum.y ||
        node.bounds.minimum.z > bounds.maximum.z || node.bounds.maximum.z < bounds.minimum.z) {
        return;
    }
    if (node.count != 0) {
        for (std::size_t offset = node.begin; offset < node.begin + node.count; ++offset) {
            candidates.push_back(indices_[offset]);
        }
    } else {
        overlapping(node.first_child, bounds, candidates);
        overlapping(node.second_child, bounds, candidates);
    }
}

RayHit CollisionWorld::raycast(Vector3 origin, Vector3 direction, float maximum_distance,
                               bool walkable_only) const {
    if (!finite(origin) || !finite(direction) || !std::isfinite(maximum_distance) || maximum_distance < 0) {
        throw std::runtime_error("Raycast arguments are invalid");
    }
    direction = normalized(direction);
    RayHit hit{false, maximum_distance, {}, {}};
    if (nodes_.empty() || length(direction) == 0) { return hit; }
    std::vector<std::size_t> pending{0};
    while (!pending.empty()) {
        const auto node_index = pending.back();
        pending.pop_back();
        const auto& node = nodes_[node_index];
        float near_distance = 0;
        float far_distance = hit.distance;
        bool intersects = true;
        for (int axis = 0; axis < 3; ++axis) {
            const float ray_direction = component(direction, axis);
            const float ray_origin = component(origin, axis);
            const float minimum = component(node.bounds.minimum, axis);
            const float maximum = component(node.bounds.maximum, axis);
            if (std::abs(ray_direction) < 0.000001f) {
                if (ray_origin < minimum || ray_origin > maximum) { intersects = false; }
            } else {
                const float first = (minimum - ray_origin) / ray_direction;
                const float second = (maximum - ray_origin) / ray_direction;
                near_distance = std::max(near_distance, std::min(first, second));
                far_distance = std::min(far_distance, std::max(first, second));
            }
        }
        if (!intersects || far_distance < near_distance) { continue; }
        if (node.count == 0) {
            pending.push_back(node.first_child);
            pending.push_back(node.second_child);
            continue;
        }
        for (std::size_t offset = node.begin; offset < node.begin + node.count; ++offset) {
            const auto& triangle = triangles_[indices_[offset]];
            const auto normal = normalized(cross(triangle.positions[1] - triangle.positions[0],
                                                  triangle.positions[2] - triangle.positions[0]));
            if (walkable_only && std::abs(normal.z) < 0.55f) { continue; }
            float distance = 0;
            if (triangle_intersection(triangle, origin, direction, hit.distance, distance)) {
                hit = {true, distance, origin + direction * distance,
                       dot(normal, direction) > 0 ? normal * -1.0f : normal};
            }
        }
    }
    return hit;
}

Vector3 CollisionWorld::move_capsule(Vector3 feet, Vector3 displacement, float height, float radius) const {
    if (!finite(feet) || !finite(displacement) || !std::isfinite(height) || !std::isfinite(radius) ||
        radius <= 0 || height < radius * 2 || length(displacement) > 8.0f) {
        throw std::runtime_error("Capsule movement arguments are invalid");
    }
    if (nodes_.empty()) { return feet + displacement; }
    const int substeps = std::max(1, static_cast<int>(std::ceil(length(displacement) / (radius * 0.45f))));
    const Vector3 increment = displacement * (1.0f / static_cast<float>(substeps));
    Vector3 position = feet;
    std::vector<std::size_t> candidates;
    for (int step_index = 0; step_index < substeps; ++step_index) {
        const Vector3 previous = position;
        position = position + increment;
        for (int iteration = 0; iteration < 5; ++iteration) {
            candidates.clear();
            overlapping(0, {{position.x - radius, position.y - radius, position.z - 0.01f},
                            {position.x + radius, position.y + radius, position.z + height + 0.01f}}, candidates);
            bool resolved_contact = false;
            for (const auto triangle_index : candidates) {
                const auto& triangle = triangles_[triangle_index];
                const auto points = closest_capsule_triangle(position + Vector3{0, 0, radius},
                    position + Vector3{0, 0, height - radius}, triangle);
                const Vector3 difference = points.first - points.second;
                const float distance = length(difference);
                if (distance >= radius - 0.0001f) { continue; }
                Vector3 normal = distance > 0.000001f ? difference * (1.0f / distance) :
                    normalized(cross(triangle.positions[1] - triangle.positions[0],
                                      triangle.positions[2] - triangle.positions[0]));
                if (distance < 0.000001f && dot(normal, previous - triangle.positions[0]) < 0) {
                    normal = normal * -1.0f;
                }
                position = position + normal * (radius - distance + 0.0001f);
                resolved_contact = true;
            }
            if (!resolved_contact) { break; }
        }
    }
    return position;
}

} // namespace igi::gameplay
