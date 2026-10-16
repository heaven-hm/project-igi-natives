#include "00488620-SubLevel_Init.h"
/* 0x00488620 SubLevel_Init full linked: callers=1 callees=13 */
int32_t* sub_488620()

{
    int32_t var_124 = 0;
    int16_t eax_1 = TaskType_Register("SubLevel", 0x120, QTask_OpenEvent_2(), 0);
    g_5c8a90 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4886f0);
    QTask_TriggerEvent(g_5c8a90, 1, sub_488700);
    int32_t eax_3 = sub_4c56f0();
    QTask_RemoveEventCallback(g_5c8a90, eax_3, sub_4e0890);
    int32_t eax_4 = sub_4f1a60();
    QTask_RemoveEventCallback(g_5c8a90, eax_4, sub_488770);
    int32_t eax_5 = sub_4f1a70();
    int32_t var_128_2 = eax_5;
    eax_5 = g_5c8a90;
    QTask_RemoveEventCallback(eax_5, var_128_2, sub_488780);
    g_5c8a94 = sub_4f1950(1);
    int32_t eax_7 = sub_4f0ff0();
    void var_120;
    void var_100;
    return sub_4f1a80(g_5c8a94, &var_120, &var_100, eax_7, 7, 0);
}
