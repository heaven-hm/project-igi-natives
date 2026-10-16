#include "FX_FireBallUpdate_2.h"
int32_t FX_FireBallUpdate_2(void* a1, float a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9)

{
    *(a1 + 0x1f8) = a3;
    *(a1 + 0x1f0) = a2;
    *(a1 + 0x1fc) = a4;
    *(a1 + 0x204) = a5;
    *(a1 + 0x200) = a5;
    *(a1 + 0x208) = a6;
    *(a1 + 0x20c) = a7;
    int32_t dstD = a9;
    *(a1 + 0x210) = a8;
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
    dstD3 = memcpy(a1 + 0x214, dstD - result, result & 0xfffffffc);
    memcpy(dstD3, srcS1, result & 3);
    return result;
}
