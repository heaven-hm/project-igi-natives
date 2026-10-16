#include "004B3130-Sys_OpenFileStream_11.h"
/* 0x004b3130 Sys_OpenFileStream_11 full linked: callers=39 callees=0 */
long double sub_4b3130(double* a1)

{
    long double x87_r7 = a1[2];
    long double x87_r6 = a1[1];
    long double x87_r5 = *a1;
    return sqrtl(x87_r5 * x87_r5 + x87_r6 * x87_r6 + x87_r7 * x87_r7);
}
