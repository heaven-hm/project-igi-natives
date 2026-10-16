#include "mef_native.h"

#include "renderer/hardcoded_bones.h"
#include <array>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <glm/gtc/type_ptr.hpp>
#include <limits>
#include <stdexcept>
#include <string_view>
#include <vector>

// ---------------------------------------------------------------------------
// Internal types
// ---------------------------------------------------------------------------

namespace
{

struct ChunkInfo
{
    std::string name;
    uint32_t size = 0;
    uint32_t align = 0;
    uint32_t skip = 0;
    size_t start = 0;
    size_t data = 0;
};

struct D3drInfo
{
    uint32_t numFaces = 0;
    uint32_t numMeshes = 0;
    uint32_t verts0 = 0;
    uint32_t verts1 = 0;
    uint32_t numVerts = 0;
    uint32_t rawSize = 0;
    bool valid = false;
};

constexpr uint32_t kIlffHeaderSize = 20;
constexpr uint32_t kChunkHeaderSize = 16;

// ---------------------------------------------------------------------------
// Utilities
// ---------------------------------------------------------------------------

template <typename T> T ReadValue(const std::vector<uint8_t> &bytes, size_t offset)
{
    if (offset + sizeof(T) > bytes.size())
    {
        throw std::runtime_error("Unexpected end of MEF stream");
    }
    T value{};
    std::memcpy(&value, bytes.data() + offset, sizeof(T));
    return value;
}

std::vector<uint8_t> ReadWholeFile(const std::string &filepath)
{
    std::ifstream file(filepath, std::ios::binary | std::ios::ate);
    if (!file.is_open())
    {
        throw std::runtime_error("Failed to open MEF file: " + filepath);
    }

    const std::streamsize size = file.tellg();
    if (size < 0)
    {
        throw std::runtime_error("Failed to read MEF file size: " + filepath);
    }

    std::vector<uint8_t> bytes(static_cast<size_t>(size));
    file.seekg(0, std::ios::beg);
    if (!bytes.empty() && !file.read(reinterpret_cast<char *>(bytes.data()), size))
    {
        throw std::runtime_error("Failed to read MEF file bytes: " + filepath);
    }

    return bytes;
}

// ---------------------------------------------------------------------------
// ILFF chunk parsing
// ---------------------------------------------------------------------------

std::vector<ChunkInfo> ParseIlffChunks(const std::vector<uint8_t> &bytes,
                                       const std::string &filepath)
{
    if (bytes.size() < kIlffHeaderSize)
    {
        throw std::runtime_error("MEF file too small for ILFF header: " + filepath);
    }

    if (std::memcmp(bytes.data(), "ILFF", 4) != 0)
    {
        throw std::runtime_error("Invalid MEF magic header (expected ILFF): " + filepath);
    }

    const uint32_t declaredSize = ReadValue<uint32_t>(bytes, 4);
    const uint32_t align = ReadValue<uint32_t>(bytes, 8);
    const uint32_t skip = ReadValue<uint32_t>(bytes, 12);

    if (declaredSize != bytes.size())
    {
        throw std::runtime_error("ILFF size mismatch in: " + filepath);
    }
    if (align != 4)
    {
        throw std::runtime_error("Unsupported ILFF alignment in: " + filepath);
    }
    if (skip != 0)
    {
        throw std::runtime_error("Unsupported ILFF skip field in: " + filepath);
    }

    std::vector<ChunkInfo> chunks;
    size_t pos = kIlffHeaderSize;

    // Detect chunk header layout from first chunk:
    //   New (MEF) format: FourCC | size | align=4 | skip
    //   Old (MEX) format: FourCC | skip | size    | 0
    // The alignment field in new format is always 4; old format has the data
    // size there instead, which is never 4 for any real game chunk.
    const uint32_t firstField8 = ReadValue<uint32_t>(bytes, pos + 8);
    const bool isOldFormat = (firstField8 != 4);

    while (pos + kChunkHeaderSize <= bytes.size())
    {
        ChunkInfo chunk;
        chunk.start = pos;
        chunk.name.assign(reinterpret_cast<const char *>(bytes.data() + pos), 4);

        if (isOldFormat)
        {
            // Old MEX format: FourCC | skip | size | 0
            chunk.skip = ReadValue<uint32_t>(bytes, pos + 4);
            chunk.size = ReadValue<uint32_t>(bytes, pos + 8);
            chunk.align = 4;
        }
        else
        {
            // New MEF format: FourCC | size | align | skip
            chunk.size = ReadValue<uint32_t>(bytes, pos + 4);
            chunk.align = ReadValue<uint32_t>(bytes, pos + 8);
            chunk.skip = ReadValue<uint32_t>(bytes, pos + 12);
        }
        chunk.data = pos + kChunkHeaderSize;

        if (chunk.data + chunk.size > bytes.size())
        {
            throw std::runtime_error("MEF chunk exceeds file bounds in: " + filepath);
        }

        chunks.push_back(chunk);

        if (chunk.skip == 0)
        {
            pos = chunk.data + chunk.size;
            break;
        }

        const size_t nextPos = chunk.start + chunk.skip;
        if (nextPos <= chunk.start || nextPos + kChunkHeaderSize > bytes.size())
        {
            throw std::runtime_error("Invalid ILFF chunk link in: " + filepath);
        }

        pos = nextPos;
    }

    if (chunks.empty())
    {
        throw std::runtime_error("MEF file contains no ILFF chunks: " + filepath);
    }

    return chunks;
}

std::string DescribeChunks(const std::vector<ChunkInfo> &chunks)
{
    std::string text;
    for (size_t i = 0; i < chunks.size(); ++i)
    {
        const auto &chunk = chunks[i];
        if (!text.empty())
        {
            text += " | ";
        }
        text += chunk.name + "(size=" + std::to_string(chunk.size) +
                ", skip=" + std::to_string(chunk.skip) + ", data=" + std::to_string(chunk.data) +
                ")";
    }
    return text;
}

const ChunkInfo *FindChunk(const std::vector<ChunkInfo> &chunks, std::string_view name,
                           size_t ordinal = 0)
{
    size_t seen = 0;
    for (const auto &chunk : chunks)
    {
        if (chunk.name == name)
        {
            if (seen == ordinal)
            {
                return &chunk;
            }
            ++seen;
        }
    }
    return nullptr;
}

// ---------------------------------------------------------------------------
// HSEM / D3DR header parsers
// ---------------------------------------------------------------------------

uint32_t ReadModelType(const std::vector<uint8_t> &bytes, const std::vector<ChunkInfo> &chunks)
{
    const ChunkInfo *hsem = FindChunk(chunks, "HSEM");
    if (!hsem || hsem->size < 36)
    {
        return 0;
    }
    return ReadValue<uint32_t>(bytes, hsem->data + 32);
}

D3drInfo ReadD3drInfo(const std::vector<uint8_t> &bytes, const std::vector<ChunkInfo> &chunks,
                      uint32_t modelType)
{
    D3drInfo info;
    const ChunkInfo *d3dr = FindChunk(chunks, "D3DR");
    if (!d3dr)
    {
        return info;
    }

    info.rawSize = d3dr->size;
    if (d3dr->size < 16)
    {
        return info;
    }

    info.valid = true;
    if (modelType == 1)
    {
        if (d3dr->size < 24)
        {
            info.valid = false;
            return info;
        }
        info.numFaces = ReadValue<uint32_t>(bytes, d3dr->data + 4);
        info.numMeshes = ReadValue<uint32_t>(bytes, d3dr->data + 8);
        info.verts0 = ReadValue<uint32_t>(bytes, d3dr->data + 12);
        info.verts1 = ReadValue<uint32_t>(bytes, d3dr->data + 16);
        info.numVerts = ReadValue<uint32_t>(bytes, d3dr->data + 20);
    }
    else if (modelType == 3)
    {
        if (d3dr->size < 20)
        {
            info.valid = false;
            return info;
        }
        info.numFaces = ReadValue<uint32_t>(bytes, d3dr->data + 8);
        info.numMeshes = ReadValue<uint32_t>(bytes, d3dr->data + 12);
        info.numVerts = ReadValue<uint32_t>(bytes, d3dr->data + 16);
    }
    else
    {
        info.numFaces = ReadValue<uint32_t>(bytes, d3dr->data + 4);
        info.numMeshes = ReadValue<uint32_t>(bytes, d3dr->data + 8);
        info.numVerts = ReadValue<uint32_t>(bytes, d3dr->data + 12);
    }

    return info;
}

// ---------------------------------------------------------------------------
// XTRV vertex parser
// ---------------------------------------------------------------------------

std::vector<RenderVertex> ParseRenderVertices(const std::vector<uint8_t> &bytes,
                                              const ChunkInfo &chunk, uint32_t modelType,
                                              bool isIgi1)
{
    uint32_t vertexSize = 0;
    uint32_t uvOffset = 24; // default: pos(12) + normal(12) + uv(8)
    switch (modelType)
    {
    case 0:
        vertexSize = 32;
        uvOffset = 24; // pos(12) + normal(12) + uv(8)
        break;
    case 1:
        vertexSize = 40;
        uvOffset = 24; // pos(12) + normal(12) + uv0(8) + w(4) + vn(2) + bn(2)
        break;
    case 3:
        vertexSize = isIgi1 ? 40 : 28;
        uvOffset = isIgi1 ? 24 : 12;
        break;
    default:
        throw std::runtime_error("Unsupported MEF modelType in XTRV");
    }

    const size_t count = chunk.size / vertexSize;
    std::vector<RenderVertex> vertices(count);

    for (size_t i = 0; i < count; ++i)
    {
        const size_t base = chunk.data + i * vertexSize;

        glm::vec3 rawPos(ReadValue<float>(bytes, base + 0), ReadValue<float>(bytes, base + 4),
                         ReadValue<float>(bytes, base + 8));
        vertices[i].rawPos = rawPos;
        vertices[i].pos = rawPos * kMefNativeScale;

        // Normal is present for all model types at +12..+23
        vertices[i].normal =
            (modelType == 3 && !isIgi1)
                ? glm::vec3(0.0f)
                : glm::vec3(ReadValue<float>(bytes, base + 12), ReadValue<float>(bytes, base + 16),
                            ReadValue<float>(bytes, base + 20));

        vertices[i].uv = glm::vec2(ReadValue<float>(bytes, base + uvOffset),
                                   ReadValue<float>(bytes, base + uvOffset + 4));

        if (modelType == 3)
        {
            vertices[i].uv2 = glm::vec2(ReadValue<float>(bytes, base + (isIgi1 ? 32 : 20)),
                                        ReadValue<float>(bytes, base + (isIgi1 ? 36 : 24)));
        }

        if (modelType == 1)
        {
            vertices[i].weight = ReadValue<float>(bytes, base + 32);
            vertices[i].localVertexId = ReadValue<uint16_t>(bytes, base + 36);
            vertices[i].boneIndex = ReadValue<uint16_t>(bytes, base + 38);
        }
    }

    return vertices;
}

// ---------------------------------------------------------------------------
// DNER/ECAF triangle parsers
// ---------------------------------------------------------------------------

std::vector<std::array<uint32_t, 3>>
ParsePackedRenderTriangles(const std::vector<uint8_t> &bytes, const ChunkInfo &chunk,
                           uint32_t modelType, std::vector<ParsedGeometry::RenderBlock> &outBlocks,
                           size_t &outBlockCount)
{
    const size_t headerSize = (modelType == 3) ? 32 : 28;
    std::vector<std::array<uint32_t, 3>> triangles;
    size_t cursor = 0;
    size_t blockCount = 0;

    while (cursor + headerSize <= chunk.size)
    {
        const size_t base = chunk.data + cursor;
        const uint16_t indexCount = ReadValue<uint16_t>(bytes, base + 12);
        const int16_t nextoffs = ReadValue<int16_t>(bytes, base + 14);
        const int16_t materialSlot = ReadValue<int16_t>(bytes, base + 16);
        const uint16_t vertsOffset = (modelType == 3) ? ReadValue<uint16_t>(bytes, base + 20)
                                                      : ReadValue<uint16_t>(bytes, base + 18);
        const uint16_t vertsCount = (modelType == 3) ? ReadValue<uint16_t>(bytes, base + 22)
                                                     : ReadValue<uint16_t>(bytes, base + 20);
        (void)vertsCount; // used for diagnostics only
        // rawOpacity: non-zero means this render block uses alpha blending.
        // type 3 (buildings): at byte 24; type 0/1 (objects/characters): at byte 22.
        const uint16_t rawOpacity = (modelType == 3) ? ReadValue<uint16_t>(bytes, base + 24)
                                                     : ReadValue<uint16_t>(bytes, base + 22);
        const size_t indexBytes = static_cast<size_t>(indexCount) * sizeof(uint16_t);

        if (cursor + headerSize + indexBytes > chunk.size)
        {
            break;
        }

        const size_t facesBase = base + headerSize;
        const size_t blockTriangleStart = triangles.size();

        for (uint32_t i = 0; i + 2 < indexCount; i += 3)
        {
            const uint16_t a = ReadValue<uint16_t>(bytes, facesBase + static_cast<size_t>(i + 0) *
                                                                          sizeof(uint16_t));
            const uint16_t b = ReadValue<uint16_t>(bytes, facesBase + static_cast<size_t>(i + 1) *
                                                                          sizeof(uint16_t));
            const uint16_t c = ReadValue<uint16_t>(bytes, facesBase + static_cast<size_t>(i + 2) *
                                                                          sizeof(uint16_t));
            triangles.push_back({static_cast<uint32_t>(vertsOffset) + a,
                                 static_cast<uint32_t>(vertsOffset) + b,
                                 static_cast<uint32_t>(vertsOffset) + c});
        }

        const size_t blockTriangleCount = triangles.size() - blockTriangleStart;
        if (blockTriangleCount > 0)
        {
            // opacity < 1.0f signals alpha blending needed for this block
            const float blockOpacity = (rawOpacity != 0) ? 0.5f : 1.0f;
            outBlocks.push_back(
                {blockTriangleStart, blockTriangleCount, materialSlot, blockOpacity});
        }

        ++blockCount;
        cursor += headerSize + indexBytes;
        // modelType 3 (buildings): base+14 is NOT a linked-list nextoffs field —
        // the ASCII-export path never reads it. Rely solely on the while-loop
        // boundary to stop. For other model types keep the -1 sentinel.
        if (modelType != 3 && nextoffs == -1)
        {
            break;
        }
    }

    outBlockCount = blockCount;
    return triangles;
}

std::vector<std::array<uint32_t, 3>>
ParseSplitBoneTriangles(const std::vector<uint8_t> &bytes, const ChunkInfo &dnerChunk,
                        const ChunkInfo &ecafChunk, const D3drInfo &d3drInfo,
                        std::vector<ParsedGeometry::RenderBlock> &outBlocks, size_t &outBlockCount)
{
    // Bone DNER records in IGI 1 are consistently 32 bytes for models using ECAF.
    // Wait, DNER_0 is 28 bytes! But chunk.size might be aligned or 32 bytes.
    const size_t kBoneRecordSize = 32;
    const size_t blockCount = d3drInfo.numMeshes;

    if (dnerChunk.size < blockCount * kBoneRecordSize)
    {
        return {};
    }

    std::vector<std::array<uint32_t, 3>> triangles;
    const size_t totalIndicesInECAF = ecafChunk.size / sizeof(uint16_t);
    size_t runningIndexOffset = 0;

    for (size_t block = 0; block < blockCount; ++block)
    {
        const size_t base = dnerChunk.data + block * kBoneRecordSize;

        // IGI 1 Bone DNER Layout (matches DNER_0):
        // 0-11: floats px, py, pz
        // 12-13: num_face
        // 14-15: nextoffs
        // 16-17: td (material slot)
        // 18-19: off_verts
        // 20-21: num_verts
        // 22-23: opacity
        // 24-27: eflame, mshine, scolor, opacitd

        const uint16_t numIndices = ReadValue<uint16_t>(bytes, base + 12);
        const uint16_t nextOffs = ReadValue<uint16_t>(bytes, base + 14);
        const int16_t td = ReadValue<int16_t>(bytes, base + 16);
        const uint16_t offVerts = ReadValue<uint16_t>(bytes, base + 18);
        const uint16_t numVerts = ReadValue<uint16_t>(bytes, base + 20);

        // ECAF indices are sequential per block. The number of indices is given by numIndices (at
        // offset 12). Since each triangle has 3 indices, triangleCount is numIndices / 3.
        size_t triangleCount = numIndices / 3;

        // Fallback just in case IGI 1 bone models put the count somewhere else
        if (triangleCount == 0 && offVerts > 0)
            triangleCount = offVerts;
        if (triangleCount == 0 && nextOffs > 0)
            triangleCount = nextOffs;

        const size_t blockTriangleStart = triangles.size();

        for (size_t tri = 0; tri < triangleCount; ++tri)
        {
            const size_t firstIndex = runningIndexOffset + tri * 3;
            if (firstIndex + 2 >= totalIndicesInECAF)
                break;

            const size_t indexBase = ecafChunk.data + firstIndex * sizeof(uint16_t);
            const uint16_t a = ReadValue<uint16_t>(bytes, indexBase + 0);
            const uint16_t b = ReadValue<uint16_t>(bytes, indexBase + 2);
            const uint16_t c = ReadValue<uint16_t>(bytes, indexBase + 4);

            triangles.push_back(
                {static_cast<uint32_t>(a), static_cast<uint32_t>(c), static_cast<uint32_t>(b)});
        }

        runningIndexOffset += triangleCount * 3;

        const int materialSlot = (td >= 0) ? static_cast<int>(td) : static_cast<int>(block);

        if (triangles.size() > blockTriangleStart)
        {
            outBlocks.push_back(
                {blockTriangleStart, triangles.size() - blockTriangleStart, materialSlot, 1.0f});
        }
    }

    outBlockCount = outBlocks.size();
    return triangles;
}

// ---------------------------------------------------------------------------
// Collision geometry fallback
// ---------------------------------------------------------------------------

ParsedGeometry ParseCollisionGeometry(const std::vector<uint8_t> &bytes,
                                      const std::vector<ChunkInfo> &chunks)
{
    ParsedGeometry geometry;

    const ChunkInfo *xtvc = nullptr;
    const ChunkInfo *ecfc = nullptr;
    // Some collision-only MEFs store an empty primary XTVC/ECFC pair and
    // the actual collision mesh in the second pair. Select the first
    // complete, non-empty pair instead of silently exporting an empty OBJ.
    for (size_t occurrence = 0;; ++occurrence)
    {
        const ChunkInfo *candidateVertices = FindChunk(chunks, "XTVC", occurrence);
        const ChunkInfo *candidateFaces = FindChunk(chunks, "ECFC", occurrence);
        if (!candidateVertices && !candidateFaces)
            break;
        if (candidateVertices && candidateFaces && candidateVertices->size >= 16 &&
            candidateFaces->size >= 8)
        {
            xtvc = candidateVertices;
            ecfc = candidateFaces;
            break;
        }
    }
    if (!xtvc || !ecfc)
    {
        return geometry;
    }

    const size_t vertexCount = xtvc->size / 16;
    geometry.vertices.resize(vertexCount);

    for (size_t i = 0; i < vertexCount; ++i)
    {
        const size_t base = xtvc->data + i * 16;
        const float x = ReadValue<float>(bytes, base + 0);
        const float y = ReadValue<float>(bytes, base + 4);
        const float z = ReadValue<float>(bytes, base + 8);
        geometry.vertices[i].pos = glm::vec3(x, y, z) * kMefNativeScale;
        // Collision meshes have no real UVs.  The X/Z-derived values
        // can be very large (collision spans the whole level), so
        // wrap them into [0,1) via fmod to keep the exported OBJ's
        // V range sane.  MefExportObjHasRealUvs and
        // MefExportVFlipMatchesModelType guard against V exploding
        // outside [-1, 2] for typical models.
        auto wrap01 = [](float v)
        {
            float w = std::fmod(v, 1.0f);
            if (w < 0.0f)
                w += 1.0f;
            return w;
        };
        geometry.vertices[i].uv = glm::vec2(wrap01(x * 0.1f), wrap01(z * 0.1f));
    }

    const size_t faceCount = ecfc->size / 8;
    geometry.triangles.reserve(faceCount);
    for (size_t i = 0; i < faceCount; ++i)
    {
        const size_t base = ecfc->data + i * 8;
        const uint16_t a = ReadValue<uint16_t>(bytes, base + 0);
        const uint16_t b = ReadValue<uint16_t>(bytes, base + 2);
        const uint16_t c = ReadValue<uint16_t>(bytes, base + 4);
        if (a >= vertexCount || b >= vertexCount || c >= vertexCount)
            return ParsedGeometry{};
        geometry.triangles.push_back({a, b, c});
    }

    geometry.collisionVertexCount = vertexCount;
    geometry.collisionFaceCount = faceCount;

    return geometry;
}

// ---------------------------------------------------------------------------
// REIH bone hierarchy — returns vector<BoneInfo>
// ---------------------------------------------------------------------------

std::vector<BoneInfo> ParseBoneHierarchy(const std::vector<uint8_t> &bytes,
                                         const std::vector<ChunkInfo> &chunks)
{
    const ChunkInfo *reih = FindChunk(chunks, "REIH");
    if (!reih || reih->size < 1)
        return {};

    const size_t sz = reih->size;
    const size_t align = sz % 13;
    const size_t numBones = (sz - align) / 13;
    const size_t p2Offset = reih->data + numBones + align;

    if (numBones == 0 || p2Offset + numBones * 12 > bytes.size())
        return {};

    std::vector<BoneInfo> bones(numBones);
    std::vector<uint8_t> numChildArr(numBones);
    for (size_t i = 0; i < numBones; ++i)
    {
        numChildArr[i] = bytes[reih->data + i];
        bones[i].numChild = numChildArr[i];
        bones[i].pivot.x = ReadValue<float>(bytes, p2Offset + i * 12 + 0);
        bones[i].pivot.y = ReadValue<float>(bytes, p2Offset + i * 12 + 4);
        bones[i].pivot.z = ReadValue<float>(bytes, p2Offset + i * 12 + 8);
    }

    // Reconstruct parent indices using breadth-first queue logic:
    // Bones are stored in level-order (BFS) traversal. Each node's children are
    // assigned to the next consecutive bone IDs in the flat array.
    bones[0].parent = -1;
    {
        // queue stores (boneId, remainingChildren)
        std::vector<std::pair<int, int>> bfsQueue;
        bfsQueue.reserve(numBones);
        bfsQueue.push_back({0, static_cast<int>(numChildArr[0])});
        size_t head = 0;
        size_t nextBone = 1;
        while (head < bfsQueue.size() && nextBone < numBones)
        {
            auto &[parentId, remaining] = bfsQueue[head];
            if (remaining == 0)
            {
                ++head;
                continue;
            }
            --remaining;
            bones[nextBone].parent = parentId;
            bfsQueue.push_back(
                {static_cast<int>(nextBone), static_cast<int>(numChildArr[nextBone])});
            ++nextBone;
        }
    }

    return bones;
}

// ---------------------------------------------------------------------------
// Helper: compute world positions from BoneInfo (for vertex baking)
// ---------------------------------------------------------------------------
// Bone hierarchy parser (used internally)
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
// MANB bone names
// ---------------------------------------------------------------------------

std::vector<std::string> ParseManbNames(const std::vector<uint8_t> &bytes,
                                        const std::vector<ChunkInfo> &chunks)
{
    const ChunkInfo *manb = FindChunk(chunks, "MANB");
    if (!manb || manb->size == 0)
        return {};

    const size_t count = manb->size / 16;
    std::vector<std::string> names(count);
    for (size_t i = 0; i < count; ++i)
    {
        const size_t base = manb->data + i * 16;
        size_t len = 0;
        while (len < 16 && bytes[base + len] != 0)
            ++len;
        names[i] = std::string(reinterpret_cast<const char *>(bytes.data() + base), len);
    }
    return names;
}

// ---------------------------------------------------------------------------
// ATTA attachment records (68 bytes each)
// ---------------------------------------------------------------------------

std::vector<Attachment> ParseAttachments(const std::vector<uint8_t> &bytes,
                                         const std::vector<ChunkInfo> &chunks)
{
    const ChunkInfo *atta = FindChunk(chunks, "ATTA");
    if (!atta || atta->size == 0)
        return {};

    const size_t stride = 68;
    const size_t count = atta->size / stride;
    std::vector<Attachment> result(count);
    for (size_t i = 0; i < count; ++i)
    {
        const size_t base = atta->data + i * stride;

        size_t len = 0;
        while (len < 16 && bytes[base + len] != 0)
            ++len;
        result[i].name = std::string(reinterpret_cast<const char *>(bytes.data() + base), len);

        result[i].pos.x = ReadValue<float>(bytes, base + 16);
        result[i].pos.y = ReadValue<float>(bytes, base + 20);
        result[i].pos.z = ReadValue<float>(bytes, base + 24);
        result[i].boneId = ReadValue<int32_t>(bytes, base + 64);
    }
    return result;
}

// ---------------------------------------------------------------------------
// Main geometry orchestrator
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
// New parsers: XTVC, ECFC, ECAF, DNER records, TAMC
// ---------------------------------------------------------------------------

std::vector<MefAttachment> ParseMefAttachments(const std::vector<uint8_t> &bytes,
                                               const ChunkInfo &chunk)
{
    const size_t stride = 68;
    const size_t count = chunk.size / stride;
    std::vector<MefAttachment> attas(count);
    for (size_t i = 0; i < count; ++i)
    {
        const size_t base = chunk.data + i * stride;
        std::memcpy(attas[i].name, &bytes[base + 0], 16);
        attas[i].px = ReadValue<float>(bytes, base + 16);
        attas[i].py = ReadValue<float>(bytes, base + 20);
        attas[i].pz = ReadValue<float>(bytes, base + 24);
        attas[i].r00 = ReadValue<float>(bytes, base + 28);
        attas[i].r01 = ReadValue<float>(bytes, base + 32);
        attas[i].r02 = ReadValue<float>(bytes, base + 36);
        attas[i].r03 = ReadValue<float>(bytes, base + 40);
        attas[i].r04 = ReadValue<float>(bytes, base + 44);
        attas[i].r05 = ReadValue<float>(bytes, base + 48);
        attas[i].r06 = ReadValue<float>(bytes, base + 52);
        attas[i].r07 = ReadValue<float>(bytes, base + 56);
        attas[i].r08 = ReadValue<float>(bytes, base + 60);
        attas[i].boneId = ReadValue<int32_t>(bytes, base + 64);
    }
    return attas;
}

std::vector<XtvmVertex> ParseXtvmVerts(const std::vector<uint8_t> &bytes, const ChunkInfo &chunk)
{
    const size_t stride = 16;
    const size_t count = chunk.size / stride;
    std::vector<XtvmVertex> verts(count);
    for (size_t i = 0; i < count; ++i)
    {
        const size_t base = chunk.data + i * stride;
        verts[i].px = ReadValue<float>(bytes, base + 0);
        verts[i].py = ReadValue<float>(bytes, base + 4);
        verts[i].pz = ReadValue<float>(bytes, base + 8);
        verts[i].magicType = ReadValue<int32_t>(bytes, base + 12);
    }
    return verts;
}

std::vector<XtvcVertex> ParseXtvcVerts(const std::vector<uint8_t> &bytes, const ChunkInfo &chunk,
                                       bool isIgi1)
{
    if (isIgi1)
    {
        // XTVC IGI 1: 16 bytes per vertex
        const size_t stride = 16;
        const size_t count = chunk.size / stride;
        std::vector<XtvcVertex> verts(count);
        for (size_t i = 0; i < count; ++i)
        {
            const size_t base = chunk.data + i * stride;
            verts[i].px = ReadValue<float>(bytes, base + 0);
            verts[i].py = ReadValue<float>(bytes, base + 4);
            verts[i].pz = ReadValue<float>(bytes, base + 8);
            verts[i].boneIndex = ReadValue<uint32_t>(bytes, base + 12);
            verts[i].reserved = 0;
        }
        return verts;
    }
    else
    {
        // XTVC IGI 2: 20 bytes per vertex
        const size_t stride = 20;
        const size_t count = chunk.size / stride;
        std::vector<XtvcVertex> verts(count);
        for (size_t i = 0; i < count; ++i)
        {
            const size_t base = chunk.data + i * stride;
            verts[i].px = ReadValue<float>(bytes, base + 0);
            verts[i].py = ReadValue<float>(bytes, base + 4);
            verts[i].pz = ReadValue<float>(bytes, base + 8);
            verts[i].boneIndex = ReadValue<uint32_t>(bytes, base + 12);
            verts[i].reserved = ReadValue<uint32_t>(bytes, base + 16);
        }
        return verts;
    }
}

std::vector<EcfcFace> ParseEcfcFaces(const std::vector<uint8_t> &bytes, const ChunkInfo &chunk,
                                     bool isIgi1)
{
    // ECFC: 8 bytes per face in IGI 1, 12 bytes per face in IGI 2
    const size_t stride = isIgi1 ? 8 : 12;
    const size_t count = chunk.size / stride;
    std::vector<EcfcFace> faces(count);
    for (size_t i = 0; i < count; ++i)
    {
        const size_t base = chunk.data + i * stride;
        faces[i].a = ReadValue<uint16_t>(bytes, base + 0);
        faces[i].b = ReadValue<uint16_t>(bytes, base + 2);
        faces[i].c = ReadValue<uint16_t>(bytes, base + 4);
        faces[i].mat = ReadValue<uint16_t>(bytes, base + 6);
        if (!isIgi1)
        {
            faces[i].lmp = ReadValue<uint16_t>(bytes, base + 8);
            faces[i].vrt = ReadValue<uint16_t>(bytes, base + 10);
        }
        else
        {
            faces[i].lmp = 0;
            faces[i].vrt = 0;
        }
    }
    return faces;
}

std::vector<EcafFace> ParseEcafFaces(const std::vector<uint8_t> &bytes, const ChunkInfo &chunk)
{
    // ECAF: 6 bytes per face
    const size_t stride = 6;
    const size_t count = chunk.size / stride;
    std::vector<EcafFace> faces(count);
    for (size_t i = 0; i < count; ++i)
    {
        const size_t base = chunk.data + i * stride;
        faces[i].a = ReadValue<uint16_t>(bytes, base + 0);
        faces[i].b = ReadValue<uint16_t>(bytes, base + 2);
        faces[i].c = ReadValue<uint16_t>(bytes, base + 4);
    }
    return faces;
}

std::vector<DnerRecord> ParseDnerRecords(const std::vector<uint8_t> &bytes, const ChunkInfo &chunk)
{
    // DNER type0/type1: 32 bytes per record
    const size_t stride = 32;
    const size_t count = chunk.size / stride;
    std::vector<DnerRecord> recs(count);
    for (size_t i = 0; i < count; ++i)
    {
        const size_t base = chunk.data + i * stride;
        recs[i].opacity = ReadValue<uint8_t>(bytes, base + 0);
        recs[i].mshine = ReadValue<uint8_t>(bytes, base + 1);
        recs[i].scolor = ReadValue<uint8_t>(bytes, base + 2);
        recs[i].opacitd = ReadValue<uint8_t>(bytes, base + 3);
        recs[i].px = ReadValue<float>(bytes, base + 4);
        recs[i].py = ReadValue<float>(bytes, base + 8);
        recs[i].pz = ReadValue<float>(bytes, base + 12);
        recs[i].offsetIndex = ReadValue<uint16_t>(bytes, base + 16);
        recs[i].numFace = ReadValue<uint16_t>(bytes, base + 18);
        recs[i].offVerts = ReadValue<uint16_t>(bytes, base + 20);
        recs[i].numVerts = ReadValue<uint16_t>(bytes, base + 22);
        recs[i].td = ReadValue<int16_t>(bytes, base + 24);
        recs[i].tb = ReadValue<int16_t>(bytes, base + 26);
        recs[i].tr = ReadValue<int16_t>(bytes, base + 28);
        recs[i].trd = ReadValue<uint8_t>(bytes, base + 30);
        recs[i].tbd = ReadValue<uint8_t>(bytes, base + 31);
    }
    return recs;
}

std::vector<TamcRecord> ParseTamcRecords(const std::vector<uint8_t> &bytes, const ChunkInfo &chunk,
                                         bool isIgi1)
{
    if (isIgi1)
    {
        // TAMC IGI 1: 12 bytes per record
        const size_t stride = 12;
        const size_t count = chunk.size / stride;
        std::vector<TamcRecord> recs(count);
        for (size_t i = 0; i < count; ++i)
        {
            const size_t base = chunk.data + i * stride;
            recs[i].opacity = ReadValue<float>(bytes, base + 0);
            recs[i].portal = ReadValue<uint16_t>(bytes, base + 4);
            recs[i].diffuse = ReadValue<int16_t>(bytes, base + 6);
            recs[i].matId = ReadValue<int16_t>(bytes, base + 8);
            recs[i].unknown = ReadValue<uint16_t>(bytes, base + 10);
            recs[i].unknown0 = 0;
            recs[i].unknown1 = 0;
        }
        return recs;
    }
    else
    {
        // TAMC IGI 2: 16 bytes per record
        const size_t stride = 16;
        const size_t count = chunk.size / stride;
        std::vector<TamcRecord> recs(count);
        for (size_t i = 0; i < count; ++i)
        {
            const size_t base = chunk.data + i * stride;
            recs[i].opacity = ReadValue<float>(bytes, base + 0);
            recs[i].portal = ReadValue<uint16_t>(bytes, base + 4);
            recs[i].diffuse = ReadValue<int16_t>(bytes, base + 6);
            recs[i].unknown0 = ReadValue<uint16_t>(bytes, base + 8);
            recs[i].unknown1 = ReadValue<uint16_t>(bytes, base + 10);
            recs[i].matId = ReadValue<int16_t>(bytes, base + 12);
            recs[i].unknown = ReadValue<uint16_t>(bytes, base + 14);
        }
        return recs;
    }
}

std::vector<std::array<uint32_t, 3>>
ParseIgi2RenderTriangles(const std::vector<uint8_t> &bytes, const ChunkInfo &dner,
                         const ChunkInfo &ecaf, uint32_t modelType, size_t vertexCount,
                         std::vector<ParsedGeometry::RenderBlock> &blocks)
{
    const size_t stride = modelType == 3 ? 28 : 32;
    if (dner.size % stride || ecaf.size % 6)
        throw std::runtime_error("Invalid IGI 2 render record size");
    std::vector<std::array<uint32_t, 3>> triangles;
    for (size_t offset = 0; offset < dner.size; offset += stride)
    {
        const size_t base = dner.data + offset;
        const size_t firstIndex = ReadValue<uint16_t>(bytes, base + 16);
        const size_t faceCount = ReadValue<uint16_t>(bytes, base + 18);

        const int16_t material = ReadValue<int16_t>(bytes, base + 24);
        if (firstIndex > ecaf.size / 2 || faceCount > (ecaf.size / 2 - firstIndex) / 3)
            throw std::runtime_error("IGI 2 face range exceeds ECAF chunk");
        const size_t firstTriangle = triangles.size();
        for (size_t face = 0; face < faceCount; ++face)
        {
            std::array<uint32_t, 3> triangle{};
            for (size_t axis = 0; axis < 3; ++axis)
            {
                triangle[axis] =
                    ReadValue<uint16_t>(bytes, ecaf.data + (firstIndex + face * 3 + axis) * 2);
                if (triangle[axis] >= vertexCount)
                    throw std::runtime_error("IGI 2 render vertex index out of range");
            }
            triangles.push_back(triangle);
        }
        if (faceCount)
            blocks.push_back({firstTriangle, faceCount, material, 1.0f});
    }
    return triangles;
}

// Shadow groups use local triangle indices; unknown face and edge fields stay raw.
ParsedGeometry ParseShadowGeometry(const std::vector<uint8_t> &bytes,
                                   const std::vector<ChunkInfo> &chunks)
{
    ParsedGeometry geometry;
    const auto *groups = FindChunk(chunks, "SEMS");
    const auto *vertices = FindChunk(chunks, "XTVS");
    const auto *faces = FindChunk(chunks, "CAFS");
    if (!groups || !vertices || !faces)
        return geometry;
    if (groups->size % 28 || vertices->size % 12 || faces->size % 28)
        throw std::runtime_error("Invalid shadow mesh record size");
    geometry.renderLayout = "shadow volume";
    geometry.vertices.resize(vertices->size / 12);
    for (size_t i = 0; i < geometry.vertices.size(); ++i)
    {
        auto &vertex = geometry.vertices[i];
        const size_t base = vertices->data + i * 12;
        vertex.rawPos = glm::vec3(ReadValue<float>(bytes, base),
                                 ReadValue<float>(bytes, base + 4),
                                 ReadValue<float>(bytes, base + 8));
        if (!std::isfinite(vertex.rawPos.x) || !std::isfinite(vertex.rawPos.y) || !std::isfinite(vertex.rawPos.z))
            throw std::runtime_error("Nonfinite shadow vertex");
        vertex.pos = vertex.rawPos * kMefNativeScale;
    }
    for (size_t i = 0; i < groups->size / 28; ++i)
    {
        const size_t base = groups->data + i * 28;
        const size_t firstFace = ReadValue<uint32_t>(bytes, base);
        const size_t firstVertex = ReadValue<uint32_t>(bytes, base + 4);
        const size_t faceCount = ReadValue<uint32_t>(bytes, base + 12);
        const size_t vertexCount = ReadValue<uint32_t>(bytes, base + 16);
        const uint32_t bone = ReadValue<uint32_t>(bytes, base + 24);
        if (firstFace > faces->size / 28 || faceCount > faces->size / 28 - firstFace ||
            firstVertex > geometry.vertices.size() || vertexCount > geometry.vertices.size() - firstVertex ||
            (bone != std::numeric_limits<uint32_t>::max() && bone > std::numeric_limits<uint16_t>::max()))
            throw std::runtime_error("Shadow group exceeds mesh bounds");
        for (size_t v = firstVertex; v < firstVertex + vertexCount; ++v)
            geometry.vertices[v].boneIndex = static_cast<uint16_t>(bone);
        for (size_t f = firstFace; f < firstFace + faceCount; ++f)
        {
            std::array<uint32_t, 3> triangle{};
            const size_t position = faces->data + f * 28;
            const glm::vec3 normal(ReadValue<float>(bytes, position + 16),
                                   ReadValue<float>(bytes, position + 20),
                                   ReadValue<float>(bytes, position + 24));
            if (!std::isfinite(normal.x) || !std::isfinite(normal.y) || !std::isfinite(normal.z))
                throw std::runtime_error("Nonfinite shadow normal");
            for (size_t c = 0; c < 3; ++c)
            {
                const uint32_t local = ReadValue<uint32_t>(bytes, position + c * 4);
                if (local >= vertexCount)
                    throw std::runtime_error("Shadow face index exceeds its group");
                triangle[c] = static_cast<uint32_t>(firstVertex + local);
                geometry.vertices[triangle[c]].normal += normal;
            }
            geometry.triangles.push_back(triangle);
        }
    }
    for (auto &vertex : geometry.vertices)
        if (glm::length(vertex.normal) > 0.f)
            vertex.normal = glm::normalize(vertex.normal);
    return geometry;
}

// Legacy menu models expose collision geometry separately from render primitives.
ParsedGeometry ParseFormModel(const std::vector<uint8_t> &bytes)
{
    auto bigEndian = [&](size_t position) {
        if (position > bytes.size() || bytes.size() - position < 4)
            throw std::runtime_error("Truncated FORM model");
        return (uint32_t(bytes[position]) << 24) | (uint32_t(bytes[position + 1]) << 16) |
               (uint32_t(bytes[position + 2]) << 8) | uint32_t(bytes[position + 3]);
    };
    if (bytes.size() < 12 || std::memcmp(bytes.data() + 8, "TDOB", 4) || bigEndian(4) != bytes.size() - 8)
        throw std::runtime_error("Invalid FORM TDOB model header");
    ParsedGeometry geometry;
    geometry.renderLayout = "FORM TDOB collision geometry";
    size_t vertexData = 0, vertexSize = 0, faceData = 0, faceSize = 0;
    for (size_t position = 12; position < bytes.size();)
    {
        if (bytes.size() - position < 8)
            throw std::runtime_error("Truncated FORM chunk header");
        const size_t size = bigEndian(position + 4);
        const size_t padded = size + size % 2;
        if (padded > bytes.size() - position - 8)
            throw std::runtime_error("Truncated FORM chunk payload");
        ParsedGeometry::RawChunk chunk;
        std::memcpy(chunk.fourcc, bytes.data() + position, 4);
        chunk.data.assign(bytes.begin() + position + 8, bytes.begin() + position + 8 + size);
        geometry.rawChunks.push_back(std::move(chunk));
        if (!std::memcmp(bytes.data() + position, "VPOS", 4))
            vertexData = position + 8, vertexSize = size;
        if (!std::memcmp(bytes.data() + position, "CFAC", 4))
            faceData = position + 8, faceSize = size;
        position += 8 + padded;
    }
    if (!vertexData || !faceData || vertexSize % 20 || faceSize % 16)
        throw std::runtime_error("Unsupported FORM model collision layout");
    geometry.vertices.resize(vertexSize / 20);
    for (size_t i = 0; i < geometry.vertices.size(); ++i)
    {
        auto &vertex = geometry.vertices[i];
        const size_t position = vertexData + i * 20;
        vertex.rawPos = glm::vec3(ReadValue<float>(bytes, position), ReadValue<float>(bytes, position + 4), ReadValue<float>(bytes, position + 8));
        if (!std::isfinite(vertex.rawPos.x) || !std::isfinite(vertex.rawPos.y) || !std::isfinite(vertex.rawPos.z))
            throw std::runtime_error("Nonfinite FORM model vertex");
        vertex.pos = vertex.rawPos * kMefNativeScale;
    }
    for (size_t i = 0; i < faceSize / 16; ++i)
    {
        std::array<uint32_t, 3> triangle{};
        for (size_t c = 0; c < 3; ++c)
        {
            triangle[c] = ReadValue<uint16_t>(bytes, faceData + i * 16 + c * 2);
            if (triangle[c] >= geometry.vertices.size())
                throw std::runtime_error("FORM collision index exceeds vertex bounds");
        }
        const auto normal = glm::cross(geometry.vertices[triangle[1]].pos - geometry.vertices[triangle[0]].pos,
                                       geometry.vertices[triangle[2]].pos - geometry.vertices[triangle[0]].pos);
        for (auto index : triangle)
            geometry.vertices[index].normal += normal;
        geometry.triangles.push_back(triangle);
    }
    for (auto &vertex : geometry.vertices)
        if (glm::length(vertex.normal) > 0.f)
            vertex.normal = glm::normalize(vertex.normal);
    geometry.collisionVertexCount = geometry.vertices.size();
    geometry.collisionFaceCount = geometry.triangles.size();
    return geometry;
}

ParsedGeometry ParseMefGeometry(const std::vector<uint8_t> &bytes,
                                const std::vector<ChunkInfo> &chunks,
                                const std::string &filepath = "")
{
    ParsedGeometry geometry;
    const ChunkInfo *hsem = FindChunk(chunks, "HSEM");
    const bool isIgi1 = hsem && (hsem->size == 156);
    geometry.isIgi1 = isIgi1;

    const uint32_t modelType = ReadModelType(bytes, chunks);
    geometry.modelType = modelType;
    const D3drInfo d3drInfo = ReadD3drInfo(bytes, chunks, modelType);

    const ChunkInfo *xtrv = FindChunk(chunks, "XTRV");
    const ChunkInfo *dner = FindChunk(chunks, "DNER");
    const ChunkInfo *ecaf = FindChunk(chunks, "ECAF");

    if (xtrv && dner)
    {
        geometry.vertices = ParseRenderVertices(bytes, *xtrv, modelType, isIgi1);

        if (modelType == 1)
        {
            if (isIgi1)
            {
                std::string modelName;
                if (!filepath.empty())
                {
                    std::string filename = filepath;
                    size_t lastSlash = filename.find_last_of("\\/");
                    if (lastSlash != std::string::npos)
                        filename = filename.substr(lastSlash + 1);
                    size_t lastDot = filename.find_last_of(".");
                    modelName =
                        (lastDot != std::string::npos) ? filename.substr(0, lastDot) : filename;
                }
                uint32_t maxBoneIdx = 0;
                for (const auto &v : geometry.vertices)
                {
                    if (v.boneIndex > maxBoneIdx)
                        maxBoneIdx = v.boneIndex;
                }
                geometry.bones = GetIgi1HardcodedBones(modelName, maxBoneIdx);
            }
            else
            {
                geometry.bones = ParseBoneHierarchy(bytes, chunks);
                const std::vector<std::string> names = ParseManbNames(bytes, chunks);
                for (size_t i = 0; i < geometry.bones.size() && i < names.size(); ++i)
                {
                    geometry.bones[i].name = names[i];
                }
            }
            geometry.attachments = ParseAttachments(bytes, chunks);

            // Bake world-space bone offsets into vertex positions
            const std::vector<glm::vec3> boneWorldPos = ComputeBoneWorldPositions(geometry.bones);
            if (!boneWorldPos.empty())
            {
                for (auto &v : geometry.vertices)
                {
                    if (v.boneIndex < static_cast<uint16_t>(boneWorldPos.size()))
                    {
                        v.pos += boneWorldPos[v.boneIndex] * kMefNativeScale;
                    }
                }
            }
        }

        if (!isIgi1 && ecaf)
        {
            geometry.triangles = ParseIgi2RenderTriangles(
                bytes, *dner, *ecaf, modelType, geometry.vertices.size(), geometry.renderBlocks);
            geometry.renderBlockCount = geometry.renderBlocks.size();
            geometry.renderLayout = "IGI 2 separate ECAF/DNER";
        }
        else if (modelType == 1 && ecaf && d3drInfo.valid && d3drInfo.numMeshes > 0)
        {
            geometry.triangles = ParseSplitBoneTriangles(
                bytes, *dner, *ecaf, d3drInfo, geometry.renderBlocks, geometry.renderBlockCount);
            geometry.renderLayout = "type1 split ECAF/DNER";
            if (geometry.triangles.empty())
            {
                // Split path failed, fall back to packed DNER parsing
                geometry.triangles = ParsePackedRenderTriangles(
                    bytes, *dner, modelType, geometry.renderBlocks, geometry.renderBlockCount);
                geometry.renderLayout = "type1 packed DNER (split fallback)";
            }
        }
        else
        {
            geometry.triangles = ParsePackedRenderTriangles(
                bytes, *dner, modelType, geometry.renderBlocks, geometry.renderBlockCount);
            geometry.renderLayout = (modelType == 1) ? "type1 packed DNER" : "packed DNER";
        }

        geometry.fromRenderMesh = !geometry.vertices.empty() && !geometry.triangles.empty();
    }

    if (!geometry.fromRenderMesh)
    {
        geometry = ParseCollisionGeometry(bytes, chunks);
        geometry.renderLayout = "collision fallback";
        if (geometry.vertices.empty() && geometry.triangles.empty())
            geometry = ParseShadowGeometry(bytes, chunks);
    }

    // ---- Parse ASCII-export-specific chunks ----
    if (isIgi1)
    {
        if (dner)
        {
            // Parse inline DNER & ECAF for IGI 1
            size_t cursor = 0;
            uint32_t accumulatedIndicesCount = 0;
            while (cursor < dner->size)
            {
                if (modelType == 3)
                {
                    if (cursor + 32 > dner->size)
                        break;
                    const size_t base = dner->data + cursor;

                    DnerRecord rec;
                    rec.px = ReadValue<float>(bytes, base + 0);
                    rec.py = ReadValue<float>(bytes, base + 4);
                    rec.pz = ReadValue<float>(bytes, base + 8);
                    rec.numFace = ReadValue<uint16_t>(bytes, base + 12);
                    rec.td = ReadValue<int16_t>(bytes, base + 16);
                    rec.tb = ReadValue<int16_t>(bytes, base + 18); // _lmap
                    rec.offVerts = ReadValue<uint16_t>(bytes, base + 20);
                    rec.numVerts = ReadValue<uint16_t>(bytes, base + 22);
                    rec.rawOpacity = ReadValue<uint16_t>(bytes, base + 24);
                    rec.eflame = ReadValue<uint8_t>(bytes, base + 28);
                    rec.mshine = ReadValue<uint8_t>(bytes, base + 29);
                    rec.scolor = ReadValue<uint8_t>(bytes, base + 30); // _mcolor (stored in scolor)
                    rec.opacitd = ReadValue<uint8_t>(bytes, base + 31);

                    uint8_t op = 0;
                    if (rec.rawOpacity != 0)
                        op |= 4;
                    if (rec.scolor != 0)
                        op |= 2;
                    if (rec.eflame != 0)
                        op |= 1;
                    rec.opacity = op;

                    rec.offsetIndex = accumulatedIndicesCount;
                    geometry.dnerRecords.push_back(rec);

                    cursor += 32;

                    if (cursor + rec.numFace * 2 > dner->size)
                        break;

                    for (uint16_t i = 0; i + 2 < rec.numFace; i += 3)
                    {
                        EcafFace face;
                        face.a =
                            ReadValue<uint16_t>(bytes, dner->data + cursor + i * 2) + rec.offVerts;
                        face.b = ReadValue<uint16_t>(bytes, dner->data + cursor + (i + 1) * 2) +
                                 rec.offVerts;
                        face.c = ReadValue<uint16_t>(bytes, dner->data + cursor + (i + 2) * 2) +
                                 rec.offVerts;
                        geometry.ecafFaces.push_back(face);
                    }

                    accumulatedIndicesCount += rec.numFace;
                    cursor += rec.numFace * 2;
                }
                else
                {
                    if (cursor + 28 > dner->size)
                        break;
                    const size_t base = dner->data + cursor;

                    DnerRecord rec;
                    rec.px = ReadValue<float>(bytes, base + 0);
                    rec.py = ReadValue<float>(bytes, base + 4);
                    rec.pz = ReadValue<float>(bytes, base + 8);
                    rec.numFace = ReadValue<uint16_t>(bytes, base + 12);
                    rec.td = ReadValue<int16_t>(bytes, base + 16);
                    rec.offVerts = ReadValue<uint16_t>(bytes, base + 18);
                    rec.numVerts = ReadValue<uint16_t>(bytes, base + 20);
                    rec.rawOpacity = ReadValue<uint16_t>(bytes, base + 22);
                    rec.eflame = ReadValue<uint8_t>(bytes, base + 24);
                    rec.mshine = ReadValue<uint8_t>(bytes, base + 25);
                    rec.scolor = ReadValue<uint8_t>(bytes, base + 26); // _Scolor
                    rec.opacitd = ReadValue<uint8_t>(bytes, base + 27);

                    uint8_t op = 0;
                    if (rec.rawOpacity != 0)
                        op |= 4;
                    if (rec.scolor != 0)
                        op |= 2;
                    if (rec.eflame != 0)
                        op |= 1;
                    rec.opacity = op;

                    rec.offsetIndex = accumulatedIndicesCount;
                    geometry.dnerRecords.push_back(rec);

                    cursor += 28;

                    if (cursor + rec.numFace * 2 > dner->size)
                        break;

                    for (uint16_t i = 0; i + 2 < rec.numFace; i += 3)
                    {
                        EcafFace face;
                        face.a =
                            ReadValue<uint16_t>(bytes, dner->data + cursor + i * 2) + rec.offVerts;
                        face.b = ReadValue<uint16_t>(bytes, dner->data + cursor + (i + 1) * 2) +
                                 rec.offVerts;
                        face.c = ReadValue<uint16_t>(bytes, dner->data + cursor + (i + 2) * 2) +
                                 rec.offVerts;
                        geometry.ecafFaces.push_back(face);
                    }

                    accumulatedIndicesCount += rec.numFace;
                    cursor += rec.numFace * 2;
                }
            }
        }
    }
    else
    {
        if (dner)
        {
            geometry.dnerRecords = ParseDnerRecords(bytes, *dner);
        }
        if (ecaf)
        {
            geometry.ecafFaces = ParseEcafFaces(bytes, *ecaf);
        }
    }

    // XTVC0, ECFC0, TAMC0 (set 0), XTVC1, ECFC1, TAMC1 (set 1)
    const ChunkInfo *xtvc0 = FindChunk(chunks, "XTVC", 0);
    const ChunkInfo *ecfc0 = FindChunk(chunks, "ECFC", 0);
    const ChunkInfo *tamc0 = FindChunk(chunks, "TAMC", 0);
    const ChunkInfo *xtvc1 = FindChunk(chunks, "XTVC", 1);
    const ChunkInfo *ecfc1 = FindChunk(chunks, "ECFC", 1);
    const ChunkInfo *tamc1 = FindChunk(chunks, "TAMC", 1);
    const ChunkInfo *xtvm = FindChunk(chunks, "XTVM", 0);
    const ChunkInfo *atta = FindChunk(chunks, "ATTA", 0);

    if (xtvc0)
        geometry.xtvcVerts = ParseXtvcVerts(bytes, *xtvc0, isIgi1);
    if (ecfc0)
        geometry.ecfcFaces = ParseEcfcFaces(bytes, *ecfc0, isIgi1);
    if (tamc0)
        geometry.tamcRecords = ParseTamcRecords(bytes, *tamc0, isIgi1);
    if (xtvc1)
        geometry.xtvcVerts1 = ParseXtvcVerts(bytes, *xtvc1, isIgi1);
    if (ecfc1)
        geometry.ecfcFaces1 = ParseEcfcFaces(bytes, *ecfc1, isIgi1);
    if (tamc1)
        geometry.tamcRecords1 = ParseTamcRecords(bytes, *tamc1, isIgi1);
    if (xtvm)
        geometry.xtvmVerts = ParseXtvmVerts(bytes, *xtvm);
    if (atta)
        geometry.mefAttachments = ParseMefAttachments(bytes, *atta);

    // ---- Parse portal chunks (all optional) ----
    {
        const ChunkInfo *trop = FindChunk(chunks, "TROP");
        const ChunkInfo *xvtp = FindChunk(chunks, "XVTP");
        const ChunkInfo *cftp = FindChunk(chunks, "CFTP");
        const ChunkInfo *pmtl = FindChunk(chunks, "PMTL");

        std::vector<glm::vec3> xvtpVerts;
        if (xvtp != nullptr)
        {
            const size_t count = xvtp->size / 12;
            xvtpVerts.reserve(count);
            for (size_t i = 0; i < count; ++i)
            {
                const size_t base = xvtp->data + i * 12;
                xvtpVerts.push_back(glm::vec3(ReadValue<float>(bytes, base + 0),
                                              ReadValue<float>(bytes, base + 4),
                                              ReadValue<float>(bytes, base + 8)));
            }
        }

        std::vector<std::array<uint32_t, 3>> cftpFaces;
        if (cftp != nullptr)
        {
            const size_t count = cftp->size / 12;
            cftpFaces.reserve(count);
            for (size_t i = 0; i < count; ++i)
            {
                const size_t base = cftp->data + i * 12;
                cftpFaces.push_back({ReadValue<uint32_t>(bytes, base + 0),
                                     ReadValue<uint32_t>(bytes, base + 4),
                                     ReadValue<uint32_t>(bytes, base + 8)});
            }
        }

        std::vector<uint32_t> pmtlMats;
        if (pmtl != nullptr)
        {
            const size_t count = pmtl->size / 16;
            pmtlMats.reserve(count);
            for (size_t i = 0; i < count; ++i)
            {
                const size_t base = pmtl->data + i * 16;
                pmtlMats.push_back(ReadValue<uint32_t>(bytes, base + 0));
            }
        }

        if (trop != nullptr)
        {
            const size_t count = trop->size / 20;
            for (size_t i = 0; i < count; ++i)
            {
                const size_t base = trop->data + i * 20;
                const uint32_t vertsoff = ReadValue<uint32_t>(bytes, base + 0);
                const uint32_t vertsnum = ReadValue<uint32_t>(bytes, base + 4);
                const uint32_t facesoff = ReadValue<uint32_t>(bytes, base + 8);
                const uint32_t facesnum = ReadValue<uint32_t>(bytes, base + 12);
                const uint32_t portalid = ReadValue<uint32_t>(bytes, base + 16);

                PortalRecord portal;
                portal.portalId = portalid;
                portal.materialId = (i < pmtlMats.size()) ? pmtlMats[i] : 0;

                const size_t vertsEnd = static_cast<size_t>(vertsoff) + vertsnum;
                for (size_t j = vertsoff; j < vertsEnd && j < xvtpVerts.size(); ++j)
                {
                    portal.verts.push_back(xvtpVerts[j]);
                }

                const size_t facesEnd = static_cast<size_t>(facesoff) + facesnum;
                for (size_t j = facesoff; j < facesEnd && j < cftpFaces.size(); ++j)
                {
                    portal.faces.push_back(cftpFaces[j]);
                }

                geometry.portals.push_back(std::move(portal));
            }
        }
    }

    return geometry;
}

} // anonymous namespace

