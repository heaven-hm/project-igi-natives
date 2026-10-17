// Original IGI.EXE function: CameraBase_Cleanup_11 (VA 0x004F04D0; static CFG gate FAIL, CFG score 0.667).
#include "CameraBase_Cleanup_11.h"
int32_t CameraBase_Cleanup_11(int32_t a1, int32_t* a2)

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
    int32_t dstD3;
    dstD3 = memcpy(*a2, dstD - result, result & 0xfffffffc);
    memcpy(dstD3, srcS1, result & 3);
    return result;
}
