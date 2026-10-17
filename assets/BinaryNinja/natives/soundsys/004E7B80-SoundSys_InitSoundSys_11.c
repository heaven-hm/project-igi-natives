// Original IGI.EXE function: SoundSys_InitSoundSys_11 (VA 0x004E7B80; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_InitSoundSys_11.h"
int32_t SoundSys_InitSoundSys_11(int32_t context, int32_t param_2)

{
    char result = g_a5ea75;

    if (!result)
        return result;

    return SoundSys_LoadSoundDef_9(g_a5ebd0, context, param_2);
}
