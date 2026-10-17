// IGI native provenance: SoundSys_StopSoundSample_12 - 0x004E8250 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8250-SoundSys_StopSoundSample_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_StopSoundSample_12.h"
int32_t SoundSys_StopSoundSample_12(void* context, char param_2)

{
    int32_t result = param_2;
    *(context + 0xc0) = result;
    return result;
}
