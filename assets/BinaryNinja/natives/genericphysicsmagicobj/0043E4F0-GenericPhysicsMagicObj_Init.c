// IGI native provenance: GenericPhysicsMagicObj_Init - 0x0043E4F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043E4F0-GenericPhysicsMagicObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GenericPhysicsMagicObj_Init.h"
void* GenericPhysicsMagicObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("GenericPhysicsMagicObj", 0x768, Physics_CalculateSplineLength_3(), 0);
    g_53c46c = data_1;
    QTask_TriggerEvent(data_1, 1, GenericPhysicsMagicObj_LoadParameters);
    QTask_TriggerEvent(g_53c46c, 2, GenericPhysicsMagicObj_Setup);
    int32_t data_3 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_53c46c, data_3, GenericPhysicsMagicObj_Process);
    int32_t data_4 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53c46c, data_4, GenericPhysicsMagicObj_Update);
    return TaskType_Set("TASKTYPE_GENERICPHYSICSMAGICOBJ", *g_53c46c);
}
