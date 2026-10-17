// IGI native provenance: PushButton_Init - 0x0052CA70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052CA70-PushButton_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PushButton_Init.h"
int32_t PushButton_Init()

{
    int32_t item_4 = 0;
    g_54f718 = TaskType_Register("PushButton", 0x7c, Physics_SimulateRigidBody_5(), 0);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_8 = data_2;
    data_2 = g_54f718;
    QTask_TriggerEvent(data_2, item_8, sub_52cad0);
    int32_t data_3 = EditRigidObjAttachedToBone_Action();
    return QTask_RemoveEventCallback(g_54f718, data_3, PushButton_LoadParameters);
}
