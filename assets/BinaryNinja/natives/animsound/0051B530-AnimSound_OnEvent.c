// Original IGI.EXE function: AnimSound_OnEvent (VA 0x0051B530; static CFG gate PASS, CFG score 1.000).
#include "AnimSound_OnEvent.h"
uint32_t AnimSound_OnEvent()

{
    int32_t data_val;
    data_val = g_a83764;
    return QTask_CloseEvent_2(data_val);
}
