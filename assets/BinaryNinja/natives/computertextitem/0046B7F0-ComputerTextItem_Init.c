// IGI native provenance: ComputerTextItem_Init - 0x0046B7F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046B7F0-ComputerTextItem_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerTextItem_Init.h"
int32_t ComputerTextItem_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("ComputerTextItem", 0x90, Physics_SimulateRigidBody_5(), 0);
    g_5be2bc = data_1;
    QTask_RemoveEventCallback(data_1, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5be2bc, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5be2bc, 2, sub_46b880);
    int32_t data_3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_5be2bc, data_3, ComputerTextItem_Process);
    int32_t data_4 = EditRigidObjAttachedToBone_Action();
    int32_t item_8_1 = data_4;
    data_4 = g_5be2bc;
    return QTask_RemoveEventCallback(data_4, item_8_1, sub_46b940);
}
