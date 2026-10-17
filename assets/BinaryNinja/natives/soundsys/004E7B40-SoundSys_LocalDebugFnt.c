// Original IGI.EXE function: SoundSys_LocalDebugFnt (VA 0x004E7B40; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LocalDebugFnt.h"
int32_t SoundSys_LocalDebugFnt()

{
    int16_t valA = g_a5ea76;
    g_a5ebcc = 0;
    QTask_CloseEvent_2(valA);
    Sys_ResolveSymbol_16("LOCAL:debug.fnt");
    Display_SyncVSync_3(sub_4e7900);
    return SoundSys_InitSoundSys_10(g_a5ebd0);
}
