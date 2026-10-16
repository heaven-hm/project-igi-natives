#include "0040D180-HumanPlayer_UpdateAnimation_5.h"
/* 0x0040d180 HumanPlayer_UpdateAnimation_5 full linked: callers=0 callees=34 */
void* HumanPlayer_UpdateAnimation_5(void* a1, struct human_player* a2)

{
    double* eax = sub_4636e0(a2);
    a2->pad0[0x33d] = 0;
    HumanPlayer_CheckCollision_9(a2, 0f);
    sub_489ea0(a2, sub_4485d0(eax), 1, 0f);
    sub_4d2fb0(&a2->pad2[0x24], &a2->pad2[0x30], &a2->pad0[0x68]);
    long double x87_r7_3 = a2->pad0[0x80] * a2->pad2[0x38] + a2->pad0[0x7c] * a2->pad2[0x34]
        + a2->pad0[0x78] * a2->pad2[0x30];
    float var_110 = x87_r7_3;
    long double x87_r7_7 = a2->pad0[0x8c] * a2->pad2[0x38] + a2->pad0[0x88] * a2->pad2[0x34]
        + a2->pad0[0x84] * a2->pad2[0x30];
    float var_10c = x87_r7_7;
    long double x87_r7_10 =
        a2->pad0[0x98] * a2->pad2[0x38] + a2->pad0[0x94] * a2->pad2[0x34];
    long double x87_r6_11 = a2->pad0[0x90] * a2->pad2[0x30];
    a2->pad2[0x30] = var_110;
    a2->pad2[0x31] = *(&var_110 + 1);
    a2->pad2[0x32] = *(&var_110 + 2);
    a2->pad2[0x33] = *(&var_110 + 3);
    a2->pad2[0x34] = var_10c;
    a2->pad2[0x35] = *(&var_10c + 1);
    a2->pad2[0x36] = *(&var_10c + 2);
    a2->pad2[0x37] = *(&var_10c + 3);
    float var_108 = x87_r7_10 + x87_r6_11;
    a2->pad2[0x38] = var_108;
    a2->pad2[0x39] = *(&var_108 + 1);
    a2->pad2[0x3a] = *(&var_108 + 2);
    a2->pad2[0x3b] = *(&var_108 + 3);
    double var_104;
    void var_28;
    sub_448570(eax, &var_104, &var_28);
    struct human_player* var_b8 = a2;
    double var_d4;
    sub_465800(&var_d4, a2->pad4ec);
    long double x87_r7_13 = var_104 - var_d4;
    double var_b0;
    memcpy(&var_b0, &var_104, 0x18);
    double var_ec = x87_r7_13;
    double var_fc;
    double var_cc;
    double var_e4 = var_fc - var_cc;
    memcpy(&var_104, &var_d4, 0x18);
    double var_f4;
    double var_c4;
    double var_dc = var_f4 - var_c4;
    float var_120 = x87_r7_13;
    float var_11c = var_e4;
    float var_118 = var_dc;
    char eax_4 = Level_LoadObjects_4();
    void var_bc;
    void var_98;
    sub_4cc2a0(Level_StartMission_4(), &var_98, &var_d4, &var_b0, 1, eax_4, &var_bc, 0xffffffff);
    float var_4c;
    float var_40;

    if (var_40 && var_4c)
    {
        float var_60;
        var_120 = var_60;
        void var_90;
        memcpy(&var_104, &var_90, 0x18);
        float var_5c;
        var_11c = var_5c;
        float var_58;
        var_118 = var_58;
    }

    long double x87_r7_16 = var_120;
    long double temp0 = 0f;
    x87_r7_16 - temp0;

    if (!(*(&((x87_r7_16 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, temp0) ? 1 : 0) << 0xa
        | (x87_r7_16 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_40d39a:
        long double x87_r7_19 = var_118;
        long double x87_r6_16 = var_11c;
        long double x87_r5_1 = var_120;
        long double x87_r7_21 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_16 * x87_r6_16 + x87_r7_19 * x87_r7_19);
        var_120 = var_120 * x87_r7_21;
        var_11c = var_11c * x87_r7_21;
        float var_118_1 = var_118 * x87_r7_21;
    }
    else
    {
        long double x87_r7_17 = var_11c;
        long double temp1_1 = 0f;
        x87_r7_17 - temp1_1;

        if (!(*(&((x87_r7_17 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_40d39a;

        long double x87_r7_18 = var_118;
        long double temp2_1 = 0f;
        x87_r7_18 - temp2_1;

        if (!(*(&((x87_r7_18 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_18, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_18 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_40d39a;
    }

    float var_114;
    float var_b4;
    int32_t edx_4 = sub_4b2d00(&var_120, &var_b4, &var_114);
    var_114 = var_114 + 1.57079637f;

    if (Vehicle_InitHeli_7(eax) >= 0)
    {
        float eax_10 = sub_4f1030(Vehicle_InitHeli_7(eax));
        var_110 = eax_10;

        if (eax_10)
        {
            int16_t eax_11 = sub_4f3380();
            edx_4 = *(eax_10 + 0x1c);

            if (TaskType_IsDerivedFrom(edx_4, eax_11))
            {
                memcpy(eax_10 + 0xf0, &var_104, 0x18);
                sub_4b38e0(var_110 + 0x108, 1.57079637f, 0f, var_114);
                sub_4b38e0(var_110 + 0x70, 1.57079637f, 0f, var_114);
            }
        }
    }

    sub_4b3100(&var_ec);
    long double x87_r7_26 = var_ec * 2048.0;
    var_ec = x87_r7_26;
    double var_e4_1 = var_e4 * 2048.0;
    double var_dc_1 = var_dc * 2048.0;
    var_104 = var_104 - x87_r7_26;
    double var_fc_1 = var_fc - var_e4_1;
    double var_f4_1 = var_f4 - var_dc_1;
    sub_4631a0(a2, &var_104);
    sub_463260(a2);
    sub_463220(a2, var_114);
    HumanPlayer_UpdateAnimation_4(a2);
    long double x87_r7_33 = sub_4485c0(eax) * 30f;
    *(a2 + 0xd64) = 0;
    var_110 = x87_r7_33;
    *(a2 + 0xd60) = var_110;
    Human_ViewCam(a2, 3);
    HumanPlayer_CheckCollision_4(a2);
    sub_463590(a2);
    sub_464720(a2->pad4ec);
    sub_464700(a2->pad4ec);
    sub_4635f0(a2);
    *(a2 + 0xd70) = 0;
    *(a1 + 0x14) = sub_40d580;
    return a1;
}
