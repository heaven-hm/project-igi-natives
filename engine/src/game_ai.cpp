#include "igi/game_simulation.hpp"

#include "igi/diagnostics.hpp"
#include "igi/navigation.hpp"

#include <algorithm>

namespace igi::gameplay {
namespace {

constexpr float tick_duration = 1.0f / 30.0f;

const NavigationGraph* actor_graph(const MissionScene& scene, std::size_t actor_index) {
    const int identifier = scene.actors[actor_index].navigation_graph_identifier;
    const auto graph = std::find_if(scene.navigation_graphs.begin(), scene.navigation_graphs.end(),
        [identifier](const auto& candidate) { return candidate.identifier == identifier; });
    return graph == scene.navigation_graphs.end() ? nullptr : &*graph;
}

}

void GameSimulation::move_actor(std::size_t actor_index, Vector3 destination, float speed) {
    auto& actor = actors_[actor_index];
    const auto* graph = actor_graph(scene_, actor_index);
    if (graph != nullptr) {
        if (actor.route_retry_time == 0 && (actor.route.empty() || length(destination - actor.route_destination) > 2.0f)) {
            actor.route = find_navigation_path(*graph, actor.position, destination);
            actor.route_index = 0;
            actor.route_destination = destination;
            actor.route_retry_time = 1.0f;
        }
        if (actor.route.empty()) { return; }
        while (actor.route_index < actor.route.size() && length(actor.route[actor.route_index] - actor.position) < 0.6f) {
            ++actor.route_index;
        }
        if (actor.route_index < actor.route.size()) { destination = actor.route[actor.route_index]; }
    }
    const Vector3 horizontal{destination.x - actor.position.x, destination.y - actor.position.y, 0};
    const float remaining = length(horizontal);
    if (remaining < 0.15f) { return; }
    actor.heading = std::atan2(-horizontal.x, horizontal.y);
    auto next_position = world_.move_capsule(actor.position,
        normalized(horizontal) * std::min(speed * tick_duration, remaining), 1.8f);
    const auto floor = world_.raycast(next_position + Vector3{0, 0, 0.4f}, {0, 0, -1}, 0.9f, true);
    if (floor.hit) {
        next_position.z = floor.position.z;
        bool occupied = false;
        for (std::size_t other_index = 0; other_index < actors_.size(); ++other_index) {
            if (other_index == actor_index || !actors_[other_index].active || actors_[other_index].behavior == ActorBehavior::dead) { continue; }
            const auto difference = next_position - actors_[other_index].position;
            if (std::abs(difference.z) < 1.6f && difference.x * difference.x + difference.y * difference.y < 0.36f) {
                occupied = true;
                break;
            }
        }
        if (!occupied && length(next_position - player_position()) > 0.65f) { actor.position = next_position; }
    }
}

void GameSimulation::advance_patrol(std::size_t actor_index) {
    auto& actor = actors_[actor_index];
    const int identifier = scene_.actors[actor_index].patrol_path_identifier;
    const auto path = std::find_if(scene_.patrol_paths.begin(), scene_.patrol_paths.end(),
        [identifier](const auto& candidate) { return candidate.identifier == identifier; });
    if (path == scene_.patrol_paths.end() || path->commands.empty()) { return; }
    if (actor.patrol_delay > 0) {
        actor.patrol_delay = std::max(0.0f, actor.patrol_delay - tick_duration);
        return;
    }
    if (actor.patrol_command_index >= path->commands.size()) {
        const auto marker = std::find_if(path->commands.begin(), path->commands.end(), [](const auto& command) { return command.kind == 6; });
        if (marker == path->commands.end() || marker + 1 == path->commands.end()) { return; }
        actor.patrol_command_index = static_cast<std::size_t>(marker - path->commands.begin()) + 1;
    }
    const auto& command = path->commands[actor.patrol_command_index];
    if (command.kind == 7 || command.kind == 8 || command.kind < 0 || command.kind > 8) { return; }
    if (command.kind == 1) {
        actor.patrol_delay = std::clamp(static_cast<float>(command.operand) * tick_duration, 0.0f, 3600.0f);
    } else if (command.kind == 2 || command.kind == 3 || command.kind == 5) {
        const auto* graph = actor_graph(scene_, actor_index);
        if (graph == nullptr) { return; }
        const auto node = std::find_if(graph->nodes.begin(), graph->nodes.end(), [&](const auto& candidate) {
            return candidate.identifier == command.operand;
        });
        if (node == graph->nodes.end()) { return; }
        if (command.kind == 5) {
            const auto difference = node->position - actor.position;
            actor.heading = std::atan2(-difference.x, difference.y);
        } else {
            if (length(node->position - actor.position) > 0.7f) {
                move_actor(actor_index, node->position, command.kind == 3 ? 3.5f : 1.5f);
                return;
            }
            actor.route.clear();
            actor.route_retry_time = 0;
        }
    } else if (command.kind == 0) {
        actor.patrol_delay = 1.0f;
    }
    ++actor.patrol_command_index;
}

void GameSimulation::advance_actors() {
    const auto player_eye = camera_position();
    for (std::size_t actor_index = 0; actor_index < actors_.size(); ++actor_index) {
        auto& actor = actors_[actor_index];
        if (!actor.active || actor.behavior == ActorBehavior::dead || scene_.actors[actor_index].team == 0 || health_ <= 0) { continue; }
        actor.cooldown = std::max(0.0f, actor.cooldown - tick_duration);
        actor.route_retry_time = std::max(0.0f, actor.route_retry_time - tick_duration);
        const Vector3 eye = actor.position + Vector3{0, 0, 1.5f};
        const Vector3 to_player = player_eye - eye;
        const float distance = length(to_player);
        const Vector3 direction = normalized(to_player);
        const Vector3 facing{-std::sin(actor.heading), std::cos(actor.heading), 0};
        const bool within_view = dot(facing, direction) > 0.35f || actor.behavior != ActorBehavior::guarding;
        bool visible = false;
        if (within_view && distance > 0.1f && distance < 80.0f) {
            const auto obstruction = world_.raycast(eye, direction, distance);
            visible = !obstruction.hit || obstruction.distance > distance - 0.3f;
        }
        const bool heard_shot = weapon_.muzzle_flash_remaining > 0 && distance < 18.0f && !weapon_parameters().melee;
        if (visible || heard_shot) {
            actor.last_seen_position = player_position();
            actor.awareness_time = 5.0f;
            if (actor.behavior == ActorBehavior::guarding) {
                actor.reaction_time = 0;
                actor.route.clear();
                diagnostics::log(diagnostics::Severity::debug, "ai", "Soldier " +
                    std::to_string(scene_.actors[actor_index].identifier) + " acquired player stimulus");
            }
            actor.behavior = visible ? ActorBehavior::attacking : ActorBehavior::investigating;
        } else {
            actor.reaction_time = 0;
            actor.awareness_time = std::max(0.0f, actor.awareness_time - tick_duration);
            if (actor.awareness_time == 0) {
                if (actor.behavior != ActorBehavior::guarding) { actor.route.clear(); }
                actor.behavior = ActorBehavior::guarding;
            } else if (actor.behavior == ActorBehavior::attacking) { actor.behavior = ActorBehavior::investigating; }
        }
        if (actor.behavior == ActorBehavior::guarding) { advance_patrol(actor_index); continue; }
        if (!visible || distance > 35.0f) { move_actor(actor_index, actor.last_seen_position, 1.8f); }
        else { actor.heading = std::atan2(-to_player.x, to_player.y); }
        if (!visible) { continue; }
        actor.reaction_time += tick_duration;
        if (actor.reaction_time < 0.6f || actor.cooldown > 0) { continue; }
        actor.cooldown = 0.45f;
        const auto definition = std::find_if(scene_.weapons.begin(), scene_.weapons.end(), [&](const auto& candidate) {
            return candidate.identifier == scene_.actors[actor_index].weapon_identifier;
        });
        const auto& parameters = definition == scene_.weapons.end() ? scene_.weapon_parameters : definition->parameters;
        const float phase = static_cast<float>((tick_count_ * 17 + actor_index * 37) % 101);
        const Vector3 aim_error{std::sin(phase * 1.7f) * distance * 0.018f,
                                std::cos(phase * 2.3f) * distance * 0.018f,
                                std::sin(phase * 0.9f) * distance * 0.012f};
        const auto muzzle = actor.position + Vector3{0, 0, 1.5f};
        projectiles_.push_back({muzzle, normalized(player_eye + aim_error - muzzle), 100.0f,
                               parameters.muzzle_velocity, parameters.damage, static_cast<int>(actor_index)});
    }
}

}
