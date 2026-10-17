// Original IGI.EXE function: SoundSys_SetMasterVolume_12 (VA 0x004E8220; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume_12.h"
int32_t SoundSys_SetMasterVolume_12(int32_t context, int32_t param_2, char param_3)

{
    *(context + param_2 + 0xb1) = param_3;
    return param_3;
}
