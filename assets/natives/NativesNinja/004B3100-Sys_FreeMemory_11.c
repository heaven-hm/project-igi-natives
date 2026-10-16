#include "004B3100-Sys_FreeMemory_11.h"
/* 0x004b3100 Sys_FreeMemory_11 full linked: callers=30 callees=1 */
int32_t sub_4b3100(double* a1)

{
    int32_t result;
    long double st0;
    st0 = sub_4b3130(a1);
    long double x87_r7_1 = 1.0 / st0;
    *a1 = x87_r7_1 * *a1;
    a1[1] = x87_r7_1 * a1[1];
    a1[2] = x87_r7_1 * a1[2];
    return result;
}
