// Original IGI.EXE function: SoundSys_InitSoundSys_3 (VA 0x004E5580; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_InitSoundSys_3.h"
int32_t SoundSys_InitSoundSys_3(void* context, int32_t param_2, int32_t param_3)

{
    int32_t context_val = 0;
    context_val = *((((param_3 << (*(context + 4) & 0x1f)) + (param_2 & 0xfffffff8)) >> 3) + context + 0xc);
    return context_val >> (param_2 & 7) & 1;
}
