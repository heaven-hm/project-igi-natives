// Original IGI.EXE function: CameraBase_Cleanup_5 (VA 0x004F01C0; static CFG gate PASS, CFG score 0.889).
#include "CameraBase_Cleanup_5.h"
int32_t CameraBase_Cleanup_5(int32_t* a1, int32_t* a2)

{
    void* valA = *a1;

    if (valA)
    {
        Sys_ExecuteBytecode_2(valA);
        *a1 = 0;
    }

    Script_TooFewParametersInLi(a2, 1);
    void v_400;
    Sys_ResolveSymbol_23(a2[1], *a2, &v_400, 0x400);
    void* dstD = &v_400;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    if (~i != 1)
    {
        void* dstD1 = &v_400;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_1_1 = 0 != *dstD1;
            dstD1 += 1;
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        void* valA1 = Mem_Alloc(~i_1, 4);
        void* dstD2 = &v_400;
        int32_t i_2 = 0xffffffff;
        *a1 = valA1;

        while (i_2)
        {
            bool cond_2_1 = 0 != *dstD2;
            dstD2 += 1;
            i_2 -= 1;

            if (!cond_2_1)
                break;
        }

        int32_t objC3 = ~i_2;
        int32_t srcS2;
        int32_t dstD5;
        dstD5 = memcpy(valA1, dstD2 - objC3, objC3 & 0xfffffffc);
        memcpy(dstD5, srcS2, objC3 & 3);
    }

    int32_t result = *a2 + 1;
    *a2 = result;
    return result;
}
