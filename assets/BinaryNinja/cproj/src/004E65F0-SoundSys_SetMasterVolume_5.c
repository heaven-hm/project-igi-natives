#include "gi_platform.h"
#include "004E65F0-SoundSys_SetMasterVolume_5.h"
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
