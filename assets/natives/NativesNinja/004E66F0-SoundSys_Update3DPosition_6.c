#include "004E66F0-SoundSys_Update3DPosition_6.h"
/* 0x004e66f0 SoundSys_Update3DPosition_6 full linked: callers=5 callees=1 */
int32_t sub_4e66f0()

{
    char result = g_548819;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_548819 = result;
    }

    return result;
}
