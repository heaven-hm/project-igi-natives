// IGI native provenance: SoundSys_PlaySoundSample_14 - 0x004E9E80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E9E80-SoundSys_PlaySoundSample_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_PlaySoundSample_14.h"
int32_t SoundSys_PlaySoundSample_14()

{
    QTask_CloseEvent_2(g_54da60);
    g_54da60 = 0x181;
    g_54da62 = 0x181;
    return 0x181;
}
