#include "004E82C0-TerraDrawTask_Init.h"
/* 0x004e82c0 TerraDrawTask_Init full linked: callers=1 callees=5 */
int32_t sub_4e82c0()

{
    int32_t var_4 = 0;
    g_54d9a0 = TaskType_Register("TerraDrawTask", 0x24, QTask_OpenEvent_2(), 0);
    int32_t eax_2 = sub_4e7530();
    int32_t var_8 = eax_2;
    eax_2 = g_54d9a0;
    QTask_TriggerEvent(eax_2, var_8, sub_4e8310);
    return QTask_TriggerEvent(g_54d9a0, 2, sub_4d3710);
}
