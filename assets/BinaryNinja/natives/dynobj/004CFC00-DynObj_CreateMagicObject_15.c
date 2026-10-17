// Original IGI.EXE function: DynObj_CreateMagicObject_15 (VA 0x004CFC00; static CFG gate FAIL, CFG score 0.667).
#include "DynObj_CreateMagicObject_15.h"
int32_t DynObj_CreateMagicObject_15(int32_t a1)

{
    int32_t dstD = a1;
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
    int32_t dstD2;
    dstD2 = memcpy(&g_a4edf8, dstD - result, result & 0xfffffffc);
    memcpy(dstD2, srcS1, result & 3);
    return result;
}
