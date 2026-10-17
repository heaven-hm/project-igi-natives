// IGI native provenance: ComputerObjectives_Init - 0x00468E20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00468E20-ComputerObjectives_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerObjectives_Init.h"
int32_t ComputerObjectives_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("ComputerObjectives", 0x38, QTask_OpenEvent_2(), 0);
    g_5bdd70 = data_1;
    QTask_RemoveEventCallback(data_1, 0, ComputerObjectives_LoadParameters);
    QTask_TriggerEvent(g_5bdd70, 1, sub_488700);
    QTask_TriggerEvent(g_5bdd70, 2, AIGraph_LoadParameters);
    int32_t data_3 = StatusScreen_GetEvent();
    return QTask_TriggerEvent(g_5bdd70, data_3, ComputerObjectives_Process);
}
