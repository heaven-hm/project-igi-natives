#include "004E6610-SoundSys_SetFrequency_5.h"
/* 0x004e6610 SoundSys_SetFrequency_5 full linked: callers=16 callees=1 */
int32_t sub_4e6610()

{
    char result = g_548813;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_548813 = result;
    }

    return result;
}
