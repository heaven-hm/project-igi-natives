#include "004E66D0-SoundSys_PlaySoundSample_6.h"
/* 0x004e66d0 SoundSys_PlaySoundSample_6 full linked: callers=5 callees=1 */
int32_t sub_4e66d0()

{
    char result = g_54881b;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_54881b = result;
    }

    return result;
}
