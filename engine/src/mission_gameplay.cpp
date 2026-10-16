#include "igi/mission_gameplay.hpp"

#include "igi/diagnostics.hpp"
#include "graph_parser.h"
#include "qvm_parser.h"

#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <unordered_map>
#include <unordered_set>

namespace igi::assets {
namespace {

const ScriptCall* child_call(const ScriptValue& value, const std::vector<ScriptCall>& calls) {
    return value.call_index < calls.size() ? &calls[value.call_index] : nullptr;
}

int patrol_identifier(const std::filesystem::path& mission_directory, int identifier) {
    const auto script = QVM_Parse(resolve_path(mission_directory, "ai/" + std::to_string(identifier) + ".qvm").string());
    if (!script.valid) { throw std::runtime_error("Cannot parse original soldier AI: " + script.error); }
    for (std::size_t instruction_index = 1; instruction_index < script.instructions.size(); ++instruction_index) {
        const auto& instruction = script.instructions[instruction_index];
        const auto& previous = script.instructions[instruction_index - 1];
        if (instruction.type != QVMOpType::CALL || instruction.call_targets.empty() ||
            (previous.type != QVMOpType::PUSHII && previous.type != QVMOpType::PUSHIIB && previous.type != QVMOpType::PUSHIIW) ||
            previous.operand >= script.identifiers.size() || script.identifiers[previous.operand] != "AIAction_Patrol") { continue; }
        const auto target_address = instruction.call_targets.front();
        for (const auto& argument : script.instructions) {
            if (argument.address != static_cast<std::uint32_t>(target_address)) { continue; }
            if (argument.type == QVMOpType::PUSH || argument.type == QVMOpType::PUSHB || argument.type == QVMOpType::PUSHW) {
                return static_cast<int>(argument.operand);
            }
        }
    }
    return -1;
}

void load_graphs(gameplay::MissionScene& scene, const std::filesystem::path& mission_directory,
                 const std::array<double, 3>& origin, const std::vector<ScriptCall>& calls) {
    std::size_t total_nodes = 0;
    for (const auto& call : calls) {
        if (call.function != "Task_New" || call.arguments.size() < 6 || call.arguments[1].text != "AIGraph") { continue; }
        const int identifier = static_cast<int>(call.arguments[0].number);
        const auto parsed = GRAPH_Parse(resolve_path(mission_directory, "graphs/graph" + std::to_string(identifier) + ".dat").string());
        if (!parsed.valid || parsed.nodes.size() > 10000 || parsed.edges.size() > 100000) {
            throw std::runtime_error("Invalid original navigation graph " + std::to_string(identifier) + ": " + parsed.error);
        }
        gameplay::NavigationGraph graph{identifier, {}};
        std::unordered_map<int, std::size_t> node_indices;
        for (const auto& node : parsed.nodes) {
            const gameplay::Vector3 position{
                static_cast<float>((call.arguments[3].number + node.x - origin[0]) / 4096.0),
                static_cast<float>((call.arguments[4].number + node.y - origin[1]) / 4096.0),
                static_cast<float>((call.arguments[5].number + node.z - origin[2]) / 4096.0)};
            if (!gameplay::finite(position) || !node_indices.emplace(node.id, graph.nodes.size()).second) {
                throw std::runtime_error("Navigation graph contains an invalid or duplicate node");
            }
            graph.nodes.push_back({node.id, position, {}});
        }
        for (const auto& edge : parsed.edges) {
            const auto first = node_indices.find(edge.node1);
            const auto second = node_indices.find(edge.node2);
            if (first == node_indices.end() || second == node_indices.end()) {
                throw std::runtime_error("Navigation graph edge references an unknown node");
            }
            graph.nodes[first->second].neighbors.push_back(second->second);
            graph.nodes[second->second].neighbors.push_back(first->second);
        }
        total_nodes += graph.nodes.size();
        scene.navigation_graphs.push_back(std::move(graph));
    }
    diagnostics::log(diagnostics::Severity::information, "navigation", "Loaded " +
        std::to_string(scene.navigation_graphs.size()) + " original graphs and " + std::to_string(total_nodes) + " nodes");
}

}

std::vector<bool> gameplay_task_mask(const std::vector<ScriptCall>& calls) {
    std::vector<bool> enabled(calls.size(), true);
    for (std::size_t remaining = calls.size(); remaining > 0; --remaining) {
        const auto call_index = remaining - 1;
        const auto& call = calls[call_index];
        if (call.function == "Task_New" && call.arguments.size() > 3 &&
            call.arguments[1].text == "ConditionalContainer" &&
            call.arguments[3].text.find("CutScene_") != std::string::npos) {
            enabled[call_index] = false;
        }
        if (enabled[call_index]) { continue; }
        for (const auto& argument : call.arguments) {
            if (argument.call_index < calls.size()) { enabled[argument.call_index] = false; }
        }
    }
    return enabled;
}

void load_mission_gameplay(gameplay::MissionScene& scene, MissionAssets& library,
                          const std::filesystem::path& mission_directory,
                          const std::array<double, 3>& origin, const std::vector<ScriptCall>& calls) {
    load_graphs(scene, mission_directory, origin, calls);
    const auto enabled_tasks = gameplay_task_mask(calls);
    std::unordered_set<std::string> owned_weapons;
    std::unordered_map<std::string, std::uint32_t> ammunition;
    for (const auto& call : calls) {
        if (call.function != "Task_New" || call.arguments.size() < 3) { continue; }
        const auto& task_type = call.arguments[1].text;
        if (task_type == "HumanPlayer") {
            for (const auto& argument : call.arguments) {
                const auto* child = child_call(argument, calls);
                if (child == nullptr || child->arguments.size() < 5) { continue; }
                const auto& child_type = child->arguments[1].text;
                if (child_type.starts_with("Gun")) { owned_weapons.insert(child->arguments[3].text); }
                if (child_type == "AddAmmo") {
                    const auto count = child->arguments[4].number;
                    if (!std::isfinite(count) || count < 0 || count > 10000) { throw std::runtime_error("Invalid starting ammunition"); }
                    ammunition[child->arguments[3].text] += static_cast<std::uint32_t>(count);
                }
            }
        }
        if (task_type == "PatrolPath") {
            gameplay::PatrolPath path{static_cast<int>(call.arguments[0].number), {}};
            for (const auto& argument : call.arguments) {
                const auto* child = child_call(argument, calls);
                if (child != nullptr && child->arguments.size() >= 5 && child->arguments[1].text == "PatrolPathCommand") {
                    path.commands.push_back({static_cast<int>(child->arguments[3].number), static_cast<int>(child->arguments[4].number)});
                }
            }
            scene.patrol_paths.push_back(std::move(path));
        }
        if (task_type == "HumanSoldier") {
            auto actor = std::find_if(scene.actors.begin(), scene.actors.end(), [&](const auto& candidate) {
                return candidate.source_call_index == static_cast<std::size_t>(&call - calls.data());
            });
            if (actor == scene.actors.end()) { continue; }
            actor->gameplay_enabled = enabled_tasks[actor->source_call_index];
            if (!actor->gameplay_enabled) {
                diagnostics::log(diagnostics::Severity::information, "scene", "Disabled cutscene actor " + std::to_string(actor->identifier));
                continue;
            }
            for (const auto& argument : call.arguments) {
                const auto* child = child_call(argument, calls);
                if (child == nullptr || child->arguments.size() < 5) { continue; }
                if (child->arguments[1].text == "HumanAI") {
                    actor->navigation_graph_identifier = static_cast<int>(child->arguments[4].number);
                    actor->patrol_path_identifier = patrol_identifier(mission_directory, static_cast<int>(child->arguments[0].number));
                } else if (child->arguments[1].text.starts_with("Gun")) {
                    actor->weapon_identifier = child->arguments[3].text;
                }
            }
        }
        if (task_type == "GunPickup" && call.arguments.size() > 9 && enabled_tasks[static_cast<std::size_t>(&call - calls.data())]) {
            scene.weapon_pickups.push_back({{
                static_cast<float>((call.arguments[3].number - origin[0]) / 4096.0),
                static_cast<float>((call.arguments[4].number - origin[1]) / 4096.0),
                static_cast<float>((call.arguments[5].number - origin[2]) / 4096.0)}, call.arguments[9].text});
        }
    }
    const auto weapon_directory = resolve_path(scene.game_directory, "weapons");
    std::vector<std::filesystem::path> directories;
    for (const auto& entry : std::filesystem::directory_iterator(weapon_directory)) {
        if (entry.is_directory()) { directories.push_back(entry.path()); }
    }
    std::sort(directories.begin(), directories.end());
    for (const auto& directory : directories) {
        const auto bytes = read_file(resolve_path(directory, "weapon.qvm"));
        const QvmInitializer script{BinaryView(bytes)};
        for (const auto& call : script.calls()) {
            if (call.function != "DefineWeaponType" || call.arguments.size() < 30) { continue; }
            const auto& arguments = call.arguments;
            const bool melee = arguments[5].text == "WEAPONTYPE_KNIFE";
            if (!melee && arguments[5].text != "WEAPONTYPE_GUN" && arguments[5].text != "WEAPONTYPE_PISTOL") { continue; }
            const double capacity = melee ? 1 : arguments[16].number;
            if (!std::isfinite(capacity) || capacity < 1 || capacity > 1000) { continue; }
            gameplay::SceneWeapon weapon;
            weapon.identifier = arguments[1].text;
            weapon.parameters = {arguments[2].text, static_cast<std::uint32_t>(capacity),
                static_cast<float>(arguments[15].number), static_cast<float>(arguments[10].number),
                static_cast<float>(arguments[13].number), static_cast<float>(arguments[12].number)};
            weapon.parameters.melee = melee;
            weapon.parameters.automatic = !melee && arguments[17].number > 1;
            weapon.parameters.maximum_distance = melee ? 1.8f : 400.0f;
            weapon.initially_owned = owned_weapons.contains(weapon.identifier);
            const auto ammunition_key = "AMMO_ID_" + std::to_string(static_cast<int>(arguments[9].number));
            weapon.ammunition_identifier = ammunition_key;
            weapon.initial_reserve = ammunition.contains(ammunition_key) ? ammunition.at(ammunition_key) : 0;
            weapon.mesh = library.model(arguments[29].text);
            scene.weapons.push_back(std::move(weapon));
        }
    }
    diagnostics::log(diagnostics::Severity::information, "gameplay-data", "Loaded " +
        std::to_string(scene.patrol_paths.size()) + " patrol paths, " + std::to_string(scene.weapons.size()) +
        " weapon definitions; player owns " + std::to_string(owned_weapons.size()) + " weapons");
}

}
