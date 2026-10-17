// Original IGI.EXE function: CamTask_Init (VA 0x00530220; static CFG gate PASS, CFG score 1.000).
#include "CamTask_Init.h"
int32_t CamTask_Init()

{
    int32_t item_4 = 0;
    int16_t result = TaskType_Register("CamTask", 0x88, QTask_OpenEvent_2(), 0);
    g_54f768 = result;
    return result;
}
