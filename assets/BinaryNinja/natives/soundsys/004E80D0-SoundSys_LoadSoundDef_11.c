// Original IGI.EXE function: SoundSys_LoadSoundDef_11 (VA 0x004E80D0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LoadSoundDef_11.h"
uint32_t SoundSys_LoadSoundDef_11()

{
    Display_ClearSurfaces_3(ViewportQTask_Process);
    uint32_t result = QTask_CloseEvent_2(g_54d98c);
    g_a5ec64 = 0;
    return result;
}
