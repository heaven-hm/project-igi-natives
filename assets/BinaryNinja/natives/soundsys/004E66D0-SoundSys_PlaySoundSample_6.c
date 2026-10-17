// Original IGI.EXE function: SoundSys_PlaySoundSample_6 (VA 0x004E66D0; static CFG gate PASS, CFG score 1.000).
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
