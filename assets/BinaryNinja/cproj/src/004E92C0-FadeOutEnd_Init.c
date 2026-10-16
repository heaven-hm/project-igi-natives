#include "gi_platform.h"
#include "004E92C0-FadeOutEnd_Init.h"
int32_t FadeOutEnd_Init()

{
    int32_t v_4_1 = 0;
    g_a5ec70 = TaskType_Register("FadeOutStart", 0x7c, QTask_OpenEvent_2(), 0);
    int32_t v_4 = 0;
    g_a5ec78 = TaskType_Register("FadeOutEnd", 0x7c, QTask_OpenEvent_2(), 0);
    QTask_TriggerEvent(g_a5ec70, 2, sub_4e93a0);
    int32_t valA4 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_a5ec70, valA4, sub_4e9360);
    int32_t valA5 = StatusScreen_GetEvent();
    int32_t result = QTask_TriggerEvent(g_a5ec78, valA5, sub_4e93b0);
    g_a5ec74 = 0;
    return result;
}
