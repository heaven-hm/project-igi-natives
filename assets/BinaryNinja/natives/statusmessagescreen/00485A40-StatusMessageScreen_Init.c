// IGI native provenance: StatusMessageScreen_Init - 0x00485A40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485A40-StatusMessageScreen_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StatusMessageScreen_Init.h"
void* StatusMessageScreen_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("StatusMessageScreen", 0x18440, QTask_OpenEvent_2(), 0);
    g_540b08 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_485b20);
    QTask_TriggerEvent(g_540b08, 1, sub_485b40);
    QTask_TriggerEvent(g_540b08, 2, sub_486010);
    int32_t data_3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_540b08, data_3, StatusMessageScreen_LoadParameters);
    return Game_DefineOptions("StatusMessageScreen_ClearMessages",
        StatusMessageScreen_ClearMessages, 0, 0);
}
