// IGI native provenance: SoundSys_StopSoundSample_14 - 0x004EACE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EACE0-SoundSys_StopSoundSample_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_StopSoundSample_14.h"
int32_t SoundSys_StopSoundSample_14()

{
    QTask_CloseEvent_2(g_54dad8);
    g_54dad8 = 0x181;
    g_54dada = 0x181;
    return 0x181;
}
