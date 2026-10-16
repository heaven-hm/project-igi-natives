#include "Sys_DispatchOpcode_11.h"
long double Sys_DispatchOpcode_11(double* a1, double* a2)

{
    long double x87_r7_1 = *a1 - *a2;
    long double x87_r6_1 = a1[1] - a2[1];
    long double x87_r5_1 = a1[2] - a2[2];
    return sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1);
}
