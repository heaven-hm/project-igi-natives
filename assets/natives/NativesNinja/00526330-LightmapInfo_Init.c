#include "00526330-LightmapInfo_Init.h"
/* 0x00526330 LightmapInfo_Init full linked: callers=1 callees=71 */
int32_t sub_526330()

{
    int32_t var_104 = 0;
    int16_t eax_1 = TaskType_Register("LightmapInfo", 0xe0, QTask_OpenEvent_2(), 0);
    g_54f040 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_523450);
    QTask_TriggerEvent(g_54f040, 3, sub_5236c0);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_54f040, eax_3, sub_523930);
    int32_t eax_4 = sub_4f1a60();
    QTask_RemoveEventCallback(g_54f040, eax_4, sub_525370);
    g_a83b3c = sub_4f1950(0x15);
    int32_t eax_6 = sub_4f0f50();
    void var_e0;
    void var_54;
    sub_4f1a80(g_a83b3c, &var_e0, &var_54, eax_6, 7, 0x54f050);
    int32_t eax_7 = sub_4f0fa0();
    void var_2c;
    sub_4f1a80(g_a83b3c, &var_e0, &var_2c, eax_7, 7, 0);
    int32_t eax_8 = sub_4f0fa0();
    void var_3c;
    sub_4f1a80(g_a83b3c, &var_e0, &var_3c, eax_8, 7, 0);
    int32_t eax_9 = sub_4f0fa0();
    void var_40;
    sub_4f1a80(g_a83b3c, &var_e0, &var_40, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0f50();
    void var_50;
    sub_4f1a80(g_a83b3c, &var_e0, &var_50, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0f50();
    void var_4c;
    sub_4f1a80(g_a83b3c, &var_e0, &var_4c, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0f40();
    void var_10;
    sub_4f1a80(g_a83b3c, &var_e0, &var_10, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fd0();
    void var_68;
    sub_4f1a80(g_a83b3c, &var_e0, &var_68, eax_13, 3, 0);
    int32_t eax_14 = sub_4f0ef0();
    void var_70;
    sub_4f1a80(g_a83b3c, &var_e0, &var_70, eax_14, 6, 0);
    int32_t eax_15 = sub_4f0ef0();
    void var_71;
    sub_4f1a80(g_a83b3c, &var_e0, &var_71, eax_15, 6, 0);
    int32_t eax_16 = sub_4f0ef0();
    void var_6f;
    sub_4f1a80(g_a83b3c, &var_e0, &var_6f, eax_16, 6, 0);
    int32_t eax_17 = sub_4f0ef0();
    void var_73;
    sub_4f1a80(g_a83b3c, &var_e0, &var_73, eax_17, 6, 0);
    int32_t eax_18 = sub_4f0ef0();
    void var_74;
    sub_4f1a80(g_a83b3c, &var_e0, &var_74, eax_18, 6, 0);
    int32_t eax_19 = sub_4f0ef0();
    void var_72;
    sub_4f1a80(g_a83b3c, &var_e0, &var_72, eax_19, 6, 0);
    int32_t eax_20 = sub_4f0ef0();
    void var_76;
    sub_4f1a80(g_a83b3c, &var_e0, &var_76, eax_20, 6, 0);
    int32_t eax_21 = sub_4f0ef0();
    void var_75;
    sub_4f1a80(g_a83b3c, &var_e0, &var_75, eax_21, 6, 0);
    int32_t eax_22 = sub_4f0ef0();
    void var_77;
    sub_4f1a80(g_a83b3c, &var_e0, &var_77, eax_22, 6, 0);
    int32_t eax_23 = sub_4f0ef0();
    void var_78;
    sub_4f1a80(g_a83b3c, &var_e0, &var_78, eax_23, 6, 0);
    int32_t eax_24 = sub_4f0fa0();
    void var_38;
    sub_4f1a80(g_a83b3c, &var_e0, &var_38, eax_24, 2, 0);
    int32_t eax_25 = sub_4f0fa0();
    void var_34;
    sub_4f1a80(g_a83b3c, &var_e0, &var_34, eax_25, 2, 0);
    int32_t eax_26 = sub_4f0fa0();
    void var_30;
    sub_4f1a80(g_a83b3c, &var_e0, &var_30, eax_26, 2, 0);
    sub_4b0b00(&g_a83a00, 4, 0x3e8, 0);
    sub_4b0b00(&g_a83cf8, 4, 0x64, 0);
    sub_4b4720(0xa83b30);
    int32_t var_fc = 0;

    for (int32_t* i = &g_a83c58; i < &g_a83cf8; )
    {
        sub_4b3b60(i, 1.57079637f);
        int32_t var_108_3 = 0;
        sub_4b33a0(i, i, 0f, var_fc * 1.57079637f, 0f);
        i = &i[0xa];
        var_fc += 1;
    }

    g_a83a18 = QTask_UnableToAllocateEven(0x181);
    g_a8397c = QTask_UnableToAllocateEven(0x181);
    int32_t eax_29 = QTask_UnableToAllocateEven(0x181);
    g_a83b44 = eax_29;
    eax_29 = g_a83a18;
    int32_t ecx_1 = QTask_RemoveEventCallback(sub_5274c0(), eax_29, sub_525450);
    ecx_1 = g_a8397c;
    int32_t edx_24 = QTask_RemoveEventCallback(sub_5274c0(), ecx_1, sub_525460);
    edx_24 = g_a83b44;
    QTask_RemoveEventCallback(sub_5274c0(), edx_24, sub_526150);
    int32_t eax_33 = sub_4cfca0();
    QTask_RemoveEventCallback(sub_4c48c0(), eax_33, sub_525380);
    int32_t var_f8 = 0;
    int32_t var_f4 = 0;
    int32_t var_f0 = 0x435c0000;
    int32_t var_ec = 0x42f00000;
    sub_497570(0xa83980, 0x100);
    sub_497680(0xa83980, &var_f8);
    g_a83b28 = Mem_Alloc(0x40000, 4);
    int32_t i_1;

    for (i_1 = 0; i_1 < 0x40000; )
    {
        i_1 += 4;
        *(i_1 + g_a83b28 - 4) = 0xffffffff;
    }

    return i_1;
}
