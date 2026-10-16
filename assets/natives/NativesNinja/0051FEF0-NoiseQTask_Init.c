#include "0051FEF0-NoiseQTask_Init.h"
/* 0x0051fef0 NoiseQTask_Init full linked: callers=1 callees=44 */
int32_t* sub_51fef0()

{
    int32_t var_134 = 0;
    int16_t eax_1 = TaskType_Register("NoiseQTask", 0x130, sub_5034d0(), 0);
    g_a83838 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_520200);
    QTask_TriggerEvent(g_a83838, 1, sub_520400);
    QTask_TriggerEvent(g_a83838, 2, sub_5203a0);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a83838, eax_3, sub_5203f0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_138_1 = eax_4;
    eax_4 = g_a83838;
    QTask_RemoveEventCallback(eax_4, var_138_1, sub_520630);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_a83838, eax_5, sub_5202f0);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_a83838, eax_6, sub_520350);
    g_a8383c = sub_4f1950(0x14);
    int32_t eax_8 = sub_4f1010();
    void var_130;
    void var_110;
    sub_4f1a80(g_a8383c, &var_130, &var_110, eax_8, 7, 0);
    int32_t eax_9 = sub_4f0f70();
    void var_f8;
    sub_4f1a80(g_a8383c, &var_130, &var_f8, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0fc0();
    void var_58;
    sub_4f1a80(g_a8383c, &var_130, &var_58, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0f80();
    void var_a8;
    sub_4f1a80(g_a8383c, &var_130, &var_a8, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0f80();
    void var_a0;
    sub_4f1a80(g_a8383c, &var_130, &var_a0, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0f80();
    void var_98;
    sub_4f1a80(g_a8383c, &var_130, &var_98, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0f80();
    void var_90;
    sub_4f1a80(g_a8383c, &var_130, &var_90, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0f80();
    void var_88;
    sub_4f1a80(g_a8383c, &var_130, &var_88, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0f80();
    void var_80;
    sub_4f1a80(g_a8383c, &var_130, &var_80, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0fa0();
    void var_78;
    sub_4f1a80(g_a8383c, &var_130, &var_78, eax_17, 7, 0);
    int32_t eax_18 = sub_4f0fa0();
    void var_74;
    sub_4f1a80(g_a8383c, &var_130, &var_74, eax_18, 7, 0);
    int32_t eax_19 = sub_4f0f80();
    void var_70;
    sub_4f1a80(g_a8383c, &var_130, &var_70, eax_19, 7, 0);
    int32_t eax_20 = sub_4f0f80();
    void var_68;
    sub_4f1a80(g_a8383c, &var_130, &var_68, eax_20, 7, 0);
    int32_t eax_21 = sub_4f0f80();
    void var_60;
    sub_4f1a80(g_a8383c, &var_130, &var_60, eax_21, 7, 0);
    TaskType_Set("TASKTYPE_NOISEQTASK", *g_a83838);
    return sub_4b4720(0xa83840);
}
