#include "005034E0-SimpointObj_Init.h"
/* 0x005034e0 SimpointObj_Init full linked: callers=1 callees=12 */
int32_t* sub_5034e0()

{
    int32_t var_4_1 = 0;
    int16_t eax_1 = TaskType_Register("SimpointObjContainer", 0x64, QTask_OpenEvent_2(), 0x20);
    g_a7a628 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4d3710);
    QTask_TriggerEvent(g_a7a628, 2, sub_4d3710);
    QTask_TriggerEvent(g_a7a628, 1, sub_5035b0);
    int32_t var_4 = 0;
    int16_t eax_4 = TaskType_Register("SimpointObj", 0x100, sub_4c48c0(), 0);
    g_a7a62a = eax_4;
    QTask_RemoveEventCallback(eax_4, 0, sub_503b60);
    QTask_TriggerEvent(g_a7a62a, 2, sub_503b90);
    QTask_TriggerEvent(g_a7a62a, 1, sub_503bb0);
    QTask_RemoveEventCallback(g_a7a62a, 0xc, sub_45f920);
    return sub_4b4720(0xa7a630);
}
