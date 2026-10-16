#include "005310E0-FreeCamera_Init.h"
/* 0x005310e0 FreeCamera_Init full linked: callers=1 callees=4 */
int32_t sub_5310e0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("FreeCamera", 0x90, QTask_OpenEvent_2(), 0);
    g_54f7d0 = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_531130);
    return QTask_TriggerEvent(g_54f7d0, 2, sub_4d3710);
}
