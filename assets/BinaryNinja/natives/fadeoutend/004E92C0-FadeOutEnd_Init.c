// IGI native provenance: FadeOutEnd_Init - 0x004E92C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E92C0-FadeOutEnd_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FadeOutEnd_Init.h"
int32_t FadeOutEnd_Init()

{
    int32_t item_4_1 = 0;
    g_a5ec70 = TaskType_Register("FadeOutStart", 0x7c, QTask_OpenEvent_2(), 0);
    int32_t item_4 = 0;
    g_a5ec78 = TaskType_Register("FadeOutEnd", 0x7c, QTask_OpenEvent_2(), 0);
    QTask_TriggerEvent(g_a5ec70, 2, sub_4e93a0);
    int32_t data_4 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_a5ec70, data_4, sub_4e9360);
    int32_t data_5 = StatusScreen_GetEvent();
    int32_t result = QTask_TriggerEvent(g_a5ec78, data_5, sub_4e93b0);
    g_a5ec74 = 0;
    return result;
}
