#include "00531FA0-TransparencyList_Init.h"
/* 0x00531fa0 TransparencyList_Init full linked: callers=1 callees=8 */
int32_t TransparencyList_Register()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("TransparencyList", 0x80, g_54875c, 0);
    g_54f884 = eax_1;
    QTask_RemoveEventCallback(eax_1, 4, sub_532140);
    QTask_TriggerEvent(g_54f884, 2, sub_531f60);
    g_c28f90 = sub_4978d0("TransparencyListPrimitive");
    int32_t eax_3 = sub_4978d0("TransparencyListStartPrimitive");
    g_c28f94 = eax_3;
    sub_4978f0(eax_3, sub_532100);
    return sub_4b0ec0(sub_4950e0(), g_c28f90, sub_532030);
}
