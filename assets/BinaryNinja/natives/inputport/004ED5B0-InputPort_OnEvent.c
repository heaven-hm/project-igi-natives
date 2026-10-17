// Original IGI.EXE function: InputPort_OnEvent (VA 0x004ED5B0; static CFG gate PASS, CFG score 1.000).
#include "InputPort_OnEvent.h"
uint32_t InputPort_OnEvent()

{
    int32_t data_val;
    data_val = g_a5efa0;
    return QTask_CloseEvent_2(data_val);
}
