#include "00505C90-Container_Init.h"
/* 0x00505c90 Container_Init full linked: callers=1 callees=11 */
int32_t sub_505c90()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Container", 0x20, QTask_OpenEvent_2(), 0);
    g_a7a7bc = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_488700);
    int32_t eax_2 = sub_4c56f0();
    int32_t var_8 = eax_2;
    eax_2 = g_a7a7bc;
    QTask_RemoveEventCallback(eax_2, var_8, sub_4e0890);
    int32_t eax_3 = sub_4c5800();
    QTask_RemoveEventCallback(g_a7a7bc, eax_3, sub_4879e0);
    int32_t eax_4 = sub_4cea20();
    QTask_RemoveEventCallback(g_a7a7bc, eax_4, sub_487e20);
    int32_t eax_5 = sub_4cea10();
    int32_t var_8_3 = eax_5;
    eax_5 = g_a7a7bc;
    return QTask_RemoveEventCallback(eax_5, var_8_3, sub_487d90);
}
