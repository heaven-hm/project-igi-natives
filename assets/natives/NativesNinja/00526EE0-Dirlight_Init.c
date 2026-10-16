#include "00526EE0-Dirlight_Init.h"
/* 0x00526ee0 Dirlight_Init full linked: callers=1 callees=39 */
int32_t* sub_526ee0()

{
    int32_t var_bc = 0;
    g_a83d34 = TaskType_Register("Dirlight", 0x64, QTask_OpenEvent_2(), 0);
    int32_t var_bc_1 = 0;
    g_a83d4c = TaskType_Register("DirlightKeyframe", 0x54, QTask_OpenEvent_2(), 0);
    QTask_RemoveEventCallback(g_a83d34, 0, sub_527160);
    QTask_TriggerEvent(g_a83d34, 1, sub_4d3710);
    QTask_TriggerEvent(g_a83d34, 2, sub_5271e0);
    int32_t eax_4 = sub_4f1a60();
    int32_t var_c0 = eax_4;
    eax_4 = g_a83d34;
    QTask_RemoveEventCallback(eax_4, var_c0, sub_527260);
    int32_t eax_5 = sub_4f1a70();
    QTask_RemoveEventCallback(g_a83d34, eax_5, sub_527270);
    QTask_RemoveEventCallback(g_a83d4c, 0, sub_5272f0);
    QTask_TriggerEvent(g_a83d4c, 2, sub_527470);
    int32_t eax_7 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a83d4c, eax_7, sub_527460);
    int32_t eax_8 = sub_4f1a70();
    QTask_RemoveEventCallback(g_a83d4c, eax_8, sub_527320);
    g_a83d30 = sub_4f1950(4);
    g_a83d48 = sub_4f1950(6);
    int32_t eax_11 = sub_4f1000();
    void var_64;
    void var_18;
    sub_4f1a80(g_a83d30, &var_64, &var_18, eax_11, 7, 0);
    int32_t eax_12 = sub_4f1000();
    void var_17;
    sub_4f1a80(g_a83d30, &var_64, &var_17, eax_12, 7, 0);
    sub_4f1cb0();
    int32_t eax_13 = sub_4f0f50();
    void var_14;
    sub_4f1a80(g_a83d30, &var_64, &var_14, eax_13, 7, &g_a76be8);
    int32_t eax_14 = sub_4f0f20();
    void var_b8;
    void var_98;
    sub_4f1a80(g_a83d48, &var_b8, &var_98, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0f20();
    void var_94;
    sub_4f1a80(g_a83d48, &var_b8, &var_94, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0f40();
    void var_84;
    sub_4f1a80(g_a83d48, &var_b8, &var_84, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0f40();
    void var_78;
    sub_4f1a80(g_a83d48, &var_b8, &var_78, eax_17, 7, 0);
    int32_t eax_18 = sub_4f0f50();
    void var_6c;
    sub_4f1a80(g_a83d48, &var_b8, &var_6c, eax_18, 7, 0);
    sub_4b0b00(&g_ba1e00, 4, 3, 4);
    sub_4b4720(0xa83d38);
    return sub_4e8290(sub_4d3710);
}
