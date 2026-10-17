// Original IGI.EXE function: GunCABarrel_Init (VA 0x00472670; static CFG gate PASS, CFG score 1.000).
#include "GunCABarrel_Init.h"
void* GunCABarrel_Init()

{
    int32_t v_4_1 = 0;
    int16_t valA1 = TaskType_Register("GunCABarrel", 0x138, MagicObj_GetTypeId(), 0);
    g_5402fe = valA1;
    QTask_RemoveEventCallback(valA1, 0, GunCABarrel_LoadParameters);
    QTask_TriggerEvent(g_5402fe, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5402fe, 2, AIGraph_LoadParameters);
    int32_t valA3 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_5402fe, valA3, GunCABarrel_Update);
    int32_t valA4 = AI_SelectTarget_17();
    int32_t v_8_1 = valA4;
    valA4 = g_5402fe;
    QTask_RemoveEventCallback(valA4, v_8_1, GunCABarrel_OnEvent);
    int32_t valA5 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5402fe, valA5, sub_45e3d0);
    int32_t v_4 = 0;
    int16_t valA7 = TaskType_Register("GunCAClip", 0x138, MagicObj_GetTypeId(), 0);
    g_5402fc = valA7;
    QTask_RemoveEventCallback(valA7, 0, GunCABarrel_LoadParameters);
    QTask_TriggerEvent(g_5402fc, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5402fc, 2, AIGraph_LoadParameters);
    int32_t valA9 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_5402fc, valA9, GunCABarrel_Cleanup);
    int32_t valA10 = AI_SelectTarget_17();
    QTask_RemoveEventCallback(g_5402fc, valA10, AIGraph_LoadParameters);
    int32_t valA11 = Level_StartMission_2();
    int32_t v_8_5 = valA11;
    valA11 = g_5402fc;
    QTask_RemoveEventCallback(valA11, v_8_5, sub_45e3d0);
    TaskType_Set("TASKTYPE_CACLIP", *g_5402fc);
    int32_t tmpD3 = 0;
    tmpD3 = g_5402fe;
    return TaskType_Set("TASKTYPE_CABARREL", tmpD3);
}
