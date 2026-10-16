#include "004E9480-GlowTask_Init.h"
/* 0x004e9480 GlowTask_Init full linked: callers=1 callees=5 */
int32_t sub_4e9480()

{
    int32_t var_4 = 0;
    g_54da50 = TaskType_Register("GlowTask", 0x20, QTask_OpenEvent_2(), 0);
    int32_t eax_2 = sub_4e7530();
    int32_t var_8 = eax_2;
    eax_2 = g_54da50;
    QTask_TriggerEvent(eax_2, var_8, j_sub_512ba0);
    return QTask_TriggerEvent(g_54da50, 2, sub_4d3710);
}
