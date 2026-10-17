// Original IGI.EXE function: Sector_Init (VA 0x004DCF20; static CFG gate PASS, CFG score 1.000).
#include "Sector_Init.h"
int32_t Sector_Init()

{
    int32_t item_4_1 = 0;
    int16_t data_1 = TaskType_Register("Sector", 0x148, DynObj_LookupHashItem_5(), 0);
    g_548694 = data_1;
    QTask_RemoveEventCallback(data_1, 4, Sector_LoadParameters);
    QTask_RemoveEventCallback(g_548694, 0, Sector_Setup);
    QTask_TriggerEvent(g_548694, 2, Sector_Process);
    int32_t data_3 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_548694, data_3, sub_4de770);
    int32_t data_4 = DynObj_LinkDynamicCube_12();
    int32_t item_8_1 = data_4;
    data_4 = g_548694;
    QTask_RemoveEventCallback(data_4, item_8_1, Sector_Update);
    int32_t item_10 = 0;
    int16_t data_5 = TaskType_Register("SectorObject", 0x1a0, g_548694, 0);
    g_548696 = data_5;
    QTask_RemoveEventCallback(data_5, 4, Sector_OnEvent);
    int32_t data_6 = SoundSys_PlaySoundSample_3();
    QTask_RemoveEventCallback(g_548696, data_6, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_548696, 0, sub_4ddf60);
    QTask_TriggerEvent(g_548696, 2, Sector_Cleanup_3);
    QTask_RemoveEventCallback(g_548696, 0xa, sub_4de240);
    QTask_RemoveEventCallback(g_548696, 9, sub_4de2d0);
    QTask_RemoveEventCallback(g_548696, 8, sub_4de360);
    QTask_RemoveEventCallback(g_548696, 0xb, sub_4de3f0);
    int32_t data_9 = Render_DrawBoneMesh_4();
    int32_t item_8_3 = data_9;
    data_9 = g_548696;
    QTask_RemoveEventCallback(data_9, item_8_3, Sector_Cleanup);
    QTask_TriggerEvent(g_548696, 1, Sector_Cleanup_4);
    int32_t data_10 = DynObj_RegisterSymbol_16();
    QTask_RemoveEventCallback(g_548696, data_10, Sector_Cleanup_2);
    int32_t data_11 = DynObj_FindSymbol_16();
    int32_t item_8_5 = data_11;
    data_11 = g_548696;
    QTask_RemoveEventCallback(data_11, item_8_5, sub_4dcc20);
    int32_t data_12 = DynObj_InsertHashItem_16();
    QTask_RemoveEventCallback(g_548696, data_12, sub_4dbf00);
    int32_t data_13 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_548696, data_13, Sector_Cleanup_5);
    int32_t data_14 = DynObj_UpdateDynTree_12();
    int32_t item_8_8 = data_14;
    data_14 = g_548696;
    QTask_RemoveEventCallback(data_14, item_8_8, sub_4de970);
    int32_t data_15 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_548696, data_15, Sector_Cleanup_6);
    Sys_FreeMemory_2(&g_a5e338, 0x20, 0x14, 0);
    Sys_FreeMemory_2(&g_a5e318, 0xc, 0x3e8, 0);
    int32_t item_4 = 0;
    g_548698 = TaskType_Register("SectorInteriorObject", 0xf0, DynObj_LookupHashItem_5(), 0);
    int32_t data_18 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_548698, data_18, Sector_Cleanup_7);
    int32_t data_19 = DynObj_LinkDynamicCube_12();
    int32_t item_8_11 = data_19;
    data_19 = g_548698;
    return QTask_RemoveEventCallback(data_19, item_8_11, Sector_Cleanup_8);
}
