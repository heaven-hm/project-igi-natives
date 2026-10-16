#include "igi/navigation.hpp"

#include <algorithm>
#include <limits>
#include <queue>
#include <stdexcept>

namespace igi::gameplay {

std::vector<Vector3> find_navigation_path(const NavigationGraph& graph, Vector3 start, Vector3 destination) {
    if (!finite(start) || !finite(destination)) { throw std::runtime_error("Navigation endpoints must be finite"); }
    if (graph.nodes.empty()) { return {}; }
    const auto closest = [&](Vector3 position) {
        std::size_t nearest = 0;
        float nearest_distance = std::numeric_limits<float>::infinity();
        for (std::size_t node_index = 0; node_index < graph.nodes.size(); ++node_index) {
            if (!finite(graph.nodes[node_index].position)) { throw std::runtime_error("Navigation node position is invalid"); }
            const float distance = length(graph.nodes[node_index].position - position);
            if (distance < nearest_distance) { nearest = node_index; nearest_distance = distance; }
        }
        return nearest;
    };
    const auto start_index = closest(start);
    const auto destination_index = closest(destination);
    using QueueEntry = std::pair<float, std::size_t>;
    std::priority_queue<QueueEntry, std::vector<QueueEntry>, std::greater<>> frontier;
    std::vector<float> costs(graph.nodes.size(), std::numeric_limits<float>::infinity());
    std::vector<std::size_t> parents(graph.nodes.size(), graph.nodes.size());
    costs[start_index] = 0;
    frontier.push({length(graph.nodes[start_index].position - graph.nodes[destination_index].position), start_index});
    while (!frontier.empty()) {
        const auto [priority, current_index] = frontier.top();
        frontier.pop();
        const auto& current = graph.nodes[current_index];
        const float heuristic = length(current.position - graph.nodes[destination_index].position);
        if (priority > costs[current_index] + heuristic + 0.0001f) { continue; }
        if (current_index == destination_index) {
            std::vector<Vector3> route;
            for (auto node_index = current_index; node_index != graph.nodes.size(); node_index = parents[node_index]) {
                route.push_back(graph.nodes[node_index].position);
            }
            std::reverse(route.begin(), route.end());
            return route;
        }
        for (const auto neighbor_index : current.neighbors) {
            if (neighbor_index >= graph.nodes.size()) { throw std::runtime_error("Navigation edge references a missing node"); }
            const float candidate_cost = costs[current_index] + length(current.position - graph.nodes[neighbor_index].position);
            if (candidate_cost < costs[neighbor_index]) {
                costs[neighbor_index] = candidate_cost;
                parents[neighbor_index] = current_index;
                frontier.push({candidate_cost + length(graph.nodes[neighbor_index].position - graph.nodes[destination_index].position), neighbor_index});
            }
        }
    }
    return {};
}

}
