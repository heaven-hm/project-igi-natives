#include "igi/skeletal_animation.hpp"

#include <exception>
#include <iostream>
#include <numbers>
#include <stdexcept>

using namespace igi::gameplay;

void require(bool condition, const char* message) {
    if (!condition) { throw std::runtime_error(message); }
}

int main() {
    try {
        const glm::quat identity{1, 0, 0, 0};
        const auto quarter_turn = glm::angleAxis(std::numbers::pi_v<float> * 0.5f, glm::vec3{0, 0, 1});
        const auto midpoint = interpolate_rotation(identity, quarter_turn, 0.5f);
        const auto rotated = midpoint * glm::vec3{1, 0, 0};
        require(std::abs(rotated.x - std::sqrt(0.5f)) < 0.00001f && std::abs(rotated.y - std::sqrt(0.5f)) < 0.00001f,
                "Quaternion interpolation must take the expected angular midpoint");
        require(glm::length(interpolate_rotation(identity, -quarter_turn, 0.5f) - midpoint) < 0.00001f,
                "Antipodal quaternion representation must preserve the shorter path");
        const std::vector<BoneRotationKey> keys{{0, identity, identity, identity},
            {160, quarter_turn, quarter_turn, quarter_turn}};
        require(glm::length(sample_bone_rotation(keys, 0, 320, false) - identity) == 0,
                "Exact key timestamps must return the stored key unchanged");
        require(glm::length(sample_bone_rotation(keys, 240, 320, false) - quarter_turn) == 0,
                "Non-cyclic rotation tracks must hold their last key");
        require(glm::length(sample_bone_rotation(keys, 240, 320, true) - midpoint) < 0.00001f,
                "Cyclic tracks must bridge the last key to the first");

        SkeletalAnimationSet animations;
        animations.parents = {-1, 0};
        animations.rest_offsets = {{0, 0, 0}, {1, 0, 0}};
        SkeletalAnimationClip clip;
        clip.duration = 320;
        clip.bone_rotations = {{{0, quarter_turn, quarter_turn, quarter_turn}}, {}};
        animations.clips[34] = clip;
        const auto pose = sample_bone_pose(animations, 34, 0);
        SceneVertex vertex;
        vertex.bone_index = 1;
        vertex.bone_local_position = {1, 0, 0};
        const auto position = skin_vertex(vertex, pose);
        require(length(position - Vector3{0, 2, 0}) < 0.00001f,
                "Skinning must compose parent transforms and the vertex's local bone offset");
        animations.parents[0] = 1;
        bool rejected = false;
        try { static_cast<void>(sample_bone_pose(animations, 34, 0)); }
        catch (const std::runtime_error&) { rejected = true; }
        require(rejected, "Cyclic skeletons must fail through controlled error handling");
        std::cout << "Skeletal probe passed: angular interpolation, antipodal signs, cyclic tracks, parent transforms, skinning, cycle rejection\n";
        return 0;
    } catch (const std::exception& exception) {
        std::cerr << "Skeletal probe failed: " << exception.what() << '\n';
        return 1;
    }
}
