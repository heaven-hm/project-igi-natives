#include "0043E4F0-GenericPhysicsMagicObj_Init.h"
/* 0x0043e4f0 GenericPhysicsMagicObj_Init full linked: callers=1 callees=9 */
void* GenericPhysicsMagicObj_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("GenericPhysicsMagicObj", 0x768, sub_5042a0(), 0);
    g_53c46c = eax_1;
    QTask_TriggerEvent(eax_1, 1, GenericPhysicsMagicObj_LoadParameters);
    QTask_TriggerEvent(g_53c46c, 2, GenericPhysicsMagicObj_Setup);
    int32_t eax_3 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_53c46c, eax_3, GenericPhysicsMagicObj_Process);
    int32_t eax_4 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53c46c, eax_4, GenericPhysicsMagicObj_Update);
    return TaskType_Set("TASKTYPE_GENERICPHYSICSMAGICOBJ", *g_53c46c);
}
