#pragma once
//
// iff_writer.h
//
// Native C++ writer for the IGI 1 IFF skeletal animation binary format.
//
// The output binary layout exactly matches what the reference Python
// `IGI1_iffw.py` (in the dconv toolchain) produced, so files written
// here can be re-opened by either igi2conv or the original game engine
// (`anim_NNN.IFF` is consumable by IGI 1's runtime loader).
//
// File layout:
//
//   FORM <size BE> BOBJ
//     FORM <size BE> BOBH                   // bone block
//       BOSH  <size=8>  <type:u32> <boneCount:u32>
//       PLST  <size>     <parent:int32> x boneCount
//       TLST  <size>     <px,py,pz:float32> x boneCount
//     FORM <size BE> BOAL                   // animation list
//       BALH  <size=8>  <numAnims:u32> <lidAnims:u32>
//       FORM <size BE> BOAN  (one per animation)
//         BOAH <size=12> <length:f32> <_:u16> <_:u16> <id:u32>
//         BOEH <size=4>  <eventCount:u32>
//         BOED <size>     <event: 6 fields: 2x int32, 4x float32>  x N
//         BOTH <size=4>  <rootTransCount:u32>     (single root track)
//         BOTD <size>     <10 floats per key>      x N
//         BORH <size=4>  <boneRotCount:u32>       (one per bone)
//         BORD <size>     <13 floats per key>      x N
//         ...  (BOEH/BOED, BORH/BORD pairs repeat per bone / per event group)
//
// All chunk sizes are big-endian.  All multi-byte data values are
// little-endian.  The reference uses FORM for the root and per-anim
// sections; everything else is a flat chunk.  We follow that.

#include <cstdint>
#include <string>
#include <vector>

#include "iff_bef.h"
#include "iff_parser.h"

namespace igiconv {

// IFF output is a single binary that contains the bone skeleton (taken
// from the first BEF's bones list) plus every animation defined by the
// BEFs.  `outPath` is the destination .iff file.  Returns true on
// success.
//
// The BEFs are expected to share the same bone skeleton (same bones in
// the same order); only the first is used to author the BOSH/PLST/TLST.
// The bone positions in the BEF are stored already divided by 40.96 -
// we multiply back when serialising.
bool WriteIffFromBefs(const std::vector<std::string>& befPaths,
                      const std::string& outPath,
                      std::string* err = nullptr);

// Convenience overload that also writes a sibling Anims.qsc describing
// the CreateAnim() calls - this is what the reference `IGI1_convert.py`
// produced alongside the .BEF files.  Used by `iff convert` when
// --emit-qsc is requested.
bool WriteAnimsQsc(const std::vector<std::string>& befPaths,
                   const std::string& outPath,
                   std::string* err = nullptr);

} // namespace igiconv
