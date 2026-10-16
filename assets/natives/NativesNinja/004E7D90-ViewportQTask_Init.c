#include "004E7D90-ViewportQTask_Init.h"
/* 0x004e7d90 ViewportQTask_Init full linked: callers=1 callees=9 */
int32_t sub_4e7d90()

{
    int32_t var_8 = 0;
    int16_t eax_1 = TaskType_Register("ViewportQTask", 0xc8, QTask_OpenEvent_2(), 0);
    g_54d98c = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_488700);
    QTask_TriggerEvent(g_54d98c, 2, sub_4e8090);
    int32_t eax_3 = sub_4e7530();
    QTask_TriggerEvent(g_54d98c, eax_3, sub_4e7e30);
    g_a5ec64 = 1;
    sub_4916c0(sub_4e7e20);
    sub_4e7e20();
    __builtin_memset(&g_a5ebe0, 0, 0x3c);
    return 0;
}
