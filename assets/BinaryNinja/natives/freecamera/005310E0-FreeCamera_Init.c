#include "FreeCamera_Init.h"
int32_t FreeCamera_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("FreeCamera", 0x90, QTask_OpenEvent_2(), 0);
    g_54f7d0 = valA1;
    QTask_TriggerEvent(valA1, 1, FreeCamera_LoadParameters);
    return QTask_TriggerEvent(g_54f7d0, 2, AIGraph_LoadParameters);
}
