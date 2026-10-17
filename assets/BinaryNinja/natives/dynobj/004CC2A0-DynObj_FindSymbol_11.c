// Original IGI.EXE function: DynObj_FindSymbol_11 (VA 0x004CC2A0; static CFG gate PASS, CFG score 0.872).
#include "DynObj_FindSymbol_11.h"
int32_t* DynObj_FindSymbol_11(int32_t a1, int32_t* a2, double* a3, double* a4, int32_t* a5, char a6, double* a7, int32_t a8)

{
    int32_t* result = a5;
    int32_t v_8 = 1;

    if (result)
    {
        int32_t srcS2 = g_a4438c + 1;
        g_a44390 += result;
        double* tmpD3 = a3;
        g_a4438c = srcS2;
        double v_3c;
        memcpy(&v_3c, tmpD3, 0x18);
        double v_24;
        memcpy(&v_24, tmpD3, 0x18);
        double v_34;
        double v_1c;
        double v_14;
        double* ctxB2;
        long double x87_r7_1;
        double v_2c;

        if (result <= 0)
        {
            x87_r7_1 = v_2c;
            ctxB2 = a4;
        }
        else
        {
            int32_t* result_2 = result;
            x87_r7_1 = v_2c;
            double* dstD1 = &a2[2];
            a3 = dstD1;

            while (true)
            {
                long double x87_r6_1 = *tmpD3;
                long double f0_1 = *a4;
                x87_r6_1 - f0_1;
                long double x87_r6_2;
                long double f1_1;

                if (*(&((x87_r6_1 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_1, f0_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                {
                    x87_r6_2 = tmpD3[1];
                    f1_1 = a4[1];
                    x87_r6_2 - f1_1;
                }

                if (!(*(&((x87_r6_1 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_1, f0_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                        (x87_r6_2 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_2, f1_1) ? 1 : 0) << 0xa
                        | (x87_r6_2 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    v_8 = 0;

                long double x87_r6_3 = *tmpD3;
                long double f2_1 = v_3c;
                x87_r6_3 - f2_1;

                if (*(&((x87_r6_3 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, f2_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r6_4 = *tmpD3;
                    long double f3_1 = v_24;
                    x87_r6_4 - f3_1;

                    if (*(&((x87_r6_4 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_4, f3_1) ? 1 : 0) << 0xa
                        | (x87_r6_4 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        int32_t objC3 = *(tmpD3 + 4);
                        v_24 = *tmpD3;
                        *(&v_24 + 4) = objC3;
                    }
                }
                else
                {
                    int32_t objC2 = *(tmpD3 + 4);
                    v_3c = *tmpD3;
                    *(&v_3c + 4) = objC2;
                }

                long double x87_r6_5 = tmpD3[1];
                long double f4_1 = v_34;
                x87_r6_5 - f4_1;

                if (*(&((x87_r6_5 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_5, f4_1) ? 1 : 0) << 0xa
                    | (x87_r6_5 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r6_6 = tmpD3[1];
                    long double f5_1 = v_1c;
                    x87_r6_6 - f5_1;

                    if (*(&((x87_r6_6 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_6, f5_1) ? 1 : 0) << 0xa
                        | (x87_r6_6 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        v_1c = tmpD3[1];
                        *(&v_1c + 4) = *(tmpD3 + 0xc);
                    }
                }
                else
                {
                    v_34 = tmpD3[1];
                    *(&v_34 + 4) = *(tmpD3 + 0xc);
                }

                long double f7_1 = tmpD3[2];
                x87_r7_1 - f7_1;

                if (!(*(&((x87_r7_1 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r6_7 = tmpD3[2];
                    long double f9_1 = v_14;
                    x87_r6_7 - f9_1;

                    if (*(&((x87_r6_7 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_7, f9_1) ? 1 : 0) << 0xa
                        | (x87_r6_7 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        v_14 = tmpD3[2];
                        *(&v_14 + 4) = *(tmpD3 + 0x14);
                    }
                }
                else
                    x87_r7_1 = tmpD3[2];

                long double x87_r6_8 = *a4;
                long double f10_1 = v_3c;
                x87_r6_8 - f10_1;

                if (*(&((x87_r6_8 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_8, f10_1) ? 1 : 0) << 0xa
                    | (x87_r6_8 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r6_9 = *a4;
                    long double f11_1 = v_24;
                    x87_r6_9 - f11_1;

                    if (*(&((x87_r6_9 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_9, f11_1) ? 1 : 0) << 0xa
                        | (x87_r6_9 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        int32_t objC8 = *(a4 + 4);
                        v_24 = *a4;
                        *(&v_24 + 4) = objC8;
                    }
                }
                else
                {
                    int32_t objC7 = *(a4 + 4);
                    v_3c = *a4;
                    *(&v_3c + 4) = objC7;
                }

                long double x87_r6_10 = a4[1];
                long double f12_1 = v_34;
                x87_r6_10 - f12_1;

                if (*(&((x87_r6_10 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_10, f12_1) ? 1 : 0) << 0xa
                    | (x87_r6_10 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r6_11 = a4[1];
                    long double f13_1 = v_1c;
                    x87_r6_11 - f13_1;

                    if (*(&((x87_r6_11 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_11, f13_1) ? 1 : 0) << 0xa
                        | (x87_r6_11 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        v_1c = a4[1];
                        *(&v_1c + 4) = *(a4 + 0xc);
                    }
                }
                else
                {
                    v_34 = a4[1];
                    *(&v_34 + 4) = *(a4 + 0xc);
                }

                long double f14_1 = a4[2];
                x87_r7_1 - f14_1;

                if (!(*(&((x87_r7_1 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, f14_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r6_12 = a4[2];
                    long double f15_1 = v_14;
                    x87_r6_12 - f15_1;

                    if (*(&((x87_r6_12 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_12, f15_1) ? 1 : 0) << 0xa
                        | (x87_r6_12 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        v_14 = a4[2];
                        *(&v_14 + 4) = *(a4 + 0x14);
                    }
                }
                else
                    x87_r7_1 = a4[2];

                dstD1[0xa] = 0;
                *a2 = 0;
                memcpy(dstD1, a4, 0x18);
                tmpD3 = &tmpD3[3];
                ctxB2 = &a4[3];
                bool cond_4_1 = result_2 != 1;
                a4 = ctxB2;
                a2 = &a2[0x1c];
                a3 = &a3[0xe];
                result_2 -= 1;

                if (!cond_4_1)
                    break;

                dstD1 = a3;
            }

            result = a5;
        }
        int32_t objC15 = result * 0x18;
        double* tmpD4 = tmpD3 - objC15;
        double* ctxB3 = ctxB2 - objC15;
        v_3c = v_3c + 2.0;
        a3 = tmpD4;
        double v_34_1 = v_34 + 2.0;
        int32_t* srcS9 = &a2[-((result * 7)) * 4];
        char v_58_1 = a6;
        int32_t* v_44_1 = srcS9;
        double v_2c_1 = x87_r7_1 + 16387.0;
        long double x87_r7_6 = v_24 - 2.0;
        double* i = nullptr;
        double* v_64 = tmpD4;
        double* v_60_1 = ctxB3;
        v_24 = x87_r7_6;
        double* v_54 = a7;
        int32_t* result_1 = result;
        int32_t v_50_1 = 0;
        int32_t v_4c_1 = 0;
        int32_t v_48;
        __builtin_strncpy(&v_48, "DCBA", 4);
        double v_1c_1 = v_1c - 2.0;
        double v_14_1 = v_14 - 16387.0;
        int32_t v_88;

        if (a8 & 0x7fffffff)
        {
            if (!v_8)
            {
                do
                {
                    if (i == 1 || !i || i == 4 || i == 5)
                    {
                        int32_t v_1b0_2 = a8;
                        double** v_1c0_1 = &v_64;
                        DynObj_ParseConfigFile_9(a1, 9, tmpD4, ctxB3, result, i, v_88);
                        tmpD4 = a3;
                        result = a5;
                    }

                    i += 1;
                } while (i < 6);
            }
            else
            {
                do
                {
                    if (i == 1 || !i || i == 4 || i == 5)
                        result = DynObj_CreateMagicObject_9(a1, 0xa, &v_64, &v_24, &v_3c, a8, i);

                    i += 1;
                } while (i < 6);
            }
        }

        if (a8 & 0x80000000)
        {
            DynObj_ParseConfigFile_6();
            int32_t srcS10 = a1;
            int32_t ctxB4 = *(srcS10 + 0xde4);
            int32_t v_70_1 = *(srcS10 + 0xc) + 0x20;
            int32_t tmpD8 = *(srcS10 + 0xde8);
            int32_t v_80_1 = 0;
            int32_t v_7c_1 = 0;
            int32_t v_78_1 = 0;
            int32_t v_74_1 = 0;
            int32_t valA13 = *(srcS10 + 0xde0);
            int32_t dstD4 = v_24 + valA13;
            int32_t v_6c_1 = srcS10;
            v_88 = 0x40000000;
            int32_t v_84_1 = 0x1e;
            int32_t valA18 = ((v_2c_1 + *(srcS10 + 0xde8)) ^ (v_14_1 + tmpD8))
                | ((v_34_1 + ctxB4) ^ (v_1c_1 + ctxB4)) | ((v_3c + valA13) ^ dstD4);
            a6 = valA18;
            int32_t eflags_1;
            int32_t valA19;
            valA19 = __bsr_gprv_memv(a6);
            a6 = valA19;
            int32_t valA20 = 0x1e - a6;

            if (valA20 > 0x10)
                valA20 = 0x10;

            double* dstD5 = a3;
            int32_t* v_1b4_3 = &v_88;
            double* valA21 = DynObj_RegisterSymbol_10(srcS10, &v_88, dstD5, valA20);
            result = a5;

            if (result > 0)
            {
                a6 = dstD5;
                double* valA23 = ctxB3 - dstD5;
                int32_t* ctxB8 = &srcS9[0x16];
                a4 = valA23;
                a2 = a5;

                while (true)
                {
                    void v_104;

                    if (DynObj_InsertHashItem_11(&v_104, &v_88, valA21, dstD5, valA23 + dstD5))
                    {
                        double v_fc[0x6];
                        long double fp0_2;
                        long double f8_1;

                        if (*ctxB8)
                        {
                            double v_c_7 = Sys_PushStack_11(dstD5, &v_fc);
                            fp0_2 = Sys_PushStack_11(dstD5, &ctxB8[-0x14]);
                            f8_1 = v_c_7;
                            fp0_2 - f8_1;
                        }

                        if (!*ctxB8 || !(*(&((fp0_2 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fp0_2, f8_1) ? 1 : 0) << 0xa
                            | (fp0_2 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t v_194_1 = 0;
                            int32_t v_10c_1 = 0;
                            int32_t v_108_1 = 0;
                            char v_190_1 = 1;
                            char v_110_1 = 0xff;
                            int32_t v_198_1 = 1;
                            double (* v_19c)[0x6] = &v_fc;
                            DynObj_CreateMagicObject_11(srcS10, 0xb, &v_19c, &v_fc, 0x20000000, 4);

                            if (v_190_1)
                            {
                                int32_t v_a4;
                                ctxB8[2] = v_a4;
                                int32_t v_a0;
                                ctxB8[3] = v_a0;
                                memcpy(&ctxB8[-0x14], &v_fc, 0x18);
                                int32_t v_b8;
                                ctxB8[-3] = v_b8;
                                dstD5 = a6;
                                srcS10 = a1;
                                int32_t v_b4;
                                ctxB8[-2] = v_b4;
                                int32_t v_cc;
                                ctxB8[-8] = v_cc;
                                *ctxB8 = 1;
                                ctxB8[-0x16] = 0;
                                int32_t v_c8;
                                ctxB8[-7] = v_c8;
                                int32_t v_c4;
                                ctxB8[-6] = v_c4;
                            }
                        }
                    }

                    ctxB8 = &ctxB8[0x1c];
                    dstD5 = &dstD5[3];
                    result = a2 - 1;
                    bool cond_3_1 = a2 != 1;
                    a6 = dstD5;
                    a2 = result;

                    if (!cond_3_1)
                        break;

                    valA23 = a4;
                }
            }
        }
    }

    return result;
}
