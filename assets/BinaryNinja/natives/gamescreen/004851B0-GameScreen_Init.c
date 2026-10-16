#include "GameScreen_Init.h"
int32_t GameScreen_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("GameScreen", 0x28, QTask_OpenEvent_2(), 0);
    g_5c8a28 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_485220);
    QTask_TriggerEvent(g_5c8a28, 1, sub_488700);
    QTask_TriggerEvent(g_5c8a28, 2, AIGraph_LoadParameters);
    int32_t valA3 = StatusScreen_GetEvent();
    return QTask_TriggerEvent(g_5c8a28, valA3, sub_424280);
}
