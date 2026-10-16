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
