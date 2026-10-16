#include "gi_platform.h"
#include "004B4770-Sys_AllocateMemory_14.h"
long double Sys_AllocateMemory_14(int32_t* a1)

{
    int32_t v_4 = 0;
    int32_t tmpD1 = a1[2] ^ *a1 >> 7;
    a1[2] = tmpD1;
    int32_t tmpD3 = a1[1] ^ tmpD1;
    a1[1] = tmpD3;
    int32_t tmpD5 = *a1 + tmpD3;
    *a1 = tmpD5;
    return tmpD5 * 1.52587890625e-05;
}
