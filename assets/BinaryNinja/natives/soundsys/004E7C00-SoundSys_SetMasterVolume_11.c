// Original IGI.EXE function: SoundSys_SetMasterVolume_11 (VA 0x004E7C00; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume_11.h"
int32_t SoundSys_SetMasterVolume_11(char* context, int32_t param_2)

{
    char result = g_a5ea75;

    if (!result)
        return result;

    return SoundSys_Update3DPosition_10(g_a5ebd0, context, param_2);
}
