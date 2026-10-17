// IGI native provenance: SoundSys_LoadSoundDef_13 - 0x004E90C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E90C0-SoundSys_LoadSoundDef_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_LoadSoundDef_13.h"
int32_t SoundSys_LoadSoundDef_13(void* context)

{
    float item_18 = g_bcabb8;
    float item_14 = g_bcabbc;
    float item_10 = g_bcabc0;
    float item_c = g_bcabc4;
    return Display_CheckCapabilities_13(context + 0x30, &item_18);
}
