#include "gi_platform.h"
#include "004E6630-SoundSys_StopSoundSample_5.h"
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
