// Original IGI.EXE function: Ladder_Init (VA 0x004403E0; static CFG gate PASS, CFG score 1.000).
#include "Ladder_Init.h"
void* Ladder_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Ladder", 0x140, MagicObj_GetTypeId(), 0);
    g_57c15c = data_1;
    QTask_RemoveEventCallback(data_1, 0, Ladder_LoadParameters);
    QTask_TriggerEvent(g_57c15c, 2, Ladder_Setup);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_57c15c, data_3, AIGraph_LoadParameters);
    int32_t data_4 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c15c, data_4, Ladder_Update);
    int32_t data_5 = Level_CheckQTaskID_2();
    int32_t item_8_2 = data_5;
    data_5 = g_57c15c;
    QTask_RemoveEventCallback(data_5, item_8_2, sub_4406c0);
    int32_t data_6 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_57c15c, data_6, AIGraph_LoadParameters);
    int32_t data_7 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c15c, data_7, sub_4406d0);
    return TaskType_Set("TASKTYPE_LADDER", *g_57c15c);
}
