// IGI native provenance: SoundSys_InitSoundSys_6 - 0x004E66B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E66B0-SoundSys_InitSoundSys_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_InitSoundSys_6.h"
int32_t SoundSys_InitSoundSys_6()

{
    char result = g_548818;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548818 = result;
    }

    return result;
}
