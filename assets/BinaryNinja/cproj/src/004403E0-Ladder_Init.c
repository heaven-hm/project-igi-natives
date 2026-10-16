#include "gi_platform.h"
#include "004403E0-Ladder_Init.h"
void* Ladder_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Ladder", 0x140, MagicObj_GetTypeId(), 0);
    g_57c15c = valA1;
    QTask_RemoveEventCallback(valA1, 0, Ladder_LoadParameters);
    QTask_TriggerEvent(g_57c15c, 2, Ladder_Setup);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_57c15c, valA3, AIGraph_LoadParameters);
    int32_t valA4 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c15c, valA4, Ladder_Update);
    int32_t valA5 = Level_CheckQTaskID_2();
    int32_t v_8_2 = valA5;
    valA5 = g_57c15c;
    QTask_RemoveEventCallback(valA5, v_8_2, sub_4406c0);
    int32_t valA6 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_57c15c, valA6, AIGraph_LoadParameters);
    int32_t valA7 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c15c, valA7, sub_4406d0);
    return TaskType_Set("TASKTYPE_LADDER", *g_57c15c);
}
