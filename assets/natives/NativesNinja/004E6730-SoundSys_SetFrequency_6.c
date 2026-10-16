#include "004E6730-SoundSys_SetFrequency_6.h"
/* 0x004e6730 SoundSys_SetFrequency_6 full linked: callers=5 callees=1 */
int32_t sub_4e6730()

{
    int32_t result = g_54881c;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven_2(0);
        g_54881c = result;
    }

    return result;
}
