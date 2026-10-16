#include "DynObj_CreateMagicObject_10.h"
int32_t DynObj_CreateMagicObject_10(void* a1, int32_t* a2, double* a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)

{
    int32_t v_2ec = *a2;
    int32_t v_2fc = a2[1];
    int32_t objC1 = *(a2[7] + 0xc);
    void* dstD = a2[6];
    void* v_308 = a2[8];
    int32_t i = a6;
    *(a1 + 0x58) = 0;
    float v_2e8 = *a3;
    int32_t v_2e4 = a3[1];
    int32_t srcS = a3[2];
    int32_t v_2e0 = srcS;
    long double x87_r7_3 = *a3;
    long double f1 = 0.0;
    x87_r7_3 - f1;

    if (*(&((x87_r7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1) ? 1 : 0) << 0xa
        | (x87_r7_3 == f1 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_4 = v_2e8;
        long double f3_1 = *a3;
        x87_r7_4 - f3_1;

        if (!(*(&((x87_r7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            v_2e8 -= 1;
    }

    long double x87_r7_5 = a3[1];
    long double f2 = 0.0;
    x87_r7_5 - f2;

    if (*(&((x87_r7_5 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f2) ? 1 : 0) << 0xa
        | (x87_r7_5 == f2 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_6 = v_2e4;
        long double f5_1 = a3[1];
        x87_r7_6 - f5_1;

        if (!(*(&((x87_r7_6 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            v_2e4 -= 1;
    }

    long double x87_r7_7 = a3[2];
    long double f4 = 0.0;
    x87_r7_7 - f4;

    if (*(&((x87_r7_7 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f4) ? 1 : 0) << 0xa
        | (x87_r7_7 == f4 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_8 = v_2e0;
        long double f6_1 = a3[2];
        x87_r7_8 - f6_1;

        if (!(*(&((x87_r7_8 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            srcS -= 1;
    }

    int32_t objC4;

    if (!a4)
    {
        int32_t v_2f8_1 = srcS + 0x4001;
        objC4 = srcS + 0x4001;
    }
    else
        objC4 = srcS - 0x4001;

    void* valA7 = a2[7];
    int32_t v_100[0x20];
    v_100[i] = dstD;
    int32_t ctxB = *(valA7 + 0xde0);
    int32_t srcS2 = *(valA7 + 0xde4);
    int32_t valA8 = *(valA7 + 0xde8);
    int32_t ctxB1 = ctxB + v_2e8;
    int32_t valA11 = v_2e4 + srcS2;
    int32_t objC5 = objC4 + valA8;
    int32_t objC6 = objC5 ^ 0x40000000;
    int32_t objC7 = 0;
    objC7 = a2[2];
    int32_t v_304 = a2[5];
    int32_t valA12 = valA11 ^ 0x40000000;
    int32_t srcS5 = objC7;
    char objC8 = v_2fc;
    int32_t ctxB2 = ctxB1 ^ 0x40000000;
    int32_t v_180[0x20];
    v_180[i] = srcS5;
    int32_t ctxB6 = *(((((valA12 >> (objC8 & 0x1f) & 1) << 1 | (ctxB2 >> (objC8 & 0x1f) & 1))
        + (srcS5 << 3)) << 2) + &g_548060) | (objC6 >> (objC8 & 0x1f) & 1) << 2;
    int32_t v_280[0x20];
    v_280[i] = (ctxB6 >> 2 & 1) ^ a4;
    int32_t v_200[0x20];
    v_200[i] = v_304;
    int32_t v_80[0x20];
    v_80[i] = v_308;
    DynObj_UpdateDynTree_6();
    void* v_300;

    if (g_b97d20 && v_308 && *(v_308 + 0x38) & 0x80)
    {
        void* valA24 = *(v_308 + 0x2c);
        v_300 = valA24;

        while (true)
        {
            if (*(valA24 + 0x5c) & 0x80)
            {
                int32_t objC14 = 0;
                objC14 = *(valA24 + 0x1c);
                (*((objC14 << 2) + &g_a9c4e0))(valA24, *(valA24 + 0x48));
                valA24 = v_300;
            }

            void* valA23 = *(valA24 + 0x58);
            v_300 = valA23;

            if (!valA23)
                break;

            valA24 = v_300;
        }
    }

    if (1 << (ctxB6 & 0x1f) & *(dstD + 0x18))
    {
        void* valA26 = v_308;
        int32_t tmpD5 = v_2fc - 1;
        int32_t v_2f4_1 = tmpD5;

        while (i < 0x10)
        {
            if (g_b97d20 && valA26)
            {
                void* valA36 = *(v_308 + (((objC5 >> ((tmpD5 - 1) & 0x1f) & 4)
                    | (valA11 >> (tmpD5 & 0x1f) & 2) | (ctxB1 >> (v_2fc & 0x1f) & 1)) << 2) + 0xc);
                v_308 = valA36;

                if (valA36 && *(valA36 + 0x38) & 0x80)
                {
                    void* valA38 = *(valA36 + 0x2c);
                    v_300 = valA38;

                    while (true)
                    {
                        if (*(valA38 + 0x5c) & 0x80)
                        {
                            int32_t objC22 = 0;
                            objC22 = *(valA38 + 0x1c);
                            (*((objC22 << 2) + &g_a9c4e0))(valA38, *(valA38 + 0x48));
                            valA38 = v_300;
                        }

                        void* valA39 = *(valA38 + 0x58);
                        v_300 = valA39;

                        if (!valA39)
                            break;

                        valA38 = v_300;
                    }
                }
            }

            i += 1;
            int32_t valA41 = v_2ec >> 1;
            v_2fc -= 1;
            v_2ec = valA41;
            v_2f4_1 -= 1;
            int32_t objC26;

            objC26 = !(ctxB6 & 4) ? v_304 - valA41 : v_304 + valA41;

            int32_t valA42 = 0;
            valA42 = *(ctxB6 + dstD + 0x10);
            v_304 = objC26;
            int32_t valA44;
            int32_t objC29;

            if (srcS5 >= 4)
            {
                objC29 = (srcS5 - (valA42 & 3)) & 3;
                valA44 = (valA42 ^ srcS5) & 4;
            }
            else
            {
                objC29 = (valA42 ^ srcS5) & 4;
                valA44 = (valA42 + srcS5) & 3;
            }

            int32_t tmpD15 = 0;
            srcS5 = objC29 + valA44;
            tmpD15 = *(dstD + (ctxB6 << 1));
            char objC33 = v_2fc;
            v_180[i] = srcS5;
            dstD = (tmpD15 << 5) + objC1;
            v_100[i] = dstD;
            v_200[i] = v_304;
            ctxB6 = *(((((valA12 >> (objC33 & 0x1f) & 1) << 1 | (ctxB2 >> (objC33 & 0x1f) & 1))
                + (srcS5 << 3)) << 2) + &g_548060) | (objC6 >> (objC33 & 0x1f) & 1) << 2;
            char objC36 = *(dstD + 0x18);
            v_280[i] = (ctxB6 >> 2 & 1) ^ a4;
            valA26 = v_308;
            v_80[i] = valA26;

            if (!(1 << (ctxB6 & 0x1f) & objC36))
                break;

            tmpD5 = v_2f4_1;
        }
    }

    int32_t v_2f8_3 = v_2fc - 1;

    while (true)
    {
        if (i == 0x10)
        {
            double v_298 = (ctxB1 & 0xffff8000) - ctxB + v_2ec;
            double v_290_1 = (valA11 & 0xffff8000) - srcS2 + v_2ec;
            double v_288_1 = v_304 - valA8;
            int32_t v_2b0;

            if (DynObj_InsertHashItem_10(*(dstD + 0x1c), &v_298, a3, &v_2b0, i, &v_300, srcS5, a4,
                &v_2e8))
            {
                double v_2a0;
                long double x87_r7_13 = a3[2] - v_2a0;
                long double f7_1 = 0.0;
                x87_r7_13 - f7_1;

                if (*(&((x87_r7_13 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_13, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_13 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    x87_r7_13 = -(x87_r7_13);

                long double x87_r6_1 = a5;
                x87_r7_13 - x87_r6_1;

                if (!(*(&((x87_r7_13 < x87_r6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_13, x87_r6_1) ? 1 : 0) << 0xa
                        | (x87_r7_13 == x87_r6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    break;

                void* dstD8 = v_300 ^ 1;
                *(a1 + 0x38) = v_2e8;
                *(a1 + 0x3c) = v_2e4;
                *(a1 + 8) = v_2b0;
                *(a1 + 0x40) = v_2e0;
                int32_t v_2a8;
                *(a1 + 0x10) = v_2a8;
                int32_t v_2ac;
                *(a1 + 0xc) = v_2ac;
                int32_t v_2a4;
                *(a1 + 0x14) = v_2a4;
                *(a1 + 0x18) = v_2a0;
                *(a1 + 0x1c) = *(&v_2a0 + 4);
                long double x87_r7_16 = a3[2] - v_2a0;
                long double f8 = 0.0;
                x87_r7_16 - f8;

                if (*(&((x87_r7_16 < f8 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_16, f8) ? 1 : 0) << 0xa
                        | (x87_r7_16 == f8 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    x87_r7_16 = -(x87_r7_16);

                *(a1 + 0x58) = 1;
                *(a1 + 0x60) = x87_r7_16;

                if (a7)
                {
                    void* valA95 = DynObj_ParseConfigFile_10(a2[7], a1 + 8);
                    void* objC68 = v_300;

                    if (objC68)
                    {
                        objC68 = valA95;
                        v_300 = objC68;
                    }

                    if (dstD8)
                        dstD8 = valA95;

                    *(a1 + 0x4c) = *(a2[7] + (objC68 << 2) + 0xd3c);
                    *(a1 + 0x50) = *(a2[7] + (dstD8 << 2) + 0xd3c);
                }

                DynObj_LinkDynamicCube_6();
                return 1;
            }
        }

        int32_t valA63 = v_280[i];

        if (valA63 && i < 0x10)
        {
            char objC43 = v_2fc;
            v_280[i] = valA63 - 1;
            int32_t valA65 = (valA63 - 1) ^ a4;
            int32_t valA68 = ctxB2 >> (objC43 & 0x1f) & 1;
            int32_t objC45 = *((((((valA12 >> (objC43 & 0x1f) & 1) | (valA65 * 2)) << 1 | valA68)
                + (srcS5 << 3)) << 2) + &g_548060);
            int32_t tmpD41 = (valA12 >> (v_2f8_3 & 0x1f) & 2) | valA65 << 2 | valA68;

            if (!(*(dstD + 0x18) & 1 << (objC45 & 0x1f)))
                continue;
            else
            {
                i += 1;
                int32_t valA71 = v_2ec >> 1;
                v_2ec = valA71;
                v_2fc -= 1;
                v_2f8_3 -= 1;
                int32_t objC54;

                objC54 = !valA65 ? v_304 - valA71 : v_304 + valA71;

                v_304 = objC54;
                int32_t valA72 = 0;
                valA72 = *(objC45 + dstD + 0x10);

                srcS5 = srcS5 >= 4 ? ((srcS5 - (valA72 & 3)) & 3) + ((valA72 ^ srcS5) & 4)
                    : ((valA72 ^ srcS5) & 4) + ((valA72 + srcS5) & 3);

                int32_t valA77 = 0;
                v_280[i] = 2;
                v_180[i] = srcS5;
                valA77 = *(dstD + (objC45 << 1));
                v_200[i] = v_304;
                dstD = (valA77 << 5) + objC1;
                bool cond_6_1 = !g_b97d20;
                v_100[i] = dstD;
                void* valA80;

                if (cond_6_1)
                    valA80 = v_308;
                else
                {
                    valA80 = v_308;

                    if (valA80)
                    {
                        if (!i)
                            tmpD41 = 7 - tmpD41;

                        void* tmpD42 = *(valA80 + (tmpD41 << 2) + 0xc);
                        v_308 = tmpD42;

                        if (tmpD42 && *(tmpD42 + 0x38) & 0x80)
                        {
                            void* i_1 = *(tmpD42 + 0x2c);

                            do
                            {
                                if (*(i_1 + 0x5c) & 0x80)
                                {
                                    int32_t objC64 = 0;
                                    objC64 = *(i_1 + 0x1c);
                                    (*((objC64 << 2) + &g_a9c4e0))(i_1, *(i_1 + 0x48));
                                }

                                i_1 = *(i_1 + 0x58);
                            } while (i_1);
                        }

                        valA80 = v_308;
                    }
                }

                v_80[i] = valA80;
                continue;
            }
        }

        i -= 1;
        v_2ec <<= 1;
        v_2fc += 1;
        v_2f8_3 += 1;

        if (i < a6)
            break;

        if (g_b97d20 && v_308 && *(v_308 + 0x38) & 0x100)
        {
            void* i_2 = *(v_308 + 0x2c);

            do
            {
                if (*(i_2 + 0x5c) & 0x100)
                {
                    int32_t valA85 = 0;
                    valA85 = *(i_2 + 0x1c);
                    (*((valA85 << 2) + &g_a9cae0))(i_2, *(i_2 + 0x48));
                }

                i_2 = *(i_2 + 0x58);
            } while (i_2);
        }

        dstD = v_100[i];
        srcS5 = v_180[i];
        v_304 = v_200[i];
        v_308 = v_80[i];
    }

    DynObj_LinkDynamicCube_6();
    return 0;
}
