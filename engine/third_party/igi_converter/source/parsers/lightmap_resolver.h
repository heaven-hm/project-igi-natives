#pragma once
#include <string>
#include <vector>

namespace igiconv {

// Given the path to a level's decompiled objects.qsc and a .mef model id
// (filename stem, e.g. "435_01_1"), returns the sorted list of .olm
// lightmap file paths bound to that model, or an empty vector if no
// binding exists or no matching files are found on disk.
//
// The level's lightmaps folder is derived as a sibling of the directory
// containing objects.qsc: <dir>/lightmaps/lightmaps_unpacked. If that
// folder doesn't exist but <dir>/lightmaps/lightmaps.res does, it is
// unpacked into lightmaps_unpacked automatically.
std::vector<std::string> ResolveLightmapFiles(const std::string& objectsQscPath,
                                               const std::string& mefStem);

// Same lookup as ResolveLightmapFiles, but for a logical lightmap id that's
// already known (e.g. one the user picked from several ambiguous bindings
// for a reused model - see LightmapBindingSet::allBindingsForModel).
std::vector<std::string> ResolveLightmapFilesForLogicalId(const std::string& objectsQscPath,
                                                           const std::string& logicalId);

} // namespace igiconv
