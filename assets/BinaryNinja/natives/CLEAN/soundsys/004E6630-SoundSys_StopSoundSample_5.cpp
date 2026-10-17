// IGI native provenance: SoundSys_StopSoundSample_5 - 0x004E6630 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E6630-SoundSys_StopSoundSample_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_StopSoundSample_5.h"
int32_t SoundSys_StopSoundSample_5()

{
    char result = g_548814;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548814 = result;
    }

    return result;
}
