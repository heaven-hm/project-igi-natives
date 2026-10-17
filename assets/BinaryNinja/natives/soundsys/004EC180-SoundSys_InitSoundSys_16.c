// Original IGI.EXE function: SoundSys_InitSoundSys_16 (VA 0x004EC180; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_InitSoundSys_16.h"
uint32_t SoundSys_InitSoundSys_16()

{
    int32_t valA;
    valA = g_a5ef88;
    return QTask_InitContext(valA);
}
