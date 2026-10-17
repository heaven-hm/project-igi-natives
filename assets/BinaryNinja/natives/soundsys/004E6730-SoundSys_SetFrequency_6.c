// IGI native provenance: SoundSys_SetFrequency_6 - 0x004E6730 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E6730-SoundSys_SetFrequency_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetFrequency_6.h"
int32_t SoundSys_SetFrequency_6()

{
    int32_t result = g_54881c;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven_2(0);
        g_54881c = result;
    }

    return result;
}
