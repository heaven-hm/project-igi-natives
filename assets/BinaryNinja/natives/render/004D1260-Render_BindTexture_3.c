// Original IGI.EXE function: Render_BindTexture_3 (VA 0x004D1260; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_3.h"
int32_t Render_BindTexture_3()

{
    QTask_CleanupEvents_2(0xf);
    QTask_CleanupEvents_2(0x10);
    QTask_InitContext(0xf);
    QTask_InitContext(0x10);
    QTask_InitContext(0x11);
    QTask_InitContext(0x12);
    QTask_InitContext(g_548441);
    QTask_InitContext(g_548440);
    int32_t result = Sys_ExecuteBytecode_2(g_b16c98);
    g_b16c98 = 0;
    return result;
}
