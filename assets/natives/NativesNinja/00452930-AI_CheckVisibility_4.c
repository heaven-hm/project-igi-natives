#include "00452930-AI_CheckVisibility_4.h"
/* 0x00452930 AI_CheckVisibility_4 full linked: callers=1 callees=5 */
float* sub_452930(long double a1 @ st0, int32_t a2, float* a3, float a4, double* a5, float a6)

{
    float var_78 = a4;
    a6 = a6 * 30f;
    double var_68;
    sub_451380(&var_68, var_78);
    long double x87_r7_3 = var_68 - *a5;
    var_68 = x87_r7_3;
    double var_60;
    long double x87_r6_1 = var_60 - a5[1];
    double var_60_1 = x87_r6_1;
    double var_58;
    long double x87_r5_1 = var_58 - a5[2];
    double var_58_1 = x87_r5_1;
    double var_50 =
        *(a4 + 0x50) * x87_r7_3 + *(a4 + 0x5c) * x87_r6_1 + *(a4 + 0x68) * x87_r5_1;
    double var_48 =
        *(a4 + 0x60) * x87_r6_1 + *(a4 + 0x6c) * x87_r5_1 + *(a4 + 0x54) * x87_r7_3;
    double var_40 =
        *(a4 + 0x64) * x87_r6_1 + *(a4 + 0x70) * x87_r5_1 + *(a4 + 0x58) * x87_r7_3;
    void var_8c;
    memcpy(&var_8c, &var_50, 0x18);
    WeaponType_InitType();
    float var_28;
    sub_4b3b60(&var_28, a1);
    float var_1c;
    float var_10;
    var_50 = var_28 * *(a4 + 0x50) + var_10 * *(a4 + 0x58) + var_1c * *(a4 + 0x54);
    int32_t eax_1 = *(a4 + 0x74);
    float var_24;
    float var_18;
    float var_c;
    *(&var_50 + 4) = var_24 * *(a4 + 0x50) + var_c * *(a4 + 0x58) + var_18 * *(a4 + 0x54);
    int32_t var_4;
    int32_t var_2c = eax_1 + var_4 + 1;
    float var_20;
    float var_14;
    float var_8;
    var_48 = var_20 * *(a4 + 0x50) + var_8 * *(a4 + 0x58) + var_14 * *(a4 + 0x54);
    *(&var_48 + 4) = var_10 * *(a4 + 0x64) + var_1c * *(a4 + 0x60) + var_28 * *(a4 + 0x5c);
    var_40 = var_c * *(a4 + 0x64) + var_18 * *(a4 + 0x60) + var_24 * *(a4 + 0x5c);
    *(&var_40 + 4) = var_8 * *(a4 + 0x64) + var_14 * *(a4 + 0x60) + var_20 * *(a4 + 0x5c);
    float var_38 = var_10 * *(a4 + 0x70) + var_1c * *(a4 + 0x6c) + var_28 * *(a4 + 0x68);
    float var_34 = var_c * *(a4 + 0x70) + var_18 * *(a4 + 0x6c) + var_24 * *(a4 + 0x68);
    float var_30 = var_8 * *(a4 + 0x70) + var_14 * *(a4 + 0x6c) + var_20 * *(a4 + 0x68);
    memcpy(a2, &var_50, 0x28);
    double var_60_2 = var_60_1 * 1.1000000000000001;
    double var_58_2 = var_58_1 * 1.1000000000000001;
    *a3 = var_68 * 1.1000000000000001 / a6;
    a3[1] = var_60_2 / a6;
    a3[2] = var_58_2 / a6 + a6 * 22.300444444444445;
    return a3;
}
