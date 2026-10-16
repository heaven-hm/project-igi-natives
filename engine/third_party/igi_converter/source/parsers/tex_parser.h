/******************************************************************************
 * @file    tex_parser.h
 * @brief   TEX (LOOP) texture parser for IGI-1 .tex / .spr / .pic files
 *
 * Supported versions:
 *   2  - single bitmap, 24-byte header (Loop02)
 *   7  - multi-image, 52-byte header + Item07 entries + nested Loop06
 *   9  - multi-image, 52-byte header + Item09 entries + nested Loop06
 *  11  - mipmap chain, 32-byte header
 *
 * Pixel modes:
 *   2  = RGB565   (2 bytes/pixel)
 *   3  = ARGB8888 (4 bytes/pixel)
 *  67  = ARGB8888 (4 bytes/pixel)
 *****************************************************************************/

#pragma once
#include <cstdint>
#include <string>
#include <vector>

struct TEXImage {
    uint32_t width  = 0;
    uint32_t height = 0;
    uint32_t mode   = 2;         // 2=RGB565, 3=ARGB8888, 67=ARGB8888
    std::vector<uint8_t> pixels; // raw bytes from file (mode 2 = 2 B/px, mode 3/67 = 4 B/px)
};

struct TEXFile {
    uint32_t version = 0;
    std::vector<TEXImage> images; // 1 for v2, N for v7/v9, levels for v11
    bool valid = false;
    std::string error;
};

// Parse a .tex binary file. Returns TEXFile with valid=false on any error.
TEXFile TEX_Parse(const std::string& filepath);

// Export each image in tex as a TGA file into outdir.
// Names: <basename>_00.tga, <basename>_01.tga, etc. (just _00.tga if 1 image).
// Returns number of files written.
int TEX_ExportTGA(const TEXFile& tex, const std::string& filepath, const std::string& outdir);

// Write a single TEXImage as a TGA file to an explicit path.
// Returns true on success.
bool TEX_WriteTGA(const std::string& path, const TEXImage& img);

// Write a 32-byte LOOP container (.tex / .spr / .pic) from raw RGBA8888
// pixels.  `mode` selects the pixel format:
//   2 = RGB565 / ARGB1555 (2 bytes/pixel - typical for in-game .tex)
//   3 = ARGB8888          (4 bytes/pixel - typical for in-game .spr/.pic)
// `version` defaults to 11 which is the modern mipmap-chain variant.
// Width and height are stored as uint16 in the header, so anything
// larger than 65535 is rejected.  Returns true on success.
//
// This is the shared encoder used by the GUI ("Convert to TEX" / "Convert
// to .spr" right-click entries) and the `tex to-spr` CLI subcommand, so
// both paths produce bit-identical files from the same RGBA input.
bool TEX_WriteLOOP(const std::string& path,
                   const uint8_t* rgba, int width, int height,
                   int mode = 2, int version = 11);
