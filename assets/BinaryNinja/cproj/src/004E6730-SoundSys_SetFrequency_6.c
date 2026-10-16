#include "gi_platform.h"
#include "004E6730-SoundSys_SetFrequency_6.h"
int32_t SoundSys_SetFrequency_6()

{
    int32_t result = g_54881c;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven_2(0);
        g_54881c = result;
    }

    return result;
}
