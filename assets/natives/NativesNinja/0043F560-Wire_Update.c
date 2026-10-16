#include "0043F560-Wire_Update.h"
/* 0x0043f560 Wire_Update full linked: callers=0 callees=6 */
int32_t sub_43f560(double* a1, void* a2)

{
    float var_70;
    int32_t* var_a0 = &var_70;
    sub_43f820(var_a0, a1);
    long double x87_r7_1 = *(a2 + 8) - a1[4];
    long double x87_r6_1 = *(a2 + 0x10) - a1[5];
    double var_10 = x87_r6_1;
    long double x87_r5_1 = *(a2 + 0x18) - a1[6];
    float var_64;
    float var_58;
    double var_88 = var_58 * x87_r5_1 + var_64 * x87_r6_1 + var_70 * x87_r7_1;
    float var_6c;
    float var_60;
    float var_54;
    double var_80 = var_54 * x87_r5_1 + var_60 * x87_r6_1 + var_6c * x87_r7_1;
    float var_68;
    long double x87_r3_11 = var_68 * x87_r7_1;
    float var_5c;
    float var_50;
    double var_78 = var_50 * x87_r5_1 + var_5c * x87_r6_1 + x87_r3_11;
    void var_18;
    memcpy(&var_18, &var_88, 0x18);
    void* var_30;
    WeaponType_RegisterType_2(&var_30, a1, 0);
    void* var_24;
    WeaponType_RegisterType_2(&var_24, a1, 1);
    float var_2c;
    long double x87_r7_3 = var_2c;
    long double temp0 = var_80;
    x87_r7_3 - temp0;
    long double x87_r7_4;

    if (*(&((x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        float var_20;
        long double x87_r7_5 = var_20;
        long double temp1_1 = var_80;
        x87_r7_5 - temp1_1;

        x87_r7_4 = !(*(&((x87_r7_5 < temp1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_5, temp1_1) ? 1 : 0) << 0xa | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe) + 1)
            & 1) ? var_10 : var_20;
    }
    else
        x87_r7_4 = var_2c;

    double var_48;
    float var_9c_1 = &var_48;
    var_a0 = a1;
    var_88 = var_6c * x87_r7_4;
    double var_80_1 = var_60 * x87_r7_4;
    double var_78_1 = var_54 * x87_r7_4;
    memcpy(&var_48, &var_88, 0x18);
    var_48 = var_88 + a1[4];
    double var_40;
    double var_40_1 = var_40 + a1[5];
    double var_38;
    double var_38_1 = var_38 + a1[6];
    long double x87_r0;
    long double x87_r1;
    long double x87_r2;
    return Level_InitSprites_5(x87_r0, x87_r1, x87_r2, x87_r3_11, a2, var_a0, var_9c_1);
}
