// Original IGI.EXE function: Display_SetGammaRamp_18 (VA 0x0049B260; static CFG gate PASS, CFG score 1.000).
#include "Display_SetGammaRamp_18.h"
int32_t Display_SetGammaRamp_18()

{
    Sys_PushStack_19(g_bcade8, g_72057c);
    Sys_PushStack_19(g_bcad7c, g_7205a4);
    int32_t tmpD1 = g_bcadac;
    Sys_PushStack_19(tmpD1, g_7205a8);
    Sys_PushStack_19(g_bcadc4, g_7205a0);
    tmpD1 = g_543c64;
    QTask_CloseEvent_2(tmpD1);
    return Display_CheckCapabilities_14(g_c311bc);
}
