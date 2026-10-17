// Original IGI.EXE function: SoundSys_StopSoundSample_12 (VA 0x004E8250; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_StopSoundSample_12.h"
int32_t SoundSys_StopSoundSample_12(void* context, char param_2)

{
    int32_t result = param_2;
    *(context + 0xc0) = result;
    return result;
}
