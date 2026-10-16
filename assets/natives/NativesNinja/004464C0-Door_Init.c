#include "004464C0-Door_Init.h"
/* 0x004464c0 Door_Init full linked: callers=1 callees=59 */
int32_t* sub_4464c0()

{
    int32_t var_334 = 0;
    int16_t eax_1 = TaskType_Register("Door", 0x328, sub_4c48c0(), 0);
    g_57c1c0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4468f0);
    QTask_TriggerEvent(g_57c1c0, 1, sub_446d10);
    QTask_TriggerEvent(g_57c1c0, 2, sub_446ac0);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57c1c0, eax_3, sub_447a80);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_338_1 = eax_4;
    eax_4 = g_57c1c0;
    QTask_RemoveEventCallback(eax_4, var_338_1, sub_447830);
    int32_t eax_5 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c1c0, eax_5, sub_446b50);
    int32_t eax_6 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_57c1c0, eax_6, sub_4efb00);
    int32_t eax_7 = Level_InitSprites_2();
    int32_t var_338_4 = eax_7;
    eax_7 = g_57c1c0;
    QTask_RemoveEventCallback(eax_7, var_338_4, sub_4d3710);
    int32_t eax_8 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c1c0, eax_8, sub_446ce0);
    int32_t eax_9 = sub_4f1210();
    QTask_TriggerEvent(g_57c1c0, eax_9, sub_447a90);
    int32_t eax_10 = sub_4f1220();
    int32_t var_338_7 = eax_10;
    eax_10 = g_57c1c0;
    QTask_TriggerEvent(eax_10, var_338_7, sub_447be0);
    int32_t eax_11 = sub_4c5800();
    QTask_RemoveEventCallback(g_57c1c0, eax_11, sub_445de0);
    int32_t eax_12 = sub_450ca0();
    QTask_RemoveEventCallback(g_57c1c0, eax_12, sub_446470);
    int32_t eax_13 = sub_5096a0();
    int32_t var_338_10 = eax_13;
    eax_13 = g_57c1c0;
    QTask_RemoveEventCallback(eax_13, var_338_10, sub_4464b0);
    int32_t eax_14 = sub_467d90();
    QTask_RemoveEventCallback(g_57c1c0, eax_14, sub_443dc0);
    g_57c1e8 = sub_4f1950(0x10);
    memcpy(&g_57c1c8,
        "\x00\x00\x20\xc1\x00\x00\x20\x41\xcd\xcc\x4c\x3d\x00\x00\xc8\x42\x00\x00\xb4\xc3\x00\x00\xb4\x43",
        0x18);
    g_57c1e0 = 0;
    g_57c1e4 = 0x3f800000;
    int32_t eax_16 = sub_4f1010();
    void var_328;
    void var_238;
    sub_4f1a80(g_57c1e8, &var_328, &var_238, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0f50();
    void var_220;
    sub_4f1a80(g_57c1e8, &var_328, &var_220, eax_17, 7, &g_57c1c8);
    int32_t eax_18 = sub_4f0f50();
    void var_21c;
    sub_4f1a80(g_57c1e8, &var_328, &var_21c, eax_18, 7, &g_57c1c8);
    int32_t eax_19 = sub_4f0f50();
    void var_1f0;
    sub_4f1a80(g_57c1e8, &var_328, &var_1f0, eax_19, 7, &g_57c1e0);
    int32_t eax_20 = sub_4f0f70();
    void var_218;
    sub_4f1a80(g_57c1e8, &var_328, &var_218, eax_20, 7, 0);
    int32_t eax_21 = sub_4f0fd0();
    void var_1e0;
    sub_4f1a80(g_57c1e8, &var_328, &var_1e0, eax_21, 7, 0);
    int32_t eax_22 = sub_4f0f50();
    void var_1e8;
    sub_4f1a80(g_57c1e8, &var_328, &var_1e8, eax_22, 7, &g_57c1d8);
    int32_t eax_23 = sub_4f0f50();
    void var_1e4;
    sub_4f1a80(g_57c1e8, &var_328, &var_1e4, eax_23, 7, &g_57c1d0);
    int32_t eax_24 = sub_4f1000();
    void var_1ec;
    sub_4f1a80(g_57c1e8, &var_328, &var_1ec, eax_24, 7, 0);
    int32_t eax_25 = sub_4f0f50();
    void var_94;
    sub_4f1a80(g_57c1e8, &var_328, &var_94, eax_25, 7, 0);
    int32_t eax_26 = sub_4f0fc0();
    void var_e8;
    sub_4f1a80(g_57c1e8, &var_328, &var_e8, eax_26, 7, 0);
    int32_t eax_27 = sub_4f0fc0();
    void var_188;
    sub_4f1a80(g_57c1e8, &var_328, &var_188, eax_27, 7, 0);
    int32_t eax_28 = sub_4f0fc0();
    void var_138;
    sub_4f1a80(g_57c1e8, &var_328, &var_138, eax_28, 7, 0);
    void var_1d0;
    void* esi = &var_1d0;
    int32_t i_1 = 3;
    int32_t* result;
    int32_t i;

    do
    {
        int32_t eax_29 = sub_4f0fd0();
        result = sub_4f1a80(g_57c1e8, &var_328, esi, eax_29, 7, 0);
        esi += 0x10;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
