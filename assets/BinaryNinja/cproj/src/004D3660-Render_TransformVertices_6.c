#include "gi_platform.h"
#include "004D3660-Render_TransformVertices_6.h"
int32_t Render_TransformVertices_6(void* a1)

{
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 0xc));

    if (valA)
        valA((*(int32_t*)(uintptr_t)(a1 + 0x10)));

    __builtin_memset(a1, 0, 0x14);
    int32_t* tmpD = g_a54604;
    int32_t srcS1 = (*(int32_t*)(uintptr_t)(tmpD + a1));
    int32_t result = g_a545f8 - 1;
    g_a545f8 = result;

    if (srcS1 != result)
    {
        int32_t objC2 = g_a545f4;
        result = *(objC2 + (result << 2)) * g_a54600 + g_a545f0;
        int32_t dstD2 = *(objC2 + (srcS1 << 2));
        int32_t tmpD1 = *(tmpD + result);
        *(objC2 + (srcS1 << 2)) = *(objC2 + (tmpD1 << 2));
        *(g_a545f4 + (tmpD1 << 2)) = dstD2;
        *(g_a54604 + result) = srcS1;
    }

    return result;
}
