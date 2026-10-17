// Original IGI.EXE function: SoundSys_SetMasterVolume_3 (VA 0x004E55F0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume_3.h"
uint32_t SoundSys_SetMasterVolume_3()

{
    Sys_OpenFileStream_2(&g_b019e0);
    return QTask_InitContext(g_a5e408);
}
