// Original IGI.EXE function: FX_ErrorInHumancameraHu_3 (VA 0x004829A0; static CFG gate PASS, CFG score 1.000).
#include "FX_ErrorInHumancameraHu_3.h"
void* FX_ErrorInHumancameraHu_3(void* a1)

{
    int32_t objC1 = *(a1 + 0x118) - 1;
    int32_t srcS = 0;
    *(a1 + 0x118) = objC1;
    int32_t valA = objC1;
    int32_t dstD = objC1 + 0x80;
    int32_t tmpD = objC1 << 3;
    int32_t objC2;
    int32_t ctxB1;

    while (true)
    {
        ctxB1 = valA;
        objC2 = tmpD;

        if (valA < 0)
        {
            ctxB1 = dstD;
            objC2 += 0x400;
        }

        if (*(objC2 + &g_5c118d))
            break;

        srcS += 1;
        tmpD -= 8;
        valA -= 1;
        dstD -= 1;

        if (srcS >= 0x80)
        {
            *(a1 + 0x118) = objC1 + 1;
            return a1;
        }
    }

    int32_t* objC3 = *(objC2 + &g_5c1188);

    if (*objC3)
    {
        *(a1 + 0x118) = ctxB1;
        *(a1 + 0x68) = objC3;
        return a1;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
