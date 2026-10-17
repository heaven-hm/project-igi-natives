// Original IGI.EXE function: Sys_FreeMemory_5 (VA 0x004B19C0; static CFG gate FAIL, CFG score 0.800).
#include "Sys_FreeMemory_5.h"
void** Sys_FreeMemory_5(int32_t a1)

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

    void** result = Mem_Alloc(~i + 0x1c, 4);
    __builtin_memset(result, 0, 0x1c);
    result[1] = 0;
    *result = nullptr;
    Camera_SetFieldOfView_33(&g_943970, result);
    int32_t dstD2 = a1;
    int32_t i_1 = 0xffffffff;
    result[2] = &result[7];

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD2;
        dstD2 += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC2 = ~i_1;
    int32_t srcS2;
    int32_t dstD5;
    dstD5 = memcpy(&result[7], dstD2 - objC2, objC2 & 0xfffffffc);
    memcpy(dstD5, srcS2, objC2 & 3);
    return result;
}
