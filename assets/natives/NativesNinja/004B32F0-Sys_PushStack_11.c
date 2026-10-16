#include "004B32F0-Sys_PushStack_11.h"
/* 0x004b32f0 Sys_PushStack_11 full linked: callers=21 callees=0 */
long double sub_4b32f0(double* a1, double* a2)

{
    long double x87_r7_1 = *a1 - *a2;
    long double x87_r6_1 = a1[1] - a2[1];
    long double x87_r5_1 = a1[2] - a2[2];
    return x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1;
}
