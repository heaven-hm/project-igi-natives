// Original IGI.EXE function: Menu_DrawWidget_9 (VA 0x0041F2D0; static CFG gate FAIL, CFG score 0.667).
#include "Menu_DrawWidget_9.h"
int32_t Menu_DrawWidget_9(int32_t a1, int32_t a2)

{
    void* tmpD2 = g_57bbd8;
    int32_t valA = *(tmpD2 + 0xbe0);
    int32_t objC2 = 0;

    if (valA > 0)
    {
        int32_t* tmpD = tmpD2 + 0xe0;

        do
        {
            if (*tmpD == a2)
                return valA;

            objC2 += 1;
            tmpD = &tmpD[0xb];
        } while (objC2 < valA);
    }

    *(tmpD2 + valA * 0x2c + 0xe0) = a2;
    int32_t dstD1 = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD1;
        dstD1 += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC3 = ~i;
    int32_t srcS2;
    int32_t dstD4;
    dstD4 = memcpy(tmpD2 + valA * 0x2c + 0xe4, dstD1 - objC3, objC3 & 0xfffffffc);
    memcpy(dstD4, srcS2, objC3 & 3);
    *(tmpD2 + 0xbe0) += 1;
    return objC3;
}
