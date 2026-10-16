#include "004B4660-Sys_PushStack_13.h"
/* 0x004b4660 Sys_PushStack_13 full linked: callers=4 callees=0 */
float* sub_4b4660(float* a1, float* a2, float a3)

{
    long double x87_r7 = a3 * 0.5f;
    long double st0;
    bool c1;
    bool c2;
    st0 = __fsin(x87_r7);
    *a1 = st0 * *a2;
    a1[1] = st0 * a2[1];
    long double x87_r6_2 = st0 * a2[2];
    a1[4] = 0;
    a1[2] = x87_r6_2;
    long double st0_1;
    bool c1_1;
    bool c2_1;
    st0_1 = __fcos(x87_r7);
    a1[3] = st0_1;
    return a1;
}
