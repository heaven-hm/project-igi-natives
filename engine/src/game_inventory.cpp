#include "igi/game_simulation.hpp"

#include "igi/diagnostics.hpp"

#include <algorithm>

namespace igi::gameplay {

const SceneWeapon* GameSimulation::weapon_definition() const noexcept {
    return inventory_.empty() ? nullptr : &scene_.weapons[inventory_[selected_weapon_slot_].definition_index];
}

const WeaponParameters& GameSimulation::weapon_parameters() const noexcept {
    return inventory_.empty() ? scene_.weapon_parameters :
        scene_.weapons[inventory_[selected_weapon_slot_].definition_index].parameters;
}

std::shared_ptr<SceneMesh> GameSimulation::weapon_mesh() const noexcept {
    return inventory_.empty() ? scene_.weapon_mesh : scene_.weapons[inventory_[selected_weapon_slot_].definition_index].mesh;
}

void GameSimulation::select_weapon(std::size_t slot) {
    if (slot >= inventory_.size() || slot == selected_weapon_slot_) { return; }
    const auto& ammunition_identifier = scene_.weapons[inventory_[selected_weapon_slot_].definition_index].ammunition_identifier;
    for (auto& item : inventory_) {
        if (scene_.weapons[item.definition_index].ammunition_identifier == ammunition_identifier) { item.state.reserve = weapon_.reserve; }
    }
    weapon_.reload_remaining = 0;
    inventory_[selected_weapon_slot_].state = weapon_;
    const auto previous = weapon_;
    selected_weapon_slot_ = slot;
    weapon_ = inventory_[slot].state;
    weapon_.shots_fired = previous.shots_fired;
    weapon_.hits = previous.hits;
    weapon_.kills = previous.kills;
    weapon_.hit_marker_remaining = 0;
    weapon_.muzzle_flash_remaining = 0;
    weapon_.animation_identifier = -1;
    weapon_.animation_time = 0;
    diagnostics::log(diagnostics::Severity::information, "inventory", "Selected slot " +
        std::to_string(slot + 1) + ": " + weapon_parameters().name);
}

void GameSimulation::collect_weapons() {
    const auto acquire = [&](const std::string& identifier) {
        const auto definition = std::find_if(scene_.weapons.begin(), scene_.weapons.end(), [&](const auto& candidate) {
            return candidate.identifier == identifier;
        });
        if (definition == scene_.weapons.end()) { return false; }
        const auto definition_index = static_cast<std::size_t>(definition - scene_.weapons.begin());
        auto owned = std::find_if(inventory_.begin(), inventory_.end(), [&](const auto& item) {
            return item.definition_index == definition_index;
        });
        if (owned == inventory_.end()) {
            WeaponState state;
            state.magazine = definition->parameters.magazine_capacity;
            state.reserve = 0;
            for (std::size_t slot = 0; slot < inventory_.size(); ++slot) {
                if (scene_.weapons[inventory_[slot].definition_index].ammunition_identifier == definition->ammunition_identifier) {
                    state.reserve = slot == selected_weapon_slot_ ? weapon_.reserve : inventory_[slot].state.reserve;
                    break;
                }
            }
            inventory_.push_back({definition_index, state});
        } else {
            std::uint32_t reserve = owned == inventory_.begin() + static_cast<std::ptrdiff_t>(selected_weapon_slot_) ?
                weapon_.reserve : owned->state.reserve;
            const auto& equipped = scene_.weapons[inventory_[selected_weapon_slot_].definition_index];
            if (equipped.ammunition_identifier == definition->ammunition_identifier) { reserve = weapon_.reserve; }
            reserve = std::min(std::uint32_t{10000}, reserve + definition->parameters.magazine_capacity);
            for (auto& item : inventory_) {
                if (scene_.weapons[item.definition_index].ammunition_identifier == definition->ammunition_identifier) { item.state.reserve = reserve; }
            }
            if (equipped.ammunition_identifier == definition->ammunition_identifier) { weapon_.reserve = reserve; }
        }
        diagnostics::log(diagnostics::Severity::information, "inventory", "Picked up " + definition->parameters.name);
        return true;
    };
    for (std::size_t pickup_index = 0; pickup_index < scene_.weapon_pickups.size(); ++pickup_index) {
        const auto& pickup = scene_.weapon_pickups[pickup_index];
        if (!pickups_collected_[pickup_index] && length(pickup.position - player_position()) < 2.5f) {
            pickups_collected_[pickup_index] = acquire(pickup.weapon_identifier);
        }
    }
    for (std::size_t actor_index = 0; actor_index < actors_.size(); ++actor_index) {
        if (actors_[actor_index].active && !soldier_weapons_collected_[actor_index] && actors_[actor_index].behavior == ActorBehavior::dead &&
            length(actors_[actor_index].position - player_position()) < 2.5f) {
            soldier_weapons_collected_[actor_index] = acquire(scene_.actors[actor_index].weapon_identifier);
        }
    }
}

}
