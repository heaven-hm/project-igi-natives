/******************************************************************************
 * @file    fnt_parser.cpp
 * @brief   FNT (ILFF-based bitmap font) parser for IGI-1 .fnt files
 *
 * .fnt files are ILFF containers with content type "FONT".
 * Structure:
 *   ILFF Header (20 bytes): "ILFF" + uint32 size + uint32 align + uint32 skip + "FONT"
 *   Chunks (each: FourCC + uint32 length + uint32 align + uint32 skip + content):
 *     FNTH - font header (24 bytes, 6x uint32)
 *     ANMF - glyph metrics (num_glyphs x 40 bytes)
 *     TRAN - char-code map (uint16 per glyph index -> codepoint)
 *     TEXH - texture header (24 bytes, 12x uint16)
 *     BODY - texture atlas (width x height pixels)
 *
 * Chunk-walking mirrors res_parser.cpp: the chunk header's "skip" field (offset
 * 12) already encodes header(16) + padded content, so advancing by skip lands on
 * the next chunk; skip==0 marks the final chunk.
 *
 * NOTE on the format (verified against editor/qed/editor.fnt):
 *   - The char-code chunk FourCC is "TRAN" (not "TRN2").
 *   - editor.fnt's TEXH format is 2 (RGB565, 16-bit), not ARGB8888. We decode
 *     RGB565 into RGBA with RGB=white and A=luminance so the atlas acts as a
 *     glyph mask that glColor3f can tint. An ARGB8888 (mode 3) atlas is also
 *     handled (taking the source A channel directly).
 *****************************************************************************/

#include "fnt_parser.h"
#include "../logger.h"
#include <fstream>
#include <cstring>

static const uint32_t FOURCC_ILFF = 0x46464C49; // "ILFF"
static const uint32_t FOURCC_FONT = 0x544E4F46; // "FONT"
static const uint32_t FOURCC_FNTH = 0x48544E46; // "FNTH"
static const uint32_t FOURCC_ANMF = 0x464D4E41; // "ANMF"
static const uint32_t FOURCC_TRAN = 0x4E415254; // "TRAN"
static const uint32_t FOURCC_TEXH = 0x48584554; // "TEXH"
static const uint32_t FOURCC_BODY = 0x59444F42; // "BODY"

