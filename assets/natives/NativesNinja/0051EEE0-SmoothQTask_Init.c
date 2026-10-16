#include "0051EEE0-SmoothQTask_Init.h"
/* 0x0051eee0 SmoothQTask_Init full linked: callers=1 callees=35 */
void* sub_51eee0()

{
    int32_t var_104 = 0;
    int16_t eax_1 = TaskType_Register("SmoothQTask", 0x100, sub_5034d0(), 0);
    g_a837a0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_51f140);
    QTask_TriggerEvent(g_a837a0, 1, sub_51f340);
    QTask_TriggerEvent(g_a837a0, 2, sub_51f2e0);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a837a0, eax_3, sub_51f330);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_108_1 = eax_4;
    eax_4 = g_a837a0;
    QTask_RemoveEventCallback(eax_4, var_108_1, sub_51f4b0);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_a837a0, eax_5, sub_51f1f0);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_a837a0, eax_6, sub_51f270);
    g_a837a4 = sub_4f1950(0xa);
    int32_t eax_8 = sub_4f1010();
    void var_100;
    void var_e0;
    sub_4f1a80(g_a837a4, &var_100, &var_e0, eax_8, 7, 0);
    int32_t eax_9 = sub_4f0f70();
    void var_c8;
    sub_4f1a80(g_a837a4, &var_100, &var_c8, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0fc0();
    void var_58;
    sub_4f1a80(g_a837a4, &var_100, &var_58, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0f80();
    void var_90;
    sub_4f1a80(g_a837a4, &var_100, &var_90, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0f80();
    void var_88;
    sub_4f1a80(g_a837a4, &var_100, &var_88, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0f80();
    void var_80;
    sub_4f1a80(g_a837a4, &var_100, &var_80, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0f80();
    void var_78;
    sub_4f1a80(g_a837a4, &var_100, &var_78, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0f80();
    void var_70;
    sub_4f1a80(g_a837a4, &var_100, &var_70, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0f80();
    void var_68;
    sub_4f1a80(g_a837a4, &var_100, &var_68, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0f80();
    void var_60;
    sub_4f1a80(g_a837a4, &var_100, &var_60, eax_17, 7, 0);
    return TaskType_Set("TASKTYPE_SMOOTHQTASK", *g_a837a0);
}
