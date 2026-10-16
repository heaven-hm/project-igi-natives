#pragma once
#include <string>
#include <vector>
#include <cstdint>

struct IffTranslationKey {
    float pos[3];
    float time;
    float tangent_in[3];
    float tangent_out[3];
};

struct IffRotationKey {
    float rot[4];
    float time;
    float rot_b[4];
    float rot_c[4];
};

struct IffEvent {
    uint32_t event_id;
    int32_t  bone_id;
    float time;
    float pos[3];
};

struct IffClip {
    float duration = 0;
    uint32_t flags = 0;
    uint32_t animation_id = 0;

    std::vector<IffTranslationKey> root_translations;
    std::vector<std::vector<IffRotationKey>> bone_rotations;
    std::vector<IffEvent> events;
};

struct IffSkeleton {
    int32_t object_id = 0;
    int32_t bone_count = 0;
    std::vector<int32_t> parents;
    std::vector<float> translations; // 3 * f32 per bone
};

struct IffFile {
    bool valid = false;
    IffSkeleton skeleton;
    int32_t animation_capacity = 0;
    std::vector<IffClip> clips;
};

#include <functional>

using IffLogger = std::function<void(int level, const std::string& msg)>;

IffFile IFF_Parse(const std::string& filepath, IffLogger logger = nullptr);
void IFF_Dump(const std::string& filepath, const std::string& outfile, IffLogger logger = nullptr);
