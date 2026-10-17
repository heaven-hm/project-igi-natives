// IGI native provenance: SoundSys_LoadSoundDef_18 - 0x004EE120 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE120-SoundSys_LoadSoundDef_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_LoadSoundDef_18.h"
void* SoundSys_LoadSoundDef_18(int32_t context) {
    return context * 0x2d8 + &g_a5efe0;
}
