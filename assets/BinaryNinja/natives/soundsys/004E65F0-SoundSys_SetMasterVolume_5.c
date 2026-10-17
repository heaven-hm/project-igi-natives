// Original IGI.EXE function: SoundSys_SetMasterVolume_5 (VA 0x004E65F0; static CFG gate PASS, CFG score 1.000).
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
