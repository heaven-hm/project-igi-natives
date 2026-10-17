// Original IGI.EXE function: SoundSys_StopSoundSample_14 (VA 0x004EACE0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_StopSoundSample_14.h"
int32_t SoundSys_StopSoundSample_14()

{
    QTask_CloseEvent_2(g_54dad8);
    g_54dad8 = 0x181;
    g_54dada = 0x181;
    return 0x181;
}
