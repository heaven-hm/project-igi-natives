#include "004B4740-Sys_CheckHeap_13.h"
/* 0x004b4740 Sys_CheckHeap_13 full linked: callers=5 callees=0 */
int32_t sub_4b4740(int32_t* a1)

{
    int32_t edx_1 = a1[2] ^ *a1 >> 7;
    a1[2] = edx_1;
    int32_t edx_3 = a1[1] ^ edx_1;
    a1[1] = edx_3;
    int32_t result = *a1 + edx_3;
    *a1 = result;
    return result;
}
