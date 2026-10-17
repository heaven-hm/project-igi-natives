// Original IGI.EXE function: CameraControlTask_OnEvent (VA 0x004E7D30; static CFG gate PASS, CFG score 1.000).
#include "CameraControlTask_OnEvent.h"
uint32_t CameraControlTask_OnEvent()

{
    int32_t data_val;
    data_val = g_54d974;
    return QTask_CloseEvent_2(data_val);
}
