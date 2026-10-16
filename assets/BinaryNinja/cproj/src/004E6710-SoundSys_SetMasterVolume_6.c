#include "gi_platform.h"
#include "004E6710-SoundSys_SetMasterVolume_6.h"
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
