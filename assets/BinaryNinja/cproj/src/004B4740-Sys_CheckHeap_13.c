#include "gi_platform.h"
#include "004B4740-Sys_CheckHeap_13.h"
int32_t Sys_CheckHeap_13(int32_t* a1)

{
    int32_t tmpD1 = a1[2] ^ *a1 >> 7;
    a1[2] = tmpD1;
    int32_t tmpD3 = a1[1] ^ tmpD1;
    a1[1] = tmpD3;
    int32_t result = *a1 + tmpD3;
    *a1 = result;
    return result;
}
