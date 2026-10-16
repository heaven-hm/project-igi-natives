#include "004B29A0-Sys_ReadFileBlock_10.h"
/* 0x004b29a0 Sys_ReadFileBlock_10 full linked: callers=1 callees=1 */
int32_t sub_4b29a0(double* a1)

{
    int32_t result;
    long double st0;
    st0 = sub_4b29d0(a1);
    long double x87_r7_1 = 1.0 / st0;
    *a1 = x87_r7_1 * *a1;
    a1[1] = x87_r7_1 * a1[1];
    return result;
}
