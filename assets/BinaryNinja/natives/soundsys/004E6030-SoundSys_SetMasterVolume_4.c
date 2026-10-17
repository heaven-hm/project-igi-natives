// Original IGI.EXE function: SoundSys_SetMasterVolume_4 (VA 0x004E6030; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume_4.h"
int32_t Timer_SetLimit(int32_t context)

{
    g_limit_a = context;
    return Timer_Commit(context);
}
