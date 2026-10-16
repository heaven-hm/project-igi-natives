/******************************************************************************
 * @file    mtp_parser.h
 * @brief   MTP (FORM-based model-texture package) parser
 *****************************************************************************/

#pragma once
#include <string>
#include <vector>
#include <cstdint>
#include "dat_parser.h"

struct MTPModelTexture {
    std::string modelName;
    std::vector<std::string> textureNames;
};

struct MTPFile {
    std::vector<std::string> animations;    // BANM
    std::vector<std::string> sounds;        // SNDS
    std::vector<std::string> shadows;       // SVOL
    std::vector<std::string> models;        // MODS
    std::vector<std::string> vnam_models;   // VNAM (virtual models mapping to models)
    std::vector<std::string> textures;      // TEXF
    std::vector<MTPModelTexture> mappings;  // INST resolved
    bool valid = false;
    std::string error;
};

// Parse an MTP file
MTPFile MTP_Parse(const std::string& filepath);

// Add a model and its textures to an MTP file's MODS/TEXF/INST chunks, preserving all
// other chunks byte-for-byte. Idempotent: if modelName is already in MODS, returns true
// without modifying the file. Writes the result to outPath (may equal the input path).
// Returns false (with err set) on parse/IO failure. Does NOT create backups (caller does).
bool MTP_AddModel(const std::string& mtpPath, const std::string& outPath,
                  const std::string& modelName, const std::vector<std::string>& textureNames,
                  std::string& err);

// Generate a new MTP file from scratch given a list of model-texture mappings.
// extraTextures: textures to include in TEXF but not referenced by any INST entry
// (e.g. the literal "0" manifest entry from some DAT files).
bool MTP_Generate(const std::string& outPath,
                  const std::vector<MTPModelTexture>& mappings,
                  std::string& err,
                  const std::vector<std::string>& extraTextures = {},
                  const std::vector<std::string>& animations = {},
                  const std::vector<std::string>& sounds = {},
                  const std::vector<std::string>& shadows = {},
                  const std::vector<DATVnamEntry>& vnam_models = {},
                  const std::vector<std::string>& textureManifest = {});
