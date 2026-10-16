#include "Script_GraphnodeIdAlreadyUs.h"
int32_t* Script_GraphnodeIdAlreadyUs(void* a1, int32_t a2, int32_t a3, int32_t a4, float a5, int32_t a6, int32_t a7)

{
    if (a2 >= 0x3e8)
        return 0;

    if (a2 >= *(a1 + 0x58))
        Script_ParseEnumReal32_23(a1, a2);

    if (!Script_ExecuteLevelScript_23(a1, a2))
    {
        int32_t valA2 = Script_UndefinedGraphnodeda(a1);
        int32_t objC = *(a1 + 0x6c);
        void* ctxB1 = valA2 * a2;
        long double fpu7 = a5;
        *(ctxB1 + objC + 0x28) = fpu7 + fpu7;
        int32_t dstD = a7;
        int32_t* result = ctxB1 + objC;
        result[9] = a5;
        result[8] = a4;
        int32_t i = 0xffffffff;
        *result = a2;
        result[0xb] = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD;
            dstD += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC2 = ~i;
        int32_t srcS2;
        int32_t dstD3;
        dstD3 = memcpy(&result[0xd], dstD - objC2, objC2 & 0xfffffffc);
        memcpy(dstD3, srcS2, objC2 & 3);
        memcpy(&result[2], a3, 0x18);
        result[0x4d] = a1;
        result[0xc] = Sys_CheckHeap_22(&result[0xd]);
        result[0x4e] = a6;
        int32_t valA6 = 0;
        __builtin_memset(&result[0x4f], 0, 0x100);
        valA6 = g_54e36f;
        int32_t valA7 = 0;
        valA7 = *(a1 + 0x1c);
        int32_t valA8 = *(((valA6 * 0x180 + valA7) << 2) + &g_a96ae0);

        if (valA8)
            valA8(a1, result);

        *(a1 + 0x5c) += 1;
        return result;
    }

    Error_Show("GRAPHNODE ID ALREADY USED");

    while (true)
        /* nop */
}
