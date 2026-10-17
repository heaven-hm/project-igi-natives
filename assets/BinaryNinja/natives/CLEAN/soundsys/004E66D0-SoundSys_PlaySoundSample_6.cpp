// IGI native provenance: SoundSys_PlaySoundSample_6 - 0x004E66D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E66D0-SoundSys_PlaySoundSample_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_PlaySoundSample_6.h"
int32_t SoundSys_PlaySoundSample_6()

{
    char result = g_54881b;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_54881b = result;
    }

    return result;
}
