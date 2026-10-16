#include "igi/skeletal_animation.hpp"

#include "igi/diagnostics.hpp"
#include "iff_parser.h"

#include <algorithm>
#include <functional>
#include <glm/gtc/matrix_transform.hpp>
#include <stdexcept>

namespace igi::gameplay {
namespace {

glm::quat quaternion(const float* components) {
    const glm::quat result{components[3], components[0], components[1], components[2]};
    const float magnitude = glm::dot(result, result);
    if (!std::isfinite(magnitude) || magnitude < 0.01f || magnitude > 4) {
        throw std::runtime_error("Original animation quaternion is invalid");
    }
    return result;
}

Vector3 root_translation(const RootMotionClip& clip, float time) {
    if (clip.keys.empty()) { return {}; }
    if (time <= clip.keys.front().time) { return clip.keys.front().position; }
    for (std::size_t key_index = 1; key_index < clip.keys.size(); ++key_index) {
        const auto& next = clip.keys[key_index];
        const auto& previous = clip.keys[key_index - 1];
        if (time > next.time) { continue; }
        const float duration = next.time - previous.time;
        if (duration <= 0) { return next.position; }
        const float fraction = (time - previous.time) / duration;
        const float squared = fraction * fraction;
        const float cubed = squared * fraction;
        return previous.position * (2 * cubed - 3 * squared + 1) + next.position * (3 * squared - 2 * cubed) +
            previous.outgoing_tangent * (duration * (fraction - 2 * squared + cubed)) +
            next.incoming_tangent * (duration * (cubed - squared));
    }
    return clip.keys.back().position;
}

}

std::shared_ptr<SkeletalAnimationSet> load_skeletal_animations(const std::filesystem::path& path) {
    const auto source = IFF_Parse(path.string());
    if (!source.valid || source.skeleton.bone_count <= 0 || source.skeleton.bone_count > 512 ||
        source.skeleton.parents.size() != static_cast<std::size_t>(source.skeleton.bone_count) ||
        source.skeleton.translations.size() != static_cast<std::size_t>(source.skeleton.bone_count) * 3) {
        throw std::runtime_error("Invalid original skeletal animation set: " + path.string());
    }
    auto animations = std::make_shared<SkeletalAnimationSet>();
    animations->parents.assign(source.skeleton.parents.begin(), source.skeleton.parents.end());
    for (std::size_t bone_index = 0; bone_index < animations->parents.size(); ++bone_index) {
        const auto& translation = source.skeleton.translations;
        const Vector3 position{translation[bone_index * 3] / 4096.0f, translation[bone_index * 3 + 1] / 4096.0f,
                               translation[bone_index * 3 + 2] / 4096.0f};
        if (!finite(position)) { throw std::runtime_error("Original bone translation is invalid"); }
        animations->rest_offsets.push_back(position);
    }
    for (const auto& original : source.clips) {
        if (!std::isfinite(original.duration) || original.duration < 0) { throw std::runtime_error("Invalid skeletal clip duration"); }
        SkeletalAnimationClip clip;
        clip.duration = original.duration;
        clip.flags = original.flags;
        clip.root_motion.duration = original.duration;
        for (const auto& key : original.root_translations) {
            clip.root_motion.keys.push_back({key.time, {key.pos[0], key.pos[1], key.pos[2]},
                {key.tangent_in[0], key.tangent_in[1], key.tangent_in[2]}, {key.tangent_out[0], key.tangent_out[1], key.tangent_out[2]}});
        }
        for (const auto& original_track : original.bone_rotations) {
            std::vector<BoneRotationKey> track;
            for (const auto& key : original_track) {
                if (!std::isfinite(key.time) || (!track.empty() && key.time < track.back().time)) { throw std::runtime_error("Invalid skeletal key order"); }
                const auto rotation = quaternion(key.rot);
                track.push_back({key.time, rotation, original_track.size() == 1 ? rotation : quaternion(key.rot_c),
                    original_track.size() == 1 ? rotation : quaternion(key.rot_b)});
            }
            clip.bone_rotations.push_back(std::move(track));
        }
        animations->clips.emplace(static_cast<int>(original.animation_id), std::move(clip));
    }
    diagnostics::log(diagnostics::Severity::information, "animation", "Loaded " + path.filename().string() + ": " +
        std::to_string(animations->parents.size()) + " bones, " + std::to_string(animations->clips.size()) + " clips");
    return animations;
}

glm::quat interpolate_rotation(glm::quat first, glm::quat second, float fraction) {
    float cosine = glm::dot(first, second);
    if (cosine < 0) { second = -second; cosine = -cosine; }
    const float angle = std::acos(std::clamp(cosine, -1.0f, 1.0f));
    if (angle == 0) { return first; }
    if (angle < 0.01f) { return first * (1 - fraction) + second * fraction; }
    const float inverse_sine = 1.0f / std::sin(angle);
    return first * (std::sin(angle - angle * fraction) * inverse_sine) + second * (std::sin(angle * fraction) * inverse_sine);
}

glm::quat sample_bone_rotation(const std::vector<BoneRotationKey>& keys, float time, float duration, bool cyclic) {
    if (keys.empty()) { return {1, 0, 0, 0}; }
    std::size_t next_index = 0;
    while (next_index < keys.size() && keys[next_index].time < time) { ++next_index; }
    if (next_index < keys.size() && keys[next_index].time == time) { return keys[next_index].rotation; }
    if (next_index == 0) { return keys.front().rotation; }
    const auto& previous = keys[next_index - 1];
    if (next_index == keys.size() && (!cyclic || duration <= previous.time)) { return previous.rotation; }
    const auto& next = keys[next_index == keys.size() ? 0 : next_index];
    const float interval = next_index == keys.size() ? duration - previous.time : next.time - previous.time;
    if (interval <= 0) { return next.rotation; }
    const float fraction = (time - previous.time) / interval;
    const auto rotation = interpolate_rotation(previous.rotation, next.rotation, fraction);
    const auto tangent = interpolate_rotation(previous.outgoing_tangent, next.incoming_tangent, fraction);
    const float weight = 1 - 2 * fraction * (1 - fraction);
    if (weight <= 0.001f) { return tangent; }
    if (weight >= 0.99900001f) { return rotation; }
    return interpolate_rotation(rotation, tangent, 1 - weight);
}

Vector3 sample_animation_root(const SkeletalAnimationSet& animations, int animation_identifier, float time) {
    const auto found = animations.clips.find(animation_identifier);
    if (found == animations.clips.end()) { return {}; }
    const auto& clip = found->second;
    const float local_time = clip.duration > 0 ? std::fmod(time, clip.duration) : 0;
    return root_translation(clip.root_motion, local_time) * (1.0f / 4096.0f);
}

std::vector<glm::mat4> sample_bone_pose(const SkeletalAnimationSet& animations, int animation_identifier, float time, bool zero_root) {
    if (!std::isfinite(time) || time < 0 || animations.parents.size() != animations.rest_offsets.size()) {
        throw std::runtime_error("Skeletal pose parameters are invalid");
    }
    const auto found = animations.clips.find(animation_identifier);
    if (found == animations.clips.end()) { throw std::runtime_error("Requested original animation is unavailable: " + std::to_string(animation_identifier)); }
    const auto& clip = found->second;
    if (clip.duration > 0) { time = std::fmod(time, clip.duration); }
    std::vector<glm::mat4> pose(animations.parents.size(), glm::mat4(1));
    std::vector<int> states(pose.size());
    std::function<void(std::size_t)> evaluate = [&](std::size_t bone_index) {
        if (states[bone_index] == 2) { return; }
        if (states[bone_index] == 1) { throw std::runtime_error("Skeletal parent hierarchy contains a cycle"); }
        states[bone_index] = 1;
        auto position = animations.rest_offsets[bone_index];
        if (bone_index == 0 && zero_root) { position = {}; }
        else if (bone_index == 0 && !clip.root_motion.keys.empty()) {
            const auto root = root_translation(clip.root_motion, time);
            const auto first = clip.root_motion.keys.front().position;
            position = {first.x / 4096.0f, first.y / 4096.0f, root.z / 4096.0f};
        }
        const auto rotation = bone_index < clip.bone_rotations.size() ?
            sample_bone_rotation(clip.bone_rotations[bone_index], time, clip.duration, (clip.flags & 0x80000000u) != 0) : glm::quat{1, 0, 0, 0};
        pose[bone_index] = glm::translate(glm::mat4(1), glm::vec3(position.x, position.y, position.z)) * glm::mat4_cast(rotation);
        const int parent = animations.parents[bone_index];
        if (parent >= 0) {
            if (static_cast<std::size_t>(parent) >= pose.size()) { throw std::runtime_error("Skeleton references an invalid parent"); }
            evaluate(static_cast<std::size_t>(parent));
            pose[bone_index] = pose[parent] * pose[bone_index];
        }
        states[bone_index] = 2;
    };
    for (std::size_t bone_index = 0; bone_index < pose.size(); ++bone_index) { evaluate(bone_index); }
    return pose;
}

Vector3 skin_vertex(const SceneVertex& vertex, const std::vector<glm::mat4>& pose) {
    if (vertex.bone_index >= pose.size()) { return vertex.position; }
    const auto& offset = vertex.bone_local_position;
    const auto position = pose[vertex.bone_index] * glm::vec4(offset.x, offset.y, offset.z, 1);
    return {position.x, position.y, position.z};
}

}
