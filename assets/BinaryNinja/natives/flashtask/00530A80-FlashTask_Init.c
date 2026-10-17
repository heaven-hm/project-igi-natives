// Original IGI.EXE function: FlashTask_Init (VA 0x00530A80; static CFG gate PASS, CFG score 1.000).
#include "FlashTask_Init.h"
int32_t FlashTask_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("FlashTask", 0x88, QTask_OpenEvent_2(), 2);
    g_54f7a0 = data_1;
    QTask_TriggerEvent(data_1, 2, sub_530c40);
    int32_t result = QTask_TriggerEvent(g_54f7a0, 1, FlashTask_LoadParameters);
    g_a845ec = 1;
    return result;
}
