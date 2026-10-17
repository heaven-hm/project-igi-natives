// IGI native provenance: SoundSys_SetMasterVolume_5 - 0x004E65F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E65F0-SoundSys_SetMasterVolume_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetMasterVolume_5.h"
int32_t SoundSys_SetMasterVolume_5()

{
    char result = g_548812;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548812 = result;
    }

    return result;
}
