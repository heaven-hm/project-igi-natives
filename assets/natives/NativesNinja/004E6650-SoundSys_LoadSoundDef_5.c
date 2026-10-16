#include "004E6650-SoundSys_LoadSoundDef_5.h"
/* 0x004e6650 SoundSys_LoadSoundDef_5 full linked: callers=5 callees=1 */
int32_t sub_4e6650()

{
    char result = g_548815;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_548815 = result;
    }

    return result;
}
