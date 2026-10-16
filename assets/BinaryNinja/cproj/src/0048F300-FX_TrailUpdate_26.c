#include "gi_platform.h"
#include "0048F300-FX_TrailUpdate_26.h"
int32_t FX_TrailUpdate_26(int32_t a1)

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
    dstD2 = memcpy(&g_5c8c20, dstD - result, result & 0xfffffffc);
    memcpy(dstD2, srcS1, result & 3);
    return result;
}
