// Original IGI.EXE function: ComputerButtonItem_Init (VA 0x0046B510; static CFG gate PASS, CFG score 1.000).
#include "ComputerButtonItem_Init.h"
int32_t ComputerButtonItem_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("ComputerButtonItem", 0x94, Physics_SimulateRigidBody_5(), 0);
    g_5be2b4 = data_1;
    QTask_RemoveEventCallback(data_1, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5be2b4, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5be2b4, 2, sub_46b5a0);
    int32_t data_3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_5be2b4, data_3, ComputerButtonItem_Process);
    int32_t data_4 = EditRigidObjAttachedToBone_Action();
    int32_t item_8_1 = data_4;
    data_4 = g_5be2b4;
    return QTask_RemoveEventCallback(data_4, item_8_1, sub_46b940);
}
