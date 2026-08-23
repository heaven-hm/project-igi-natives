// ============================================================================
// IGI_Structures.hpp — Project I.G.I (2000) igi.exe recovered data structures
// ============================================================================
//
// Single-file collection of every game structure reverse-engineered from the
// retail IGI 1 executable (igi.exe, PE32, image base 0x400000).
//
// RULES HONOURED:
//   * Every field below was verified in actual machine code of igi.exe.
//     The proving function/address is cited in each comment.
//   * Gaps are declared as reserved padding — invented semantics are NOT.
//   * Offsets are relative to the struct base unless stated otherwise.
//
// Provenance summary:
//   ProfileRecord ....... accessor 0x406220 (base 0xBC2388 + 0xD14*activeIdx),
//                         defaults-reset 0x403B70, graphic accessors 0x404590+
//   SoundOptionsRecord .. accessor 0x404A70 (base 0xBC25AC + 4140*activeIdx)
//   Soldier ............. soldier-task vtable family .data 0x53EC90
//                         (0x45C190..0x45CA50) + SoldierExecute 0x45C440
//   HumanPlayer ......... Human_ViewCam 0x463760, Human_TaskViewReset 0x4659E0,
//                         Human_FindNextCamera 0x4828D0
//   DisplayMode ......... Display_GetActiveMode 0x491CF0 (global 0xC28B40),
//                         Display_SetMode 0x491A90 field comparisons
//   TransContext ........ TransContext_SetActiveTransContext 0x497E70
//
// Companion evidence log: verification/structures_evidence.md
// ============================================================================

#pragma once

#include <cstdint>

namespace IGI {

// ============================================================================
// GLOBAL SINGLETONS / ROOTS (all verified in igi.exe machine code)
// ============================================================================
//
// uint32_t* g_configActiveIndex  = (uint32_t*)0xBC2384;  // active profile index
//                                                        // (read by 0x404590, 0x406220, 0x404A70)
// uint32_t* g_profileRecordBase  = (uint32_t*)0xBC2388;  // ProfileRecord array root,
//                                                        // stride 0xD14 (fcn 0x406220:
//                                                        // lea eax,[eax+eax*4] chains -> *0xD14)
// uint32_t* g_graphicOptsBase    = (uint32_t*)0xBC2394;  // GraphicOptions view of each profile
//                                                        // (= ProfileRecord + 0x0C; fcn 0x404590)
// uint32_t* g_soundOptionsBase   = (uint32_t*)0xBC25AC;  // SoundOptionsRecord array root,
//                                                        // stride 4140 (fcn 0x404A70:
//                                                        // idx*207*... *4 chain -> *4140)
// void*     g_activeDisplayMode  = (void*)    0xC28B40;  // DisplayMode instance
//                                                        // (returned by 0x491CF0)
// void*     g_transContext       = (void*)    0xBCAAE0;  // active TransContext copy target
//                                                        // (0x497E70 copies 0x2A dwords here)

// Convenience accessor — mirrors igi.exe fcn.00406220 exactly.
inline uint32_t* profileRecord(uint32_t activeIndex) {
    // fcn.00406220: ((idx*3)<<3 - idx) * 3 * 5 * 4 + 0xBC2388  == idx*3348 + base
    return reinterpret_cast<uint32_t*>(0xBC2388u + 0xD14u * activeIndex);
}

// Mirrors igi.exe fcn.00404590 (graphic options = profile record viewed at +0x0C).
inline uint32_t* graphicOptionsRecord(uint32_t activeIndex) {
    return reinterpret_cast<uint32_t*>(0xBC2394u + 0xD14u * activeIndex);
}

// Mirrors igi.exe fcn.00404A70 (sound options array, stride 4140).
inline uint32_t* soundOptionsRecord(uint32_t activeIndex) {
    return reinterpret_cast<uint32_t*>(0xBC25ACu + 4140u * activeIndex);
}

// ============================================================================
// PROFILE RECORD  (stride 0xD14 = 3348 bytes)
// ============================================================================
// Accessor: fcn.00406220 -> 0xBC2388 + 0xD14 * [0xBC2384]
// Field proofs come from defaults-reset fcn.00403B70 and the Config_* family.
struct ProfileRecord {
    uint8_t  _reserved_00[0x0C];        // 0x000..0x00B  unverified head

