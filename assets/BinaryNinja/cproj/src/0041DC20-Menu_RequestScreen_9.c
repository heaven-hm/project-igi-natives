#include "gi_platform.h"
#include "0041DC20-Menu_RequestScreen_9.h"
int32_t Menu_RequestScreen_9(int32_t a1)

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
    dstD3 = memcpy(g_57bbcc + 0x54, dstD - result, result & 0xfffffffc);
    memcpy(dstD3, srcS1, result & 3);
    return result;
}
