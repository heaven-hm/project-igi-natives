// Original IGI.EXE function: CamTask_Update (VA 0x00530250; static CFG gate PASS, CFG score 1.000).
#include "CamTask_Update.h"
uint32_t CamTask_Update()

{
    int32_t data_val;
    data_val = g_54f768;
    return QTask_CloseEvent_2(data_val);
}
