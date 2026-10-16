#include "0046B510-ComputerButtonItem_Init.h"
/* 0x0046b510 ComputerButtonItem_Init full linked: callers=1 callees=9 */
int32_t sub_46b510()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("ComputerButtonItem", 0x94, sub_505c80(), 0);
    g_5be2b4 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4d3710);
    QTask_TriggerEvent(g_5be2b4, 1, sub_4d3710);
    QTask_TriggerEvent(g_5be2b4, 2, sub_46b5a0);
    int32_t eax_3 = sub_4e7530();
    QTask_TriggerEvent(g_5be2b4, eax_3, sub_46b5c0);
    int32_t eax_4 = sub_504df0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_5be2b4;
    return QTask_RemoveEventCallback(eax_4, var_8_1, sub_46b940);
}
