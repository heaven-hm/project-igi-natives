#include "gi_platform.h"
#include "004BCE40-Sys_ReadFileBlock_28.h"
int32_t Sys_ReadFileBlock_28(void* a1, int32_t a2, int32_t a3)

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

    int32_t dstD1 = (*(int32_t*)(uintptr_t)(a1 + 0x28));
    int32_t valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c)) - 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x1c)) = valA1;
    *(dstD1 + (valA1 << 2)) = a3;
    int32_t objC3 = (*(int32_t*)(uintptr_t)(a1 + 0x24));
    uint32_t ctxB2 = ((~i + 3) & 0xfffffffc) >> 2;
    int32_t dstD3 = (*(int32_t*)(uintptr_t)(a1 + 0x18)) - ctxB2;
    (*(int32_t*)(uintptr_t)(a1 + 0x18)) = dstD3;
    int32_t dstD4 = a2;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD4;
        dstD4 += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC4 = ~i_1;
    int32_t srcS2;
    int32_t dstD7;
    dstD7 = memcpy(objC3 + (dstD3 << 2), dstD4 - objC4, objC4 & 0xfffffffc);
    memcpy(dstD7, srcS2, objC4 & 3);
    int32_t objC8 = (*(int32_t*)(uintptr_t)(a1 + 0x24));
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x18)) - 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x18)) = result;
    *(objC8 + (result << 2)) = ctxB2;
    return result;
}
