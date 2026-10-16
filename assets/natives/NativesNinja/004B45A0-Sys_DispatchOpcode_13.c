#include "004B45A0-Sys_DispatchOpcode_13.h"
/* 0x004b45a0 Sys_DispatchOpcode_13 full linked: callers=1 callees=0 */
float* sub_4b45a0(float* a1, float a2, float a3, float a4)

{
    long double x87_r7_1 = a2 * 0.5f;
    long double st0;
    bool c1;
    bool c2;
    st0 = __fsin(x87_r7_1);
    a1[4] = 0;
    float var_8 = st0;
    long double st0_1;
    bool c1_1;
    bool c2_1;
    st0_1 = __fcos(x87_r7_1);
    long double x87_r6_3 = a3 * 0.5f;
    long double st0_2;
    bool c1_2;
    bool c2_2;
    st0_2 = __fsin(x87_r6_3);
    float var_c = st0_2;
    long double st0_3;
    bool c1_3;
    bool c2_3;
    st0_3 = __fcos(x87_r6_3);
    long double x87_r5_3 = a4 * 0.5f;
    long double st0_4;
    bool c1_4;
    bool c2_4;
    st0_4 = __fsin(x87_r5_3);
    a3 = st0_4;
    long double st0_5;
    bool c1_5;
    bool c2_5;
    st0_5 = __fcos(x87_r5_3);
    a2 = st0_5;
    float var_4 = st0_3 * var_8;
    a4 = var_c * st0_1;
    long double x87_r7_3 = st0_1 * st0_3;
    long double x87_r6_6 = var_c * var_8;
    *a1 = var_4 * a2 - a4 * a3;
    a1[1] = a4 * a2 + var_4 * a3;
    a1[2] = x87_r7_3 * a3 - x87_r6_6 * a2;
    a1[3] = x87_r7_3 * a2 + x87_r6_6 * a3;
    return a1;
}
