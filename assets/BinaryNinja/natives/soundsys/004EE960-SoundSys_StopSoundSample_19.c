// IGI native provenance: SoundSys_StopSoundSample_19 - 0x004EE960 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE960-SoundSys_StopSoundSample_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_StopSoundSample_19.h"
uint32_t SoundSys_StopSoundSample_19(int32_t context) {
    return COMBINE(0, context) % 0xfb;
}