    uint32_t width;                     // 0x00C  render width  — 0x403B70 writes 640;
                                        //        Config_GraphicOptionsGetResolution
                                        //        0x4045B0 reads [gfx+0x00]
    uint32_t height;                    // 0x010  render height — 0x403B70 writes 480;
                                        //        0x4045B0 reads [gfx+0x04]
    uint32_t bpp;                       // 0x014  colour depth  — 0x403B70 writes 32;
                                        //        Config_GraphicOptionsSetResolution
                                        //        0x404510 writes (v>>26)&0x3F to [gfx+0x08]
    uint32_t performanceFlags;          // 0x018  detail bitmask — Config_GraphicOptions-
                                        //        SetPerformanceFlags 0x404F00 writes
                                        //        [gfx+0x0C]; 0x403B70 zeroes it
    uint8_t  transparency;              // 0x01C  0/1 — SetTransparency 0x404960 writes
                                        //        [gfx+0x10]; 0x403B70 sets 1
    uint8_t  flag_1D;                   // 0x01D  set to 1 by 0x403B70 (meaning TBD)
    uint8_t  flag_1E;                   // 0x01E  set to 1 by 0x403B70 (meaning TBD)
    uint8_t  flag_1F;                   // 0x01F  zeroed by 0x403B70 (meaning TBD)

    uint8_t  _reserved_20[0x11F - 0x20];// 0x020..0x11E  unverified

    uint8_t  byte_11F;                  // 0x11F  zeroed by 0x403B70 (flag, meaning TBD)

    uint8_t  _reserved_120[0x220 - 0x120]; // 0x120..0x21F  unverified

    float    gamma;                     // 0x220  live gamma, default 1.0f — 0x403B70
                                        //        writes 0x3F800000; lighting math reads
                                        //        it (see ENHANCER::GAMMA_SET consumers);
                                        //        menu setter 0x4048B0 writes the settings
                                        //        copy at gfx+0x214 (= this + 0xC)

    uint8_t  _reserved_224[0xD14 - 0x224]; // 0x224..0xD13  unverified tail of record

    static constexpr uint32_t kStride = 0xD14;      // proven by accessor address algebra

