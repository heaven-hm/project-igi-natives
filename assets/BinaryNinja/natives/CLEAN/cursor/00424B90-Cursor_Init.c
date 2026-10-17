// IGI native provenance: Cursor_Init - 0x00424B90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424B90-Cursor_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Cursor_Init.h"
void* Cursor_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Cursor", 0x40, QTask_OpenEvent_2(), 0);
    g_57bc60 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_424c10);
    QTask_TriggerEvent(g_57bc60, 1, Cursor_LoadParameters);
    QTask_TriggerEvent(g_57bc60, 2, AIGraph_LoadParameters);
    int32_t data_3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_57bc60, data_3, sub_424c40);
    return FX_FailedToRegisterWinp(sub_424ca0);
}
