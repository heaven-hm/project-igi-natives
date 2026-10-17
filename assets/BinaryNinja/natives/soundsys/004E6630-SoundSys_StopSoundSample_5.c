// Original IGI.EXE function: SoundSys_StopSoundSample_5 (VA 0x004E6630; static CFG gate PASS, CFG score 1.000).
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
