#include "00518EF0-Water_Init.h"
/* 0x00518ef0 Water_Init full linked: callers=1 callees=42 */
int32_t* sub_518ef0()

{
    sub_4a54a0(0x4c48);
    g_a81020 = 0;

    for (int32_t* i = &g_a80430; i < 0xa81030; i = &i[0xc])
    {
        i[-0xa] = 0xffffffff;
        *i = 0;
        __builtin_memset(&i[-8], 0, 0x18);
    }

    int32_t var_10 = 0;
    int16_t eax_1 = TaskType_Register("Water", 0x4c48, sub_4c48c0(), 0);
    g_a81014 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0xf, sub_518b00);
    QTask_RemoveEventCallback(g_a81014, 0x10, sub_518b40);
    QTask_RemoveEventCallback(g_a81014, 0, sub_518b90);
    QTask_TriggerEvent(g_a81014, 1, sub_518c90);
    QTask_RemoveEventCallback(g_a81014, 4, sub_518a00);
    QTask_RemoveEventCallback(g_a81014, 5, sub_518ab0);
    QTask_RemoveEventCallback(g_a81014, 7, sub_519220);
    QTask_TriggerEvent(g_a81014, 2, sub_5191e0);
    int32_t eax_5 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a81014, eax_5, sub_519210);
    int32_t eax_6 = sub_4f1a70();
    QTask_RemoveEventCallback(g_a81014, eax_6, sub_519290);
    QTask_RemoveEventCallback(g_a81014, 0xa, sub_518ca0);
    QTask_RemoveEventCallback(g_a81014, 0xb, sub_518e50);
    int32_t eax_8 = sub_4d14d0();
    QTask_RemoveEventCallback(g_a81014, eax_8, 0);
    QTask_RemoveEventCallback(g_a81014, 9, 0);
    QTask_RemoveEventCallback(g_a81014, 0xc, 0);
    int32_t eax_10 = sub_4e55b0();
    QTask_RemoveEventCallback(g_a81014, eax_10, sub_518930);
    QTask_DispatchEvent_3(0x40000000);
    QTask_RegisterEventCallback_3(g_a81014, 0x40000000);
    g_a80304 = sub_4f1950(0x10);
    g_a80300 = sub_4f19c0("WaterLevel", sub_4f0f50());
    int32_t eax_15 = sub_4f1010();
    void var_8;
    void arg_4bc8;
    sub_4f1a80(g_a80304, &var_8, &arg_4bc8, eax_15, 7, 0);
    int32_t eax_17 = sub_4f0fa0();
    void arg_4c1c;
    sub_4f1a80(g_a80304, &var_8, &arg_4c1c, eax_17, 7, 0);
    void arg_4c10;
    sub_4f1a80(g_a80304, &var_8, &arg_4c10, g_a80300, 7, 0);
    int32_t eax_19 = sub_4f0fa0();
    void arg_4c2c;
    sub_4f1a80(g_a80304, &var_8, &arg_4c2c, eax_19, 7, 0);
    int32_t eax_20 = sub_4f0fa0();
    void arg_4c20;
    sub_4f1a80(g_a80304, &var_8, &arg_4c20, eax_20, 7, 0);
    int32_t eax_21 = sub_4f0fa0();
    void arg_4c24;
    sub_4f1a80(g_a80304, &var_8, &arg_4c24, eax_21, 7, 0);
    int32_t eax_22 = sub_4f0fa0();
    void arg_4c28;
    return sub_4f1a80(g_a80304, &var_8, &arg_4c28, eax_22, 7, 0);
}
