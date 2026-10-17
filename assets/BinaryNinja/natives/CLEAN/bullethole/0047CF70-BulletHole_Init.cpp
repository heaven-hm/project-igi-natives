// IGI native provenance: BulletHole_Init - 0x0047CF70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047CF70-BulletHole_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BulletHole_Init.h"
int32_t BulletHole_Init()

{
    int32_t data_val = QTask_UnableToAllocateEvent(0);
    g_540904 = data_val;
    int32_t data_2 = QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), data_val, sub_47d380);
    data_2 = g_540904;
    QTask_RemoveEventCallback(SoundSys_EvaluateTrigger_2(), data_2, BulletHole_LoadParameters);
    int32_t item_4 = 0;
    g_5c1138 = TaskType_Register("BulletHole", 0xe148, QTask_OpenEvent_2(), 0);
    int32_t data_6 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_5c1138, data_6, BulletHole_Setup);
    QTask_TriggerEvent(g_5c1138, 2, sub_47d320);
    int32_t data_7 = Render_TransformVertices_2();
    int32_t item_8_3 = data_7;
    data_7 = g_5c1138;
    QTask_TriggerEvent(data_7, item_8_3, sub_5188c0);
    int32_t data_8 = QObj_OnEvent();
    QTask_RemoveEventCallback(g_5c1138, data_8, sub_47d060);
    Sys_FreeMemory_2(&g_5c1108, 4, 0x64, 4);
    return Sys_FreeMemory_2(&g_5c1120, 0x40, 0x64, 4);
}
