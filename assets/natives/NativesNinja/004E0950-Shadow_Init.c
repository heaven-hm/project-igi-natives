#include "004E0950-Shadow_Init.h"
/* 0x004e0950 Shadow_Init full linked: callers=1 callees=6 */
int32_t sub_4e0950()

{
    int32_t var_4 = 0;
    g_a5e36c = TaskType_Register("Shadow", 0x124, QTask_OpenEvent_2(), 0);
    int32_t eax_2 = sub_4c56f0();
    int32_t var_8 = eax_2;
    eax_2 = g_a5e36c;
    QTask_RemoveEventCallback(eax_2, var_8, sub_4e09d0);
    QTask_TriggerEvent(g_a5e36c, 1, sub_4d3710);
    return QTask_TriggerEvent(g_a5e36c, 2, sub_4e09c0);
}
