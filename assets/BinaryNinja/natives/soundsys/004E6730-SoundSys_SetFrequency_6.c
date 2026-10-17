// Original IGI.EXE function: SoundSys_SetFrequency_6 (VA 0x004E6730; static CFG gate PASS, CFG score 1.000).
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
