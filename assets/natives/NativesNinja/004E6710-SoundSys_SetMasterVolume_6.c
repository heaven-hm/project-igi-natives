#include "004E6710-SoundSys_SetMasterVolume_6.h"
/* 0x004e6710 SoundSys_SetMasterVolume_6 full linked: callers=5 callees=1 */
int32_t sub_4e6710()

{
    char result = g_54881a;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_54881a = result;
    }

    return result;
}
