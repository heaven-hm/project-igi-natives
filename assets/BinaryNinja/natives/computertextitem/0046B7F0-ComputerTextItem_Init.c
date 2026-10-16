#include "ComputerTextItem_Init.h"
int32_t ComputerTextItem_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("ComputerTextItem", 0x90, Physics_SimulateRigidBody_5(), 0);
    g_5be2bc = valA1;
    QTask_RemoveEventCallback(valA1, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5be2bc, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5be2bc, 2, sub_46b880);
    int32_t valA3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_5be2bc, valA3, ComputerTextItem_Process);
    int32_t valA4 = EditRigidObjAttachedToBone_Action();
    int32_t v_8_1 = valA4;
    valA4 = g_5be2bc;
    return QTask_RemoveEventCallback(valA4, v_8_1, sub_46b940);
}
