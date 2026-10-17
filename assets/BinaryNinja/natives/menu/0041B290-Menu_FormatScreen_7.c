// Original IGI.EXE function: Menu_FormatScreen_7 (VA 0x0041B290; static CFG gate FAIL, CFG score 0.667).
#include "Menu_FormatScreen_7.h"
int32_t Menu_FormatScreen_7(int32_t a1, int32_t a2)

{
    void* tmpD2 = g_57bba0;
    int32_t result = *(tmpD2 + 0x21a0);
    void* flagP = tmpD2 + result * 0x108 + 0x9c;
    int32_t objC3 = 0;

    if (result > 0)
    {
        int32_t* tmpD = tmpD2 + 0x19c;

        do
        {
            if (*tmpD == a2)
                return result;

            objC3 += 1;
            tmpD = &tmpD[0x42];
        } while (objC3 < result);
    }

    int32_t dstD1 = a1;
    int32_t i = 0xffffffff;
    *(flagP + 0x100) = a2;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD1;
        dstD1 += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC4 = ~i;
    int32_t srcS2;
    int32_t dstD4;
    dstD4 = memcpy(flagP, dstD1 - objC4, objC4 & 0xfffffffc);
    memcpy(dstD4, srcS2, objC4 & 3);
    *(tmpD2 + 0x21a0) += 1;
    return 0;
}
