// IGI native provenance: SoundSys_LoadSoundDef_9 - 0x004E75C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E75C0-SoundSys_LoadSoundDef_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_LoadSoundDef_9.h"
void* SoundSys_LoadSoundDef_9(void* context, int32_t param_2, int32_t param_3)

{
    *(context + 0x18) = param_2;
    *(context + 0x1c) = param_3;
    return context;
}
