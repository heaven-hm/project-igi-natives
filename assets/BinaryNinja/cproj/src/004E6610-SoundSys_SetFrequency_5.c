#include "gi_platform.h"
#include "004E6610-SoundSys_SetFrequency_5.h"
int32_t SoundSys_SetFrequency_5()

{
    char result = g_548813;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548813 = result;
    }

    return result;
}
