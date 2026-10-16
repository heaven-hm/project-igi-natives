#pragma once
#include <cstdint>
#include <string>
#include <vector>
#include <array>
#define GLM_FORCE_SWIZZLE
#include <glm/glm.hpp>

// Scale applied to raw MEF coordinates (game units -> world units)
constexpr float kMefNativeScale = 1.0f / 40.96f;

struct RenderVertex {
    glm::vec3 pos{0.f};
    glm::vec3 rawPos{0.f};      // raw XTRV position (NOT scaled, NOT baked) — for ASCII export
    glm::vec3 normal{0.f};      // from XTRV bytes +12..+23
    glm::vec2 uv{0.f};
    glm::vec2 uv2{0.f};         // lightmap UV (XTRV bytes +32..+39, modelType==3 only)
    uint16_t boneIndex{0};
    uint16_t localVertexId{0};  // XTRV.vn @+36
    float    weight{1.0f};      // XTRV.w  @+32
};

struct BoneInfo {
    std::string name;       // from MANB (16 bytes, null-trimmed)
    int parent{-1};         // -1 = root; computed from REIH num_child traversal
    glm::vec3 pivot{0.f};   // raw pivot from REIH part2 (NOT divided by 40.96)
    uint8_t numChild{0};
};

struct Attachment {
    std::string name;       // from ATTA, 16 bytes
    glm::vec3 pos{0.f};     // bytes +16..+27 in 72-byte ATTA record
    int32_t boneId{-1};     // bytes +68..+71 in 72-byte ATTA record
};

// ---- New structs for ASCII MEF exporter ----

// XTVC type1: 20 bytes per vertex
struct XtvcVertex {
    float    px{0.f}, py{0.f}, pz{0.f};
    uint32_t boneIndex{0};
    uint32_t reserved{0};
};

// XTVM: 16 bytes per magic vertex — 12 bytes position (px,py,pz) + 4 bytes magic type (unconfirmed)
struct XtvmVertex {
    float px{0.f}, py{0.f}, pz{0.f};
    int32_t magicType{0}; // magic vertex type ID (TASKTYPE_GUNCLIP, TASKTYPE_LADDER, etc.) — unconfirmed
};

struct MefAttachment {
    char name[16];
    float px, py, pz;
    float r00, r01, r02;
    float r03, r04, r05;
    float r06, r07, r08;
    int32_t boneId;
};

// ECFC: 12 bytes per face
struct EcfcFace {
    uint16_t a{0}, b{0}, c{0};
    uint16_t mat{0};   // material index into TAMC
    uint16_t lmp{0};   // lightmap (ignored)
    uint16_t vrt{0};   // deprecated
};

// ECAF: 6 bytes per face
struct EcafFace {
    uint16_t a{0}, b{0}, c{0};
};

// DNER type0/type1: 32 bytes per record
struct DnerRecord {
    uint8_t  opacity{0}, mshine{0}, scolor{0}, opacitd{0};
    float    px{0.f}, py{0.f}, pz{0.f};
    uint16_t offsetIndex{0};  // starting uint16 index into ECAF (divide by 3 for face index)
    uint16_t numFace{0};
    uint16_t offVerts{0};
    uint16_t numVerts{0};
    int16_t  td{-1}, tb{-1}, tr{-1};
    uint8_t  trd{0}, tbd{0};
    uint16_t rawOpacity{0};
    uint8_t  eflame{0};
};

// TAMC: 16 bytes per record
struct TamcRecord {
    float    opacity{0.f};
    uint16_t portal{0};
    int16_t  diffuse{-1};
    uint16_t unknown0{0}, unknown1{0};
    int16_t  matId{-1};
    uint16_t unknown{0};
};

struct PortalRecord {
    uint32_t portalId   = 0;
    uint32_t materialId = 0;
    std::vector<glm::vec3>               verts;
    std::vector<std::array<uint32_t, 3>> faces;
};

struct ParsedGeometry {
    struct RenderBlock {
        size_t triangleStart = 0;
        size_t triangleCount = 0;
        int materialSlot = 0;
        float opacity = 1.0f;
    };

    std::vector<RenderVertex> vertices;
    std::vector<std::array<uint32_t, 3>> triangles;
    std::vector<RenderBlock> renderBlocks;
    bool fromRenderMesh = false;
    bool isIgi1 = false;
    uint32_t modelType = 0;
    size_t renderBlockCount = 0;
    size_t collisionVertexCount = 0;
    size_t collisionFaceCount = 0;
    std::string renderLayout;
    std::vector<BoneInfo> bones;          // populated from REIH+MANB
    std::vector<Attachment> attachments;  // populated from ATTA

    // ---- Raw ILFF chunks (original order, verbatim bytes) ----
    // Populated by ParseMefFile for round-trip preservation via sidecar.
    struct RawChunk {
        char fourcc[4] = {0,0,0,0};
        std::vector<uint8_t> data;
        bool isTag(const char* cc) const {
            return cc[0]==fourcc[0] && cc[1]==fourcc[1] &&
                   cc[2]==fourcc[2] && cc[3]==fourcc[3];
        }
    };
    std::vector<RawChunk> rawChunks;

    // ---- Collision/material data for ASCII export ----
    std::vector<XtvcVertex>  xtvcVerts;    // XTVC type1 (set 0)
    std::vector<XtvmVertex>  xtvmVerts;    // XTVM (magic vertices)
    std::vector<MefAttachment> mefAttachments; // ATTA (attachments)
    std::vector<EcfcFace>    ecfcFaces;    // ECFC (set 0)
    std::vector<EcafFace>    ecafFaces;    // ECAF render face indices
    std::vector<DnerRecord>  dnerRecords;  // DNER (all records)
    std::vector<TamcRecord>  tamcRecords;  // TAMC (set 0)
    // Also keep set 1 for the second mesh
    std::vector<XtvcVertex>  xtvcVerts1;
    std::vector<EcfcFace>    ecfcFaces1;
    std::vector<TamcRecord>  tamcRecords1;
    std::vector<PortalRecord> portals;
    std::vector<std::string> pmtlTextures; // Textures explicitly requested in the MEF
};

// Parse a binary MEF file and return all geometry + bone data.
// Throws std::runtime_error on any fatal parse error.
ParsedGeometry ParseMefFile(const std::string& filepath);

// Compute world-space bone positions from a bone hierarchy (sums
// pivots up the parent chain).  Used by the MEF parser to bake bone
// offsets into vertex positions, and by the GUI's skinning path to
// recover the rest-pose reference positions.
std::vector<glm::vec3> ComputeBoneWorldPositions(const std::vector<BoneInfo>& bones);
