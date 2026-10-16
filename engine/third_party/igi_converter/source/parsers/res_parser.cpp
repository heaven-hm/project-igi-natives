/******************************************************************************
 * @file    res_parser.cpp
 * @brief   RES (ILFF-based resource archive) parser
 *
 * RES files are ILFF containers with format ID "IRES".
 * Structure:
 *   ILFF Header (20 bytes): "ILFF" + uint32 size + uint32 align + uint32 skip + "IRES"
 *   Then repeated pairs of chunks:
 *     NAME chunk: 4-byte fourcc "NAME" + uint32 size + null-terminated filename
 *     BODY chunk: 4-byte fourcc "BODY" + uint32 size + raw binary data
 *****************************************************************************/

#include "res_parser.h"
#include "../logger.h"
#include <fstream>
#include <cstring>
#include <functional>

static const uint32_t FOURCC_ILFF = 0x46464C49; // "ILFF" little-endian
static const uint32_t FOURCC_IRES = 0x53455249; // "IRES" little-endian
static const uint32_t FOURCC_NAME = 0x454D414E; // "NAME" little-endian
static const uint32_t FOURCC_BODY = 0x59444F42; // "BODY" little-endian
static const uint32_t FOURCC_CSTR = 0x52545343; // "CSTR" little-endian

static uint32_t ReadU32LE(const uint8_t* p) {
    return (uint32_t)p[0]
        | ((uint32_t)p[1] << 8)
        | ((uint32_t)p[2] << 16)
        | ((uint32_t)p[3] << 24);
}

static uint32_t ReadFourCC(const uint8_t* p) {
    return ReadU32LE(p);
}

// Stream the archive chunk-by-chunk, invoking onEntry for each resource WITHOUT
// holding the whole file (or all entries) in memory at once. The .res archives are
// large (200+ MB); allocating that much contiguously fails in the 32-bit process once
// the address space is fragmented (e.g. after switching levels in-session), which is
// what silently dropped cross-level textures. Reading per-chunk keeps the peak
// allocation to a single resource (a few MB). Returns true if the header was valid.
bool RES_ForEachEntry(const std::string& filepath,
                      const std::function<void(const std::string&, const uint8_t*, size_t)>& onEntry,
                      std::string& error) {
    std::ifstream file(filepath, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        error = "Could not open file: " + filepath;
        Logger::Get().Log(LogLevel::ERR, "[RES] " + error);
        return false;
    }

    std::streampos pos = file.tellg();
    if (pos == std::streampos(-1)) {
        error = "Could not determine file size (tellg failed): " + filepath;
        Logger::Get().Log(LogLevel::ERR, "[RES] " + error);
        return false;
    }

    size_t fileSize = static_cast<size_t>(pos);
    if (fileSize < 20) {
        error = "File too small for ILFF header: " + filepath;
        Logger::Get().Log(LogLevel::ERR, "[RES] " + error);
        return false;
    }
    if (fileSize > 1024ull * 1024 * 1024) {
        error = "File is unreasonably large or size read failed (" + std::to_string(fileSize) + " bytes): " + filepath;
        Logger::Get().Log(LogLevel::ERR, "[RES] " + error);
        return false;
    }

    auto readAt = [&](size_t at, void* dst, size_t n) -> bool {
        file.seekg(static_cast<std::streamoff>(at), std::ios::beg);
        file.read(reinterpret_cast<char*>(dst), static_cast<std::streamsize>(n));
        return static_cast<size_t>(file.gcount()) == n;
    };

    // Validate 20-byte ILFF header: "ILFF" at 0, "IRES" format id at 16.
    uint8_t header[20];
    if (!readAt(0, header, sizeof(header))) {
        error = "Could not read ILFF header: " + filepath;
        Logger::Get().Log(LogLevel::ERR, "[RES] " + error);
        return false;
    }
    if (ReadFourCC(header) != FOURCC_ILFF) {
        error = "Not an ILFF file (missing ILFF magic): " + filepath;
        Logger::Get().Log(LogLevel::ERR, "[RES] " + error);
        return false;
    }
    if (ReadFourCC(header + 16) != FOURCC_IRES) {
        error = "Not an IRES resource file (wrong format ID): " + filepath;
        Logger::Get().Log(LogLevel::ERR, "[RES] " + error);
        return false;
    }

    size_t offset = 20;
    std::string pendingName;
    bool haveName = false;
    size_t unnamedCount = 0;
    std::vector<uint8_t> chunkBuf; // reused scratch for the current chunk only

    while (offset + 16 <= fileSize) {
        uint8_t chunkHeader[16];
        if (!readAt(offset, chunkHeader, sizeof(chunkHeader))) break;
        uint32_t chunkFourCC = ReadFourCC(chunkHeader);
        uint32_t chunkSize = ReadU32LE(chunkHeader + 4);
        uint32_t chunkSkip = ReadU32LE(chunkHeader + 12);

        size_t dataOffset = offset + 16;
        if (chunkSize > fileSize || dataOffset > fileSize - chunkSize) {
            Logger::Get().Log(LogLevel::WARNING, "[RES] Chunk extends beyond file end at offset " +
                std::to_string(offset));
            break;
        }

        if (chunkFourCC == FOURCC_NAME || chunkFourCC == FOURCC_BODY || chunkFourCC == FOURCC_CSTR) {
            try {
                chunkBuf.resize(chunkSize);
            } catch (const std::bad_alloc&) {
                Logger::Get().Log(LogLevel::ERR, "[RES] Memory allocation failed for chunk of size " + std::to_string(chunkSize) + " at offset " + std::to_string(offset));
                break;
            }
            if (chunkSize > 0 && !readAt(dataOffset, chunkBuf.data(), chunkSize)) break;

            if (chunkFourCC == FOURCC_NAME) {
                const char* str = reinterpret_cast<const char*>(chunkBuf.data());
                size_t len = 0;
                while (len < chunkSize && str[len] != '\0') len++;
                pendingName = std::string(str, len);
                haveName = true;
            } else {
                std::string name = haveName ? pendingName
                                            : "<unnamed_" + std::to_string(unnamedCount++) + ">";
                haveName = false;
                onEntry(name, chunkBuf.data(), chunkSize);
            }
        }

        if (chunkSkip == 0) break;
        offset += chunkSkip;
    }

    return true;
}

RESFile RES_Parse(const std::string& filepath) {
    RESFile result;
    result.valid = RES_ForEachEntry(filepath,
        [&](const std::string& name, const uint8_t* data, size_t size) {
            RESEntry entry;
            entry.name = name;
            try {
                entry.data.assign(data, data + size);
            } catch (const std::bad_alloc&) {
                Logger::Get().Log(LogLevel::ERR, "[RES] Memory allocation failed while buffering chunk '" + name + "' of size " + std::to_string(size));
                return;
            }
            result.entries.push_back(std::move(entry));
        },
        result.error);

    if (result.valid) {
        Logger::Get().Log(LogLevel::INFO, "[RES] Parsed " + filepath + " | Entries: " +
            std::to_string(result.entries.size()));
    }
    return result;
}

std::vector<uint8_t> RES_Extract(const std::string& filepath, const std::string& resourceName) {
    RESFile res = RES_Parse(filepath);
    if (!res.valid) {
        return {};
    }

    for (const auto& entry : res.entries) {
        if (entry.name == resourceName) {
            return entry.data;
        }
    }

    Logger::Get().Log(LogLevel::WARNING, "[RES] Resource not found: " + resourceName + " in " + filepath);
    return {};
}
