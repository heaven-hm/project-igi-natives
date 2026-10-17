// Original IGI.EXE function: SoundSys_LoadSoundDef_9 (VA 0x004E75C0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LoadSoundDef_9.h"
void* SoundSys_LoadSoundDef_9(void* context, int32_t param_2, int32_t param_3)

{
    *(context + 0x18) = param_2;
    *(context + 0x1c) = param_3;
    return context;
}
