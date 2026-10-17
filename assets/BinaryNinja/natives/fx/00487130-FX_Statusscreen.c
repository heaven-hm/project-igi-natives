// Original IGI.EXE function: FX_Statusscreen (VA 0x00487130; static CFG gate PASS, CFG score 1.000).
#include "FX_Statusscreen.h"
int32_t FX_Statusscreen()

{
    QTask_InitContext(g_540b5c);
    int16_t entity_val = g_5c8a74;
    g_540b5c = 0xff;
    QTask_CloseEvent_2(entity_val);
    return Sys_OpenFileStream_4("STATUSSCREEN:");
}
