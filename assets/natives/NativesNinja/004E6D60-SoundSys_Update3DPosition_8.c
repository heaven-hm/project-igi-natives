#include "004E6D60-SoundSys_Update3DPosition_8.h"
/* 0x004e6d60 SoundSys_Update3DPosition_8 full linked: callers=7 callees=1 */
int32_t sub_4e6d60(int32_t* a1)

{
    char result = g_a5e60a;

    if (result)
        return result;

    if (!a1[2])
    {
        a1[2] = g_a5e5f8;
        g_a5e5f8 += 1;
    }

    return sub_4e6db0(a1[2], *a1, a1[1], a1[3], &a1[4]);
}
