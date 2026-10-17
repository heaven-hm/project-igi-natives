// IGI native provenance: GameScreen_Init - 0x004851B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004851B0-GameScreen_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GameScreen_Init.h"
int32_t GameScreen_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("GameScreen", 0x28, QTask_OpenEvent_2(), 0);
    g_5c8a28 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_485220);
    QTask_TriggerEvent(g_5c8a28, 1, sub_488700);
    QTask_TriggerEvent(g_5c8a28, 2, AIGraph_LoadParameters);
    int32_t data_3 = StatusScreen_GetEvent();
    return QTask_TriggerEvent(g_5c8a28, data_3, sub_424280);
}