    // NOTE: this struct is an OPEN-ENDED view over a 0xD14-byte stride — do NOT
    // sizeof/instantiate it as-is; cast pointers obtained via profileRecord(idx).
};

// ----------------------------------------------------------------------------
// GRAPHIC OPTIONS — the same bytes as ProfileRecord+0x0C, addressed through
// fcn.00404590 (0xBC2394 + 0xD14*idx). Provided as a typed overlay.
// ----------------------------------------------------------------------------
struct GraphicOptions {                                  // base = ProfileRecord + 0x0C
    uint32_t width;                 // 0x000  SetResolution 0x404510 writes (v>>13)&0x1FFF;
                                    //        GetResolution 0x4045B0 reads [rec+0x00]
    uint32_t height;                // 0x004  GetResolution 0x4045B0 reads [rec+0x04];
                                    //        SetResolution writes matching bits (tail of fn)
    uint32_t deviceBits;            // 0x008  SetResolution 0x404510 writes (v>>26)&0x3F
                                    //        (device/bpp packing); 0x403B70 default 32 @full+0x14
    uint32_t performanceFlags;      // 0x00C  SetPerfFlags 0x404F00 / GetPerfFlags 0x404F60
    uint8_t  transparency;          // 0x010  SetTransparency 0x404960 / Get 0x4049C0 (movsx byte)
    uint8_t  _reserved_11[0x214 - 0x011]; // 0x011..0x213  unverified
    float    gammaSetting;          // 0x214  SetGamma 0x4048B0 stores float here;
                                    //        GetGamma 0x404910 flds it (settings copy;
                                    //        live value sits at ProfileRecord+0x220)
};

// ----------------------------------------------------------------------------
// SOUND OPTIONS — separate per-profile array, accessor fcn.00404A70.
// ----------------------------------------------------------------------------
struct SoundOptionsRecord {                              // base = 0xBC25AC + 4140*idx
    float    sfxVolume;             // 0x000  GetSfxVolume 0x404B40 flds [rec+0x00];
                                    //        SetSfxVolume 0x404AE0 stores via float arg
    float    musicVolume;           // 0x004  GetMusicVolume 0x404CA0 flds [rec+0x04]
    uint8_t  _reserved_08[0x0C - 0x08];   // 0x008..0x00B  unverified (speech volume likely
                                          // nearby — SpeechVol getter 0x404E00 reads [rec+0],
                                          // needs re-check before trusting an offset)
    uint8_t  sfxEnabled;            // 0x00C  Get/SetSoundsEffects 0x404A90/0x404A10 (byte)
    uint8_t  musicEnabled;          // 0x00D  Get/SetMusic 0x404BF0/0x404B90 (byte)
    uint8_t  speechEnabled;         // 0x00E  SetSpeech 0x404CF0 writes byte [rec+0x0E]
    uint8_t  reverseStereo;         // 0x00F  GetReverseStereo 0x404EB0 (movsx byte)
};

// ============================================================================
// SOLDIER  (AI soldier entity; ptr passed to SoldierExecute 0x45C440 and the
// soldier-task vtable at .data 0x53EC90: 0x45C190, 0x45C1C0, 0x45C2E0, 0x45C330,
// 0x45C5A0, 0x45C650, 0x45C750, 0x45C8B0, 0x45CA50)
// Total size unknown (> 0xD20); only verified offsets are declared.
// ============================================================================
struct Soldier {
    uint8_t  _reserved_00[0x68];    // 0x000..0x067  unverified head

    uint8_t  nameArea_68;           // 0x068  first byte of a string/name area — passed as
                                    //        argument with soldier ptr (0x45C440:
                                    //        lea eax,[esi+0x68]); extent not yet mapped
    uint8_t  _reserved_69[0x254 - 0x069];

    uint32_t patrolData_254;        // 0x254  start of a patrol/waypoint sub-struct —
                                    //        0x45C2E0 does lea eax,[esi+0x254] then reads
                                    //        [eax+0x94] and passes both to 0x489E10
    uint8_t  _reserved_258[0x2EC - 0x258];

    uint32_t paramPtr_2EC;          // 0x2EC  parameter pointer slot — referenced at
                                    //        0x45D093 (lea edi,[esi+0x2ec]) inside the
                                    //        SoldierExecute complex
    uint8_t  _reserved_2F0[0x33D - 0x2F0];

    uint8_t  flag_33D;              // 0x33D  state flag — cleared (0) by 0x45C1C0/0x45C2E0/
                                    //        0x45C330 alongside +0x696 updates
    uint8_t  _reserved_33E[0x4C4 - 0x33E];

    uint32_t objectRef_4C4;         // 0x4C4  object reference — 0x45C440/0x45C5A0/0x45C650
                                    //        pass &this->objectRef_4C4 to spawner 0x4F2060
    uint8_t  _reserved_4C8[0x696 - 0x4C8];

    uint8_t  activeFlag_696;        // 0x696  enable/disable latch — every vtable method
                                    //        writes 0 or 1 here (0x45C199=0, 0x45C2F2=1,
                                    //        0x45C75B=0, 0x45CA5B=0 ...)
    uint8_t  _reserved_697[0x800 - 0x697];

    uint32_t ptr_800;               // 0x800  pointer field — 0x45C440 loads ebp=[esi+0x800]
    uint8_t  _reserved_804[0xD0C - 0x804];

    uint32_t id_D0C;                // 0xD0C  entity id — 0x45C750 compares against -1
                                    //        (0xFFFFFFFF = unset) before use
    uint8_t  _reserved_D10[4];

