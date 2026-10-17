// Original IGI.EXE function: HumanPlayer_UpdateHealth_8 (VA 0x0040F760; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateHealth_8.h"
int32_t HumanPlayer_UpdateHealth_8(int32_t* a1, int32_t a2)

{
    int32_t* srcS = a1;
    int32_t flagP = 0;
    int32_t* valA1;
    int32_t* objC;
    valA1 = Table_GetAt(&srcS[0x131], 0);
    int32_t tmpD;

    if (!valA1)
        a1 = 0xffffffff;
    else
    {
        valA1 = HumanPlayer_LoadParameters_13(valA1, tmpD, objC, valA1);
        objC = *valA1;
        a1 = objC;
    }

    if (srcS[0x352] == 0xffffffff || a2)
        flagP = 1;
    else
    {
        long double x87_r7_1 = srcS[0x81];
        long double f1_1 = 0f;
        x87_r7_1 - f1_1;

        if (!(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double x87_r7_2 = srcS[0x59];
            long double f3_1 = 0f;
            x87_r7_2 - f3_1;

            if (*(&((x87_r7_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                flagP = 1;
        }
    }

    long double x87_r7_3 = srcS[0x82];
    long double f0 = 0f;
    x87_r7_3 - f0;
    long double x87_r7_4;
    long double f2_1;

    if (!(*(&((x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        x87_r7_4 = srcS[0x5a];
        f2_1 = 0f;
        x87_r7_4 - f2_1;
    }

    int32_t i;
    int32_t dstD1;

    if (*(&((x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe) + 1) & 0x40 || !(*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe) + 1)
        & 0x40))
    {
        if (flagP)
            goto label_40f805;

    label_40f837:
        dstD1 = srcS[0x79];
        i = HumanPlayer_UpdateMotion_11(srcS, dstD1);

        if (i)
        {
            i = HumanPlayer_PlayFootstep(i);

            if (!i)
                dstD1 = 0xffffffff;
            else
            {
                i = 0;

                if (g_56df18 > 0)
                {
                    int32_t* objC2 = &g_56df1c;

                    do
                    {
                        if (*objC2 == dstD1)
                            srcS[0x352] = i;

                        i += 1;
                        objC2 = &objC2[1];
                    } while (i < g_56df18);
                }
            }
        }
    }
    else
    {
        flagP = 0xffffffff;
    label_40f805:
        void* valA5 = srcS[0x379];

        if (!valA5)
        {
            int32_t ctxB1 = g_56df18;

            if (!ctxB1)
                goto label_40f837;

            while (true)
            {
                ctxB1 -= 1;
                int32_t dstD3 = srcS[0x352] + flagP;
                srcS[0x352] = dstD3;
                int32_t objC3 = g_56df18;

                if (dstD3 >= objC3)
                    srcS[0x352] = 0;
                else if (dstD3 < 0)
                    srcS[0x352] = objC3 - 1;

                dstD1 = *((srcS[0x352] << 2) + &g_56df1c);
                int32_t* valA7 = HumanPlayer_UpdateMotion_11(srcS, dstD1);

                if (valA7)
                {
                    i = HumanPlayer_PlayFootstep(valA7);

                    if (i)
                        break;
                }

                if (!ctxB1)
                    goto label_40f837;
            }

            goto label_40f824;
        }

        i = HumanPlayer_LoadParameters_13(valA5, tmpD, objC, valA5);
        dstD1 = *i;
        srcS[0x379] = 0;
    label_40f824:

        if (dstD1 == 0xffffffff)
            goto label_40f837;
    }

    if (dstD1 != a1)
    {
        i = HumanPlayer_UpdateMotion_11(srcS, dstD1);

        if (i)
            srcS[0x353] = dstD1;
    }

    return i;
}