// ---------------------------------------------------------------------------
// Public API
// ---------------------------------------------------------------------------

std::vector<glm::vec3> ComputeBoneWorldPositions(const std::vector<BoneInfo> &bones)
{
    const size_t numBones = bones.size();
    std::vector<glm::vec3> worldPos(numBones);
    for (size_t i = 0; i < numBones; ++i)
    {
        glm::vec3 acc = bones[i].pivot;
        int p = bones[i].parent;
        while (p != -1 && p < static_cast<int>(numBones))
        {
            acc += bones[p].pivot;
            p = bones[p].parent;
        }
        worldPos[i] = acc;
    }
    return worldPos;
}

ParsedGeometry ParseMefFile(const std::string &filepath)
{
    const std::vector<uint8_t> bytes = ReadWholeFile(filepath);
    if (bytes.size() >= 4 && std::memcmp(bytes.data(), "FORM", 4) == 0)
        return ParseFormModel(bytes);
    const std::vector<ChunkInfo> chunks = ParseIlffChunks(bytes, filepath);
    ParsedGeometry geo = ParseMefGeometry(bytes, chunks, filepath);

    // Store all chunks verbatim so round-trip via sidecar is lossless.
    geo.rawChunks.reserve(chunks.size());
    for (const auto &ci : chunks)
    {
        ParsedGeometry::RawChunk rc;
        std::memcpy(rc.fourcc, ci.name.c_str(), 4);
        if (ci.size > 0)
            rc.data.assign(bytes.begin() + ci.data, bytes.begin() + ci.data + ci.size);
        geo.rawChunks.push_back(std::move(rc));
    }
    return geo;
}
