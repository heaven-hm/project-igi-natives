#include "gi_platform.h"
#include "0050A830-Physics_UpdateForces_11.h"
int32_t* Physics_UpdateForces_11(int32_t* a1)

{
    int32_t valA = g_bcac90;
    int32_t v_c = valA;

    if (valA >= 0x100)
        v_c = 0x100;

    int32_t srcS = *a1;
    int32_t dstD = a1[1];

    if ((~(srcS - 1) & srcS) != srcS)
    {
        int32_t eflags_1;
        char valA5;
        valA5 = __bsr_gprv_memv(srcS);
        srcS = 1 << ((valA5 + 1) & 0x1f);
    }

    if ((~(dstD - 1) & dstD) != dstD)
    {
        int32_t eflags_2;
        char valA6;
        valA6 = __bsr_gprv_memv(dstD);
        dstD = 1 << ((valA6 + 1) & 0x1f);
    }

    int32_t valA8 = g_bcac7c;

    if (valA8 <= 1)
        valA8 = 1;

    int32_t objC4 = g_bcac80;
    int32_t tmpD3 = g_bcac84;

    if (objC4 <= 1)
        objC4 = 1;

    int32_t ctxB = g_bcac88;

    if (srcS < valA8)
        srcS = valA8;
    else if (srcS > tmpD3)
        srcS = tmpD3;

    if (dstD < objC4)
        dstD = objC4;
    else if (dstD > ctxB)
        dstD = ctxB;

    if (srcS <= dstD)
    {
        uint32_t f0_2 = COMBINE(0, dstD) / srcS;

        if (f0_2 > v_c && v_c)
            srcS = COMBINE(0, f0_2 * srcS) / v_c;
    }
    else
    {
        uint32_t f0 = COMBINE(0, srcS) / dstD;

        if (f0 > v_c && v_c)
        {
            a1[3] = COMBINE(0, f0 * dstD) / v_c;
            a1[2] = srcS;
            return a1;
        }
    }

    a1[3] = dstD;
    a1[2] = srcS;
    return a1;
}
