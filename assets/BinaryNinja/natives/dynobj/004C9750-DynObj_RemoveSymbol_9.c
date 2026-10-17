// Original IGI.EXE function: DynObj_RemoveSymbol_9 (VA 0x004C9750; static CFG gate FAIL, CFG score 0.833).
#include "DynObj_RemoveSymbol_9.h"
uint32_t DynObj_RemoveSymbol_9(int32_t a1, int32_t* a2, double* a3, uint32_t a4, char a5, int32_t a6, int32_t a7)

{
    DynObj_ParseConfigFile_6();
    int32_t ctxB = a1;
    int32_t valA = *(ctxB + 0xc);
    double v_2c;
    memcpy(&v_2c, a3, 0x18);
    double v_44;
    memcpy(&v_44, a3, 0x18);
    int32_t v_50 = valA + 0x20;
    int32_t v_4c = ctxB;
    int32_t v_68 = 0x40000000;
    int32_t v_64 = 0x1e;
    int32_t v_60 = 0;
    int32_t v_5c = 0;
    int32_t v_58 = 0;
    int32_t v_54 = 0;
    char v_f4[0x80];
    double v_3c;
    double v_34;
    double v_24;
    double v_1c;

    if (a4 > 0)
    {
        int64_t v_c;
        *(&v_c + 4) = a4;
        long double x87_r7_1 = v_1c;
        int32_t* srcS2 = a2;
        double* tmpD1 = &a3[2];
        __builtin_memset(__builtin_memset(&v_f4, 0x1010101, a4 & 0xfffffffc), 1, a4 & 3);
        uint32_t i_1 = a4;
        uint32_t i;

        do
        {
            long double x87_r6_1 = v_44;
            long double f0_1 = tmpD1[-2];
            x87_r6_1 - f0_1;

            if (!(*(&((x87_r6_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, f0_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_2 = v_2c;
                long double f1_1 = tmpD1[-2];
                x87_r6_2 - f1_1;

                if (!(*(&((x87_r6_2 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, f1_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    int32_t dstD3 = *(tmpD1 - 0xc);
                    v_2c = tmpD1[-2];
                    *(&v_2c + 4) = dstD3;
                }
            }
            else
            {
                int32_t dstD2 = *(tmpD1 - 0xc);
                v_44 = tmpD1[-2];
                *(&v_44 + 4) = dstD2;
            }

            long double x87_r6_3 = v_3c;
            long double f2_1 = tmpD1[-1];
            x87_r6_3 - f2_1;

            if (!(*(&((x87_r6_3 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_3, f2_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_4 = v_24;
                long double f3_1 = tmpD1[-1];
                x87_r6_4 - f3_1;

                if (!(*(&((x87_r6_4 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_4, f3_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    v_24 = tmpD1[-1];
                    *(&v_24 + 4) = *(tmpD1 - 4);
                }
            }
            else
            {
                v_3c = tmpD1[-1];
                *(&v_3c + 4) = *(tmpD1 - 4);
            }

            long double x87_r6_5 = v_34;
            long double f5_1 = *tmpD1;
            x87_r6_5 - f5_1;

            if (!(*(&((x87_r6_5 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_5, f5_1) ? 1 : 0) << 0xa
                | (x87_r6_5 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double f6_1 = *tmpD1;
                x87_r7_1 - f6_1;

                if (!(*(&((x87_r7_1 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_1, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    x87_r7_1 = *tmpD1;
            }
            else
            {
                v_34 = *tmpD1;
                *(&v_34 + 4) = *(tmpD1 + 4);
            }

            *srcS2 = 0;
            tmpD1 = &tmpD1[3];
            srcS2 = &srcS2[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        v_1c = x87_r7_1;
        ctxB = a1;
    }

    int32_t valA8 = *(ctxB + 0xde0);
    int32_t ctxB2 = *(ctxB + 0xde4);
    int32_t tmpD2 = *(a1 + 0xde8);
    double v_1c_1 = v_1c - 2.0;
    int64_t v_c_2 = v_24 - 2.0;
    int32_t dstD7 = v_c_2;
    *(&v_c_2 + 4) = tmpD2;
    *(&v_1c_1 + 4) = v_1c_1 + tmpD2;
    int32_t valA13 = ((v_34 + 2.0 + *(&v_c_2 + 4)) ^ *(&v_1c_1 + 4))
        | ((v_3c + 2.0 + ctxB2) ^ (dstD7 + ctxB2))
        | ((v_44 + 2.0 + valA8) ^ (v_2c - 2.0 + valA8));
    *(&v_c_2 + 4) = valA13;
    int32_t eflags;
    uint32_t result;
    result = __bsr_gprv_memv(*(&v_c_2 + 4));
    *(&v_c_2 + 4) = result;
    int32_t srcS5 = 0x1e - *(&v_c_2 + 4);
    double* ctxB5;

    if (!(a7 & 0x7fffffff))
        ctxB5 = a3;
    else
    {
        ctxB5 = a3;
        int32_t* v_f8_1 = a2;
        char v_74_1 = a5;
        uint32_t v_fc_1 = a4;
        double* v_100 = ctxB5;
        int32_t v_70_1 = a6;
        int32_t v_6c_1 = 0;
        result = DynObj_ParseConfigFile_11(a1, 0xb, &v_100, ctxB5, a7);
    }

    if (a7 & 0x80000000)
    {
        result = a1;

        if (*(result + 0xc))
        {
            if (srcS5 > 0x10)
                srcS5 = 0x10;

            int32_t* v_118_2 = &v_68;
            a5 = DynObj_RegisterSymbol_10(result, &v_68, ctxB5, srcS5);
            result = a4;
            int32_t dstD10 = 0;

            if (result > 0)
            {
                int32_t* srcS6 = a2;

                do
                {
                    void* valA17 = *srcS6;

                    if (v_f4[dstD10])
                    {
                        long double x87_r7_7;
                        long double f4_1;

                        if (valA17)
                        {
                            x87_r7_7 = *(valA17 + 0xc);
                            f4_1 = 0f;
                            x87_r7_7 - f4_1;
                        }

                        if (!valA17 || *(&((x87_r7_7 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_7, f4_1) ? 1 : 0) << 0xa
                                | (x87_r7_7 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                            *srcS6 = DynObj_FindSymbol_10(&v_68, ctxB5, a5);
                    }
                    else if (!valA17)
                        *srcS6 = *(a1 + 0xd3c);

                    result = a4;
                    dstD10 += 1;
                    srcS6 = &srcS6[1];
                    ctxB5 = &ctxB5[3];
                } while (dstD10 < result);
            }
        }
    }

    return result;
}
