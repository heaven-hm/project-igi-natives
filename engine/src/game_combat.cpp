#include "igi/game_simulation.hpp"

#include "igi/diagnostics.hpp"

#include <algorithm>
#include <limits>
#include <stdexcept>

namespace igi::gameplay {
namespace {

constexpr float tick_duration = 1.0f / 30.0f;

float capsule_intersection(Vector3 origin, Vector3 direction, Vector3 feet, float height,
                           float radius, float maximum_distance) {
    float nearest = maximum_distance;
    const Vector3 relative = origin - feet;
    const float quadratic = direction.x * direction.x + direction.y * direction.y;
    const float mixed = relative.x * direction.x + relative.y * direction.y;
    const float constant = relative.x * relative.x + relative.y * relative.y - radius * radius;
    const float determinant = mixed * mixed - quadratic * constant;
    if (quadratic > 0.000001f && determinant >= 0) {
        const float distance = (-mixed - std::sqrt(determinant)) / quadratic;
        const float vertical = relative.z + direction.z * distance;
        if (distance >= 0 && distance < nearest && vertical >= radius && vertical <= height - radius) {
            nearest = distance;
        }
    }
    for (const float sphere_height : {radius, height - radius}) {
        const Vector3 difference = origin - feet - Vector3{0, 0, sphere_height};
        const float projection = dot(difference, direction);
        const float sphere_determinant = projection * projection - dot(difference, difference) + radius * radius;
        if (sphere_determinant < 0) { continue; }
        const float distance = -projection - std::sqrt(sphere_determinant);
        if (distance >= 0 && distance < nearest) { nearest = distance; }
    }
    return nearest;
}

} // namespace

void GameSimulation::advance_weapon(const PlayerInput& input) {
    const auto& parameters = scene_.weapon_parameters;
    if (!std::isfinite(parameters.shots_per_minute) || !std::isfinite(parameters.muzzle_velocity) ||
        !std::isfinite(parameters.reload_seconds) || !std::isfinite(parameters.damage) ||
        parameters.shots_per_minute <= 0 || parameters.magazine_capacity == 0 ||
        parameters.muzzle_velocity <= 0 || parameters.reload_seconds <= 0 || parameters.damage <= 0) {
        throw std::runtime_error("Original weapon parameters are invalid");
    }
    weapon_.cooldown -= tick_duration;
    weapon_.muzzle_flash_remaining = std::max(0.0f, weapon_.muzzle_flash_remaining - tick_duration);
    weapon_.hit_marker_remaining = std::max(0.0f, weapon_.hit_marker_remaining - tick_duration);
    if (weapon_.reload_remaining > 0) {
        weapon_.reload_remaining = std::max(0.0f, weapon_.reload_remaining - tick_duration);
        if (weapon_.reload_remaining == 0) {
            const auto rounds = std::min(parameters.magazine_capacity - weapon_.magazine, weapon_.reserve);
            weapon_.magazine += rounds;
            weapon_.reserve -= rounds;
            diagnostics::log(diagnostics::Severity::information, "weapon", "Reload completed; magazine=" +
                std::to_string(weapon_.magazine) + ", reserve=" + std::to_string(weapon_.reserve));
        }
        return;
    }
    if (input.reloading && weapon_.magazine < parameters.magazine_capacity && weapon_.reserve != 0) {
        weapon_.reload_remaining = parameters.reload_seconds;
        diagnostics::log(diagnostics::Severity::information, "weapon", "Reload started");
        return;
    }
    if (input.firing && weapon_.magazine != 0 && weapon_.cooldown <= 0) {
        --weapon_.magazine;
        ++weapon_.shots_fired;
        weapon_.cooldown = std::max(weapon_.cooldown, -tick_duration) + 60.0f / parameters.shots_per_minute;
        weapon_.muzzle_flash_remaining = 0.055f;
        projectiles_.push_back({camera_position(), aim_direction(), 400.0f,
                               parameters.muzzle_velocity, parameters.damage, -1});
        diagnostics::log(diagnostics::Severity::debug, "weapon", "Projectile fired; magazine=" + std::to_string(weapon_.magazine));
    } else if (!input.firing) {
        weapon_.cooldown = std::max(weapon_.cooldown, 0.0f);
    }
}

void GameSimulation::advance_actors() {
    const auto player_eye = camera_position();
    for (std::size_t actor_index = 0; actor_index < actors_.size(); ++actor_index) {
        auto& actor = actors_[actor_index];
        if (actor.behavior == ActorBehavior::dead || scene_.actors[actor_index].team == 0 || health_ <= 0) { continue; }
        actor.cooldown = std::max(0.0f, actor.cooldown - tick_duration);
        const Vector3 eye = actor.position + Vector3{0, 0, 1.5f};
        const Vector3 to_player = player_eye - eye;
        const float distance = length(to_player);
        if (distance < 0.1f || distance > 100.0f) { continue; }
        const Vector3 direction = to_player * (1.0f / distance);
        const Vector3 facing{-std::sin(actor.heading), std::cos(actor.heading), 0};
        const bool within_view = dot(facing, direction) > 0.35f || actor.behavior != ActorBehavior::guarding;
        const auto obstruction = world_.raycast(eye, direction, distance);
        const bool visible = within_view && distance < 80 && (!obstruction.hit || obstruction.distance > distance - 0.4f);
        const bool heard_shot = weapon_.muzzle_flash_remaining > 0 && distance < 18.0f;
        if (visible || heard_shot) {
            actor.last_seen_position = player_position();
            actor.awareness_time = 5.0f;
            if (actor.behavior == ActorBehavior::guarding) {
                diagnostics::log(diagnostics::Severity::debug, "ai", "Guard " +
                    std::to_string(scene_.actors[actor_index].identifier) + " acquired player stimulus");
            }
            actor.behavior = visible ? ActorBehavior::attacking : ActorBehavior::investigating;
        } else {
            actor.awareness_time = std::max(0.0f, actor.awareness_time - tick_duration);
            if (actor.awareness_time == 0) { actor.behavior = ActorBehavior::guarding; }
            else if (actor.behavior == ActorBehavior::attacking) { actor.behavior = ActorBehavior::investigating; }
        }
        if (actor.behavior == ActorBehavior::guarding) { continue; }
        const Vector3 horizontal{actor.last_seen_position.x - actor.position.x,
                                 actor.last_seen_position.y - actor.position.y, 0};
        actor.heading = std::atan2(-horizontal.x, horizontal.y);
        if (length(horizontal) > (visible ? 12.0f : 1.0f)) {
            auto next_position = world_.move_capsule(actor.position,
                normalized(horizontal) * (1.8f * tick_duration), 1.8f);
            const auto floor = world_.raycast(next_position + Vector3{0, 0, 0.35f}, {0, 0, -1}, 0.85f, true);
            if (floor.hit) {
                next_position.z = floor.position.z;
                actor.position = next_position;
            }
        }
        if (visible && actor.cooldown == 0) {
            actor.cooldown = 0.45f;
            projectiles_.push_back({eye, direction, 100.0f, scene_.weapon_parameters.muzzle_velocity,
                                   scene_.weapon_parameters.damage, static_cast<int>(actor_index)});
        }
    }
}

void GameSimulation::advance_projectiles() {
    for (auto& projectile : projectiles_) {
        const float travel = std::min(projectile.remaining_distance, projectile.speed * tick_duration);
        const auto world_hit = world_.raycast(projectile.position, projectile.direction, travel);
        float hit_distance = world_hit.hit ? world_hit.distance : travel;
        int target_actor = -1;
        bool target_player = false;
        if (projectile.owner == -1) {
            for (std::size_t actor_index = 0; actor_index < actors_.size(); ++actor_index) {
                if (actors_[actor_index].behavior == ActorBehavior::dead) { continue; }
                const auto distance = capsule_intersection(projectile.position, projectile.direction,
                    actors_[actor_index].position, 1.8f, 0.32f, hit_distance);
                if (distance < hit_distance) {
                    hit_distance = distance;
                    target_actor = static_cast<int>(actor_index);
                }
            }
        } else if (health_ > 0) {
            const auto distance = capsule_intersection(projectile.position, projectile.direction,
                player_position(), crouching_ ? 1.1f : 1.8f, 0.3f, hit_distance);
            if (distance < hit_distance) {
                target_player = true;
            }
        }
        if (target_actor >= 0) {
            auto& actor = actors_[static_cast<std::size_t>(target_actor)];
            actor.health = std::max(0.0f, actor.health - projectile.damage);
            actor.last_seen_position = player_position();
            actor.awareness_time = 8;
            actor.behavior = actor.health <= 0 ? ActorBehavior::dead : ActorBehavior::attacking;
            ++weapon_.hits;
            weapon_.hit_marker_remaining = 0.15f;
            if (actor.behavior == ActorBehavior::dead) {
                ++weapon_.kills;
                diagnostics::log(diagnostics::Severity::information, "combat", "Soldier defeated: " +
                    std::to_string(scene_.actors[static_cast<std::size_t>(target_actor)].identifier));
            }
        }
        if (target_player) {
            health_ = std::max(0.0f, health_ - projectile.damage);
            diagnostics::log(diagnostics::Severity::debug, "combat", "Player hit; health=" + std::to_string(health_));
            if (health_ <= 0) {
                diagnostics::log(diagnostics::Severity::information, "combat", "Player died; press Enter to restart");
            }
        }
        if (world_hit.hit || target_actor >= 0 || target_player) {
            projectile.remaining_distance = 0;
        } else {
            projectile.position = projectile.position + projectile.direction * travel;
            projectile.remaining_distance -= travel;
        }
    }
    std::erase_if(projectiles_, [](const Projectile& projectile) { return projectile.remaining_distance <= 0; });
}

} // namespace igi::gameplay
