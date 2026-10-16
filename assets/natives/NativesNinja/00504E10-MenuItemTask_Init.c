#include "00504E10-MenuItemTask_Init.h"
/* 0x00504e10 MenuItemTask_Init full linked: callers=1 callees=15 */
int32_t sub_504e10()

{
    int32_t var_4 = 0;
    g_54e708 = TaskType_Register("MenuItemTask", 0x44, QTask_OpenEvent_2(), 0);
    g_54e70b = QTask_UnableToAllocateEven(0);
    g_54e70a = QTask_UnableToAllocateEven(0);
    QTask_TriggerEvent(g_54e708, 1, sub_504ef0);
    int32_t eax_4 = sub_4e7530();
    QTask_TriggerEvent(g_54e708, eax_4, sub_424280);
    int32_t eax_5 = sub_508f70();
    QTask_RemoveEventCallback(g_54e708, eax_5, sub_5053f0);
    int32_t eax_6 = sub_508f60();
    int32_t var_8_2 = eax_6;
    eax_6 = g_54e708;
    QTask_RemoveEventCallback(eax_6, var_8_2, sub_505480);
    int32_t eax_7 = sub_504df0();
    QTask_RemoveEventCallback(g_54e708, eax_7, sub_505510);
    int32_t eax_8 = sub_504e00();
    return QTask_RemoveEventCallback(g_54e708, eax_8, sub_5053b0);
}
