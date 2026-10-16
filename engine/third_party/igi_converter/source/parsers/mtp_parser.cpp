/******************************************************************************
 * @file    mtp_parser.cpp
 * @brief   MTP (FORM-based model-texture package) parser
 *
 * MTP files use a FORM/IFF container (big-endian sizes) containing
 * model-texture mappings.
 * Structure:
 *   Header: "FORM" (4 bytes) + big-endian size (4 bytes)
 *   Body starts with: "MTP " (4 bytes, with trailing space)
 *   Then chunks in order: BANM, SNDS, SVOL, MODS, VNAM, INST, TEXF, PALF, GTT
 *   Each chunk: 4-byte fourcc + 4-byte big-endian size + data
 *   String-array chunks: first uint32 (LE) is count, then count null-terminated strings
 *   Chunks aligned to 2-byte boundaries (standard IFF)
 *****************************************************************************/

#include "mtp_parser.h"
#include "../logger.h"
#include <fstream>
#include <cstring>

static uint32_t ReadU32BE(const uint8_t* p) {
    return ((uint32_t)p[0] << 24)
        | ((uint32_t)p[1] << 16)
        | ((uint32_t)p[2] << 8)
        | (uint32_t)p[3];
}

static uint32_t ReadU32LE(const uint8_t* p) {
    return (uint32_t)p[0]
        | ((uint32_t)p[1] << 8)
        | ((uint32_t)p[2] << 16)
        | ((uint32_t)p[3] << 24);
}

static uint16_t ReadU16LE(const uint8_t* p) {
    return (uint16_t)p[0] | ((uint16_t)p[1] << 8);
}

static bool MatchFourCC(const uint8_t* p, const char* tag) {
    return p[0] == (uint8_t)tag[0]
        && p[1] == (uint8_t)tag[1]
        && p[2] == (uint8_t)tag[2]
        && p[3] == (uint8_t)tag[3];
}

// Parse a string array from chunk data: first uint32 (LE) is count, then
// count null-terminated strings packed sequentially
static std::vector<std::string> ParseStringArray(const uint8_t* data, uint32_t dataSize) {
    std::vector<std::string> strings;

    if (dataSize < 4) {
        return strings;
    }

    uint32_t count = ReadU32LE(data);
    size_t offset = 4;

    for (uint32_t i = 0; i < count && offset < dataSize; i++) {
        const char* str = reinterpret_cast<const char*>(data + offset);
        size_t maxLen = dataSize - offset;
        size_t len = 0;
        while (len < maxLen && str[len] != '\0') {
            len++;
        }
        strings.emplace_back(str, len);
        offset += len + 1; // skip past null terminator
    }

    return strings;
}

// Parse INST chunk: model-texture instance mappings.
// Verified layout (level1.mtp): NO count prefix. The chunk is a packed array of
// entries, one per model (count == MODS count). Each entry is:
//   uint32 LE modelIdx, uint32 LE texCount, texCount * uint32 LE texIdx.
// Parsing walks to the end of the chunk data.
static std::vector<MTPModelTexture> ParseInstChunk(const uint8_t* data, uint32_t dataSize,
    const std::vector<std::string>& models, const std::vector<std::string>& textures) {
    std::vector<MTPModelTexture> mappings;

    size_t offset = 0;
    while (offset + 8 <= dataSize) {
        uint32_t modelIdx = ReadU32LE(data + offset);
        offset += 4;
        uint32_t texCount = ReadU32LE(data + offset);
        offset += 4;

        if (offset + (size_t)texCount * 4 > dataSize) {
            break; // truncated/unexpected
        }

        MTPModelTexture mapping;
        if (modelIdx < models.size()) {
            mapping.modelName = models[modelIdx];
        }
        else {
            mapping.modelName = "<model_" + std::to_string(modelIdx) + ">";
        }

        for (uint32_t t = 0; t < texCount; t++) {
            uint32_t texIdx = ReadU32LE(data + offset);
            offset += 4;

            if (texIdx < textures.size()) {
                mapping.textureNames.push_back(textures[texIdx]);
            }
            else {
                mapping.textureNames.push_back("<texture_" + std::to_string(texIdx) + ">");
            }
        }

        mappings.push_back(std::move(mapping));
    }

    return mappings;
}

