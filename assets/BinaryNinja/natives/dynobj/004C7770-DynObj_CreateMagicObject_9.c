#include "DynObj_CreateMagicObject_9.h"
uint32_t DynObj_CreateMagicObject_9(int32_t a1, char a2, int32_t a3, double* a4, double* a5, int32_t a6, int32_t a7)

{
    int16_t v_4d4 = -1;
    DynObj_InsertHashItem_12(a1, a7);
    uint32_t result = a2;
    uint32_t result_2 = result;

    if (*(a1 + ((result + a7 * 0xfe) << 1) + 0x118))
    {
        double v_478;
        memcpy(&v_478, a4, 0x18);
        int32_t v_50c_1 = v_478;
        double v_490;
        memcpy(&v_490, a5, 0x18);
        int32_t valA3 = *(a1 + 0xde0);
        int32_t objC4 = v_50c_1 + valA3;
        int32_t dstD2 = v_490 + valA3;
        int32_t objC5 = *(a1 + 0xde4);
        double v_470;
        int32_t tmpD2 = v_470 + objC5;
        int32_t tmpD3 = *(a1 + 0xde8);
        double v_468;
        int32_t srcS4 = v_468 + tmpD3;
        double v_488;
        int32_t srcS6 = v_488 + objC5;
        double v_480;
        int32_t objC7 = v_480 + tmpD3;
        int32_t objC9 = *(result_2 + 0xa969e0);

        if (objC9 != 0xffffffff)
            v_4d4 = 1 << (objC9 & 0x1f);

        DynObj_LookupHashItem_12(a1, a7);
        int32_t valA5 = *(a1 + (a7 << 2) + 0x28);
        int32_t v_460;
        memcpy(&v_460, valA5, 0x40);
        int32_t objC14 = *(a1 + (a7 << 2) + 0xd0);
        int32_t v_4f4_1 = objC14;
        int32_t v_510_1 = v_460;
        char v_430;

        if (objC14 != 0x1e)
            objC14 = v_430;
        else
        {
            memcpy(&v_460, valA5, 0x40);
            char v_430_1 = 0;
            int32_t i = 0;
            int32_t v_500_1 = 7;
            void v_438;
            int32_t* valA6 = &v_438;
            void v_454;
            int32_t* dstD3 = &v_454;

            do
            {
                int32_t objC12 = *dstD3;
                *dstD3 = *valA6;
                *valA6 = objC12;
                objC14 = v_500_1;
                dstD3 = &dstD3[1];
                valA6 -= 4;
                char tmpD9 = (v_430 >> (i & 0x1f) & 1) << (objC14 & 0x1f);
                objC14 = v_430_1;
                objC14 |= tmpD9;
                i += 1;
                v_430_1 = objC14;
                v_500_1 -= 1;
            } while (i < 4);
        }
        long double x87_r7_7 = *(a1 + 0xde0);
        int32_t tmpD12 = a7 * 3;
        int32_t* v_3f0 = &v_460;
        uint8_t valA8 = objC14;
        uint32_t result_1 = 1;
        uint8_t v_3eb_1 = valA8;
        char v_3ea_1 = 0;
        int32_t v_50c_7 = x87_r7_7 + *(a1 + (tmpD12 << 3) + 0x40);
        int32_t v_3e8_1 = v_50c_7;
        int32_t v_50c_8 = *(a1 + 0xde4) + *(a1 + ((a7 * 3 + 9) << 3));
        int32_t v_3e4_1 = v_50c_8;
        int64_t v_50c_9 = *(a1 + 0xde8) + *(a1 + (tmpD12 << 3) + 0x50);
        int32_t tmpD14 = v_50c_9;
        int32_t v_3e0_1 = tmpD14;
        uint8_t v_3eb_2;

        if (dstD2 <= v_50c_7)
        {
            objC14 &= 0x55;
            valA8 = objC14;
            v_3eb_2 = valA8;
        }
        else if (objC4 >= v_50c_7)
        {
            objC14 &= 0xaa;
            valA8 = objC14;
            v_3eb_2 = valA8;
        }
        uint8_t v_3eb_3;

        if (srcS6 <= v_50c_8)
        {
            valA8 &= 0x33;
            v_3eb_3 = valA8;
        }
        else if (tmpD2 >= v_50c_8)
        {
            valA8 &= 0xcc;
            v_3eb_3 = valA8;
        }
        uint8_t v_3eb_4;

        if (objC7 <= tmpD14)
        {
            valA8 &= 0xf;
            v_3eb_4 = valA8;
        }
        else if (srcS4 >= tmpD14)
        {
            valA8 &= 0xf0;
            v_3eb_4 = valA8;
        }

        if (!(valA8 & 0xf))
        {
            if (!(valA8 & 0x30))
                valA8 = (valA8 >> 6 & 1) + 6;
            else
                valA8 = (valA8 >> 4 & 1) + 4;
        }
        else if (!(valA8 & 3))
            valA8 = (valA8 >> 2 & 1) + 2;
        else
            valA8 &= 1;

        int32_t* srcS13 = &v_3f0;
        uint32_t result_3 = result_2;
        uint8_t v_3ec_1 = valA8 ^ 1;
        int32_t v_4fc_1 = v_4f4_1 - 1;
        int16_t valA11 = v_4d4;

        while (true)
        {
            objC14 = *(srcS13 + 5);
            void* tmpD15 = *srcS13;
            int32_t* v_504_1;

            if (objC14)
            {
                valA11 = srcS13[1];
                uint32_t objC26 = valA11;
                void* ctxB1 = *(tmpD15 + (objC26 << 2) + 0xc);
                char objC27 = *(srcS13 + 5) ^ 1 << (objC26 & 0x1f);
                *(srcS13 + 5) = objC27;

                if (objC27)
                {
                    if (!(objC27 & 0xf))
                    {
                        if (!(objC27 & 0x30))
                            srcS13[1] = (*(srcS13 + 5) >> 6 & 1) + 6;
                        else
                            srcS13[1] = (*(srcS13 + 5) >> 4 & 1) + 4;
                    }
                    else if (!(objC27 & 3))
                        srcS13[1] = (*(srcS13 + 5) >> 2 & 1) + 2;
                    else
                        srcS13[1] = objC27 & 1;

                    srcS13[1] ^= 1;
                }

                objC14 = v_4fc_1 - 1;
                v_4f4_1 -= 1;
                result_1 += 1;
                uint8_t valA22 = *(ctxB1 + 0x30);
                v_4fc_1 = objC14;
                v_510_1 u>>= 1;
                srcS13[5] = ctxB1;
                *(srcS13 + 0x19) = valA22;
                objC14 = *(srcS13 + 6);
                v_504_1 = &srcS13[5];

                if (!objC14)
                {
                    uint8_t ctxB2 = valA22;
                    *(v_504_1 + 6) = 0;

                    if (ctxB2)
                    {
                        char objC29 = v_4f4_1;
                        uint32_t valA27 = valA11 * 0xc;
                        int32_t* srcS19 = v_504_1;
                        srcS19[2] = (*(valA27 + 0x548000) << (objC29 & 0x1f)) + srcS13[2];
                        int32_t valA29 = *(valA27 + 0x548008) << (v_4f4_1 & 0x1f);
                        srcS19[3] = (*(valA27 + &g_548004) << (objC29 & 0x1f)) + srcS13[3];
                        int32_t valA30 = valA29 + srcS13[4];
                        objC14 = srcS19[2];
                        srcS19[4] = valA30;

                        if (dstD2 <= objC14)
                            ctxB2 &= 0x55;
                        else if (objC4 >= objC14)
                            ctxB2 &= 0xaa;

                        int32_t tmpD31 = srcS19[3];

                        if (srcS6 <= tmpD31)
                            ctxB2 &= 0x33;
                        else if (tmpD2 >= tmpD31)
                            ctxB2 &= 0xcc;

                        if (objC7 <= valA30)
                            ctxB2 &= 0xf;
                        else if (srcS4 >= valA30)
                            ctxB2 &= 0xf0;

                        if (ctxB2)
                        {
                            void** tmpD33 = ctxB1 + 0xc;
                            int32_t v_4ec_1 = 0;
                            int32_t* i_1 = &g_548004;
                            void** v_4f8_2 = tmpD33;

                            do
                            {
                                if (ctxB2 & 1 << (v_4ec_1 & 0x1f))
                                {
                                    void* valA32 = *v_4f8_2;
                                    tmpD33 = *(valA32 + 0x3a);
                                    tmpD33 |= *(valA32 + 0x38);

                                    if (tmpD33 & v_4d4)
                                    {
                                        void* tmpD35 = *(valA32 + 0x3c);

                                        if (tmpD35)
                                        {
                                            long double x87_r7_26 = *a5 - *a4;
                                            long double f6_1 = 4.0;
                                            x87_r7_26 - f6_1;
                                            long double x87_r6_2;
                                            long double f7_1;

                                            if (*(&((x87_r7_26 < f6_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_26, f6_1) ? 1 : 0) << 0xa
                                                | (x87_r7_26 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 0x41)
                                            {
                                                x87_r6_2 = a5[1] - a4[1];
                                                f7_1 = 4.0;
                                                x87_r6_2 - f7_1;
                                            }

                                            if (!(*(&((x87_r7_26 < f6_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_26, f6_1) ? 1 : 0) << 0xa
                                                | (x87_r7_26 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 0x41) || !(*(&((x87_r6_2 < f7_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r6_2, f7_1) ? 1 : 0) << 0xa
                                                | (x87_r6_2 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 0x41))
                                            {
                                                *(&v_50c_9 + 4) = 0;
                                                double v_418_1 = (*i_1 << (v_4fc_1 & 0x1f))
                                                    - *(a1 + 0xde4) + tmpD31;
                                                v_50c_9 = **v_4f8_2;
                                                float v_4f0_2 = v_50c_9;
                                                float v_514_7 = *(tmpD35 + 8) * 0.5f / v_4f0_2;
                                                float v_4a8 = (*a4 - ((i_1[-1]
                                                    << (v_4fc_1 & 0x1f)) - *(a1 + 0xde0) + objC14)
                                                    + v_4f0_2) * v_514_7;
                                                float v_4a4_1 =
                                                    (a4[1] - v_418_1 + v_4f0_2) * v_514_7;
                                                float v_4a0 = v_514_7 * x87_r7_26;

                                                if (!SoundSys_LoadSoundDef_3(tmpD35, v_4a8, v_4a4_1,
                                                        v_4a0, (a5[1] - a4[1]) * v_514_7))
                                                    ctxB2 &= ~(1 << (v_4ec_1 & 0x1f));
                                            }
                                            else
                                            {
                                                int32_t v_494_1 = 0;
                                                int32_t valA43 = *(tmpD35 + 8);
                                                float v_4f0_1 = **v_4f8_2;
                                                float v_514_4 = valA43 * 0.5f / v_4f0_1;
                                                int32_t v_4b0_1 = (*a4 - ((i_1[-1]
                                                    << (v_4fc_1 & 0x1f)) - *(a1 + 0xde0) + objC14)
                                                    + v_4f0_1) * v_514_4;
                                                int32_t v_4b0_2 = (a4[1] - ((*i_1
                                                    << (v_4fc_1 & 0x1f)) - *(a1 + 0xde4) + tmpD31)
                                                    + v_4f0_1) * v_514_4;

                                                if (v_4b0_1 < valA43 && v_4b0_2 < valA43 &&
                                                        !SoundSys_InitSoundSys_3(tmpD35, v_4b0_1, v_4b0_2))
                                                    ctxB2 &= ~(1 << (v_4ec_1 & 0x1f));
                                            }
                                        }
                                    }
                                    else
                                        ctxB2 &= ~(1 << (v_4ec_1 & 0x1f));
                                }

                                i_1 = &i_1[3];
                                tmpD33 = &v_4f8_2[1];
                                v_4ec_1 += 1;
                                v_4f8_2 = tmpD33;
                            } while (i_1 < 0x548064);

                            srcS19 = v_504_1;
                        }

                        *(srcS19 + 5) = ctxB2;

                        if (ctxB2)
                        {
                            if (!(ctxB2 & 0xf))
                            {
                                if (!(ctxB2 & 0x30))
                                    ctxB2 = (ctxB2 >> 6 & 1) + 6;
                                else
                                    ctxB2 = (ctxB2 >> 4 & 1) + 4;
                            }
                            else if (!(ctxB2 & 3))
                                ctxB2 = (ctxB2 >> 2 & 1) + 2;
                            else
                                ctxB2 &= 1;

                            srcS19[1] = ctxB2;
                            srcS19[1] = ctxB2 ^ 1;
                        }

                        if (dstD2 >= v_510_1 + objC14)
                        {
                            objC14 -= v_510_1;

                            if (objC4 <= objC14)
                            {
                                objC14 = srcS6;

                                if (objC14 >= tmpD31 + v_510_1)
                                {
                                    objC14 = v_510_1;

                                    if (tmpD2 <= tmpD31 - objC14)
                                    {
                                        int32_t valA67 = v_504_1[4];
                                        objC14 = valA67 + v_510_1;

                                        if (objC7 >= objC14)
                                        {
                                            objC14 = srcS4;

                                            if (objC14 <= valA67 - v_510_1)
                                                *(v_504_1 + 6) = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    *(srcS13 + 0x1a) = 1;

                    if (valA22 > 0)
                    {
                        if (!(valA22 & 0xf))
                        {
                            if (!(valA22 & 0x30))
                            {
                                srcS13[6] = (valA22 >> 6 & 1) + 6;
                                srcS13[6] = ((valA22 >> 6 & 1) + 6) ^ 1;
                            }
                            else
                            {
                                srcS13[6] = (valA22 >> 4 & 1) + 4;
                                srcS13[6] = ((valA22 >> 4 & 1) + 4) ^ 1;
                            }
                        }
                        else if (!(valA22 & 3))
                        {
                            srcS13[6] = (valA22 >> 2 & 1) + 2;
                            srcS13[6] = ((valA22 >> 2 & 1) + 2) ^ 1;
                        }
                        else
                        {
                            valA22 &= 1;
                            srcS13[6] = valA22;
                            srcS13[6] = valA22 ^ 1;
                        }
                    }
                }
            }
            else
            {
                objC14 = *(srcS13 + 6);
                bool cond_4_1 = !objC14;
                objC14 = *(tmpD15 + 0x38);

                if (cond_4_1)
                {
                    if (objC14 & valA11)
                    {
                        for (void* i_2 = *(tmpD15 + 0x2c); i_2; i_2 = *(i_2 + 0x58))
                        {
                            float tmpD21 = *(i_2 + 0x44);
                            long double x87_r7_14 = *(i_2 + 0x20) - tmpD21;
                            long double f0_1 = v_490;
                            x87_r7_14 - f0_1;

                            if (*(&((x87_r7_14 < f0_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_14, f0_1) ? 1 : 0) << 0xa
                                | (x87_r7_14 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double x87_r7_16 = tmpD21 + *(i_2 + 0x20);
                                long double f1_1 = v_478;
                                x87_r7_16 - f1_1;

                                if (!(*(&((x87_r7_16 < f1_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_16, f1_1) ? 1 : 0) << 0xa
                                    | (x87_r7_16 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_18 = *(i_2 + 0x28) - tmpD21;
                                    long double f2_1 = v_488;
                                    x87_r7_18 - f2_1;

                                    if (*(&((x87_r7_18 < f2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_18, f2_1) ? 1 : 0) << 0xa
                                        | (x87_r7_18 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double x87_r7_20 = tmpD21 + *(i_2 + 0x28);
                                        long double f3_1 = v_470;
                                        x87_r7_20 - f3_1;

                                        if (!(*(&((x87_r7_20 < f3_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_20, f3_1) ? 1 : 0) << 0xa
                                            | (x87_r7_20 == f3_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double x87_r7_22 = *(i_2 + 0x30) - tmpD21;
                                            long double f4_1 = v_480;
                                            x87_r7_22 - f4_1;

                                            if (*(&((x87_r7_22 < f4_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_22, f4_1) ? 1 : 0) << 0xa
                                                | (x87_r7_22 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                                long double x87_r7_24 = tmpD21 + *(i_2 + 0x30);
                                                long double f5_1 = v_468;
                                                x87_r7_24 - f5_1;

                                                if (!(*(&((x87_r7_24 < f5_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_24, f5_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_24 == f5_1 ? 1 : 0) << 0xe) + 1) & 1))
                                                {
                                                    int32_t valA15 = 0;
                                                    valA15 = *(i_2 + 0x1c);

                                                    if (*(valA15 * 0x30 + 0xaf5f0c) & a6)
                                                    {
                                                        int32_t valA16 = *(
                                                            ((result_3 * 0x180 + valA15) << 2) +
                                                            &g_a96ae0);

                                                        if (valA16)
                                                            valA16(i_2, a3);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else if (objC14 & valA11)
                {
                    for (void* i_3 = *(tmpD15 + 0x2c); i_3; i_3 = *(i_3 + 0x58))
                    {
                        int32_t valA12 = 0;
                        valA12 = *(i_3 + 0x1c);

                        if (*(valA12 * 0x30 + 0xaf5f0c) & a6)
                        {
                            int32_t valA13 = *(((result_3 * 0x180 + valA12) << 2) + &g_a96ae0);

                            if (valA13)
                                valA13(i_3, a3);
                        }
                    }
                }

                v_504_1 = srcS13 - 0x14;
                objC14 = v_510_1 << 1;
                v_4f4_1 += 1;
                v_4fc_1 += 1;
                v_510_1 = objC14;
                result_1 -= 1;
            }

            result = result_1;

            if (!result)
                break;

            result_3 = result_2;
            valA11 = v_4d4;
            srcS13 = v_504_1;
        }
    }

    return result;
}
