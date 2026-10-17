// Original IGI.EXE function: Menu_DrawWidget_7 (VA 0x0041B870; static CFG gate FAIL, CFG score 0.667).
#include "Menu_DrawWidget_7.h"
int32_t Menu_DrawWidget_7(int32_t a1, int32_t a2)

{
    void* tmpD2 = g_57bba4;
    int32_t result = *(tmpD2 + 0x958);
    void* flagP = tmpD2 + result * 0x48 + 0x54;
    int32_t objC1 = 0;

    if (result > 0)
    {
        int32_t* tmpD = tmpD2 + 0x94;

        do
        {
            if (*tmpD == a2)
                return result;

            objC1 += 1;
            tmpD = &tmpD[0x12];
        } while (objC1 < result);
    }

    int32_t dstD1 = a1;
    int32_t i = 0xffffffff;
    *(flagP + 0x40) = a2;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD1;
        dstD1 += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC2 = ~i;
    int32_t srcS2;
    int32_t dstD4;
    dstD4 = memcpy(flagP, dstD1 - objC2, objC2 & 0xfffffffc);
    memcpy(dstD4, srcS2, objC2 & 3);
    *(tmpD2 + 0x958) += 1;
    return 0;
}
