// Original IGI.EXE function: MenuItemTask_Init (VA 0x00504E10; static CFG gate PASS, CFG score 1.000).
#include "MenuItemTask_Init.h"
int32_t MenuItemTask_Init()

{
    int32_t v_4 = 0;
    g_54e708 = TaskType_Register("MenuItemTask", 0x44, QTask_OpenEvent_2(), 0);
    g_54e70b = QTask_UnableToAllocateEvent(0);
    g_54e70a = QTask_UnableToAllocateEvent(0);
    QTask_TriggerEvent(g_54e708, 1, MenuItemTask_LoadParameters);
    int32_t valA4 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_54e708, valA4, sub_424280);
    int32_t valA5 = Physics_CheckHullCollision_7();
    QTask_RemoveEventCallback(g_54e708, valA5, sub_5053f0);
    int32_t valA6 = Sync_Process();
    int32_t v_8_2 = valA6;
    valA6 = g_54e708;
    QTask_RemoveEventCallback(valA6, v_8_2, sub_505480);
    int32_t valA7 = EditRigidObjAttachedToBone_Action();
    QTask_RemoveEventCallback(g_54e708, valA7, sub_505510);
    int32_t valA8 = EditRigidObjAttachedToBone_OnTick();
    return QTask_RemoveEventCallback(g_54e708, valA8, sub_5053b0);
}
