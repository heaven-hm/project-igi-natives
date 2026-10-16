#include "ComputerObjectives_Init.h"
int32_t ComputerObjectives_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("ComputerObjectives", 0x38, QTask_OpenEvent_2(), 0);
    g_5bdd70 = valA1;
    QTask_RemoveEventCallback(valA1, 0, ComputerObjectives_LoadParameters);
    QTask_TriggerEvent(g_5bdd70, 1, sub_488700);
    QTask_TriggerEvent(g_5bdd70, 2, AIGraph_LoadParameters);
    int32_t valA3 = StatusScreen_GetEvent();
    return QTask_TriggerEvent(g_5bdd70, valA3, ComputerObjectives_Process);
}
