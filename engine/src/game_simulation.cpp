#include "igi/game_simulation.hpp"

#include "igi/diagnostics.hpp"

#include <algorithm>
#include <array>
#include <numbers>
#include <stdexcept>

namespace igi::gameplay {
namespace {

constexpr float units_per_metre = 4096.0f;
constexpr std::array<std::uint32_t, 30> animation_identifiers{
    2, 4, 37, 35, 64, 70, 68, 11, 10, 57, 74, 72, 75, 77, 76,
    81, 80, 14, 15, 19, 17, 41, 39, 27, 49, 47, 29, 28, 25, 2};

Vector3 metres(const WorldPosition3& position) {
    return {static_cast<float>(position.x / units_per_metre),
            static_cast<float>(position.y / units_per_metre),
            static_cast<float>(position.z / units_per_metre)};
}

WorldPosition3 engine_position(Vector3 position) {
    return {static_cast<double>(position.x) * units_per_metre,
            static_cast<double>(position.y) * units_per_metre,
            static_cast<double>(position.z) * units_per_metre};
}

Vector3 sample_translation(const RootMotionClip& clip, float time) {
    if (clip.keys.empty()) { return {}; }
    if (time <= clip.keys.front().time) { return clip.keys.front().position; }
    for (std::size_t key_index = 1; key_index < clip.keys.size(); ++key_index) {
        const auto& next = clip.keys[key_index];
        if (time > next.time) { continue; }
        const auto& previous = clip.keys[key_index - 1];
        const float duration = next.time - previous.time;
        if (duration <= 0) { return next.position; }
        const float phase = (time - previous.time) / duration;
        const float phase_squared = phase * phase;
        const float phase_cubed = phase_squared * phase;
        return previous.position * (2 * phase_cubed - 3 * phase_squared + 1) +
               next.position * (-2 * phase_cubed + 3 * phase_squared) +
               previous.outgoing_tangent * (duration * (phase_cubed - 2 * phase_squared + phase)) +
               next.incoming_tangent * (duration * (phase_cubed - phase_squared));
    }
    return clip.keys.back().position;
}

} // namespace

GameSimulation::GameSimulation(const MissionScene& scene) : scene_(scene), world_(scene.collision_triangles) {
    if (!std::isfinite(scene.player_parameters.maximum_health) || scene.player_parameters.maximum_health <= 0 ||
        !std::isfinite(scene.player_parameters.root_translation_scale) || scene.player_parameters.root_translation_scale <= 0) {
        throw std::runtime_error("Original player health or root-motion scale is invalid");
    }
    restart();
}

void GameSimulation::restart() {
    player_ = {};
    const auto floor = world_.raycast({0, 0, 2.0f}, {0, 0, -1}, 40.0f, true);
    if (!floor.hit) {
        throw std::runtime_error("Player spawn has no collision floor in the original mission geometry");
    }
    player_.world_position = engine_position(floor.position);
    player_.movement_flags = HumanMovementIntegrator::grounded_flag;
    player_.wall_sweep_enabled = true;
    player_.ground_query_enabled = true;
    player_.separation_enabled = true;
    player_.slope_processing_enabled = true;
    player_.slope_normal = floor.normal;
    player_.collision_radius = 0.3f * units_per_metre;
    health_ = scene_.player_parameters.maximum_health;
    heading_ = scene_.player_heading;
    pitch_ = 0;
    crouching_ = false;
    aiming_ = false;
    animation_time_ = 0;
    previous_animation_state_ = -1;
    locomotion_state_ = 0;
    jump_was_pressed_ = false;
    tick_count_ = 0;
    weapon_ = {};
    weapon_.magazine = scene_.weapon_parameters.magazine_capacity;
    weapon_.reserve = scene_.initial_reserve_ammunition;
    inventory_.clear();
    selected_weapon_slot_ = 0;
    fire_was_pressed_ = false;
    damage_flash_remaining_ = 0;
    for (std::size_t definition_index = 0; definition_index < scene_.weapons.size(); ++definition_index) {
        const auto& definition = scene_.weapons[definition_index];
        if (!definition.initially_owned) { continue; }
        WeaponState state;
        state.magazine = definition.parameters.magazine_capacity;
        state.reserve = definition.initial_reserve;
        inventory_.push_back({definition_index, state});
        if (definition.identifier == "WEAPON_ID_MP5SD") { selected_weapon_slot_ = inventory_.size() - 1; }
    }
    if (!inventory_.empty()) { weapon_ = inventory_[selected_weapon_slot_].state; }
    pickups_collected_.assign(scene_.weapon_pickups.size(), false);
    soldier_weapons_collected_.assign(scene_.actors.size(), false);
    actors_.clear();
    projectiles_.clear();
    for (const auto& original_actor : scene_.actors) {
        auto position = original_actor.position;
        const auto ground = world_.raycast(position + Vector3{0, 0, 0.5f}, {0, 0, -1}, 6.0f, true);
        if (ground.hit) { position.z = ground.position.z; }
        ActorState actor;
        actor.position = position;
        actor.last_seen_position = position;
        actor.heading = original_actor.heading;
        actor.active = original_actor.gameplay_enabled;
        actors_.push_back(std::move(actor));
    }
    diagnostics::log(diagnostics::Severity::information, "gameplay", "Mission initialized; player grounded on original collision geometry");
}

Vector3 GameSimulation::player_position() const noexcept { return metres(player_.world_position); }

Vector3 GameSimulation::camera_position() const noexcept {
    return player_position() + Vector3{0, 0, crouching_ ? 0.95f : 1.68f};
}

Vector3 GameSimulation::aim_direction() const noexcept {
    return {-std::sin(heading_) * std::cos(pitch_), std::cos(heading_) * std::cos(pitch_), std::sin(pitch_)};
}

bool GameSimulation::grounded() const noexcept {
    return (player_.movement_flags & HumanMovementIntegrator::grounded_flag) != 0;
}

void GameSimulation::tick(const PlayerInput& input) {
    if (!std::isfinite(input.forward) || !std::isfinite(input.sideways) ||
        !std::isfinite(input.heading_change) || !std::isfinite(input.pitch_change)) {
        throw std::runtime_error("Player input contains a non-finite value");
    }
    heading_ = std::remainder(heading_ + input.heading_change, 2.0f * std::numbers::pi_v<float>);
    pitch_ = std::clamp(pitch_ + input.pitch_change, -1.4f, 1.4f);
    aiming_ = input.aiming;
    damage_flash_remaining_ = std::max(0.0f, damage_flash_remaining_ - 1.0f / 30.0f);
    if (health_ > 0) {
        if (input.weapon_slot >= 0) { select_weapon(static_cast<std::size_t>(input.weapon_slot)); }
        if (input.weapon_category >= 0 && static_cast<std::size_t>(input.weapon_category) < scene_.weapon_categories.size()) {
            const auto& category = scene_.weapon_categories[input.weapon_category];
            for (const auto& identifier : category) {
                const auto item = std::find_if(inventory_.begin(), inventory_.end(), [&](const auto& candidate) {
                    return scene_.weapons[candidate.definition_index].identifier == identifier;
                });
                if (item != inventory_.end()) { select_weapon(static_cast<std::size_t>(item - inventory_.begin())); break; }
            }
        }
        if (input.weapon_cycle != 0 && !inventory_.empty()) {
            const auto count = static_cast<int>(inventory_.size());
            const auto next = (static_cast<int>(selected_weapon_slot_) + (input.weapon_cycle > 0 ? 1 : -1) + count) % count;
            select_weapon(static_cast<std::size_t>(next));
        }
        if (input.interacting) { collect_weapons(); }
        advance_player(input);
        advance_weapon(input);
    }
    advance_actors();
    advance_projectiles();
    fire_was_pressed_ = input.firing;
    ++tick_count_;
    if (!finite(player_position()) || std::abs(player_position().z) > 5000) {
        throw std::runtime_error("Player simulation left the loaded world; restart the mission");
    }
}

Vector3 GameSimulation::animation_delta(int state) {
    if (state < 0 || static_cast<std::size_t>(state) >= animation_identifiers.size()) { return {}; }
    const auto found = scene_.root_motion_clips.find(animation_identifiers[state]);
    if (found == scene_.root_motion_clips.end() || found->second.duration <= 0) {
        throw std::runtime_error("Required locomotion animation is missing or has zero duration");
    }
    const auto& clip = found->second;
    if (state != previous_animation_state_) {
        animation_time_ = 0;
        previous_animation_state_ = state;
    }
    const auto before = sample_translation(clip, animation_time_);
    float next_time = animation_time_ + 160.0f;
    Vector3 delta;
    if (next_time >= clip.duration) {
        next_time = std::fmod(next_time, clip.duration);
        delta = sample_translation(clip, clip.duration) - before +
                sample_translation(clip, next_time) - sample_translation(clip, 0);
    } else {
        delta = sample_translation(clip, next_time) - before;
    }
    animation_time_ = next_time;
    return delta * scene_.player_parameters.root_translation_scale;
}

void GameSimulation::advance_player(const PlayerInput& input) {
    if (input.crouching || !crouching_ || !world_.raycast(player_position() + Vector3{0, 0, 1.05f},
        {0, 0, 1}, 0.76f).hit) {
        crouching_ = input.crouching;
    }
    const bool moving = input.forward != 0 || input.sideways != 0;
    int direction = 0;
    if (input.forward > 0) { direction = input.sideways > 0 ? 2 : input.sideways < 0 ? 3 : 1; }
    else if (input.forward < 0) { direction = input.sideways > 0 ? 5 : input.sideways < 0 ? 6 : 4; }
    else if (input.sideways != 0) { direction = input.sideways > 0 ? 7 : 8; }
    locomotion_state_ = direction == 0 ? (crouching_ ? 19 : 0) :
        direction + (crouching_ ? 19 : input.walking ? 8 : 0);
    if (input.jumping && !jump_was_pressed_ && grounded() && !crouching_) {
        const Vector3 movement_direction = normalized(Vector3{input.sideways, input.forward, 0});
        const float horizontal_impulse = scene_.player_parameters.jump_horizontal_per_tick * units_per_metre;
        player_.velocity = {movement_direction.x * horizontal_impulse, movement_direction.y * horizontal_impulse,
                            scene_.player_parameters.jump_vertical_per_tick * units_per_metre};
        const float cosine = std::cos(heading_);
        const float sine = std::sin(heading_);
        const float previous_horizontal = player_.velocity.x;
        player_.velocity.x = cosine * previous_horizontal - sine * player_.velocity.y;
        player_.velocity.y = sine * previous_horizontal + cosine * player_.velocity.y;
        player_.movement_flags &= ~HumanMovementIntegrator::grounded_flag;
        diagnostics::log(diagnostics::Severity::debug, "player", "Jump impulse applied from original player parameters");
    }
    jump_was_pressed_ = input.jumping;
    const Basis3x3 basis{std::cos(heading_), -std::sin(heading_), 0,
                        std::sin(heading_), std::cos(heading_), 0, 0, 0, 1};
    player_.animation_movement = {};
    if (!grounded() || !moving) {
        previous_animation_state_ = -1;
        animation_time_ = 0;
    }
    if (!grounded()) {
        locomotion_state_ = player_.velocity.z > 0 ? 28 : 29;
        player_.velocity = HumanMotion::integrate_airborne(player_.velocity,
            input.sideways < 0, input.sideways > 0, input.forward > 0, input.forward < 0,
            basis, scene_.player_parameters.airborne_control_per_tick * units_per_metre);
    } else if (moving) {
        player_.animation_movement = HumanMotion::apply_root_motion(animation_delta(locomotion_state_), basis, 1.0f);
    }
    integrator_.update(player_, *this);
}

void GameSimulation::sweep_walls(HumanMovementState& human, const WorldPosition3& starting,
                                WorldPosition3& destination, Vector3& delta) {
    const auto requested = metres(destination) - metres(starting);
    const float height = crouching_ ? 1.1f : 1.8f;
    auto resolved = world_.move_capsule(metres(starting), requested, height);
    const auto initial = metres(starting);
    const Vector3 horizontal{requested.x, requested.y, 0};
    const float requested_progress = length(horizontal);
    const float resolved_progress = length(Vector3{resolved.x - initial.x, resolved.y - initial.y, 0});
    if (grounded() && requested_progress > 0.001f && resolved_progress < requested_progress * 0.8f &&
        !world_.raycast(initial + Vector3{0, 0, height}, {0, 0, 1}, 0.35f).hit) {
        auto stepped = world_.move_capsule(initial + Vector3{0, 0, 0.35f}, horizontal, height);
        const auto floor = world_.raycast(stepped + Vector3{0, 0, 0.02f}, {0, 0, -1}, 0.42f, true);
        const float stepped_progress = length(Vector3{stepped.x - initial.x, stepped.y - initial.y, 0});
        if (floor.hit && stepped_progress > resolved_progress + 0.001f && floor.position.z <= initial.z + 0.351f) {
            stepped.z = floor.position.z;
            resolved = stepped;
        }
    }
    if (requested.z > 0 && resolved.z < metres(destination).z - 0.001f) { human.velocity.z = 0; }
    destination = engine_position(resolved);
    delta = {static_cast<float>(destination.x - starting.x), static_cast<float>(destination.y - starting.y),
             static_cast<float>(destination.z - starting.z)};
}

void GameSimulation::query_ground(HumanMovementState& human, const WorldPosition3& starting,
                                 WorldPosition3& destination, Vector3& delta, float query_budget) {
    const auto from = metres(starting);
    auto target = metres(destination);
    const bool was_grounded = grounded();
    const float upward_budget = was_grounded ? 0.35f : 0.04f;
    const float downward_budget = was_grounded ? std::max(0.1f, query_budget / units_per_metre) :
        std::max(0.1f, from.z - target.z + 0.08f);
    const auto ground = world_.raycast({target.x, target.y, from.z + upward_budget},
        {0, 0, -1}, upward_budget + downward_budget, true);
    if (ground.hit && human.velocity.z <= 0 && (was_grounded || target.z <= ground.position.z + 0.04f)) {
        target.z = ground.position.z;
        human.movement_flags |= HumanMovementIntegrator::grounded_flag;
        human.slope_normal = ground.normal;
        human.velocity.z = 0;
    } else {
        human.movement_flags &= ~HumanMovementIntegrator::grounded_flag;
    }
    destination = engine_position(target);
    delta.z = static_cast<float>(destination.z - starting.z);
}

void GameSimulation::separate_humans(HumanMovementState&, const WorldPosition3& starting,
                                    WorldPosition3& destination, Vector3& delta) {
    auto position = metres(destination);
    for (const auto& actor : actors_) {
        if (!actor.active || actor.behavior == ActorBehavior::dead || std::abs(actor.position.z - position.z) > 1.7f) { continue; }
        const Vector3 difference{position.x - actor.position.x, position.y - actor.position.y, 0};
        const float distance = length(difference);
        if (distance > 0.0001f && distance < 0.62f) {
            position = world_.move_capsule(position, difference * ((0.62f - distance) / distance), crouching_ ? 1.1f : 1.8f);
        }
    }
    destination = engine_position(position);
    delta = {static_cast<float>(destination.x - starting.x), static_cast<float>(destination.y - starting.y),
             static_cast<float>(destination.z - starting.z)};
}

void GameSimulation::commit_transform(HumanMovementState& human, const WorldPosition3& destination, float) {
    human.world_position = destination;
}

} // namespace igi::gameplay
