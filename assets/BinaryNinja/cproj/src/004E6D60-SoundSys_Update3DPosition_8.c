#include "gi_platform.h"
#include "004E6D60-SoundSys_Update3DPosition_8.h"
int32_t SoundSys_Update3DPosition_8(int32_t* a1)

{
    char result = g_a5e60a;

    if (result)
        return result;

    if (!a1[2])
    {
        a1[2] = g_a5e5f8;
        g_a5e5f8 += 1;
    }

    return (SoundSys_SetMasterVolume_8(a1[2], *a1, a1[1], a1[3], &a1[4]), 0);
}
