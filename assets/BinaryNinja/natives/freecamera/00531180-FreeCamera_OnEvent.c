// Original IGI.EXE function: FreeCamera_OnEvent (VA 0x00531180; static CFG gate PASS, CFG score 1.000).
#include "FreeCamera_OnEvent.h"
uint32_t FreeCamera_OnEvent()

{
    int32_t data_val;
    data_val = g_54f7d0;
    return QTask_CloseEvent_2(data_val);
}
