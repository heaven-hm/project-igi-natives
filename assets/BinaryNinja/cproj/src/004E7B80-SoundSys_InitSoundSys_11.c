#include "gi_platform.h"
#include "004E7B80-SoundSys_InitSoundSys_11.h"
int32_t SoundSys_InitSoundSys_11(int32_t a1, int32_t a2)

{
    char result = g_a5ea75;

    if (!result)
        return result;

    return SoundSys_LoadSoundDef_9(g_a5ebd0, a1, a2);
}
