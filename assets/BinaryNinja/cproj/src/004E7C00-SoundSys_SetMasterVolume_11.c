#include "gi_platform.h"
#include "004E7C00-SoundSys_SetMasterVolume_11.h"
int32_t SoundSys_SetMasterVolume_11(char* a1, int32_t a2)

{
    char result = g_a5ea75;

    if (!result)
        return result;

    return SoundSys_Update3DPosition_10(g_a5ebd0, a1, a2);
}
