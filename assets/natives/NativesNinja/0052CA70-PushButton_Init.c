#include "0052CA70-PushButton_Init.h"
/* 0x0052ca70 PushButton_Init full linked: callers=1 callees=6 */
int32_t sub_52ca70()

{
    int32_t var_4 = 0;
    g_54f718 = TaskType_Register("PushButton", 0x7c, sub_505c80(), 0);
    int32_t eax_2 = sub_4e7530();
    int32_t var_8 = eax_2;
    eax_2 = g_54f718;
    QTask_TriggerEvent(eax_2, var_8, sub_52cad0);
    int32_t eax_3 = sub_504df0();
    return QTask_RemoveEventCallback(g_54f718, eax_3, sub_52caf0);
}
