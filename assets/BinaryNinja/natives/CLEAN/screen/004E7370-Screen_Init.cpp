// IGI native provenance: Screen_Init - 0x004E7370 - CFG score 95.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7370-Screen_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Screen_Init.h"
int32_t Screen_Init()

{
    g_5488c8 = QTask_UnableToAllocateEven_2(0);
    int32_t item_8 = 0;
    int16_t data_2 = TaskType_Register("Screen", 0x20, QTask_OpenEvent_2(), 0);
    g_a5e618 = data_2;
    QTask_RemoveEventCallback(data_2, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a5e618, 1, sub_488700);
    int32_t data_4 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_a5e618, data_4, sub_4e7400);
    memset(0xa5e940, 0, 0x11c);
    g_a5ea65 = 0;
    g_a5ea66 = 1;
    return 0;
}
