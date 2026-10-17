// Original IGI.EXE function: FX_FireBallUpdate_16 (VA 0x0048A5D0; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_16.h"
int32_t FX_FireBallUpdate_16(void* a1)

{
    char ctxB = g_bcadf8;
    char srcS = g_bcadf0;
    char dstD = g_bcadf4;
    Display_SetBackgroundColourFn(0, 0, 0);
    Display_CreateSurface_3();
    Display_SetBackgroundColourFn(srcS, dstD, ctxB);
    Display_SyncVSync_16(a1 + 0x10);
    return Sys_ExecuteBytecode_2(a1);
}
