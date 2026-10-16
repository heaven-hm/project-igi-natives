#include "lightmap_resolver.h"
#include "qsc_object_parser.h"
#include "res_parser.h"

#include <algorithm>
#include <filesystem>
#include <fstream>
#include <regex>

namespace fs = std::filesystem;

namespace igiconv {

std::vector<std::string> ResolveLightmapFilesForLogicalId(const std::string& objectsQscPath,
                                                           const std::string& logicalId) {
    std::vector<std::string> result;
    if (logicalId.empty() || !fs::exists(objectsQscPath)) return result;

    fs::path levelDir = fs::path(objectsQscPath).parent_path();
    fs::path lightmapsDir = levelDir / "lightmaps";
    fs::path unpackedDir = lightmapsDir / "lightmaps_unpacked";

    if (!fs::exists(unpackedDir)) {
        fs::path resPath = lightmapsDir / "lightmaps.res";
        if (!fs::exists(resPath)) return result;

        std::error_code ec;
        fs::create_directories(unpackedDir, ec);
        if (ec) return result;

        std::string err;
        RES_ForEachEntry(resPath.string(),
            [&](const std::string& name, const uint8_t* data, size_t size) {
                fs::path entryPath(name);
                fs::path outPath = unpackedDir / entryPath.filename();
                std::ofstream ofs(outPath, std::ios::binary);
                if (!ofs) return;
                ofs.write(reinterpret_cast<const char*>(data), static_cast<std::streamsize>(size));
            }, err);
        if (!err.empty() || !fs::exists(unpackedDir)) return result;
    }

    std::regex pattern("^" + logicalId + "_\\d{5}\\.olm$", std::regex_constants::icase);
    for (const auto& entry : fs::directory_iterator(unpackedDir)) {
        if (!entry.is_regular_file()) continue;
        std::string filename = entry.path().filename().string();
        if (std::regex_match(filename, pattern)) {
            result.push_back(entry.path().string());
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

std::vector<std::string> ResolveLightmapFiles(const std::string& objectsQscPath,
                                               const std::string& mefStem) {
    if (!fs::exists(objectsQscPath)) return {};

    std::ifstream f(objectsQscPath);
    std::string qscText((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    LightmapBindingSet bindings = LightmapBindingSet::parse(qscText);

    auto logicalId = bindings.logicalIdForModel(mefStem);
    if (!logicalId.has_value()) return {};

    return ResolveLightmapFilesForLogicalId(objectsQscPath, *logicalId);
}

} // namespace igiconv
