#include "gi_platform.h"
#include "004B2950-Sys_FreeMemory_10.h"
long double Sys_FreeMemory_10(float* a1, float* a2)

{
    long double x87_r7_1 = *a1 - *a2;
    long double x87_r6_1 = a1[1] - a2[1];
    return sqrtl(x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1);
}
