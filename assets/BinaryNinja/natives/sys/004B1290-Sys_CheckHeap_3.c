// Original IGI.EXE function: Sys_CheckHeap_3 (VA 0x004B1290; static CFG gate FAIL, CFG score 0.667).
#include "Sys_CheckHeap_3.h"
int32_t Sys_CheckHeap_3(int32_t a1, int32_t a2)

{
    int32_t dstD = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t result = ~i;
    int32_t srcS1;
    int32_t dstD3;
    dstD3 = memcpy(a1 * 0x8c + &g_94372c, dstD - result, result & 0xfffffffc);
    memcpy(dstD3, srcS1, result & 3);
    return result;
}
