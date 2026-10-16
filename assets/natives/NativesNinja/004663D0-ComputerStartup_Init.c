#include "004663D0-ComputerStartup_Init.h"
/* 0x004663d0 ComputerStartup_Init full linked: callers=1 callees=11 */
int32_t sub_4663d0()

{
    int32_t var_4 = 0;
    g_53f520 = TaskType_Register("ComputerStartup", 0x90, QTask_OpenEvent_2(), 0);
    int32_t eax_2 = sub_4e7530();
    int32_t var_8 = eax_2;
    eax_2 = g_53f520;
    QTask_TriggerEvent(eax_2, var_8, sub_466cf0);
    QTask_TriggerEvent(g_53f520, 1, sub_466c90);
    QTask_TriggerEvent(g_53f520, 2, sub_466360);
    int32_t eax_3 = sub_4b0e70("ComputerStartup");
    g_5bdc54 = eax_3;
    sub_4b0ec0(sub_4950e0(), eax_3, sub_466480);
    int32_t eax_5 = sub_4978d0("ComputerStartup");
    g_5bdc50 = eax_5;
    return sub_4978f0(eax_5, sub_466c60);
}
