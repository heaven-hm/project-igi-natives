#pragma once

#include "igi/mission_scene.hpp"

#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>

namespace igi::gameplay {

struct BoneRotationKey final {
    float time{};
    glm::quat rotation{1, 0, 0, 0};
    glm::quat incoming_tangent{1, 0, 0, 0};
    glm::quat outgoing_tangent{1, 0, 0, 0};
};

struct SkeletalAnimationClip final {
    float duration{};
    std::uint32_t flags{};
    RootMotionClip root_motion;
    std::vector<std::vector<BoneRotationKey>> bone_rotations;
};

struct SkeletalAnimationSet final {
    std::vector<int> parents;
    std::vector<Vector3> rest_offsets;
    std::unordered_map<int, SkeletalAnimationClip> clips;
};

[[nodiscard]] std::shared_ptr<SkeletalAnimationSet> load_skeletal_animations(const std::filesystem::path& path);
[[nodiscard]] glm::quat interpolate_rotation(glm::quat first, glm::quat second, float fraction);
[[nodiscard]] glm::quat sample_bone_rotation(const std::vector<BoneRotationKey>& keys,
                                            float time, float duration, bool cyclic);
[[nodiscard]] std::vector<glm::mat4> sample_bone_pose(const SkeletalAnimationSet& animations,
                                                    int animation_identifier, float time, bool zero_root = false);
[[nodiscard]] Vector3 sample_animation_root(const SkeletalAnimationSet& animations, int animation_identifier, float time);
[[nodiscard]] Vector3 skin_vertex(const SceneVertex& vertex, const std::vector<glm::mat4>& pose);

}
