#pragma once
//
// iff_decompiler.h
//
// Native C++ decompiler that splits an IGI 1 IFF binary into a human
// readable .IFF text file (skeleton + animation list) plus a folder
// `anims_<id>/` containing one small per-animation .IFF text file per
// clip.
//
// This is the inverse of the writer in iff_writer.h; the on-disk layout
// mirrors what the reference `IGI1_iff.py` + `reader_anims_data.py` from
// the dconv toolchain produced, so the round trip IFF -> decompile ->
// re-create -> IFF yields an identical binary (modulo IFF chunk-size
// reconciliation that the C++ writer handles).
//
// IFF_Decompile(src.iff, out_dir) writes:
//   out_dir/<basename>.IFF         // skeleton + anim list (text)
//   out_dir/anims_<id>/anim_NNN.IFF // per-clip text file
//
// where <id> is the bare stem of the source file (e.g. "003" for
// "003.IFF") and NNN is the per-clip animation id.
//
// The companion helper IFF_LoadDecompiledDir() reads the same text
// layout back into a vector of BefFile structs, which lets the
// `iff create` command accept either .BEF files (convert output) or
// the .IFF text format (decompile output) as input.  See cmd_iff.cpp.
//
// Returns true on success.  On failure, `err` (if non-null) is set to
// a human-readable message and the partial output is left in place.

#include <string>
#include <vector>
#include "iff_bef.h"

namespace igiconv {

bool IFF_Decompile(const std::string& srcIffPath,
                   const std::string& outDir,
                   std::string* err = nullptr);

// Read a directory produced by IFF_Decompile() back into a list of
// BEF-style clip structs.  The baseName argument selects which main
// .IFF text file inside the directory to consume (typically the file
// stem of the original source IFF).  bonesSk is filled with the bone
// skeleton parsed from the main .IFF; the returned vector contains
// one BefFile per animation in the Anims List.  Returns true on
// success.
bool IFF_LoadDecompiledDir(const std::string& outDir,
                           const std::string& baseName,
                           std::vector<BefFile>& clipsOut,
                           BefFile& skeletonOut,
                           std::string* err = nullptr);

} // namespace igiconv
