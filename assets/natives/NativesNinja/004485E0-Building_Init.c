#include "004485E0-Building_Init.h"
/* 0x004485e0 Building_Init full linked: callers=1 callees=24 */
void* sub_4485e0()

{
    int32_t var_1f4 = 0;
    int16_t eax_1 = TaskType_Register("Building", 0x1f0, sub_4dee80(), 0);
    g_57c200 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_448760);
    QTask_TriggerEvent(g_57c200, 2, sub_448850);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57c200, eax_3, sub_448880);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_57c200, eax_4, sub_448890);
    int32_t eax_5 = Level_CheckQTaskID_3();
    int32_t var_1f8_2 = eax_5;
    eax_5 = g_57c200;
    QTask_RemoveEventCallback(eax_5, var_1f8_2, sub_416ab0);
    int32_t eax_6 = sub_467d90();
    QTask_RemoveEventCallback(g_57c200, eax_6, sub_443dc0);
    int32_t eax_7 = sub_4cea20();
    QTask_RemoveEventCallback(g_57c200, eax_7, sub_448a90);
    int32_t eax_8 = sub_4cea10();
    int32_t var_1f8_5 = eax_8;
    eax_8 = g_57c200;
    QTask_RemoveEventCallback(eax_8, var_1f8_5, sub_448950);
    g_57c204 = sub_4f1950(3);
    int32_t eax_10 = sub_4f1010();
    void var_1f0;
    void var_18;
    sub_4f1a80(g_57c204, &var_1f0, &var_18, eax_10, 7, 0);
    int32_t eax_12 = sub_4f0f70();
    void var_50;
    sub_4f1a80(g_57c204, &var_1f0, &var_50, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fd0();
    void var_28;
    sub_4f1a80(g_57c204, &var_1f0, &var_28, eax_14, 7, 0);
    return TaskType_Set("TASKTYPE_BUILDING", *g_57c200);
}
