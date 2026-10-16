#include "004E66B0-SoundSys_InitSoundSys_6.h"
/* 0x004e66b0 SoundSys_InitSoundSys_6 full linked: callers=5 callees=1 */
int32_t sub_4e66b0()

{
    char result = g_548818;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_548818 = result;
    }

    return result;
}
