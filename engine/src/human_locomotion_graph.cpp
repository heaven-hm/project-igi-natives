#include "igi/human_locomotion_graph.hpp"

#include <initializer_list>
#include <stdexcept>

namespace igi::gameplay {
namespace {

struct OrderedTargets {
    std::array<int, 14> values{};
    std::size_t size{};
};

constexpr OrderedTargets row(std::initializer_list<int> values) {
    OrderedTargets result{};
    result.size = values.size();
    auto it = values.begin();
    for (std::size_t i = 0; i < result.size; ++i, ++it) result.values[i] = *it;
    return result;
}

constexpr std::array<OrderedTargets, HumanLocomotionGraph::state_count> graph{{
    row({29,46,47,9,12,15,16,1,4,7,8,28,19}),
    row({29,46,47,9,28,2,3,0,20}), row({29,46,47,10,28,7,1,21}),
    row({29,46,47,11,28,8,1,22}), row({29,46,47,12,28,5,6,0,23}),
    row({29,46,47,13,28,7,4,24}), row({29,46,47,14,28,8,4,25}),
    row({29,46,47,15,28,0,2,5,26}), row({29,46,47,16,28,0,3,6,27}),
    row({29,46,47,1,28,2,3,0,20}), row({29,46,47,2,28,15,9,21}),
    row({29,46,47,3,28,16,9,22}), row({29,46,47,4,28,13,14,0,23}),
    row({29,46,47,5,28,7,12,23}), row({29,46,47,6,28,15,12,23}),
    row({29,46,47,7,28,0,10,13,26}), row({29,46,47,8,28,0,11,14,27}),
    row({29,19}), row({29,0}), row({29,46,47,26,27,0,20,23}),
    row({29,46,47,21,22,19,9,1}), row({29,46,47,20,26,10,2}),
    row({29,46,47,20,27,11,3}), row({29,46,47,24,25,19,12,4}),
    row({29,46,47,26,23,13,5}), row({29,46,47,27,23,14,6}),
    row({29,46,47,19,21,24,15,7}), row({29,46,47,19,22,25,16,8}),
    row({9,12,15,16,1,4,7,8}), row({}), row({0}), row({0}), row({0}),
    row({0}), row({30,31,32,33,34,35,36}), row({0}), row({0}),
    row({39,0,40}), row({37}), row({0}), row({}), row({29}), row({}),
    row({}), row({}), row({47}), row({47,46,0}), row({}),
    row({1,0,9,7,10,8,2,12,6,8,3,5,4,11})
}};

static_assert(graph.size() == HumanLocomotionGraph::state_count);
static_assert(graph[0].values[0] == HumanLocomotionGraph::falling);
static_assert(graph[0].values[11] == HumanLocomotionGraph::jump);
static_assert(graph[1].values[0] == graph[9].values[0]);

} // namespace

std::span<const int> HumanLocomotionGraph::transitions(int state) noexcept {
    if (state < 0 || static_cast<std::size_t>(state) >= state_count) return {};
    const auto& targets = graph[static_cast<std::size_t>(state)];
    return {targets.values.data(), targets.size};
}

int HumanLocomotionGraph::run_walk_counterpart(int state) {
    if (state < 1 || state > 16) throw std::out_of_range("locomotion state has no run/walk pair");
    return state <= 8 ? state + 8 : state - 8;
}

bool HumanLocomotionGraph::is_reachable_from_idle(int state) noexcept {
    if (state < 0 || static_cast<std::size_t>(state) >= state_count) return false;
    std::array<bool, state_count> seen{};
    std::array<int, state_count> pending{};
    std::size_t head = 0;
    std::size_t tail = 0;
    pending[tail++] = 0;
    seen[0] = true;
    while (head < tail) {
        const int current = pending[head++];
        if (current == state) return true;
        for (const int next : transitions(current)) {
            if (!seen[static_cast<std::size_t>(next)]) {
                seen[static_cast<std::size_t>(next)] = true;
                pending[tail++] = next;
            }
        }
    }
    return false;
}

} // namespace igi::gameplay
