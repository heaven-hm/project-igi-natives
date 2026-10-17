// IGI native provenance: SoundSys_InitSoundSys_16 - 0x004EC180 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EC180-SoundSys_InitSoundSys_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_InitSoundSys_16.h"
uint32_t SoundSys_InitSoundSys_16()

{
    int32_t data_val;
    data_val = g_a5ef88;
    return QTask_InitContext(data_val);
}
