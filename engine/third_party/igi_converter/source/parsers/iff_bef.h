#pragma once
//
// bef_parser.h
//
// Native C++ parser/writer for the IGI 1 BEF text format.
//
// BEF (Behaviour/Build Extended Format) is the human-readable text
// representation of one IFF animation clip plus the bone skeleton it
// references.  Each BEF file corresponds to a single animation and is
// usually written as "<model>_<anim>.BEF" by `igi2conv iff convert`.
//
// Format (line-oriented, see IGI1_iffc.py in the reference project):
//
//   // comments are // prefixed
//   AnimInit("<name>", <flags>, <length_ms+1>, <tp_flag>);
//   BreakScript();
//   Bone(<idx>, "<name>", <parent>, <px>, <py>, <pz>);
//   ...
//   BuildHierarchy();
//   BreakScript();
//   TranslationKeyFrameData(<track>, <flag>, <time_ms>, <px>, <py>, <pz>);
//   RotationKeyFrameData(<bone>, <flag>, <time_ms>,
//                        <ax0>, <ay0>, <az0>, <w00>,
//                        <ax1>, <ay1>, <az1>, <w01>,
//                        <ax2>, <ay2>, <az2>, <w02>);
//   TriggerData(<idx>, <event_id>, <time_ms>, <param>, <px>, <py>, <pz>);
//
// All vectors are in IGI world units; px/py/pz for bones are divided by
// 40.96 in the text so the engine can multiply back.  This is the
// canonical "Sc = 40.96" scaling.
//
// Note: the parser is intentionally tolerant of whitespace and quoting
// (matches what the Python reference implementation does).  It is NOT a
// full QSC parser - only the BEF keywords we care about for IFF I/O.

#include <cstdint>
#include <fstream>
#include <string>
#include <vector>

namespace igiconv {

struct BefBone {
    int   index = 0;
    std::string name;
    int   parent = -1;
    float px = 0, py = 0, pz = 0;        // stored in IGI units (already scaled by Sc)
};

struct BefTranslationKey {
    int   track = 0;
    int   flag  = 0;
    int   time_ms = 0;
    float px = 0, py = 0, pz = 0;        // IGI units
};

struct BefRotationKey {
    int   bone = 0;
    int   flag = 0;
    int   time_ms = 0;
    // Three quaternions (xyzw) per key (engine precomputes 3 control
    // points for cubic interpolation).  Reference writes them as
    // q0, q1, q2.
    float q0[4] = {0, 0, 0, 1};
    float q1[4] = {0, 0, 0, 1};
    float q2[4] = {0, 0, 0, 1};
};

struct BefEvent {
    int   index = 0;
    int   event_id = 0;
    int   time_ms = 0;
    int   bone_id = 0;
    float px = 0, py = 0, pz = 0;
};

struct BefFile {
    std::string anim_name;       // e.g. "003_anim_004"  (without .BEF ext)
    int   flags = 0;
    int   length_ms = 0;        // raw value as written (the +1 is the engine's)
    int   tp_flag = 0;          // 0 or 1, becomes the clip "flags" in IFF
    std::vector<BefBone>          bones;
    std::vector<BefTranslationKey> translations;   // root-bone translation track
    std::vector<BefRotationKey>   rotations;       // all bone rotation keys (any bone)
    std::vector<BefEvent>         events;
};

// Parse a single BEF text file.  Returns true on success; on failure
// populates `err` (if non-null) and the returned BefFile is empty.
bool ParseBefFile(const std::string& path, BefFile& out, std::string* err = nullptr);

// Write a BEF text file in the canonical IGI 1 form.
bool WriteBefFile(const std::string& path, const BefFile& bef, std::string* err = nullptr);

} // namespace igiconv
