/******************************************************************************
 * @file    res_parser.h
 * @brief   RES (ILFF-based resource archive) parser
 *****************************************************************************/

#pragma once
#include <string>
#include <vector>
#include <cstdint>
#include <functional>

struct RESEntry {
    std::string name;               // Resource name/path
    std::vector<uint8_t> data;      // Raw binary data
};

struct RESFile {
    std::vector<RESEntry> entries;
    bool valid = false;
    std::string error;
};

// Stream a RES file, invoking onEntry(name, data, size) for each resource without
// holding the whole archive in memory. Returns true if the file header was valid.
// The (data, size) pointer is only valid for the duration of the callback.
bool RES_ForEachEntry(const std::string& filepath,
                      const std::function<void(const std::string&, const uint8_t*, size_t)>& onEntry,
                      std::string& error);

// Parse a RES file, extracting all named resources
RESFile RES_Parse(const std::string& filepath);

// Extract a single resource by name (returns empty vector if not found)
std::vector<uint8_t> RES_Extract(const std::string& filepath, const std::string& resourceName);
