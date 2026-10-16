#include "004E6630-SoundSys_StopSoundSample_5.h"
/* 0x004e6630 SoundSys_StopSoundSample_5 full linked: callers=9 callees=1 */
int32_t sub_4e6630()

{
    char result = g_548814;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_548814 = result;
    }

    return result;
}
