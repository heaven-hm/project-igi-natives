#include "004F4190-Vehicle_Init.h"
/* 0x004f4190 Vehicle_Init full linked: callers=1 callees=20 */
int32_t sub_4f4190()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Vehicle", 0x748, sub_4fb5e0(), 0);
    g_54e200 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4f4160);
    QTask_TriggerEvent(g_54e200, 2, sub_4f4170);
    QTask_TriggerEvent(g_54e200, 1, sub_4f4180);
    QTask_RemoveEventCallback(g_54e200, 7, sub_4f42d0);
    QTask_RemoveEventCallback(g_54e200, 0xc, sub_4f4390);
    int32_t eax_4 = sub_4f4120();
    QTask_RemoveEventCallback(g_54e200, eax_4, sub_4f46e0);
    int32_t eax_5 = sub_4ee0e0();
    QTask_RemoveEventCallback(g_54e200, eax_5, sub_4f43b0);
    int32_t eax_6 = sub_4ee0f0();
    int32_t var_8_2 = eax_6;
    eax_6 = g_54e200;
    QTask_RemoveEventCallback(eax_6, var_8_2, sub_4f43d0);
    int32_t eax_7 = sub_4cea10();
    QTask_RemoveEventCallback(g_54e200, eax_7, sub_4f43e0);
    int32_t eax_8 = sub_4cea20();
    QTask_RemoveEventCallback(g_54e200, eax_8, sub_4f44a0);
    g_a76c48 = sub_504a30("CRITERIA_VEHICLE", sub_4f4560);
    g_54e202 = QTask_UnableToAllocateEven(0);
    char result = QTask_UnableToAllocateEven(0);
    g_54e203 = result;
    return result;
}
