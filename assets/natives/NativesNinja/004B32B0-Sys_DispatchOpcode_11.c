#include "004B32B0-Sys_DispatchOpcode_11.h"
/* 0x004b32b0 Sys_DispatchOpcode_11 full linked: callers=25 callees=0 */
long double sub_4b32b0(double* a1, double* a2)

{
    long double x87_r7_1 = *a1 - *a2;
    long double x87_r6_1 = a1[1] - a2[1];
    long double x87_r5_1 = a1[2] - a2[2];
    return sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1);
}
