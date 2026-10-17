// Original IGI.EXE function: FX_FireBallUpdate_16 (VA 0x0048A5D0; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_16.h"
int32_t FX_FireBallUpdate_16(void* context)

{
    char context_val = g_bcadf8;
    char source_val = g_bcadf0;
    char dest_val = g_bcadf4;
    Display_SetBackgroundColourFn(0, 0, 0);
    Display_CreateSurface_3();
    Display_SetBackgroundColourFn(source_val, dest_val, context_val);
    Display_SyncVSync_16(context + 0x10);
    return Sys_ExecuteBytecode_2(context);
}
