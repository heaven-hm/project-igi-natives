// Original IGI.EXE function: Display_SetGammaRamp_10 (VA 0x004964A0; static CFG gate FAIL, CFG score 0.667).
#include "Display_SetGammaRamp_10.h"
int32_t Display_SetGammaRamp_10(void* a1, int32_t* a2, char a3)

{
    int32_t* flagP = a2;
    void* valA1 = a1;
    int32_t* srcS = flagP[9];
    uint32_t ctxB3 = (flagP[6] * *(flagP + 0x16) * flagP[8]) >> 3;
    a2 = srcS;

    if (valA1)
    {
        int32_t* objC1 = *(valA1 + 0x10);
        a2 = objC1;
        srcS = objC1;
    }

    if (a3)
    {
        int32_t valA3 = (*(*srcS + 0x50))(srcS);
        valA3 = !valA3;
        return valA3;
    }

    int32_t v_8;
    int32_t v_4;
    int32_t valA5 = (*(*srcS + 0x2c))(srcS, 0, ctxB3, &v_4, &a3, &v_8, &a1, 0);

    if (!valA5)
    {
        int32_t valA6 = a3;

        if (ctxB3 <= valA6)
        {
            int32_t srcS2;
            int32_t dstD2;
            dstD2 = memcpy(v_4, flagP[0xb], valA6 & 0xfffffffc);
            memcpy(dstD2, srcS2, valA6 & 3);
            valA6 = a3;
            srcS = a2;
            ctxB3 -= valA6;
        }

        if (ctxB3 > 0)
        {
            void* objC6 = a1;

            if (ctxB3 <= objC6)
            {
                int32_t srcS5;
                int32_t dstD4;
                dstD4 = memcpy(v_8, flagP[0xb] + valA6, objC6 & 0xfffffffc);
                memcpy(dstD4, srcS5, objC6 & 3);
                valA6 = a3;
                srcS = a2;
            }
        }

        valA5 = (*(*srcS + 0x4c))(srcS, v_4, valA6, v_8, a1);

        if (!valA5)
        {
            valA5 = 1;
            return valA5;
        }
    }

    valA5 = 0;
    return valA5;
}
