#include "0050FE60-Physics_InterpolateWaypoint_15.h"
/* 0x0050fe60 Physics_InterpolateWaypoint_15 full linked: callers=1 callees=4 */
int32_t sub_50fe60()

{
    long double x87_r7_1 = g_bcabc0 + g_bcabb8;
    int32_t ecx = g_bcabbc;
    g_c311ac = g_bcabb8;
    g_c311a0 = g_bcab2c;
    int32_t eax_2 = g_b16c6c;
    g_c31084 = x87_r7_1;
    long double x87_r7_3 = g_bcabc4 + g_bcabbc;
    g_c311a8 = ecx;
    int32_t edx = g_bcab28;
    g_c31080 = x87_r7_3;
    long double x87_r7_5 = g_bcabc8 + g_bcabb8;
    g_c311a4 = edx;
    g_c311b0 = x87_r7_5;
    g_c311b4 = g_bcabcc + g_bcabbc;
    int32_t var_34_1 = eax_2 + 0x40;
    g_c311b8 = 1f / (eax_2 - 0x40);
    var_34_1 = var_34_1 * 0.375;
    g_c31088 = var_34_1;
    g_c28fc0 = g_c311b8 * 2.66666675f;
    char eax_4 = sub_518240();
    long double x87_r7_14 = g_bcab08;
    float var_30 = g_bcab10;
    long double x87_r6_1 = g_bcab18;
    g_c3108c = eax_4;
    float var_2c = x87_r6_1;
    float var_28;
    memcpy(&var_28, &g_bcaae0, 0x28);
    long double x87_r7_15 = -(x87_r7_14);
    long double x87_r6_3 = -(var_30);
    long double x87_r5_1 = -(var_2c);
    float var_1c;
    float var_18;
    float var_14;
    float var_30_1 = var_14 * x87_r5_1 + var_18 * x87_r6_3 + var_1c * x87_r7_15;
    float var_10;
    float var_c;
    float var_8;
    float var_2c_1 = var_8 * x87_r5_1 + var_c * x87_r6_3 + var_10 * x87_r7_15;
    float var_24;
    float var_20;
    g_943b78 = var_20 * x87_r5_1 + var_24 * x87_r6_3 + var_28 * x87_r7_15;
    memcpy(0x943b50, &var_28, 0x28);
    g_943b7c = var_30_1;
    bool cond:0 = !g_b16ca4;
    g_943b80 = var_2c_1;
    g_c28fbc = 0;
    g_c31090 = 0;

    if (cond:0)
        return 0;

    return sub_510010();
}
