// Original IGI.EXE function: InputPort_Init (VA 0x004ED510; static CFG gate PASS, CFG score 1.000).
#include "InputPort_Init.h"
int32_t InputPort_Init()

{
    int32_t v_8 = 0;
    int16_t valA1 = TaskType_Register("InputPort", 0x20, QTask_OpenEvent_2(), 0);
    g_a5efa0 = valA1;
    int32_t result = QTask_TriggerEvent(valA1, 1, InputPort_LoadParameters);
    g_bc20a0 = 0;
    g_bc2150 = 0;
    g_bc2200 = 0;
    g_bc22b0 = 0;
    return result;
}
