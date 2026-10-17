// Original IGI.EXE function: InputPort_OnEvent (VA 0x004ED5B0; static CFG gate PASS, CFG score 1.000).
#include "InputPort_OnEvent.h"
uint32_t InputPort_OnEvent()

{
    int32_t valA;
    valA = g_a5efa0;
    return QTask_CloseEvent_2(valA);
}