MTPFile MTP_Parse(const std::string& filepath) {
    MTPFile result;

    // Read entire file into memory
    std::ifstream file(filepath, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        result.error = "Could not open file: " + filepath;
        Logger::Get().Log(LogLevel::ERR, "[MTP] " + result.error);
        return result;
    }

    size_t fileSize = (size_t)file.tellg();
    if (fileSize < 12) {
        result.error = "File too small for FORM header: " + filepath;
        Logger::Get().Log(LogLevel::ERR, "[MTP] " + result.error);
        return result;
    }

    std::vector<uint8_t> buf(fileSize);
    file.seekg(0);
    file.read(reinterpret_cast<char*>(buf.data()), fileSize);
    file.close();

    const uint8_t* data = buf.data();

    // Validate FORM header
    if (!MatchFourCC(data, "FORM")) {
        result.error = "Not a FORM/IFF file (missing FORM magic): " + filepath;
        Logger::Get().Log(LogLevel::ERR, "[MTP] " + result.error);
        return result;
    }

    uint32_t formSize = ReadU32BE(data + 4);
    (void)formSize; // informational; we use fileSize for bounds

    // Validate "MTP " format identifier at offset 8
    if (!MatchFourCC(data + 8, "MTP ")) {
        result.error = "Not an MTP file (wrong format ID): " + filepath;
        Logger::Get().Log(LogLevel::ERR, "[MTP] " + result.error);
        return result;
    }

    // Parse chunks starting after "FORM" + size + "MTP " (12 bytes)
    size_t offset = 12;

    // INST references MODS/TEXF by index, but in real files (e.g. level1.mtp) the INST
    // chunk appears BEFORE TEXF. Defer INST parsing until the whole file is walked so
    // both the model and texture string tables are fully populated.
    const uint8_t* instData = nullptr;
    uint32_t instSize = 0;

    while (offset + 8 <= fileSize) {
        char fourcc[5] = {};
        memcpy(fourcc, data + offset, 4);
        uint32_t chunkSize = ReadU32BE(data + offset + 4);
        offset += 8;

        if (offset + chunkSize > fileSize) {
            Logger::Get().Log(LogLevel::WARNING, "[MTP] Chunk '" + std::string(fourcc) +
                "' extends beyond file end at offset " + std::to_string(offset - 8));
            break;
        }

        const uint8_t* chunkData = data + offset;

        if (MatchFourCC(reinterpret_cast<const uint8_t*>(fourcc), "BANM")) {
            result.animations = ParseStringArray(chunkData, chunkSize);
        }
        else if (MatchFourCC(reinterpret_cast<const uint8_t*>(fourcc), "SNDS")) {
            result.sounds = ParseStringArray(chunkData, chunkSize);
        }
        else if (MatchFourCC(reinterpret_cast<const uint8_t*>(fourcc), "SVOL")) {
            result.shadows = ParseStringArray(chunkData, chunkSize);
        }
        else if (MatchFourCC(reinterpret_cast<const uint8_t*>(fourcc), "MODS")) {
            result.models = ParseStringArray(chunkData, chunkSize);
        }
        else if (MatchFourCC(reinterpret_cast<const uint8_t*>(fourcc), "TEXF")) {
            result.textures = ParseStringArray(chunkData, chunkSize);
        }
        else if (MatchFourCC(reinterpret_cast<const uint8_t*>(fourcc), "VNAM")) {
            if (chunkSize >= 4) {
                uint32_t count = ReadU32LE(chunkData);
                size_t offset = 4 + count * 4;
                for (uint32_t i = 0; i < count && offset < chunkSize; ++i) {
                    const char* str = reinterpret_cast<const char*>(chunkData + offset);
                    size_t maxLen = chunkSize - offset;
                    size_t len = 0;
                    while (len < maxLen && str[len] != '\0') len++;
                    result.vnam_models.emplace_back(str, len);
                    offset += len + 1;
                }
            }
        }
        else if (MatchFourCC(reinterpret_cast<const uint8_t*>(fourcc), "INST")) {
            instData = chunkData;
            instSize = chunkSize;
        }

        offset += chunkSize;

        // IFF chunks are aligned to 2-byte boundaries
        if (offset % 2 != 0) {
            offset++;
        }
    }

    // Now that MODS/TEXF are fully read, resolve INST mappings.
    if (instData != nullptr) {
        result.mappings = ParseInstChunk(instData, instSize, result.models, result.textures);
    }

    result.valid = true;
    Logger::Get().Log(LogLevel::INFO, "[MTP] Parsed " + filepath +
        " | Models: " + std::to_string(result.models.size()) +
        " | Textures: " + std::to_string(result.textures.size()) +
        " | Mappings: " + std::to_string(result.mappings.size()));

    return result;
}

