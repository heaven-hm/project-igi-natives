// IGI native provenance: HitZone_Init - 0x00427D90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00427D90-HitZone_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HitZone_Init.h"
void* HitZone_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("HitZone", 0x148, MagicObj_GetTypeId(), 0);
    g_53bb6c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_427f30);
    QTask_TriggerEvent(g_53bb6c, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_53bb6c, 2, AIGraph_LoadParameters);
    int32_t data_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53bb6c, data_3, AIGraph_LoadParameters);
    int32_t data_4 = Level_LoadLevel_3();
    int32_t item_8_1 = data_4;
    data_4 = g_53bb6c;
    QTask_RemoveEventCallback(data_4, item_8_1, 0);
    int32_t data_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53bb6c, data_5, 0);
    int32_t data_6 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_53bb6c, data_6, sub_427f50);
    int32_t data_7 = DynObj_RegisterSymbol_6();
    int32_t item_8_4 = data_7;
    data_7 = g_53bb6c;
    QTask_RemoveEventCallback(data_7, item_8_4, sub_427f80);
    int32_t data_8 = Script_ExecuteLevelScript_17();
    QTask_RemoveEventCallback(g_53bb6c, data_8, sub_427f90);
    int32_t data_9 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_53bb6c, data_9, 0);
    QTask_RemoveEventCallback(g_53bb6c, 9, 0);
    QTask_RemoveEventCallback(g_53bb6c, 0xc, sub_45f920);
    int32_t data_11 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_53bb6c, data_11, 0);
    int32_t data_12 = DynObj_UpdateDynTree_12();
    int32_t item_8_8 = data_12;
    data_12 = g_53bb6c;
    QTask_RemoveEventCallback(data_12, item_8_8, 0);
    int32_t data_13 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_53bb6c, data_13, 0);
    QTask_RemoveEventCallback(g_53bb6c, 4, 0);
    return TaskType_Set("TASKTYPE_HITZONE", *g_53bb6c);
}
