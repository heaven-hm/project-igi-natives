// Original IGI.EXE function: SoundSys_Update3DPosition_8 (VA 0x004E6D60; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_Update3DPosition_8.h"
int32_t SoundSys_Update3DPosition_8(int32_t* context)

{
    char result = g_a5e60a;

    if (result)
        return result;

    if (!context[2])
    {
        context[2] = g_a5e5f8;
        g_a5e5f8 += 1;
    }

    return SoundSys_SetMasterVolume_8(context[2], *context, context[1], context[3], &context[4]);
}
