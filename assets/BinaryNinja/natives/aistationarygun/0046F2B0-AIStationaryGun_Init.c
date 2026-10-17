// IGI native provenance: AIStationaryGun_Init - 0x0046F2B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046F2B0-AIStationaryGun_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIStationaryGun_Init.h"
void* AIStationaryGun_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("AIStationaryGun", 0x1e8, MagicObj_GetTypeId(), 0);
    g_53fec0 = data_1;
    QTask_RemoveEventCallback(data_1, 0, AIStationaryGun_LoadParameters);
    QTask_TriggerEvent(g_53fec0, 1, AIStationaryGun_Setup);
    QTask_TriggerEvent(g_53fec0, 2, sub_426860);
    int32_t data_3 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_53fec0, data_3, AIStationaryGun_Process);
    int32_t data_4 = DynObj_RegisterSymbol_6();
    int32_t item_8_1 = data_4;
    data_4 = g_53fec0;
    QTask_RemoveEventCallback(data_4, item_8_1, sub_46fb50);
    int32_t data_5 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_53fec0, data_5, sub_46fb60);
    int32_t data_6 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53fec0, data_6, AIStationaryGun_Update);
    return TaskType_Set("TASKTYPE_AISTATIONARYGUN", *g_53fec0);
}
