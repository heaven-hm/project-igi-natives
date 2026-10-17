// IGI native provenance: SoundSys_SetMasterVolume_6 - 0x004E6710 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E6710-SoundSys_SetMasterVolume_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetMasterVolume_6.h"
int32_t SoundSys_SetMasterVolume_6()

{
    char result = g_54881a;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_54881a = result;
    }

    return result;
}