static uint32_t ReadU32LE(const uint8_t* p) {
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

static uint16_t ReadU16LE(const uint8_t* p) {
    return (uint16_t)((uint16_t)p[0] | ((uint16_t)p[1] << 8));
}

static float ReadF32LE(const uint8_t* p) {
    uint32_t u = ReadU32LE(p);
    float f;
    std::memcpy(&f, &u, sizeof(f));
    return f;
}

FntFont FNT_Parse(const std::string& filepath) {
    FntFont font;

    std::ifstream file(filepath, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        Logger::Get().Log(LogLevel::ERR, "[FNT] Could not open file: " + filepath);
        return font;
    }

    std::streampos pos = file.tellg();
    if (pos == std::streampos(-1)) {
        Logger::Get().Log(LogLevel::ERR, "[FNT] Could not determine file size: " + filepath);
        return font;
    }
    size_t fileSize = static_cast<size_t>(pos);
    if (fileSize < 20) {
        Logger::Get().Log(LogLevel::ERR, "[FNT] File too small for ILFF header: " + filepath);
        return font;
    }

    std::vector<uint8_t> buf;
    try {
        buf.resize(fileSize);
    } catch (const std::bad_alloc&) {
        Logger::Get().Log(LogLevel::ERR, "[FNT] Memory allocation failed for file: " + filepath);
        return font;
    }
    file.seekg(0, std::ios::beg);
    file.read(reinterpret_cast<char*>(buf.data()), static_cast<std::streamsize>(fileSize));
    if (static_cast<size_t>(file.gcount()) != fileSize) {
        Logger::Get().Log(LogLevel::ERR, "[FNT] Could not read whole file: " + filepath);
        return font;
    }

    // Validate 20-byte ILFF header: "ILFF" at 0, "FONT" content type at 16.
    if (ReadU32LE(buf.data()) != FOURCC_ILFF) {
        Logger::Get().Log(LogLevel::ERR, "[FNT] Not an ILFF file (missing ILFF magic): " + filepath);
        return font;
    }
    if (ReadU32LE(buf.data() + 16) != FOURCC_FONT) {
        Logger::Get().Log(LogLevel::ERR, "[FNT] Not a FONT file (wrong content type): " + filepath);
        return font;
    }

    // Chunk locations / sizes gathered during the walk.
    const uint8_t* anmf = nullptr; size_t anmfLen = 0;
    const uint8_t* tran = nullptr; size_t tranLen = 0;
    const uint8_t* body = nullptr; size_t bodyLen = 0;
    uint32_t numGlyphs = 0;
    uint16_t texFormat = 0, texWidth = 0, texHeight = 0;

    size_t offset = 20;
    while (offset + 16 <= fileSize) {
        const uint8_t* h = buf.data() + offset;
        uint32_t fourcc = ReadU32LE(h);
        uint32_t length = ReadU32LE(h + 4);
        uint32_t skip   = ReadU32LE(h + 12);

        size_t dataOffset = offset + 16;
        if (length > fileSize || dataOffset > fileSize - length) {
            Logger::Get().Log(LogLevel::WARNING, "[FNT] Chunk extends beyond file end at offset " +
                std::to_string(offset));
            break;
        }
        const uint8_t* data = buf.data() + dataOffset;

        if (fourcc == FOURCC_FNTH) {
            if (length >= 24) {
                numGlyphs        = ReadU32LE(data + 4);
                font.lineHeight  = (int)ReadU32LE(data + 8); // cell_height (line height px)
            }
        } else if (fourcc == FOURCC_ANMF) {
            anmf = data; anmfLen = length;
        } else if (fourcc == FOURCC_TRAN) {
            tran = data; tranLen = length;
        } else if (fourcc == FOURCC_TEXH) {
            if (length >= 24) {
                texFormat = ReadU16LE(data + 0);
                texWidth  = ReadU16LE(data + 14);
                texHeight = ReadU16LE(data + 16);
            }
        } else if (fourcc == FOURCC_BODY) {
            body = data; bodyLen = length;
        }

        if (skip == 0) break;
        offset += skip;
    }

    if (numGlyphs == 0 || !anmf || !tran || !body || texWidth == 0 || texHeight == 0) {
        Logger::Get().Log(LogLevel::ERR, "[FNT] Missing required chunks in: " + filepath);
        return font;
    }
    if (anmfLen < (size_t)numGlyphs * 40 || tranLen < (size_t)numGlyphs * 2) {
        Logger::Get().Log(LogLevel::ERR, "[FNT] Glyph table truncated in: " + filepath);
        return font;
    }

    font.texWidth  = texWidth;
    font.texHeight = texHeight;

    // --- Decode the atlas into RGBA (RGB=white mask, A=opacity). ---
    const size_t numPixels = (size_t)texWidth * texHeight;
    try {
        font.rgba.resize(numPixels * 4);
    } catch (const std::bad_alloc&) {
        Logger::Get().Log(LogLevel::ERR, "[FNT] Memory allocation failed for atlas: " + filepath);
        return font;
    }

    if (texFormat == 3 || texFormat == 67) {
        // ARGB8888 stored as BGRA: byte0=B, byte1=G, byte2=R, byte3=A.
        if (bodyLen < numPixels * 4) {
            Logger::Get().Log(LogLevel::ERR, "[FNT] BODY too small for ARGB8888 atlas: " + filepath);
            return font;
        }
        for (size_t i = 0; i < numPixels; ++i) {
            uint8_t b = body[i * 4 + 0];
            uint8_t g = body[i * 4 + 1];
            uint8_t r = body[i * 4 + 2];
            uint8_t a = body[i * 4 + 3];
            font.rgba[i * 4 + 0] = r;
            font.rgba[i * 4 + 1] = g;
            font.rgba[i * 4 + 2] = b;
            font.rgba[i * 4 + 3] = a;
        }
    } else {
        // RGB565 (format 2): 2 bytes/pixel. Use luminance as opacity so the atlas
        // is a tintable glyph mask. Background pixels are dark -> transparent.
        if (bodyLen < numPixels * 2) {
            Logger::Get().Log(LogLevel::ERR, "[FNT] BODY too small for RGB565 atlas: " + filepath);
            return font;
        }
        for (size_t i = 0; i < numPixels; ++i) {
            uint16_t v = ReadU16LE(body + i * 2);
            int r = (v >> 11) & 0x1f;
            int g = (v >> 5) & 0x3f;
            int b = v & 0x1f;
            // approximate luminance, scaled to 0..255
            int lum = (r * 8 + g * 4 + b * 8) / 3;
            if (lum > 255) lum = 255;
            font.rgba[i * 4 + 0] = 255;
            font.rgba[i * 4 + 1] = 255;
            font.rgba[i * 4 + 2] = 255;
            font.rgba[i * 4 + 3] = (uint8_t)lum;
        }
    }

    // --- Build glyph map. ---
    // TRAN is indexed by CODEPOINT (256 entries) and stores the glyph index into
    // ANMF: glyphs[code] = ANMF[TRAN[code]].  Glyph index 0 is the reserved
    // notdef slot (control chars map to it), so a TRAN value of 0 means "no glyph".
    const int tranCount = (int)(tranLen / 2);
    for (int code = 0; code < tranCount; ++code) {
        uint16_t tv = ReadU16LE(tran + (size_t)code * 2);
        if (tv == 0 || tv > numGlyphs) {
            continue; // 0 = no glyph for this codepoint
        }
        uint32_t gi = (uint32_t)tv - 1; // TRAN stores 1-based glyph indices

        // ANMF float layout (verified against editor.fnt):
        //   [0] unused (always 0)  [4] u_left  [8] v_top  [12] u_right  [16] v_bottom
        const uint8_t* g = anmf + (size_t)gi * 40;
        float u_left = ReadF32LE(g + 4);
        float v_top  = ReadF32LE(g + 8);
        uint16_t width    = ReadU16LE(g + 22);
        uint16_t height   = ReadU16LE(g + 24);

        // Derive the UV rect from the glyph's pixel size anchored at (u_left, v_top)
        // for exact pixel alignment.
        FntGlyph glyph;
        glyph.u0 = u_left;
        glyph.v0 = v_top;
        glyph.u1 = u_left + (float)width / (float)texWidth;
        glyph.v1 = v_top + (float)height / (float)texHeight;
        glyph.width   = width;
        glyph.height  = height;
        uint16_t advance_x = ReadU16LE(g + 26);   // per-glyph horizontal advance stored in file
        glyph.advance = advance_x > 0 ? (int)advance_x
                                      : (width > 0 ? (int)width + 1
                                                   : (font.lineHeight > 0 ? font.lineHeight / 2 : 4));

        font.glyphs[code] = glyph;
    }

    font.valid = true;
    Logger::Get().Log(LogLevel::INFO, "[FNT] Parsed " + filepath + " | Glyphs: " +
        std::to_string(font.glyphs.size()) + " | Atlas: " +
        std::to_string(texWidth) + "x" + std::to_string(texHeight) +
        " | LineHeight: " + std::to_string(font.lineHeight));
    return font;
}
