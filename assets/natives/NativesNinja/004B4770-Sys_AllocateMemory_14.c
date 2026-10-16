#include "004B4770-Sys_AllocateMemory_14.h"
/* 0x004b4770 Sys_AllocateMemory_14 full linked: callers=178 callees=0 */
long double sub_4b4770(int32_t* a1)

{
    int32_t var_4 = 0;
    int32_t edx_1 = a1[2] ^ *a1 >> 7;
    a1[2] = edx_1;
    int32_t edx_3 = a1[1] ^ edx_1;
    a1[1] = edx_3;
    int32_t edx_5 = *a1 + edx_3;
    *a1 = edx_5;
    return edx_5 * 1.52587890625e-05;
}
