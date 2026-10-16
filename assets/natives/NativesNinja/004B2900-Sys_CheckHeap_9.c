#include "004B2900-Sys_CheckHeap_9.h"
/* 0x004b2900 Sys_CheckHeap_9 full linked: callers=2 callees=1 */
int32_t sub_4b2900(float* a1)

{
    int32_t result;
    long double st0;
    st0 = sub_4b2930(a1);
    long double x87_r7_1 = 1.0 / st0;
    *a1 = *a1 * x87_r7_1;
    a1[1] = a1[1] * x87_r7_1;
    return result;
}
