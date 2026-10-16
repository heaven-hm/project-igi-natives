#include "gi_platform.h"
#include "004CB9F0-DynObj_UpdateDynTree_10.h"
int32_t* DynObj_UpdateDynTree_10(int32_t a1, int32_t* a2, double* a3, int32_t* a4, double* a5, char a6, double* a7, int32_t a8)

{
    DynObj_ParseConfigFile_6();
    int32_t v_4c = a1;
    int32_t v_68 = 0x40000000;
    int32_t v_64 = 0x1e;
    int32_t v_50 = (*(int32_t*)(uintptr_t)(a1 + 0xc)) + 0x20;
    int32_t v_60 = 0;
    int32_t v_5c = 0;
    int32_t v_58 = 0;
    int32_t v_54 = 0;
    double v_350[0x2];

    if (a4 > 0)
    {
        double* tmpD1 = a5;
        char v_340;
        void* valA3 = &v_340;
        void* ctxB1 = &a2[0x16];
        void* objC3 = a3 - &v_350;
        int32_t* v_8_1 = a4;
        void* v_10_1 = objC3;

        while (true)
        {
            long double x87_r7_1 = *tmpD1;
            void* dstD1 = valA3 - 0x10;
            tmpD1 = &tmpD1[1];
            valA3 += 0x18;
            ctxB1 += 0x70;
            memcpy(dstD1, dstD1 + objC3, 0x18);
            *(valA3 - 0x18) = x87_r7_1 + *(valA3 - 0x18);
            *(ctxB1 - 0x70) = 0;
            bool cond_1_1 = v_8_1 != 1;
            v_8_1 -= 1;

            if (!cond_1_1)
                break;

            objC3 = v_10_1;
        }
    }

    double v_44;
    memcpy(&v_44, a3, 0x18);
    double v_2c;
    memcpy(&v_2c, a3, 0x18);
    int32_t* i_1 = a4;
    double v_3c;
    double v_34;
    double v_24;
    double v_1c;
    long double x87_r7_3;

    if (i_1 <= 0)
        x87_r7_3 = v_34;
    else
    {
        x87_r7_3 = v_34;
        double* objC6 = &a3[2];
        double* tmpD2 = &v_350 - a3;
        int32_t* i;

        do
        {
            long double x87_r6_1 = v_2c;
            long double f2_1 = objC6[-2];
            x87_r6_1 - f2_1;

            if (!(*(&((x87_r6_1 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, f2_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_2 = v_44;
                long double f3_1 = objC6[-2];
                x87_r6_2 - f3_1;

                if (!(*(&((x87_r6_2 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, f3_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    int32_t dstD3 = *(objC6 - 0xc);
                    v_44 = objC6[-2];
                    *(&v_44 + 4) = dstD3;
                }
            }
            else
            {
                int32_t dstD2 = *(objC6 - 0xc);
                v_2c = objC6[-2];
                *(&v_2c + 4) = dstD2;
            }

            long double x87_r6_3 = v_24;
            long double f4_1 = objC6[-1];
            x87_r6_3 - f4_1;

            if (!(*(&((x87_r6_3 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_3, f4_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_4 = v_3c;
                long double f5_1 = objC6[-1];
                x87_r6_4 - f5_1;

                if (!(*(&((x87_r6_4 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_4, f5_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    v_3c = objC6[-1];
                    *(&v_3c + 4) = *(objC6 - 4);
                }
            }
            else
            {
                v_24 = objC6[-1];
                *(&v_24 + 4) = *(objC6 - 4);
            }

            long double x87_r6_5 = v_1c;
            long double f6_1 = *objC6;
            x87_r6_5 - f6_1;

            if (!(*(&((x87_r6_5 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_5, f6_1) ? 1 : 0) << 0xa
                | (x87_r6_5 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double f7_1 = *objC6;
                x87_r7_3 - f7_1;

                if (!(*(&((x87_r7_3 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    x87_r7_3 = *objC6;
            }
            else
            {
                v_1c = *objC6;
                *(&v_1c + 4) = *(objC6 + 4);
            }

            long double x87_r6_6 = v_1c;
            long double f9_1 = *(tmpD2 + objC6);
            x87_r6_6 - f9_1;

            if (!(*(&((x87_r6_6 < f9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_6, f9_1) ? 1 : 0) << 0xa
                | (x87_r6_6 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double f10_1 = *(tmpD2 + objC6);
                x87_r7_3 - f10_1;

                if (!(*(&((x87_r7_3 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, f10_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    x87_r7_3 = *(tmpD2 + objC6);
            }
            else
                v_1c = *(tmpD2 + objC6);

            objC6 = &objC6[3];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    int32_t valA11 = (*(int32_t*)(uintptr_t)(a1 + 0xde0));
    int32_t ctxB2 = (*(int32_t*)(uintptr_t)(a1 + 0xde4));
    v_2c = v_2c + 2.0;
    int32_t tmpD3 = (*(int32_t*)(uintptr_t)(a1 + 0xde8));
    double v_24_1 = v_24 + 2.0;
    double v_1c_1 = v_1c + 16387.0;
    v_44 = v_44 - 2.0;
    *(&v_34 + 4) = v_3c - 2.0 + tmpD3;
    int32_t valA16 = ((v_1c_1 + tmpD3) ^ *(&v_34 + 4))
        | ((v_24_1 + ctxB2) ^ (x87_r7_3 - 16387.0 + ctxB2))
        | ((v_2c + valA11) ^ (v_44 + valA11));
    int32_t eflags;
    int32_t valA17;
    valA17 = __bsr_gprv_memv(valA16);
    int32_t valA18 = 0x1e - valA17;

    if (valA18 > 0x10)
        valA18 = 0x10;

    int32_t* v_368 = &v_68;
    int32_t valA19 = DynObj_RegisterSymbol_10(a1, &v_68, a3, valA18);
    int32_t* result = a8 & 0x7fffffff;

    if (result)
        result = DynObj_FindSymbol_11(a1, a2, a3, &v_350, a4, a6, a7, result);

    if (a8 & 0x80000000)
    {
        result = a4;

        if (result > 0)
        {
            double* dstD10 = a5;
            double* srcS7 = &a3[2];
            a3 = dstD10;
            a5 = srcS7;
            double* ctxB6 = &a2[6];
            a4 = result;
            bool cond_2_1;

            do
            {
                int32_t objC15 = *dstD10;

                if (objC15 < 0)
                    objC15 = -(objC15);

                long double x87_r7_11 = *dstD10;
                long double f8_1 = 0.0;
                x87_r7_11 - f8_1;
                int32_t valA23;

                valA23 = *(&((x87_r7_11 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, f8_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                char v_d8;

                if (DynObj_CreateMagicObject_10(&v_d8, &v_68, &srcS7[-2], valA23, objC15, valA19, 1))
                {
                    double v_c0;
                    long double x87_r6_21;
                    long double x87_r7_13;

                    if (ctxB6[8])
                    {
                        x87_r7_13 = *srcS7 - v_c0;
                        long double f13_1 = 0.0;
                        x87_r7_13 - f13_1;

                        if (*(&((x87_r7_13 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_13, f13_1) ? 1 : 0) << 0xa
                                | (x87_r7_13 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            x87_r7_13 = -(x87_r7_13);

                        x87_r6_21 = *srcS7 - *ctxB6;
                        long double f15_1 = 0.0;
                        x87_r6_21 - f15_1;

                        if (*(&((x87_r6_21 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_21, f15_1) ? 1 : 0) << 0xa
                                | (x87_r6_21 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                            x87_r6_21 = -(x87_r6_21);

                        x87_r7_13 - x87_r6_21;
                    }

                    if (!ctxB6[8] || *(&((x87_r7_13 < x87_r6_21 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_13, x87_r6_21) ? 1 : 0) << 0xa
                        | (x87_r7_13 == x87_r6_21 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        int32_t v_168_1 = 0;
                        int32_t v_e0_1 = 0;
                        int32_t v_dc_1 = 0;
                        double v_d0[0x2];
                        double (* v_170)[0x2] = &v_d0;
                        char v_164_1 = 1;
                        char v_e4_1 = 0xff;
                        int32_t v_16c_1 = 1;
                        DynObj_CreateMagicObject_11(a1, 0xb, &v_170, &v_d0, 0x20000000, 4);
                        int16_t valA30;
                        valA30 = v_164_1;

                        if (valA30)
                        {
                            long double x87_r7_17 = v_c0 - *srcS7;
                            long double f14_1 = 0.0;
                            x87_r7_17 - f14_1;
                            valA30 = (x87_r7_17 < f14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_17, f14_1) ? 1 : 0) << 0xa
                                | (x87_r7_17 == f14_1 ? 1 : 0) << 0xe | 0x3800;

                            if (*(&valA30 + 1) & 1)
                                x87_r7_17 = -(x87_r7_17);

                            memcpy(&ctxB6[-2], &v_d0, 0x18);
                            ctxB6[9] = x87_r7_17;
                            int32_t v_8c;
                            *(ctxB6 + 0x34) = v_8c;
                            srcS7 = a5;
                            dstD10 = a3;
                            int32_t v_88;
                            ctxB6[7] = v_88;
                            int32_t v_a0;
                            ctxB6[4] = v_a0;
                            ctxB6[8] = 1;
                            ctxB6[-3] = 0;
                            int32_t v_9c;
                            *(ctxB6 + 0x24) = v_9c;
                            int32_t v_98;
                            ctxB6[5] = v_98;
                        }
                    }
                }

                ctxB6 = &ctxB6[0xe];
                dstD10 = &dstD10[1];
                srcS7 = &srcS7[3];
                result = a4 - 1;
                cond_2_1 = a4 != 1;
                a3 = dstD10;
                a5 = srcS7;
                a4 = result;
            } while (cond_2_1);
        }
    }

    return result;
}
