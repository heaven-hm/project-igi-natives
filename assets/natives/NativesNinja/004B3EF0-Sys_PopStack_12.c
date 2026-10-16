#include "004B3EF0-Sys_PopStack_12.h"
/* 0x004b3ef0 Sys_PopStack_12 full linked: callers=1 callees=0 */
float* sub_4b3ef0(float* a1, float a2, float a3)

{
    long double x87_r7_1 = a3 * 0.5f;
    float* eax = a2;
    long double st0;
    bool c1;
    bool c2;
    st0 = __fsin(x87_r7_1);
    float var_14 = st0 * *eax;
    float var_10 = st0 * eax[1];
    float var_c = st0 * eax[2];
    long double st0_1;
    bool c1_1;
    bool c2_1;
    st0_1 = __fcos(x87_r7_1);
    long double x87_r6_4 = var_14 * var_14;
    long double x87_r6_7 = var_10 * var_14;
    a3 = x87_r6_7 + x87_r6_7;
    long double x87_r6_10 = var_c * var_14;
    float var_2c = x87_r6_10 + x87_r6_10;
    long double x87_r6_13 = st0_1 * var_14;
    float var_20 = x87_r6_13 + x87_r6_13;
    long double x87_r6_16 = var_10 * var_10;
    float var_1c = x87_r6_16 + x87_r6_16;
    long double x87_r6_19 = var_c * var_10;
    float var_24 = x87_r6_19 + x87_r6_19;
    long double x87_r6_22 = st0_1 * var_10;
    float var_28 = x87_r6_22 + x87_r6_22;
    long double x87_r6_25 = var_c * var_c;
    a2 = x87_r6_25 + x87_r6_25;
    long double x87_r7_3 = st0_1 * var_c;
    long double x87_r7_4 = x87_r7_3 + x87_r7_3;
    *a1 = 1f - var_1c - a2;
    a1[1] = a3 - x87_r7_4;
    a1[2] = var_28 + var_2c;
    a1[3] = x87_r7_4 + a3;
    long double x87_r7_7 = 1f - (x87_r6_4 + x87_r6_4);
    a1[4] = x87_r7_7 - a2;
    a1[5] = var_24 - var_20;
    a1[9] = 0;
    a1[6] = var_2c - var_28;
    a1[7] = var_24 + var_20;
    a1[8] = x87_r7_7 - var_1c;
    return a1;
}
