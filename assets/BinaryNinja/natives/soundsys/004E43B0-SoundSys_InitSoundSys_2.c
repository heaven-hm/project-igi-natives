// Original IGI.EXE function: SoundSys_InitSoundSys_2 (VA 0x004E43B0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_InitSoundSys_2.h"
uint32_t SoundSys_InitSoundSys_2()

{
    QTask_LinkEventHandler_3(0x10000000);
    return QTask_CloseEvent_2(g_a5e3f4);
}
