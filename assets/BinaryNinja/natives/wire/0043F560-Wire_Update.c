// Original IGI.EXE function: Wire_Update (VA 0x0043F560; static CFG gate PASS, CFG score 0.889).
#include "Wire_Update.h"
int32_t Wire_Update(double* a1, void* a2)

{
    float v_70;
    int32_t* v_a0 = &v_70;
    Vehicle_DeployGear_10(v_a0, a1);
    long double x87_r7_1 = *(a2 + 8) - a1[4];
    long double x87_r6_1 = *(a2 + 0x10) - a1[5];
    double v_10 = x87_r6_1;
    long double x87_r5_1 = *(a2 + 0x18) - a1[6];
    float v_64;
    float v_58;
    double v_88 = v_58 * x87_r5_1 + v_64 * x87_r6_1 + v_70 * x87_r7_1;
    float v_6c;
    float v_60;
    float v_54;
    double v_80 = v_54 * x87_r5_1 + v_60 * x87_r6_1 + v_6c * x87_r7_1;
    float v_68;
    long double x87_r3_11 = v_68 * x87_r7_1;
    float v_5c;
    float v_50;
    double v_78 = v_50 * x87_r5_1 + v_5c * x87_r6_1 + x87_r3_11;
    void v_18;
    memcpy(&v_18, &v_88, 0x18);
    void* v_30;
    WeaponType_RegisterType_2(&v_30, a1, 0);
    void* v_24;
    WeaponType_RegisterType_2(&v_24, a1, 1);
    float v_2c;
    long double x87_r7_3 = v_2c;
    long double f0 = v_80;
    x87_r7_3 - f0;
    long double x87_r7_4;

    if (*(&((x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        float v_20;
        long double x87_r7_5 = v_20;
        long double f1_1 = v_80;
        x87_r7_5 - f1_1;

        x87_r7_4 = !(*(&((x87_r7_5 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_5, f1_1) ? 1 : 0) << 0xa | (x87_r7_5 == f1_1 ? 1 : 0) << 0xe) + 1)
            & 1) ? v_10 : v_20;
    }
    else
        x87_r7_4 = v_2c;

    double v_48;
    float v_9c_1 = &v_48;
    v_a0 = a1;
    v_88 = v_6c * x87_r7_4;
    double v_80_1 = v_60 * x87_r7_4;
    double v_78_1 = v_54 * x87_r7_4;
    memcpy(&v_48, &v_88, 0x18);
    v_48 = v_88 + a1[4];
    double v_40;
    double v_40_1 = v_40 + a1[5];
    double v_38;
    double v_38_1 = v_38 + a1[6];
    long double fpu0;
    long double fpu1;
    long double fpu2;
    return Level_InitSprites_5(fpu0, fpu1, fpu2, x87_r3_11, a2, v_a0, v_9c_1);
}
