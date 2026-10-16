#include "004E65F0-SoundSys_SetMasterVolume_5.h"
/* 0x004e65f0 SoundSys_SetMasterVolume_5 full linked: callers=5 callees=1 */
int32_t sub_4e65f0()

{
    char result = g_548812;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_548812 = result;
    }

    return result;
}