// --- Write helpers ---------------------------------------------------------

static void WriteU32BE(std::vector<uint8_t>& out, uint32_t v) {
    out.push_back((uint8_t)((v >> 24) & 0xFF));
    out.push_back((uint8_t)((v >> 16) & 0xFF));
    out.push_back((uint8_t)((v >> 8) & 0xFF));
    out.push_back((uint8_t)(v & 0xFF));
}

static void WriteU32LE(std::vector<uint8_t>& out, uint32_t v) {
    out.push_back((uint8_t)(v & 0xFF));
    out.push_back((uint8_t)((v >> 8) & 0xFF));
    out.push_back((uint8_t)((v >> 16) & 0xFF));
    out.push_back((uint8_t)((v >> 24) & 0xFF));
}

// Encode a string-array chunk body: uint32 LE count, then each string + '\0'.
static std::vector<uint8_t> EncodeStringArray(const std::vector<std::string>& strings) {
    std::vector<uint8_t> data;
    WriteU32LE(data, (uint32_t)strings.size());
    for (const std::string& s : strings) {
        data.insert(data.end(), s.begin(), s.end());
        data.push_back(0);
    }
    while (data.size() % 4 != 0) {
        data.push_back(0);
    }
    return data;
}

// Build VNAM chunk data from model names and per-model texture counts.
// Verified format (from level1.mtp):
//   u32_LE count
//   count × u32_LE offsets  where offset[i] = sum_{j<i}(4 + texCount_j * 4)
//   string pool = packed null-terminated model names (same bytes as MODS without count)
static std::vector<uint8_t> BuildVNAM(const std::vector<std::string>& models,
                                       const std::vector<uint32_t>& texCounts) {
    std::vector<uint8_t> vnam;
    WriteU32LE(vnam, (uint32_t)models.size());
    uint32_t cumOffset = 0;
    for (size_t i = 0; i < models.size(); ++i) {
        WriteU32LE(vnam, cumOffset);
        uint32_t tc = (i < texCounts.size()) ? texCounts[i] : 0;
        cumOffset += 4 + tc * 4;
    }
    for (const auto& m : models) {
        vnam.insert(vnam.end(), m.begin(), m.end());
        vnam.push_back(0);
    }
    while (vnam.size() % 4 != 0) {
        vnam.push_back(0);
    }
    return vnam;
}

// Parse INST chunk to extract per-model texture counts in INST order.
// INST format (no count prefix): repeated entries of (u32 modelIdx, u32 texCount, texCount*u32 texIdx)
static std::vector<uint32_t> ParseInstTexCounts(const std::vector<uint8_t>& inst) {
    std::vector<uint32_t> counts;
    size_t pos = 0;
    while (pos + 8 <= inst.size()) {
        pos += 4; // skip modelIdx
        uint32_t tc = ReadU32LE(inst.data() + pos); pos += 4;
        counts.push_back(tc);
        pos += tc * 4; // skip texIdx array
    }
    return counts;
}

struct MTPChunk {
    char fourcc[4];
    std::vector<uint8_t> data;
};

