#include "0046AB60-ComputerMenu_Init.h"
/* 0x0046ab60 ComputerMenu_Init full linked: callers=1 callees=8 */
int32_t sub_46ab60()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("ComputerMenu", 0x3c, QTask_OpenEvent_2(), 0);
    g_5bdda8 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_46abe0);
    QTask_TriggerEvent(g_5bdda8, 1, sub_46ac30);
    QTask_TriggerEvent(g_5bdda8, 2, sub_46ae20);
    int32_t eax_3 = sub_4e7530();
    QTask_TriggerEvent(g_5bdda8, eax_3, sub_46ae30);
    return sub_4b12f0("COMPUTER:", "LOCAL:computer/");
}
