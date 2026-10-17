// Original IGI.EXE function: FreeCamera_Init (VA 0x005310E0; static CFG gate PASS, CFG score 1.000).
#include "FreeCamera_Init.h"
int32_t FreeCamera_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("FreeCamera", 0x90, QTask_OpenEvent_2(), 0);
    g_54f7d0 = data_1;
    QTask_TriggerEvent(data_1, 1, FreeCamera_LoadParameters);
    return QTask_TriggerEvent(g_54f7d0, 2, AIGraph_LoadParameters);
}
