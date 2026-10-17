// IGI native provenance: SoundSys_SetMasterVolume_12 - 0x004E8220 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8220-SoundSys_SetMasterVolume_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetMasterVolume_12.h"
int32_t SoundSys_SetMasterVolume_12(int32_t context, int32_t param_2, char param_3)

{
    *(context + param_2 + 0xb1) = param_3;
    return param_3;
}
