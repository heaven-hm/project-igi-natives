#include "00505630-MenuItem_Init.h"
/* 0x00505630 MenuItem_Init full linked: callers=1 callees=16 */
int32_t sub_505630()

{
    g_54e71e = QTask_UnableToAllocateEven(0);
    g_54e71d = QTask_UnableToAllocateEven(0);
    g_54e71c = QTask_UnableToAllocateEven(0);
    int32_t var_4 = 0;
    int16_t eax_4 = TaskType_Register("MenuItem", 0x54, QTask_OpenEvent_2(), 0);
    g_54e720 = eax_4;
    QTask_TriggerEvent(eax_4, 1, sub_488700);
    int32_t eax_5 = sub_4e7530();
    int32_t var_8 = eax_5;
    eax_5 = g_54e720;
    QTask_TriggerEvent(eax_5, var_8, sub_424280);
    int32_t eax_6 = sub_505c50();
    QTask_RemoveEventCallback(g_54e720, eax_6, sub_505840);
    int32_t eax_7 = sub_505c60();
    QTask_RemoveEventCallback(g_54e720, eax_7, sub_5057c0);
    int32_t eax_8 = sub_504e00();
    int32_t var_8_3 = eax_8;
    eax_8 = g_54e720;
    QTask_RemoveEventCallback(eax_8, var_8_3, sub_505850);
    int32_t eax_9 = sub_505c70();
    return QTask_RemoveEventCallback(g_54e720, eax_9, sub_505710);
}
