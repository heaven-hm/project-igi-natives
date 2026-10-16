#include "gi_platform.h"
#include "004E66D0-SoundSys_PlaySoundSample_6.h"
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