bool MTP_AddModel(const std::string& mtpPath, const std::string& outPath,
                  const std::string& modelName, const std::vector<std::string>& textureNames,
                  std::string& err) {
    // 1. Read the whole file.
    std::ifstream file(mtpPath, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        err = "Could not open file: " + mtpPath;
        return false;
    }
    size_t fileSize = (size_t)file.tellg();
    if (fileSize < 12) {
        err = "File too small for FORM header: " + mtpPath;
        return false;
    }
    std::vector<uint8_t> buf(fileSize);
    file.seekg(0);
    file.read(reinterpret_cast<char*>(buf.data()), fileSize);
    file.close();

    const uint8_t* data = buf.data();
    if (!MatchFourCC(data, "FORM")) {
        err = "Not a FORM/IFF file: " + mtpPath;
        return false;
    }
    if (!MatchFourCC(data + 8, "MTP ")) {
        err = "Not an MTP file: " + mtpPath;
        return false;
    }

    // 2. Walk chunks in file order, capturing them verbatim.
    std::vector<MTPChunk> chunks;
    size_t offset = 12;
    while (offset + 8 <= fileSize) {
        MTPChunk c;
        memcpy(c.fourcc, data + offset, 4);
        uint32_t chunkSize = ReadU32BE(data + offset + 4);
        offset += 8;
        if (offset + chunkSize > fileSize) {
            err = "Chunk extends beyond file end (corrupt MTP): " + mtpPath;
            return false;
        }
        c.data.assign(data + offset, data + offset + chunkSize);
        chunks.push_back(std::move(c));
        offset += chunkSize;
        if (offset % 2 != 0) offset++; // 2-byte alignment pad (not counted in size)
    }

    // 3. Locate MODS, TEXF, INST, VNAM, GTT .
    int modsIdx = -1, texfIdx = -1, instIdx = -1, vnamIdx = -1, gttIdx = -1;
    for (size_t i = 0; i < chunks.size(); ++i) {
        const uint8_t* fc = reinterpret_cast<const uint8_t*>(chunks[i].fourcc);
        if      (MatchFourCC(fc, "MODS")) modsIdx = (int)i;
        else if (MatchFourCC(fc, "TEXF")) texfIdx = (int)i;
        else if (MatchFourCC(fc, "INST")) instIdx = (int)i;
        else if (MatchFourCC(fc, "VNAM")) vnamIdx = (int)i;
        else if (MatchFourCC(fc, "GTT ")) gttIdx  = (int)i;
    }
    if (modsIdx < 0 || texfIdx < 0 || instIdx < 0) {
        err = "MTP missing required MODS/TEXF/INST chunk: " + mtpPath;
        return false;
    }

    // 4. Decode MODS; check if model already present.
    std::vector<std::string> models =
        ParseStringArray(chunks[modsIdx].data.data(), (uint32_t)chunks[modsIdx].data.size());
    bool modelAlreadyPresent = false;
    for (const std::string& m : models)
        if (m == modelName) { modelAlreadyPresent = true; break; }

    // 5. Append new model (if new); record modelIdx.
    uint32_t newModelIdx = (uint32_t)models.size();
    if (!modelAlreadyPresent)
        models.push_back(modelName);

    // 6. Decode TEXF; resolve/append each requested texture.
    std::vector<std::string> textures =
        ParseStringArray(chunks[texfIdx].data.data(), (uint32_t)chunks[texfIdx].data.size());
    std::vector<uint32_t> resolvedTexIdx;
    resolvedTexIdx.reserve(textureNames.size());
    for (const std::string& t : textureNames) {
        int idx = -1;
        for (size_t i = 0; i < textures.size(); ++i) {
            if (textures[i] == t) { idx = (int)i; break; }
        }
        if (idx < 0) {
            idx = (int)textures.size();
            textures.push_back(t);
        }
        resolvedTexIdx.push_back((uint32_t)idx);
    }

    // 7. Re-encode MODS / TEXF bodies (only if model is new; TEXF may still grow).
    uint32_t origTexCount = chunks[texfIdx].data.size() >= 4
                            ? ReadU32LE(chunks[texfIdx].data.data()) : 0;
    chunks[modsIdx].data = EncodeStringArray(models);
    chunks[texfIdx].data = EncodeStringArray(textures);

    // 7b. Rebuild VNAM using the verified format: count + offset_table + model-name pool.
    // offset[i] = sum_{j<i}(4 + texCount_j * 4).  Tex counts come from the existing
    // INST data (original entries) plus the new model's tex count if a new model was added.
    if (vnamIdx >= 0) {
        auto texCounts = ParseInstTexCounts(chunks[instIdx].data);
        if (!modelAlreadyPresent)
            texCounts.push_back((uint32_t)resolvedTexIdx.size());
        chunks[vnamIdx].data = BuildVNAM(models, texCounts);
    }
    if (gttIdx >= 0 && chunks[gttIdx].data.size() >= 4) {
        uint32_t gtCount = ReadU32LE(chunks[gttIdx].data.data());
        uint32_t newCount = (uint32_t)textures.size();
        if (gtCount < newCount) {
            auto& gd = chunks[gttIdx].data;
            gd[0] = (uint8_t)(newCount & 0xFF);
            gd[1] = (uint8_t)((newCount >> 8)  & 0xFF);
            gd[2] = (uint8_t)((newCount >> 16) & 0xFF);
            gd[3] = (uint8_t)((newCount >> 24) & 0xFF);
            for (uint32_t n = gtCount; n < newCount; ++n) {
                gd.push_back((uint8_t)(n & 0xFF));
                gd.push_back((uint8_t)((n >> 8) & 0xFF));
                gd.push_back((uint8_t)((n >> 16) & 0xFF));
                gd.push_back((uint8_t)((n >> 24) & 0xFF));
                gd.push_back(0xFF); gd.push_back(0xFF); gd.push_back(0xFF); gd.push_back(0xFF);
            }
        }
    }
    (void)origTexCount;

    // 8. Append to INST only if this is a new model.
    if (!modelAlreadyPresent) {
        std::vector<uint8_t>& inst = chunks[instIdx].data;
        std::vector<uint8_t> newInst = inst;
        WriteU32LE(newInst, newModelIdx);
        WriteU32LE(newInst, (uint32_t)resolvedTexIdx.size());
        for (uint32_t ti : resolvedTexIdx) WriteU32LE(newInst, ti);
        chunks[instIdx].data = std::move(newInst);
    }

    // 9/10. Serialize: FORM + placeholder size + "MTP " + chunks (BE sizes, 2-byte pad).
    std::vector<uint8_t> out;
    out.insert(out.end(), {'F', 'O', 'R', 'M'});
    size_t formSizePos = out.size();
    WriteU32BE(out, 0); // placeholder
    out.insert(out.end(), {'M', 'T', 'P', ' '});
    for (const MTPChunk& c : chunks) {
        out.insert(out.end(), c.fourcc, c.fourcc + 4);
        WriteU32BE(out, (uint32_t)c.data.size());
        out.insert(out.end(), c.data.begin(), c.data.end());
        if (c.data.size() % 2 != 0) out.push_back(0); // pad, not counted in size
    }
    // FORM size = total file size - 8 (everything after the size field).
    uint32_t formSize = (uint32_t)(out.size() - 8);
    out[formSizePos + 0] = (uint8_t)((formSize >> 24) & 0xFF);
    out[formSizePos + 1] = (uint8_t)((formSize >> 16) & 0xFF);
    out[formSizePos + 2] = (uint8_t)((formSize >> 8) & 0xFF);
    out[formSizePos + 3] = (uint8_t)(formSize & 0xFF);

    // 11. Write to outPath.
    std::ofstream o(outPath, std::ios::binary | std::ios::trunc);
    if (!o.is_open()) { err = "Could not open output: " + outPath; return false; }
    o.write(reinterpret_cast<const char*>(out.data()), (std::streamsize)out.size());
    if (!o.good()) { err = "Write failed: " + outPath; return false; }
    return true;
}

