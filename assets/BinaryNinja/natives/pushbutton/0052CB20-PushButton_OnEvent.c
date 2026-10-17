// Original IGI.EXE function: PushButton_OnEvent (VA 0x0052CB20; static CFG gate PASS, CFG score 1.000).
#include "PushButton_OnEvent.h"
uint32_t PushButton_OnEvent()

{
    int32_t data_val;
    data_val = g_54f718;
    return QTask_CloseEvent_2(data_val);
}
