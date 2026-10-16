#include "004B2930-Sys_AllocateMemory_10.h"
/* 0x004b2930 Sys_AllocateMemory_10 full linked: callers=1 callees=0 */
long double sub_4b2930(float* a1)

{
    long double x87_r7 = a1[1];
    long double x87_r6 = *a1;
    return sqrtl(x87_r6 * x87_r6 + x87_r7 * x87_r7);
}
