// IGI native provenance: BackgroundFX_Init - 0x00419760 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00419760-BackgroundFX_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BackgroundFX_Init.h"
int32_t BackgroundFX_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("BackgroundFX", 0x24, QTask_OpenEvent_2(), 0);
    g_539af0 = data_1;
    QTask_TriggerEvent(data_1, 1, sub_419800);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_8 = data_2;
    data_2 = g_539af0;
    QTask_TriggerEvent(data_2, item_8, BackgroundFX_LoadParameters);
    QTask_TriggerEvent(g_539af0, 2, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_539af0, 0, sub_4197f0);
    int32_t data_3 = Script_ParseEnumReal32_8();
    int32_t item_8_1 = data_3;
    data_3 = g_539af0;
    return QTask_RemoveEventCallback(data_3, item_8_1, AIGraph_LoadParameters);
}
