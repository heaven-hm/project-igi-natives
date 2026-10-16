#include "gi_platform.h"
#include "00530A80-FlashTask_Init.h"
int32_t FlashTask_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("FlashTask", 0x88, QTask_OpenEvent_2(), 2);
    g_54f7a0 = valA1;
    QTask_TriggerEvent(valA1, 2, sub_530c40);
    int32_t result = QTask_TriggerEvent(g_54f7a0, 1, FlashTask_LoadParameters);
    g_a845ec = 1;
    return result;
}
