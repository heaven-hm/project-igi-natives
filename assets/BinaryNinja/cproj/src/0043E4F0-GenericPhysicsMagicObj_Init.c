#include "gi_platform.h"
#include "0043E4F0-GenericPhysicsMagicObj_Init.h"
void* GenericPhysicsMagicObj_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("GenericPhysicsMagicObj", 0x768, Physics_CalculateSplineLength_3(), 0);
    g_53c46c = valA1;
    QTask_TriggerEvent(valA1, 1, GenericPhysicsMagicObj_LoadParameters);
    QTask_TriggerEvent(g_53c46c, 2, GenericPhysicsMagicObj_Setup);
    int32_t valA3 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_53c46c, valA3, GenericPhysicsMagicObj_Process);
    int32_t valA4 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53c46c, valA4, GenericPhysicsMagicObj_Update);
    return TaskType_Set("TASKTYPE_GENERICPHYSICSMAGICOBJ", *g_53c46c);
}
