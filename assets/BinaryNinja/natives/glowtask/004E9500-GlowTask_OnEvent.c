// Original IGI.EXE function: GlowTask_OnEvent (VA 0x004E9500; static CFG gate PASS, CFG score 1.000).
#include "GlowTask_OnEvent.h"
struct status_msg* GlowTask_OnEvent(void* a1)

{
    int32_t kind;
    kind = g_54da50;
    return QTask_HandleInput(a1, kind, 0);
}
