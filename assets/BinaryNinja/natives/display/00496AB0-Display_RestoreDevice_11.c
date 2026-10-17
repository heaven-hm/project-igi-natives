// Original IGI.EXE function: Display_RestoreDevice_11 (VA 0x00496AB0; static CFG gate PASS, CFG score 0.905).
#include "Display_RestoreDevice_11.h"
int32_t Display_RestoreDevice_11(int32_t a1, int32_t a2)

{
    int32_t srcS = a1;
    int32_t valA = 0;
    int32_t dstD = *(srcS + 0x3c);
    void* objC = *(srcS + 0xc);
    valA = dstD == 1;
    int32_t v_c = valA;
    a1 = a2;
    int32_t valA4;
    int32_t tmpD2;
    tmpD2 = HIGHD(0x10624dd3 * *(objC + 0x1c) * 0xfa0);
    valA4 = LOWD(0x10624dd3 * *(objC + 0x1c) * 0xfa0);
    int32_t tmpD3 = tmpD2 >> 6;
    int32_t tmpD4 = tmpD3 + (tmpD3 >> 0x1f);
    int32_t valA9;
    int32_t tmpD5;
    tmpD5 = HIGHD(*(objC + 0x18) * *(objC + 0x16));
    valA9 = LOWD(*(objC + 0x18) * *(objC + 0x16));
    int32_t valA10 = valA9 + (tmpD5 & 7);
    int32_t ctxB1 = valA10 >> 3;

    if (dstD != 2)
    {
        int32_t* valA11 = *(srcS + 0x10);
        int32_t v_8;
        int32_t v_4;
        int32_t valA12 = (*(*valA11 + 0x2c))(valA11, 0, 0, &v_8, &v_4, 0, 0, 2);

        if (valA12)
        {
            *(srcS + 0x3c) = 0xffffffff;
            return valA12;
        }

        if (a2)
        {
            bool cond_2_1;

            do
            {
                int32_t flagP1;

                if (a1 >= 0)
                {
                    flagP1 = tmpD4 - *(srcS + 0x28);

                    if (flagP1 >= a1)
                        flagP1 = a1;
                }
                else
                    flagP1 = 0;

                char* dstD3 = *(srcS + 0x28) * ctxB1 + v_8;

                if (!v_c)
                {
                    if (flagP1 >= 0)
                    {
                        void* objC8 = *(srcS + 0xc);
                        int32_t valA17 = *(objC8 + 0x20) - *(srcS + 0x24);

                        if (valA17 < flagP1)
                            flagP1 = valA17;

                        if (flagP1)
                        {
                            if (*(objC8 + 0x14) != 2)
                                Display_CreateSurface_11(dstD3, srcS, flagP1, ctxB1);
                            else
                                Display_CheckCapabilities_11(dstD3, srcS, flagP1);
                        }
                    }
                    else
                        flagP1 = 0;

                    *(srcS + 0x24) += flagP1;
                }
                else
                {
                    int32_t objC4 = flagP1 * ctxB1;
                    __builtin_memset(__builtin_memset(dstD3, 0, objC4 & 0xfffffffc), 0, objC4 & 3);
                }

                int32_t tmpD12 = *(srcS + 0x28) + flagP1;
                *(srcS + 0x28) = tmpD12;

                if (tmpD12 >= tmpD4)
                    *(srcS + 0x28) = 0;

                if (*(srcS + 0x24) >= *(*(srcS + 0xc) + 0x20))
                {
                    if (*(srcS + 8) & 0x10)
                    {
                        Sys_ExecuteBytecode_4(*(srcS + 0x18), 0x14, 0);
                        Sys_ResolveSymbol_4(*(srcS + 0x18));
                        void* objC15 = *(srcS + 0xc);
                        *(srcS + 0x24) = 0;
                        Display_ClearSurfaces_10(srcS + 0x40, *(objC15 + 0x18));
                    }
                    else if (!v_c)
                    {
                        v_c = 1;
                        int32_t valA23;
                        int32_t tmpD14;
                        tmpD14 = HIGHD(0x10624dd3 * g_limit_b * 0xfa0);
                        valA23 = LOWD(0x10624dd3 * g_limit_b * 0xfa0);
                        int32_t tmpD15 = tmpD14 >> 6;
                        int32_t valA26 = tmpD15 + (tmpD15 >> 0x1f) + g_c28c5c;
                        int32_t objC14 = *(srcS + 0x20);
                        *(srcS + 0x2c) = valA26;

                        if (objC14 - valA26 >= 0)
                            *(srcS + 0x30) = objC14 - valA26;
                        else
                            *(srcS + 0x30) = valA26 - objC14;
                    }
                }

                cond_2_1 = a1 != flagP1;
                a1 -= flagP1;
            } while (cond_2_1);
        }

        int32_t* valA33 = *(srcS + 0x10);
        int32_t valA34 = (*(*valA33 + 0x4c))(valA33, v_8, v_4, 0, 0);

        if (valA34)
        {
            *(srcS + 0x3c) = 0xffffffff;
            return valA34;
        }

        valA10 = 0;
        valA10 = v_c;
        *(srcS + 0x3c) = valA10;
    }

    return valA10;
}
