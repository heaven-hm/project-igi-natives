#include "gi_platform.h"
#include "004B2900-Sys_CheckHeap_9.h"
int32_t Sys_CheckHeap_9(float* a1)

{
    int32_t result;
    long double fp0;
    fp0 = Sys_AllocateMemory_10(a1);
    long double x87_r7_1 = 1.0 / fp0;
    *a1 = *a1 * x87_r7_1;
    a1[1] = a1[1] * x87_r7_1;
    return result;
}
