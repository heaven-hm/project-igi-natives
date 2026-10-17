// Original IGI.EXE function: Display_Offscreenbuffer (VA 0x00498080; static CFG gate PASS, CFG score 1.000).
#include "Display_Offscreenbuffer.h"
int32_t Display_Offscreenbuffer()

{
    g_6e5bb8 = Sys_RendermodeFailedToCr("OffscreenBuffer");
    int32_t valA1 = Display_SetDisplayMode_5();
    Sys_CheckHeap_2(g_6e5bb8, valA1, sub_498230);
    int32_t valA3 = Display_SyncVSync_5();
    Sys_CheckHeap_2(g_6e5bb8, valA3, AIGraph_LoadParameters);
    int32_t valA4 = Display_SetGammaRamp_5();
    Sys_CheckHeap_2(g_6e5bb8, valA4, sub_498260);
    int32_t valA5 = Display_CheckCapabilities_5();
    Sys_CheckHeap_2(g_6e5bb8, valA5, AIGraph_LoadParameters);
    int32_t valA7 = Display_CreateSurface_4();
    Sys_CheckHeap_2(g_6e5bb8, valA7, sub_498290);
    int32_t valA8 = Display_SetGammaRamp_4();
    int32_t result = Sys_CheckHeap_2(g_6e5bb8, valA8, sub_498140);
    g_6e5bbc = 1;
    return result;
}
