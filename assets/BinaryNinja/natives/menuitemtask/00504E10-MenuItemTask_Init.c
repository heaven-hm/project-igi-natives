// IGI native provenance: MenuItemTask_Init - 0x00504E10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00504E10-MenuItemTask_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuItemTask_Init.h"
int32_t MenuItemTask_Init()

{
    int32_t item_4 = 0;
    g_54e708 = TaskType_Register("MenuItemTask", 0x44, QTask_OpenEvent_2(), 0);
    g_54e70b = QTask_UnableToAllocateEvent(0);
    g_54e70a = QTask_UnableToAllocateEvent(0);
    QTask_TriggerEvent(g_54e708, 1, MenuItemTask_LoadParameters);
    int32_t data_4 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_54e708, data_4, sub_424280);
    int32_t data_5 = Physics_CheckHullCollision_7();
    QTask_RemoveEventCallback(g_54e708, data_5, sub_5053f0);
    int32_t data_6 = Sync_Process();
    int32_t item_8_2 = data_6;
    data_6 = g_54e708;
    QTask_RemoveEventCallback(data_6, item_8_2, sub_505480);
    int32_t data_7 = EditRigidObjAttachedToBone_Action();
    QTask_RemoveEventCallback(g_54e708, data_7, sub_505510);
    int32_t data_8 = EditRigidObjAttachedToBone_OnTick();
    return QTask_RemoveEventCallback(g_54e708, data_8, sub_5053b0);
}
