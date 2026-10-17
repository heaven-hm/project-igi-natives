// Original IGI.EXE function: GunCABarrel_Init (VA 0x00472670; static CFG gate PASS, CFG score 1.000).
#include "GunCABarrel_Init.h"
void* GunCABarrel_Init()

{
    int32_t item_4_1 = 0;
    int16_t data_1 = TaskType_Register("GunCABarrel", 0x138, MagicObj_GetTypeId(), 0);
    g_5402fe = data_1;
    QTask_RemoveEventCallback(data_1, 0, GunCABarrel_LoadParameters);
    QTask_TriggerEvent(g_5402fe, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5402fe, 2, AIGraph_LoadParameters);
    int32_t data_3 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_5402fe, data_3, GunCABarrel_Update);
    int32_t data_4 = AI_SelectTarget_17();
    int32_t item_8_1 = data_4;
    data_4 = g_5402fe;
    QTask_RemoveEventCallback(data_4, item_8_1, GunCABarrel_OnEvent);
    int32_t data_5 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5402fe, data_5, sub_45e3d0);
    int32_t item_4 = 0;
    int16_t data_7 = TaskType_Register("GunCAClip", 0x138, MagicObj_GetTypeId(), 0);
    g_5402fc = data_7;
    QTask_RemoveEventCallback(data_7, 0, GunCABarrel_LoadParameters);
    QTask_TriggerEvent(g_5402fc, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5402fc, 2, AIGraph_LoadParameters);
    int32_t data_9 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_5402fc, data_9, GunCABarrel_Cleanup);
    int32_t data_10 = AI_SelectTarget_17();
    QTask_RemoveEventCallback(g_5402fc, data_10, AIGraph_LoadParameters);
    int32_t data_11 = Level_StartMission_2();
    int32_t item_8_5 = data_11;
    data_11 = g_5402fc;
    QTask_RemoveEventCallback(data_11, item_8_5, sub_45e3d0);
    TaskType_Set("TASKTYPE_CACLIP", *g_5402fc);
    int32_t temp_3 = 0;
    temp_3 = g_5402fe;
    return TaskType_Set("TASKTYPE_CABARREL", temp_3);
}
