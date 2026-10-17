// Original IGI.EXE function: SoundSys_SetMasterVolume_4 (VA 0x004E6030; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume_4.h"
int32_t Timer_SetLimit(int32_t a1)

{
    g_limit_a = a1;
    return Timer_Commit(a1);
}
