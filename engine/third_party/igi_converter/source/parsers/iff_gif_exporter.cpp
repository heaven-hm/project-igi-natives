#include "iff_gif_exporter.h"
#include "iff_parser.h"

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

#include "../../igi2conv/gif.h"

namespace igiconv {

namespace {

constexpr float kIgiScale = 40.96f;
constexpr float kPi       = 3.14159265358979323846f;
constexpr int   kMaxBones = 256;

// ─── Tiny math helpers (avoid pulling in glm for a 2D ortho) ───────────
struct V3 { float x = 0, y = 0, z = 0; };
struct V4 { float x = 0, y = 0, z = 0, w = 1; };

static inline V3 v3_add(const V3& a, const V3& b) { return { a.x+b.x, a.y+b.y, a.z+b.z }; }
static inline V3 v3_sub(const V3& a, const V3& b) { return { a.x-b.x, a.y-b.y, a.z-b.z }; }
static inline V3 v3_scale(const V3& a, float s)    { return { a.x*s,   a.y*s,   a.z*s   }; }
static inline float v3_dot(const V3& a, const V3& b){ return a.x*b.x + a.y*b.y + a.z*b.z; }
static inline V3 v3_cross(const V3& a, const V3& b){
    return { a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x };
}
static inline float v3_len(const V3& a){ return std::sqrt(v3_dot(a,a)); }

static inline V4 v4_scale(const V4& a, float s){ return {a.x*s, a.y*s, a.z*s, a.w*s}; }

static inline V4 q_mul(const V4& a, const V4& b){
    // (a.x,a.y,a.z,a.w) is (ix,iy,iz,re) per the IFF BEF ordering.
    return {
        a.w*b.x + a.x*b.w + a.y*b.z - a.z*b.y,
        a.w*b.y - a.x*b.z + a.y*b.w + a.z*b.x,
        a.w*b.z + a.x*b.y - a.y*b.x + a.z*b.w,
        a.w*b.w - a.x*b.x - a.y*b.y - a.z*b.z
    };
}

static inline V4 q_slerp(const V4& a, const V4& b, float t){
    float cosTheta = a.x*b.x + a.y*b.y + a.z*b.z + a.w*b.w;
    V4 b2 = b;
    if (cosTheta < 0) { b2 = {-b.x,-b.y,-b.z,-b.w}; cosTheta = -cosTheta; }
    if (cosTheta > 0.9995f) {
        V4 r = { a.x + t*(b2.x-a.x), a.y + t*(b2.y-a.y),
                 a.z + t*(b2.z-a.z), a.w + t*(b2.w-a.w) };
        float l = std::sqrt(r.x*r.x+r.y*r.y+r.z*r.z+r.w*r.w);
        if (l > 1e-6f) r = v4_scale(r, 1.0f/l);
        return r;
    }
    float theta = std::acos(std::min(1.0f, std::max(-1.0f, cosTheta)));
    float sinTheta = std::sin(theta);
    if (sinTheta < 1e-6f) return a;
    float wa = std::sin((1.0f - t) * theta) / sinTheta;
    float wb = std::sin(t * theta) / sinTheta;
    return {
        a.x*wa + b2.x*wb,
        a.y*wa + b2.y*wb,
        a.z*wa + b2.z*wb,
        a.w*wa + b2.w*wb
    };
}

static inline V3 q_rotate(const V4& q, const V3& v){
    V3 qv = { q.x, q.y, q.z };
    V3 t  = v3_scale(v3_cross(qv, v), 2.0f);
    return v3_add(v3_add(v, v3_scale(t, q.w)), v3_cross(qv, t));
}

// Sample a translation track at a given time (linear interp).
V3 sample_translation(const std::vector<IffTranslationKey>& keys, float t) {
    if (keys.empty()) return {0,0,0};
    if (t <= keys.front().time) {
        return { keys.front().pos[0], keys.front().pos[1], keys.front().pos[2] };
    }
    if (t >= keys.back().time) {
        return { keys.back().pos[0], keys.back().pos[1], keys.back().pos[2] };
    }
    for (size_t i = 0; i + 1 < keys.size(); ++i) {
        if (t >= keys[i].time && t <= keys[i+1].time) {
            float dt = keys[i+1].time - keys[i].time;
            float a  = (dt == 0) ? 0.0f : (t - keys[i].time) / dt;
            return {
                keys[i].pos[0] + a * (keys[i+1].pos[0] - keys[i].pos[0]),
                keys[i].pos[1] + a * (keys[i+1].pos[1] - keys[i].pos[1]),
                keys[i].pos[2] + a * (keys[i+1].pos[2] - keys[i].pos[2])
            };
        }
    }
    return { keys.back().pos[0], keys.back().pos[1], keys.back().pos[2] };
}

V4 sample_rotation(const std::vector<IffRotationKey>& keys, float t) {
    if (keys.empty()) return {0,0,0,1};
    if (t <= keys.front().time) return { keys.front().rot[0], keys.front().rot[1], keys.front().rot[2], keys.front().rot[3] };
    if (t >= keys.back().time)  return { keys.back().rot[0],  keys.back().rot[1],  keys.back().rot[2],  keys.back().rot[3] };
    for (size_t i = 0; i + 1 < keys.size(); ++i) {
        if (t >= keys[i].time && t <= keys[i+1].time) {
            float dt = keys[i+1].time - keys[i].time;
            float a  = (dt == 0) ? 0.0f : (t - keys[i].time) / dt;
            V4 q1 = { keys[i].rot[0],  keys[i].rot[1],  keys[i].rot[2],  keys[i].rot[3] };
            V4 q2 = { keys[i+1].rot[0],keys[i+1].rot[1],keys[i+1].rot[2],keys[i+1].rot[3] };
            return q_slerp(q1, q2, a);
        }
    }
    return { keys.back().rot[0], keys.back().rot[1], keys.back().rot[2], keys.back().rot[3] };
}

// ─── 2D drawing on a 32-bit RGBA buffer ────────────────────────────────
struct Frame {
    int w = 0, h = 0;
    std::vector<uint8_t> px;  // RGBA8, w*h*4 bytes
    void clear(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255) {
        for (int i = 0; i < w * h; ++i) {
            px[i*4+0] = r; px[i*4+1] = g; px[i*4+2] = b; px[i*4+3] = a;
        }
    }
    void put(int x, int y, uint8_t r, uint8_t g, uint8_t b) {
        if (x < 0 || y < 0 || x >= w || y >= h) return;
        int i = (y * w + x) * 4;
        px[i+0] = b;
        px[i+1] = g;
        px[i+2] = r;
        px[i+3] = 255;
    }
    void line(int x0, int y0, int x1, int y1, uint8_t r, uint8_t g, uint8_t b) {
        int dx = std::abs(x1 - x0), sx = x0 < x1 ? 1 : -1;
        int dy = -std::abs(y1 - y0), sy = y0 < y1 ? 1 : -1;
        int err = dx + dy;
        for (;;) {
            put(x0, y0, r, g, b);
            if (x0 == x1 && y0 == y1) break;
            int e2 = err * 2;
            if (e2 >= dy) { err += dy; x0 += sx; }
            if (e2 <= dx) { err += dx; y0 += sy; }
        }
    }
    void disc(int cx, int cy, int radius, uint8_t r, uint8_t g, uint8_t b) {
        int r2 = radius * radius;
        for (int dy = -radius; dy <= radius; ++dy) {
            for (int dx = -radius; dx <= radius; ++dx) {
                if (dx*dx + dy*dy <= r2) put(cx + dx, cy + dy, r, g, b);
            }
        }
    }
};

// Project a 3D point (in IGI metres) to 2D screen pixels with a 3/4
// ortho view (yaw ~30deg on XZ + slight pitch).
void project_point(const V3& p, const V3& center, float scale,
                   float aspect, int W, int H, float& sx, float& sy)
{
    float nx = (p.x - center.x) * scale;
    float ny = (p.y - center.y) * scale;
    float nz = (p.z - center.z) * scale;

    float yaw = 30.0f * (kPi / 180.0f);
    float cy = std::cos(yaw), syaw = std::sin(yaw);
    float rx =  cy * nx + syaw * nz;
    float rz = -syaw * nx + cy * nz;
    float pitch = 12.0f * (kPi / 180.0f);
    float cp = std::cos(pitch), sp = std::sin(pitch);
    float ry = cp * ny - sp * rz;
    (void)rz;  // depth intentionally unused for ortho projection

    sx = (W * 0.5f) + rx * (W * 0.45f) * aspect;
    sy = (H * 0.5f) - ry * (H * 0.45f);
}

// Compute the global bone positions for a given clip at time t (ms).
struct SkeletonPose {
    V3 bonePos[kMaxBones];
    V3 center{0,0,0};
    float scale = 1.0f;
};

void compute_pose(const IffFile& iff, const IffClip& clip, float t_ms,
                  SkeletonPose& pose)
{
    int n = iff.skeleton.bone_count;
    if (n <= 0) return;

    // Per-frame state for parent->child propagation.
    V3 localT[kMaxBones];
    V4 localR[kMaxBones];
    V4 worldR[kMaxBones];

    for (int i = 0; i < n; ++i) {
        localT[i] = {0,0,0};
        if (i * 3 + 2 < (int)iff.skeleton.translations.size()) {
            localT[i] = {
                iff.skeleton.translations[i*3+0] / kIgiScale,
                iff.skeleton.translations[i*3+1] / kIgiScale,
                iff.skeleton.translations[i*3+2] / kIgiScale
            };
        }
        if (i == 0 && !clip.root_translations.empty()) {
            V3 v = sample_translation(clip.root_translations, t_ms);
            localT[i] = { v.x / kIgiScale, v.y / kIgiScale, v.z / kIgiScale };
        }
        if (i < (int)clip.bone_rotations.size() && !clip.bone_rotations[i].empty()) {
            localR[i] = sample_rotation(clip.bone_rotations[i], t_ms);
        } else {
            localR[i] = {0,0,0,1};
        }
    }

    // World-space positions: parent_pos + R(parent) * local_t
    for (int i = 0; i < n; ++i) {
        int parent = (i < (int)iff.skeleton.parents.size()) ? (int)iff.skeleton.parents[i] : -1;
        if (parent >= 0 && parent < i) {
            V3 rotated = q_rotate(worldR[parent], localT[i]);
            pose.bonePos[i] = v3_add(pose.bonePos[parent], rotated);
            worldR[i] = q_mul(worldR[parent], localR[i]);
        } else {
            pose.bonePos[i] = localT[i];
            worldR[i] = localR[i];
        }
    }
}

} // namespace

bool IFF_ExportGif(const std::string& iffPath,
                   const std::string& gifPath,
                   int width, int height, int fps,
                   std::string* err)
{
    if (width <= 0 || height <= 0) {
        if (err) *err = "width/height must be positive";
        return false;
    }
    if (fps <= 0) fps = 30;
    int frameDelayCs = std::max(1, 100 / fps);

    IffFile iff = IFF_Parse(iffPath, nullptr);
    if (!iff.valid || iff.clips.empty()) {
        if (err) *err = "no parseable animations in: " + iffPath;
        return false;
    }

    GifWriter w;
    if (!GifBegin(&w, gifPath.c_str(), width, height, frameDelayCs, 8, /*dither*/false)) {
        if (err) *err = "cannot open GIF for writing: " + gifPath;
        return false;
    }

    Frame fb;
    fb.w = width;
    fb.h = height;
    fb.px.assign((size_t)width * height * 4, 0);
    float aspect = (float)height / (float)width;

    int totalFrames = 0;
    for (size_t ci = 0; ci < iff.clips.size(); ++ci) {
        const auto& clip = iff.clips[ci];
        float dur = clip.duration > 0 ? clip.duration : 1000.0f;
        float dt  = 1000.0f / (float)fps;
        int nFrames = std::max(1, (int)std::ceil(dur / dt));
        for (int f = 0; f < nFrames; ++f) {
            float t = (float)f * dt;
            fb.clear(20, 20, 30, 255);

            SkeletonPose pose;
            compute_pose(iff, clip, t, pose);

            // Auto-fit scale.
            V3 bbMin = pose.bonePos[0], bbMax = pose.bonePos[0];
            for (int i = 1; i < iff.skeleton.bone_count; ++i) {
                bbMin.x = std::min(bbMin.x, pose.bonePos[i].x);
                bbMin.y = std::min(bbMin.y, pose.bonePos[i].y);
                bbMin.z = std::min(bbMin.z, pose.bonePos[i].z);
                bbMax.x = std::max(bbMax.x, pose.bonePos[i].x);
                bbMax.y = std::max(bbMax.y, pose.bonePos[i].y);
                bbMax.z = std::max(bbMax.z, pose.bonePos[i].z);
            }
            V3 center = v3_scale(v3_add(bbMin, bbMax), 0.5f);
            float extent = std::max({ bbMax.x - bbMin.x,
                                      bbMax.y - bbMin.y,
                                      bbMax.z - bbMin.z, 0.01f });
            pose.center = center;
            pose.scale  = 1.0f / extent;

            // Project + draw.
            float sx[kMaxBones], sy[kMaxBones];
            for (int i = 0; i < iff.skeleton.bone_count; ++i) {
                project_point(pose.bonePos[i], center, pose.scale,
                              aspect, width, height, sx[i], sy[i]);
            }

            // Bones (orange lines).
            for (int i = 0; i < iff.skeleton.bone_count; ++i) {
                int parent = (i < (int)iff.skeleton.parents.size()) ? (int)iff.skeleton.parents[i] : -1;
                if (parent >= 0 && parent < i) {
                    fb.line((int)sx[parent], (int)sy[parent],
                            (int)sx[i],      (int)sy[i],
                            255, 140, 0);
                }
            }
            // Joints (cyan discs, root white).
            for (int i = 0; i < iff.skeleton.bone_count; ++i) {
                if (i == 0) fb.disc((int)sx[i], (int)sy[i], 4, 255, 255, 255);
                else        fb.disc((int)sx[i], (int)sy[i], 3, 80, 220, 240);
            }

            GifWriteFrame(&w, fb.px.data(), width, height, frameDelayCs, 8, false);
            ++totalFrames;
        }
    }
    GifEnd(&w);
    if (totalFrames == 0) {
        if (err) *err = "no frames were rendered";
        return false;
    }
    return true;
}

} // namespace igiconv
