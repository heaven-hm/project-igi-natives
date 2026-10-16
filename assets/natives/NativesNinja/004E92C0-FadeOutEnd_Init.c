#include "004E92C0-FadeOutEnd_Init.h"
/* 0x004e92c0 FadeOutEnd_Init full linked: callers=1 callees=9 */
int32_t sub_4e92c0()

{
    int32_t var_4_1 = 0;
    g_a5ec70 = TaskType_Register("FadeOutStart", 0x7c, QTask_OpenEvent_2(), 0);
    int32_t var_4 = 0;
    g_a5ec78 = TaskType_Register("FadeOutEnd", 0x7c, QTask_OpenEvent_2(), 0);
    QTask_TriggerEvent(g_a5ec70, 2, sub_4e93a0);
    int32_t eax_4 = sub_4e7530();
    QTask_TriggerEvent(g_a5ec70, eax_4, sub_4e9360);
    int32_t eax_5 = sub_4e7530();
    int32_t result = QTask_TriggerEvent(g_a5ec78, eax_5, sub_4e93b0);
    g_a5ec74 = 0;
    return result;
}
