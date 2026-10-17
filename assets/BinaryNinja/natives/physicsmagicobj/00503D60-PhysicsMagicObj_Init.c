// IGI native provenance: PhysicsMagicObj_Init - 0x00503D60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00503D60-PhysicsMagicObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsMagicObj_Init.h"
void* PhysicsMagicObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("PhysicsMagicObj", 0x768, Script_SpawnNewTask_28(), 0);
    g_54e66c = data_1;
    QTask_TriggerEvent(data_1, 1, sub_4d9970);
    QTask_RemoveEventCallback(g_54e66c, 0, PhysicsMagicObj_LoadParameters);
    int32_t data_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_54e66c, data_3, PhysicsMagicObj_Setup);
    QTask_RemoveEventCallback(g_54e66c, 0xc, sub_504250);
    return TaskType_Set("TASKTYPE_PHYSICSMAGICOBJ", *g_54e66c);
}
