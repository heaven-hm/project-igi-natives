#include "00476340-M203_Setup.h"
/* 0x00476340 M203_Setup full linked: callers=0 callees=18 */
int32_t sub_476340(int32_t* a1)

{
    long double x87_r7_1 = a1[0x42] * 0.995000005f;
    int32_t* eax = a1[0x45];
    a1[0x42] = x87_r7_1;
    long double x87_r6_1 = a1[0x43] * 0.995000005f;
    double var_88[0x3];
    memcpy(&var_88, &a1[0x3c], 0x18);
    a1[0x43] = x87_r6_1;
    long double x87_r6_4 = (a1[0x44] - 35.6807098f) * 0.995000005f;
    float var_d0 = x87_r6_4;
    a1[0x44] = x87_r6_4;
    int32_t* var_c8 = a1;
    *(a1 + 0xf0) = x87_r7_1 + *(a1 + 0xf0);
    *(a1 + 0xf8) = x87_r6_1 + *(a1 + 0xf8);
    *(a1 + 0x100) = var_d0 + *(a1 + 0x100);
    double var_b8[0x3];
    memcpy(&var_b8, &a1[0x3c], 0x18);

    if (!eax)
        int32_t var_c4_1 = 0;
    else
        int32_t var_c4 = *eax;

    int32_t* eax_2 = a1[0x46];

    if (!eax_2)
        int32_t var_c0_1 = 0;
    else
        int32_t var_c0 = *eax_2;

    int32_t var_bc = 0x3f800000;
    char eax_3 = Level_StartMission_2();
    int32_t var_cc;
    int32_t var_70;
    int32_t ecx_2 = sub_4cc2a0(Level_StartMission_4(), &var_70, &var_88, &var_b8, 1, eax_3,
        &var_cc, 0xffffffff);
    int32_t var_18;

    if (var_18)
    {
        int32_t var_114 = ecx_2;
        int32_t var_118 = ecx_2;
        void var_68;
        sub_480fe0(&var_68, 1, 1, a1[0x49], a1[0x48] * 4096f, 0, 0x45800000, 3, 1, &var_70,
            "1009_01_1", "explo_proxy", 0x15, 2, 0x47c80000, 0);
        return QTask_FindType(a1);
    }

    long double x87_r7_10 = a1[0x27];
    long double x87_r6_5 = a1[0x28];
    x87_r6_5 - x87_r7_10;
    long double x87_r7_11;

    if (!(*(&((x87_r6_5 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_10) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_11 = a1[0x28];
    else
        x87_r7_11 = a1[0x27];

    long double x87_r6_6 = a1[0x26];
    x87_r6_6 - x87_r7_11;
    long double x87_r7_13;

    if (*(&((x87_r6_6 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, x87_r7_11) ? 1 : 0) << 0xa
        | (x87_r6_6 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_14 = a1[0x27];
        long double x87_r6_7 = a1[0x28];
        x87_r6_7 - x87_r7_14;

        if (!(*(&((x87_r6_7 < x87_r7_14 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_7, x87_r7_14) ? 1 : 0) << 0xa
                | (x87_r6_7 == x87_r7_14 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_13 = a1[0x28];
        else
            x87_r7_13 = a1[0x27];
    }
    else
        x87_r7_13 = a1[0x26];

    float var_e8_1 = sub_4d0950(a1[0x1b]) * x87_r7_13;
    sub_4c6940(Level_StartMission_4(), a1, &a1[0x3c], var_e8_1);
    var_cc = 0;
    void var_a0;
    memcpy(&var_a0, &a1[0x3c], 0x18);
    int32_t var_c8_1 = 0;
    int32_t var_c4_2 = 0;
    float var_c4_3 = (sub_4b4770(Level_SetMission_5()) * 0.75 + 0.14999999999999999) * 4096000f
        * 9.25925906e-06f;
    float var_d4_2 = (sub_4b4770(Level_SetMission_5()) + 1.0) * 0.34999999999999998;
    long double x87_r7_26 = sub_4b4770(Level_SetMission_5()) - 0.5f;
    var_d0 = (x87_r7_26 + x87_r7_26) * 0.052359879f + 0.0127990814f;
    return sub_4fe120(a1[0x47], &var_a0, &var_cc, var_d4_2, var_d0, 0, 0x3f800000, 7, 7);
}
