// Original IGI.EXE function: SoundSys_SetMasterVolume (VA 0x004E0CB0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume.h"
uint32_t SoundSys_SetMasterVolume()

{
    int32_t valA;
    valA = g_a5e36c;
    return QTask_CloseEvent_2(valA);
}
