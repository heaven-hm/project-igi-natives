// IGI native provenance: SoundSys_SetMasterVolume_4 - 0x004E6030 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E6030-SoundSys_SetMasterVolume_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetMasterVolume_4.h"
int32_t Timer_SetLimit(int32_t context)

{
    g_limit_a = context;
    return Timer_Commit(context);
}
