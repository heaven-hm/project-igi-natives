#include "Env_UpdateCameraLens_12.h"
int32_t Env_UpdateCameraLens_12(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)

{
    memcpy(a1 + 0x20, a2, 0x18);
    memcpy(a1 + 0x38, a4, 0x18);
    memcpy(a1 + 0x50, a3, 0x28);
    int32_t dstD3 = a5;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD3;
        dstD3 += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t result = ~i;
    int32_t srcS4;
    int32_t dstD6;
    dstD6 = memcpy(a1 + 0x94, dstD3 - result, result & 0xfffffffc);
    memcpy(dstD6, srcS4, result & 3);
    return result;
}
