// Original IGI.EXE function: PhysicsMagicObj_Init (VA 0x00503D60; static CFG gate PASS, CFG score 1.000).
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
