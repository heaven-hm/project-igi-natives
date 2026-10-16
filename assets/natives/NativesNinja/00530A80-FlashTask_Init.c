#include "00530A80-FlashTask_Init.h"
/* 0x00530a80 FlashTask_Init full linked: callers=1 callees=4 */
int32_t sub_530a80()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("FlashTask", 0x88, QTask_OpenEvent_2(), 2);
    g_54f7a0 = eax_1;
    QTask_TriggerEvent(eax_1, 2, sub_530c40);
    int32_t result = QTask_TriggerEvent(g_54f7a0, 1, sub_530ad0);
    g_a845ec = 1;
    return result;
}
