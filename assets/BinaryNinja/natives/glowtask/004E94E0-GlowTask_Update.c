// Original IGI.EXE function: GlowTask_Update (VA 0x004E94E0; static CFG gate PASS, CFG score 1.000).
#include "GlowTask_Update.h"
uint32_t GlowTask_Update()

{
    uint32_t result = QTask_CloseEvent_2(g_54da50);
    g_54da50 = 0x181;
    return result;
}