bool MTP_Generate(const std::string& outPath,
                  const std::vector<MTPModelTexture>& mappings,
                  std::string& err,
                  const std::vector<std::string>& extraTextures,
                  const std::vector<std::string>& animations,
                  const std::vector<std::string>& sounds,
                  const std::vector<std::string>& shadows,
                  const std::vector<DATVnamEntry>& vnam_models,
                  const std::vector<std::string>& textureManifest) {
    std::vector<std::string> models;
    std::vector<std::string> vnamStrings;
    // Preserve manifest-only entries and their original ordering. Mapping
    // indices then refer to this table, adding only genuinely new textures.
    std::vector<std::string> textures = textureManifest;
    std::vector<uint8_t> instData;

    std::vector<uint32_t> texCountsForVNAM;

    // Helper to add textures and get indices
    auto getTexIndices = [&](const std::vector<std::string>& texNames) {
        std::vector<uint32_t> texIdxs;
        for (const auto& t : texNames) {
            int idx = -1;
            for (size_t i = 0; i < textures.size(); ++i)
                if (textures[i] == t) { idx = (int)i; break; }
            if (idx < 0) { idx = (int)textures.size(); textures.push_back(t); }
            texIdxs.push_back((uint32_t)idx);
        }
        return texIdxs;
    };

    // 1. Process primary mappings (main models)
    for (const auto& m : mappings) {
        uint32_t modelIdx = (uint32_t)models.size();
        models.push_back(m.modelName);
        vnamStrings.push_back(m.modelName);

        auto texIdxs = getTexIndices(m.textureNames);
        texCountsForVNAM.push_back((uint32_t)texIdxs.size());
        WriteU32LE(instData, modelIdx);
        WriteU32LE(instData, (uint32_t)texIdxs.size());
        for (uint32_t ti : texIdxs) WriteU32LE(instData, ti);
    }

    // 2. Process VNAM aliases
    for (const auto& v : vnam_models) {
        // Find main model in MODS
        int modelIdx = -1;
        for (size_t i = 0; i < models.size(); ++i) {
            if (models[i] == v.mainModelName) { modelIdx = (int)i; break; }
        }
        if (modelIdx < 0) {
            modelIdx = (int)models.size();
            models.push_back(v.mainModelName);
        }
        vnamStrings.push_back(v.virModelName);

        auto texIdxs = getTexIndices(v.textures);
        texCountsForVNAM.push_back((uint32_t)texIdxs.size());
        WriteU32LE(instData, (uint32_t)modelIdx);
        WriteU32LE(instData, (uint32_t)texIdxs.size());
        for (uint32_t ti : texIdxs) WriteU32LE(instData, ti);
    }

    // Append extra textures (e.g. manifest-only entries like "0") not already in TEXF.
    for (const auto& t : extraTextures) {
        bool found = false;
        for (const auto& existing : textures) if (existing == t) { found = true; break; }
        if (!found) textures.push_back(t);
    }

    auto banmData = EncodeStringArray(animations);
    auto sndsData = EncodeStringArray(sounds);
    auto svolData = EncodeStringArray(shadows);
    auto modsData = EncodeStringArray(models);
    auto texfData = EncodeStringArray(textures);

    // VNAM: count + offset_table + model-name pool.
    // offset[i] = sum_{j<i}(4 + texCount_j * 4) — matches original game-file format.
    auto vnamData = BuildVNAM(vnamStrings, texCountsForVNAM);

    // GTT: u32_LE count + count * 8 bytes: (tex_index_LE, 0xFFFFFFFF).
    std::vector<uint8_t> gttData;
    gttData.reserve(4 + textures.size() * 8);
    auto pushU32LE_v = [&](std::vector<uint8_t>& v, uint32_t x) {
        v.push_back((uint8_t)(x & 0xFF));
        v.push_back((uint8_t)((x >> 8) & 0xFF));
        v.push_back((uint8_t)((x >> 16) & 0xFF));
        v.push_back((uint8_t)((x >> 24) & 0xFF));
    };
    pushU32LE_v(gttData, (uint32_t)textures.size());
    for (uint32_t i = 0; i < (uint32_t)textures.size(); ++i) {
        pushU32LE_v(gttData, i);
        gttData.push_back(0xFF); gttData.push_back(0xFF);
        gttData.push_back(0xFF); gttData.push_back(0xFF);
    }

    // Empty 4-byte stub for BANM/SNDS/SVOL/PALF (count=0 string arrays).
    std::vector<uint8_t> emptyStub(4, 0); // LE u32 = 0

    std::vector<uint8_t> out;
    out.insert(out.end(), {'F', 'O', 'R', 'M'});
    size_t formSizePos = out.size();
    WriteU32BE(out, 0);
    out.insert(out.end(), {'M', 'T', 'P', ' '});

    auto writeChunk = [&](const char* fc, const std::vector<uint8_t>& data) {
        out.insert(out.end(), fc, fc + 4);
        WriteU32BE(out, (uint32_t)data.size());
        out.insert(out.end(), data.begin(), data.end());
        if (data.size() % 2 != 0) out.push_back(0);
    };
    // Match original chunk order: BANM SNDS SVOL MODS VNAM INST TEXF PALF GTT
    writeChunk("BANM", banmData.size() >= 4 ? banmData : emptyStub);
    writeChunk("SNDS", sndsData.size() >= 4 ? sndsData : emptyStub);
    writeChunk("SVOL", svolData.size() >= 4 ? svolData : emptyStub);
    writeChunk("MODS", modsData);
    writeChunk("VNAM", vnamData);
    writeChunk("INST", instData);
    writeChunk("TEXF", texfData);
    writeChunk("PALF", emptyStub);
    writeChunk("GTT ", gttData);

    uint32_t formSize = (uint32_t)(out.size() - 8);
    out[formSizePos + 0] = (uint8_t)((formSize >> 24) & 0xFF);
    out[formSizePos + 1] = (uint8_t)((formSize >> 16) & 0xFF);
    out[formSizePos + 2] = (uint8_t)((formSize >> 8) & 0xFF);
    out[formSizePos + 3] = (uint8_t)(formSize & 0xFF);

    std::ofstream ofs(outPath, std::ios::binary | std::ios::trunc);
    if (!ofs.is_open()) { err = "Cannot write: " + outPath; return false; }
    ofs.write(reinterpret_cast<const char*>(out.data()), (std::streamsize)out.size());
    if (!ofs.good()) { err = "Write failed: " + outPath; return false; }
    return true;
}
