// Original IGI.EXE function: HitZone_Init (VA 0x00427D90; static CFG gate PASS, CFG score 1.000).
#include "HitZone_Init.h"
void* HitZone_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("HitZone", 0x148, MagicObj_GetTypeId(), 0);
    g_53bb6c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_427f30);
    QTask_TriggerEvent(g_53bb6c, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_53bb6c, 2, AIGraph_LoadParameters);
    int32_t valA3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53bb6c, valA3, AIGraph_LoadParameters);
    int32_t valA4 = Level_LoadLevel_3();
    int32_t v_8_1 = valA4;
    valA4 = g_53bb6c;
    QTask_RemoveEventCallback(valA4, v_8_1, 0);
    int32_t valA5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53bb6c, valA5, 0);
    int32_t valA6 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_53bb6c, valA6, sub_427f50);
    int32_t valA7 = DynObj_RegisterSymbol_6();
    int32_t v_8_4 = valA7;
    valA7 = g_53bb6c;
    QTask_RemoveEventCallback(valA7, v_8_4, sub_427f80);
    int32_t valA8 = Script_ExecuteLevelScript_17();
    QTask_RemoveEventCallback(g_53bb6c, valA8, sub_427f90);
    int32_t valA9 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_53bb6c, valA9, 0);
    QTask_RemoveEventCallback(g_53bb6c, 9, 0);
    QTask_RemoveEventCallback(g_53bb6c, 0xc, sub_45f920);
    int32_t valA11 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_53bb6c, valA11, 0);
    int32_t valA12 = DynObj_UpdateDynTree_12();
    int32_t v_8_8 = valA12;
    valA12 = g_53bb6c;
    QTask_RemoveEventCallback(valA12, v_8_8, 0);
    int32_t valA13 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_53bb6c, valA13, 0);
    QTask_RemoveEventCallback(g_53bb6c, 4, 0);
    return TaskType_Set("TASKTYPE_HITZONE", *g_53bb6c);
}
