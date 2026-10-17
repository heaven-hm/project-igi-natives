// Original IGI.EXE function: SoundSys_SetMasterVolume_6 (VA 0x004E6710; static CFG gate PASS, CFG score 1.000).
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
