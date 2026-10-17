// IGI native provenance: SoundSys_SetFrequency_5 - 0x004E6610 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E6610-SoundSys_SetFrequency_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetFrequency_5.h"
int32_t SoundSys_SetFrequency_5()

{
    char result = g_548813;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548813 = result;
    }

    return result;
}