    uint32_t dword_D14;             // 0xD14  dword — 0x45C330 zeroes it during a reset path
    uint8_t  _reserved_D18[4];

    uint32_t ptr_D1C;               // 0xD1C  pointer field — 0x45C4DF reads [esi+0xD1C]

    // NOTE: FOV tangent floats +0x1E4/+0x1E8 belong to the HUMAN player struct
    // (see HumanPlayer below), written by Human_TaskViewReset 0x4659E0 — they are
    // listed there, not here.
};

// ============================================================================
// HUMAN PLAYER  (ptr held by the DLL project's humanplayer_ptr global)
// Total size unknown; verified offsets only.
// ============================================================================
struct HumanPlayer {
    uint8_t  _reserved_00[0x1E4];   // 0x000..0x1E3

    float    fovTangentH_1E4;       // 0x1E4  horizontal half-FOV TANGENT — restored by
                                    //        Human_TaskViewReset 0x4659E0:
                                    //        fld qword [0x5335E8]; fptan; fstp [eax+0x1E4].
                                    //        Binocular zoom (ENHANCER::BINOCULARS_ZOOM_SET)
                                    //        scales this while zoomed.
    float    fovTangentV_1E8;       // 0x1E8  vertical half-FOV tangent — same restore path
                                    //        from qword constant 0x5339C0
    uint32_t dword_1EC;             // 0x1EC  cleared to 0 by 0x4659E0 (view-reset scratch)

    uint8_t  _reserved_1F0[0x4F0 - 0x1F0];

    uint32_t camValue_4F0;          // 0x4F0  camera selection value — Human_ViewCam 0x463760
                                    //        is a 2-instruction setter: [ecx+0x4F0] = arg2
    uint8_t  _reserved_4F4[0x664 - 0x4F4];

    float    float_664;             // 0x664  scaled float — 0x463770 multiplies by const
                                    //        0x533470 (0x3F7D70A4 ≈ 0.99f) and stores back
    float    float_668;             // 0x668  next field in the same scaling loop (0x463786)

    // size unknown beyond 0x66C
};

// ============================================================================
// DISPLAY MODE  (instance lives at global 0xC28B40; returned by
// Display_GetActiveMode 0x491CF0; validated field-by-field by
// Display_SetMode 0x491A90 against globals 0xC28B44..0xC28B5C)
// ============================================================================
struct DisplayMode {
    uint32_t field_00;              // 0x000  (global mirror 0xC28B40 itself)
    uint32_t field_04;              // 0x004  compared vs 0xC28B44 (mode identity dword A)
    uint32_t field_08;              // 0x008  compared vs 0xC28B48 (identity dword B)
    uint8_t  _reserved_0C[0x10 - 0x0C];
    uint32_t field_10;              // 0x010  compared vs 0xC28B50
    uint8_t  _reserved_14[2];
    uint8_t  field_16;              // 0x016  compared vs byte 0xC28B56
    uint8_t  _reserved_17;
    uint32_t field_18;              // 0x018  compared vs 0xC28B58
    char     deviceName_1C[0x30];   // 0x01C  NUL-terminated device-name string —
                                    //        repne scasb + byte-compare vs 0xC28B5C in
                                    //        Display_SetMode (also feeds GetSystemMetrics
                                    //        window sizing)
    // exact extent follows the string; 0x30 is a safe capacity, not a proven size
};

// ============================================================================
// TRANS CONTEXT  (active transform context, global copy at 0xBCAAE0)
// ============================================================================
struct TransContext {
    // TransContext_SetActiveTransContext 0x497E70 copies exactly 0x2A dwords
    // (168 bytes) from the source context into global 0xBCAAE0 using a dword
    // rep-style loop, then bumps state counters at 0x6E5BB0/0x6E5BB4.
    // Individual field semantics are not yet mapped — declared as raw storage.
    uint32_t words[42];             // 0x000..0x0A7  0x2A dwords, semantics TBD
};
static_assert(sizeof(TransContext) == 168, "TransContext copy size proven by 0x497E70 (ecx=0x2a)");

} // namespace IGI
