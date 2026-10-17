// Original IGI.EXE function: SoundSys_LoadSoundDef_16 (VA 0x004EC5E0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LoadSoundDef_16.h"
void* SoundSys_LoadSoundDef_16(int32_t* context, float param_2, float param_3, float param_4, float param_5)

{
    *context = param_2;
    context[3] = 1.0f / param_3;
    context[4] = 1.0f / param_4;
    context[5] = 1.0f / param_5;
    context[1] = 1.0f / param_2;
    return SoundSys_AttachLipsync_16(context);
}
