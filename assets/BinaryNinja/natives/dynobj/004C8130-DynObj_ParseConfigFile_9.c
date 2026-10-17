// Original IGI.EXE function: DynObj_ParseConfigFile_9 (VA 0x004C8130; static CFG gate PASS, CFG score 0.905).
#include "DynObj_ParseConfigFile_9.h"
uint32_t DynObj_ParseConfigFile_9(float a1, double* a2, void* const a3 @ 0x10, float a4, double* a5, double* a6 @ 0x20, char a7 @ 0x144)

{
    double* flagP;
    double* v_4 = flagP;
    Camera_UpdateTransform_5(0x2574);
    int32_t* arg_184;
    int32_t* ctxB = &arg_184;
    int32_t arg_48 = 0xffff;
    DynObj_InsertHashItem_12(a1, a6);
    uint32_t result = a2;
    uint32_t result_1 = result;

    if (*(a1 + ((result + a6 * 0xfe) << 1) + 0x118))
    {
        void* const srcS1 = a3;
        void arg_56c;
        void arg_1370;

        if (a5 > 0)
        {
            double* tmpD1 = a4;
            double* objC3 = srcS1 + 8;
            void* dstD1 = &arg_56c;
            double* srcS3 = tmpD1 - a3;
            float* valA2 = &arg_1370;
            v_4 = a5;
            bool cond_2_1;

            do
            {
                long double x87_r7_2 = *tmpD1 - objC3[-1];
                tmpD1 = &tmpD1[3];
                valA2[-1] = x87_r7_2;
                *valA2 = *(srcS3 + objC3) - *objC3;
                long double x87_r7_6 = tmpD1[-1] - objC3[1];
                valA2[1] = x87_r7_6;
                objC3 = &objC3[3];
                long double x87_r6_1 = *valA2;
                long double x87_r5_1 = valA2[-1];
                valA2 = &valA2[3];
                dstD1 += 4;
                cond_2_1 = v_4 != 1;
                v_4 -= 1;
                *(dstD1 - 4) =
                    1f / (x87_r5_1 * x87_r5_1 + x87_r7_6 * x87_r7_6 + x87_r6_1 * x87_r6_1);
            } while (cond_2_1);
            srcS1 = a3;
        }

        long double x87_r7_9 = -1.7976931348623157e+308;
        float valA3 = a5;
        int32_t arg_78 = 0xffffffff;
        double arg_ac = x87_r7_9;
        int32_t arg_7c = 0x7fefffff;
        int32_t arg_80 = 0xffffffff;
        int32_t arg_84 = 0x7fefffff;
        int32_t arg_88 = 0xffffffff;
        int32_t arg_8c = 0x7fefffff;
        int32_t arg_9c = 0xffffffff;
        int32_t arg_a0 = 0xffefffff;
        int32_t arg_a4 = 0xffffffff;
        int32_t arg_a8 = 0xffefffff;
        double arg_24;
        float arg_30;
        int32_t* arg_3c;
        int32_t arg_4c;
        double arg_94;
        double arg_b4;
        void arg_76c;
        void arg_774;
        void arg_196c;
        void arg_1974;

        if (valA3 > 0)
        {
            double* objC4 = srcS1 + 8;
            v_4 = &arg_1974 - srcS1;
            double* tmpD4 = a4 - srcS1;
            arg_30 = valA3;
            double* srcS8 = tmpD4;
            double* tmpD7 = nullptr;
            bool cond_15_1;

            do
            {
                long double x87_r6_3 = objC4[-1];
                long double f2_1 = *(tmpD7 + a4);
                x87_r6_3 - f2_1;
                long double x87_r6_4;

                if (!(*(&((x87_r6_3 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_3, f2_1) ? 1 : 0) << 0xa
                        | (x87_r6_3 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    x87_r6_4 = *(tmpD7 + a4);
                else
                    x87_r6_4 = objC4[-1];

                arg_24 = x87_r6_4;
                *(&arg_196c + tmpD7) = x87_r6_4;
                long double x87_r6_5 = *objC4;
                long double x87_r5_3 = *(srcS8 + objC4);
                x87_r5_3 - x87_r6_5;
                long double x87_r6_6;

                if (*(&((x87_r5_3 < x87_r6_5 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_3, x87_r6_5) ? 1 : 0) << 0xa
                        | (x87_r5_3 == x87_r6_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    x87_r6_6 = *(srcS8 + objC4);
                else
                    x87_r6_6 = *objC4;

                arg_b4 = x87_r6_6;
                *(v_4 + objC4 - 8) = x87_r6_6;
                long double x87_r6_7 = objC4[1];
                long double x87_r5_4 = *(tmpD7 + a4 + 0x10);
                x87_r5_4 - x87_r6_7;
                long double x87_r6_8;

                if (*(&((x87_r5_4 < x87_r6_7 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_4, x87_r6_7) ? 1 : 0) << 0xa
                        | (x87_r5_4 == x87_r6_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    x87_r6_8 = *(tmpD7 + a4 + 0x10);
                else
                    x87_r6_8 = objC4[1];

                arg_94 = x87_r6_8;
                *(v_4 + objC4) = x87_r6_8;
                long double x87_r6_9 = objC4[-1];
                long double f3_1 = *(tmpD7 + a4);
                x87_r6_9 - f3_1;
                long double x87_r6_10;

                if (*(&((x87_r6_9 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_9, f3_1) ? 1 : 0) << 0xa
                        | (x87_r6_9 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    x87_r6_10 = *(tmpD7 + a4);
                else
                    x87_r6_10 = objC4[-1];

                *(&arg_76c + tmpD7) = x87_r6_10;
                long double x87_r5_5 = *objC4;
                long double x87_r4_5 = *(srcS8 + objC4);
                x87_r4_5 - x87_r5_5;
                long double x87_r5_6;

                if (!(*(&((x87_r4_5 < x87_r5_5 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r4_5, x87_r5_5) ? 1 : 0) << 0xa
                        | (x87_r4_5 == x87_r5_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    x87_r5_6 = *(srcS8 + objC4);
                else
                    x87_r5_6 = *objC4;

                arg_4c = x87_r5_6;
                *(&arg_76c - srcS1 + objC4) = x87_r5_6;
                long double x87_r5_7 = objC4[1];
                long double x87_r4_6 = *(tmpD7 + a4 + 0x10);
                x87_r4_6 - x87_r5_7;
                long double x87_r5_8;

                if (!(*(&((x87_r4_6 < x87_r5_7 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r4_6, x87_r5_7) ? 1 : 0) << 0xa
                        | (x87_r4_6 == x87_r5_7 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    x87_r5_8 = *(tmpD7 + a4 + 0x10);
                else
                    x87_r5_8 = objC4[1];

                arg_3c = x87_r5_8;
                *(&arg_774 - srcS1 + objC4) = x87_r5_8;
                long double x87_r5_9 = arg_24;
                long double f6_1 = arg_78;
                x87_r5_9 - f6_1;

                if (*(&((x87_r5_9 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_9, f6_1) ? 1 : 0) << 0xa
                    | (x87_r5_9 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                {
                    arg_7c = *(&arg_24 + 4);
                    srcS8 = tmpD4;
                    arg_78 = arg_24;
                }

                long double x87_r5_10 = arg_b4;
                long double f8_1 = 2.1219957904712067e-314;
                x87_r5_10 - f8_1;

                if (*(&((x87_r5_10 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_10, f8_1) ? 1 : 0) << 0xa
                        | (x87_r5_10 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                    arg_80 = arg_b4;

                long double x87_r5_12 = arg_94;
                long double f10_1 = 2.1219957904712067e-314;
                x87_r5_12 - f10_1;

                if (*(&((x87_r5_12 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_12, f10_1) ? 1 : 0) << 0xa
                        | (x87_r5_12 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                    arg_88 = arg_94;

                long double f12_1 = arg_9c;
                x87_r6_10 - f12_1;

                if (!(*(&((x87_r6_10 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_10, f12_1) ? 1 : 0) << 0xa
                        | (x87_r6_10 == f12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    arg_9c = x87_r6_10;

                long double x87_r6_12 = arg_4c;
                long double f15_1 = 2.1219957904712067e-314;
                x87_r6_12 - f15_1;

                if (!(*(&((x87_r6_12 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_12, f15_1) ? 1 : 0) << 0xa
                        | (x87_r6_12 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    arg_a4 = arg_4c;

                long double x87_r6_14 = arg_3c;
                x87_r6_14 - x87_r7_9;

                if (!(*(&((x87_r6_14 < x87_r7_9 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_14, x87_r7_9) ? 1 : 0) << 0xa
                        | (x87_r6_14 == x87_r7_9 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    x87_r7_9 = arg_3c;

                tmpD7 = &tmpD7[3];
                objC4 = &objC4[3];
                cond_15_1 = arg_30 != 1;
                arg_30 -= 1;
            } while (cond_15_1);
            arg_ac = x87_r7_9;
        }

        int32_t valA16 = *(a1 + 0xde0);
        double* arg_64 = arg_78 + valA16;
        int32_t objC7 = *(a1 + 0xde4);
        int32_t tmpD11 = *(a1 + 0xde8);
        int32_t objC10 = *(result_1 + 0xa969e0);

        if (objC10 != 0xffffffff)
            arg_48 = 1 << (objC10 & 0x1f);

        DynObj_LookupHashItem_12(a1, a6);
        int32_t valA19 = *(a1 + (a6 << 2) + 0x28);
        int32_t arg_114;
        memcpy(&arg_114, valA19, 0x40);
        int32_t objC12 = *(a1 + (a6 << 2) + 0xd0);
        int32_t arg_1c = objC12;
        arg_4c = arg_114;

        if (objC12 == 0x1e)
        {
            a5 = a7;
            memcpy(&arg_114, valA19, 0x40);
            a7 = 0;
            int32_t i = 0;
            v_4 = 7;
            void arg_13c;
            int32_t* valA20 = &arg_13c;
            void arg_120;
            int32_t* dstD8 = &arg_120;

            do
            {
                int32_t objC15 = *dstD8;
                *dstD8 = *valA20;
                *valA20 = objC15;
                dstD8 = &dstD8[1];
                valA20 -= 4;
                char objC18 = a7 | (a5 >> (i & 0x1f) & 1) << (v_4 & 0x1f);
                i += 1;
                a7 = objC18;
                v_4 -= 1;
            } while (i < 4);
        }

        a2 = 1;
        long double x87_r7_11 = *(a1 + 0xde0);
        arg_184 = &arg_114;
        void* valA21 = a6 * 3;
        char arg_18a = 0;
        int32_t srcS17 = (x87_r7_11 + *(a1 + (valA21 << 3) + 0x40));
        int32_t arg_18c = srcS17;
        int32_t dstD9 = (*(a1 + 0xde4) + *(a1 + ((a6 * 3 + 9) << 3)));
        int32_t arg_190 = dstD9;
        result = arg_9c + valA16 < srcS17;
        int64_t arg_c = *(a1 + 0xde8) + *(a1 + (valA21 << 3) + 0x50);
        result = *(result + 0x548160);
        int32_t objC22 = arg_c;
        result &= a7;
        int32_t arg_194 = objC22;
        result &= *((arg_64 > srcS17) + 0x548164);
        result &= *((2.1219957904712067e-314 + objC7 < dstD9) + 0x548168);
        result &= *((2.1219957904712067e-314 + objC7 > dstD9) + 0x54816c);
        result &= *((x87_r7_9 + tmpD11 < objC22) + 0x548170);
        result &= *((2.1219957904712067e-314 + tmpD11 > objC22) + 0x548174);
        char arg_189 = result;

        if (!(result & 0xf))
        {
            if (!(result & 0x30))
            {
                result u>>= 6;
                result &= 1;
                result += 6;
            }
            else
            {
                result u>>= 4;
                result &= 1;
                result += 4;
            }
        }
        else if (!(result & 3))
        {
            result u>>= 2;
            result &= 1;
            result += 2;
        }
        else
            result &= 1;

        uint32_t result_2 = result_1;
        int16_t objC25 = arg_48;
        result ^= 1;
        int32_t tmpD34 = arg_1c - 1;
        char arg_188 = result;
        int32_t arg_38 = tmpD34;

        while (true)
        {
            result = *(ctxB + 5);
            int32_t* arg_2c;

            if (result)
            {
                result = ctxB[1];
                uint32_t dstD12 = result;
                arg_b4 = result;
                void* srcS20 = *(*ctxB + (dstD12 << 2) + 0xc);
                uint8_t valA34 = *(ctxB + 5) ^ 1 << (dstD12 & 0x1f);
                *(ctxB + 5) = valA34;

                if (valA34)
                {
                    if (!(valA34 & 0xf))
                    {
                        if (!(valA34 & 0x30))
                            ctxB[1] = (*(ctxB + 5) >> 6 & 1) + 6;
                        else
                            ctxB[1] = (*(ctxB + 5) >> 4 & 1) + 4;
                    }
                    else if (!(valA34 & 3))
                        ctxB[1] = (*(ctxB + 5) >> 2 & 1) + 2;
                    else
                        ctxB[1] = valA34 & 1;

                    ctxB[1] ^= 1;
                }

                arg_1c -= 1;
                tmpD34 = ctxB;
                a2 += 1;
                uint8_t valA37 = *(srcS20 + 0x30);
                arg_38 -= 1;
                arg_4c u>>= 1;
                ctxB[5] = srcS20;
                *(ctxB + 0x19) = valA37;
                arg_2c = &ctxB[5];

                if (!*(tmpD34 + 6))
                {
                    uint8_t v_5_1 = valA37;
                    *(ctxB + 0x1a) = 0;

                    if (valA37)
                    {
                        uint32_t valA41 = arg_b4 * 0xc;
                        ctxB[7] = (*(valA41 + 0x548000) << (arg_1c & 0x1f)) + *(tmpD34 + 8);
                        int32_t valA43 = *(valA41 + 0x548008) << (arg_1c & 0x1f);
                        ctxB[8] = (*(valA41 + &g_548004) << (arg_1c & 0x1f)) + *(tmpD34 + 0xc);
                        int32_t valA44 = valA43 + *(tmpD34 + 0x10);
                        int32_t objC50 = ctxB[7];
                        arg_94 = objC50;
                        ctxB[9] = valA44;
                        double* ctxB3 = ctxB[8];
                        double arg_fc = objC50 - *(a1 + 0xde0);
                        double arg_104 = ctxB3 - *(a1 + 0xde4);
                        int32_t arg_e8 = 0;
                        double arg_10c = valA44 - *(a1 + 0xde8);
                        long double x87_r7_32 = (arg_4c >> 1);
                        a6 = nullptr;
                        v_4 = &g_548004;
                        arg_3c = srcS20 + 0xc;
                        arg_30 = x87_r7_32;
                        a4 = x87_r7_32 * 1.73205078f;
                        uint8_t ctxB5;
                        bool cond_12_1;

                        do
                        {
                            double* objC52 = a6;
                            ctxB5 = v_5_1;
                            tmpD34 = 1 << (objC52 & 0x1f);

                            if (ctxB5 & tmpD34)
                            {
                                tmpD34 = arg_48;
                                void* valA49 = *arg_3c;
                                objC52 = *(valA49 + 0x3a);
                                objC52 |= *(valA49 + 0x38);

                                if (!(objC52 & tmpD34))
                                {
                                label_4c8f75:
                                    tmpD34 = 1;
                                    tmpD34 = 1 << (a6 & 0x1f);
                                    tmpD34 = ~tmpD34;
                                    ctxB5 &= tmpD34;
                                    v_5_1 = ctxB5;
                                }
                                else
                                {
                                    int32_t srcS22 = 0;
                                    a1 = 0f;
                                    double arg_c4 = ((a6 & 1) * 2 - 1) * arg_30 + arg_fc;
                                    double arg_cc = ((a6 & 2) - 1) * arg_30 + arg_104;
                                    double arg_d4 = ((a6 >> 1 & 2) - 1) * arg_30 + arg_10c;

                                    if (ctxB3 <= 0)
                                    {
                                        ctxB5 &= ~(1 << (a6 & 0x1f));
                                        v_5_1 = ctxB5;
                                    }
                                    else
                                    {
                                        float* ctxB6 = &arg_56c;
                                        arg_24 = &arg_196c - a3;
                                        float* tmpD48 = &arg_1370;
                                        objC52 = a3 + 0x10;
                                        int32_t dstD25 = 0;

                                        do
                                        {
                                            if (a1)
                                                goto label_4c8d2f;

                                            long double x87_r7_44 = arg_c4 - objC52[-2];
                                            long double x87_r6_21 = arg_cc - objC52[-1];
                                            long double x87_r5_15 = arg_d4 - *objC52;
                                            arg_64 = x87_r5_15;
                                            double arg_ec = x87_r6_21;
                                            double arg_f4 = x87_r7_44;
                                            long double x87_r7_47 = x87_r5_15 * tmpD48[1]
                                                + x87_r7_44 * tmpD48[-1] + x87_r6_21 * *tmpD48;
                                            long double x87_r6_27 = arg_f4 * arg_f4
                                                + arg_ec * arg_ec + arg_64 * arg_64
                                                - x87_r7_47 * x87_r7_47 * *ctxB6;
                                            long double x87_r5_29 = a4 * a4;
                                            x87_r5_29 - x87_r6_27;

                                            if (!(*(&((x87_r5_29 < x87_r6_27 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r5_29, x87_r6_27) ? 1 : 0) << 0xa
                                                | (x87_r5_29 == x87_r6_27 ? 1 : 0) << 0xe | 0x3800)
                                                + 1) & 1))
                                            {
                                                long double x87_r7_50 = a4 + arg_c4;
                                                long double f17_1 = *(&arg_196c + dstD25);
                                                x87_r7_50 - f17_1;

                                                if (!(*(&((x87_r7_50 < f17_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_50, f17_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_50 == f17_1 ? 1 : 0) << 0xe) + 1)
                                                    & 1))
                                                {
                                                    long double x87_r7_52 = a4 + arg_cc;
                                                    long double f18_1 = *(&arg_1974 + dstD25);
                                                    x87_r7_52 - f18_1;

                                                    if (!(*(&((x87_r7_52 < f18_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_52, f18_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_52 == f18_1 ? 1 : 0) << 0xe) + 1)
                                                        & 1))
                                                    {
                                                        long double x87_r7_54 = a4 + arg_d4;
                                                        long double f20_1 = *(arg_24 + objC52);
                                                        x87_r7_54 - f20_1;

                                                        if (!(*(&(
                                                            (x87_r7_54 < f20_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_54, f20_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r7_54 == f20_1 ? 1 : 0)
                                                            << 0xe) + 1) & 1))
                                                        {
                                                            long double x87_r7_56 = arg_c4 - a4;
                                                            long double f21_1 =
                                                                *(&arg_76c + dstD25);
                                                            x87_r7_56 - f21_1;

                                                            if (*(&(
                                                                (x87_r7_56 < f21_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_56, f21_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_56 == f21_1 ? 1 : 0)
                                                                << 0xe) + 1) & 0x41)
                                                            {
                                                                long double x87_r7_58 = arg_cc - a4;
                                                                long double f22_1 =
                                                                    *(&arg_774 + dstD25);
                                                                x87_r7_58 - f22_1;

                                                                if (*(&(
                                                                    (x87_r7_58 < f22_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_58, f22_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_58 == f22_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 0x41)
                                                                {
                                                                    long double x87_r7_60 = arg_d4 - a4;
                                                                    long double f23_1 =
                                                                        *(objC52 + &arg_76c - a3);
                                                                    x87_r7_60 - f23_1;

                                                                    if (*(&(
                                                                            (x87_r7_60 < f23_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_60, f23_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_60 == f23_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        a1 = 1.40129846e-45f;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            srcS22 += 1;
                                            tmpD48 = &tmpD48[3];
                                            ctxB6 = &ctxB6[1];
                                            objC52 = &objC52[3];
                                            dstD25 += 0x18;
                                        } while (srcS22 < ctxB3);

                                        if (a1)
                                        {
                                        label_4c8d2f:
                                            ctxB5 = v_5_1;
                                        }
                                        else
                                        {
                                            ctxB5 = v_5_1 & ~(1 << (a6 & 0x1f));
                                            v_5_1 = ctxB5;
                                        }
                                    }

                                    tmpD34 = *(*arg_3c + 0x3c);

                                    if (tmpD34)
                                    {
                                        long double x87_r7_62 = arg_9c - arg_78;
                                        long double f14_1 = 4.0;
                                        x87_r7_62 - f14_1;
                                        long double x87_r6_29;
                                        long double f16_1;

                                        if (*(&((x87_r7_62 < f14_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_62, f14_1) ? 1 : 0) << 0xa
                                            | (x87_r7_62 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41)
                                        {
                                            x87_r6_29 =
                                                2.1219957904712067e-314 - 2.1219957904712067e-314;
                                            f16_1 = 4.0;
                                            x87_r6_29 - f16_1;
                                        }

                                        if (!(*(&((x87_r7_62 < f14_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_62, f14_1) ? 1 : 0) << 0xa
                                            | (x87_r7_62 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41) || !(*(&((x87_r6_29 < f16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_29, f16_1) ? 1 : 0) << 0xa
                                            | (x87_r6_29 == f16_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41))
                                        {
                                            char objC64 = arg_38;
                                            a3 = nullptr;
                                            arg_24 = (*(v_4 - 4) << (objC64 & 0x1f))
                                                - *(a1 + 0xde0) + arg_94;
                                            long double x87_r6_39 = arg_24;
                                            arg_24 = (*v_4 << (objC64 & 0x1f)) - *(a1 + 0xde4)
                                                + ctxB3;
                                            arg_c = **arg_3c;
                                            a1 = arg_c;
                                            __return_addr = *(tmpD34 + 8) * 0.5f / a1;
                                            int32_t valA79;
                                            valA79 = SoundSys_LoadSoundDef_3(tmpD34,
                                                (arg_78 - x87_r6_39 + a1) * __return_addr,
                                                (2.1219957904712067e-314 - arg_24 + a1)
                                                    * __return_addr,
                                                __return_addr * x87_r7_62,
                                                (2.1219957904712067e-314 - 2.1219957904712067e-314)
                                                    * __return_addr);

                                            if (!valA79)
                                                goto label_4c8f75;
                                        }
                                        else
                                        {
                                            int32_t arg_5c = 0;
                                            int32_t valA67 = *(a1 + 0xde0);
                                            char objC60 = arg_38;
                                            arg_24 =
                                                (*(v_4 - 4) << (objC60 & 0x1f)) - valA67 + arg_94;
                                            long double x87_r7_64 = arg_24;
                                            arg_24 = (*v_4 << (objC60 & 0x1f)) - valA67 + ctxB3;
                                            int32_t valA68 = *(tmpD34 + 8);
                                            long double x87_r6_30 = arg_24;
                                            arg_24 = valA68;
                                            a1 = **arg_3c;
                                            __return_addr = arg_24 * 0.5f / a1;
                                            arg_64 = (arg_78 - x87_r7_64 + a1) * __return_addr;
                                            objC52 = arg_64;
                                            arg_64 = (2.1219957904712067e-314 - x87_r6_30 + a1)
                                                * __return_addr;

                                            if (objC52 >= valA68 || arg_64 >= valA68)
                                                ctxB5 = v_5_1;
                                            else
                                            {
                                                int32_t valA69;
                                                valA69 = SoundSys_InitSoundSys_3(tmpD34, objC52, arg_64);

                                                if (valA69)
                                                    ctxB5 = v_5_1;
                                                else
                                                {
                                                    tmpD34 = 1;
                                                    tmpD34 = 1 << (a6 & 0x1f);
                                                    tmpD34 = ~tmpD34;
                                                    ctxB5 = v_5_1 & tmpD34;
                                                    v_5_1 = ctxB5;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            cond_12_1 = v_4 + 0xc < 0x548064;
                            a6 += 1;
                            arg_3c = &arg_3c[1];
                            v_4 += 0xc;
                        } while (cond_12_1);
                        *(arg_2c + 5) = ctxB5;

                        if (ctxB5)
                        {
                            if (!(ctxB5 & 0xf))
                            {
                                if (!(ctxB5 & 0x30))
                                    ctxB5 = (ctxB5 >> 6 & 1) + 6;
                                else
                                    ctxB5 = (ctxB5 >> 4 & 1) + 4;
                            }
                            else if (!(ctxB5 & 3))
                                ctxB5 = (ctxB5 >> 2 & 1) + 2;
                            else
                                ctxB5 &= 1;

                            arg_2c[1] = ctxB5;
                            arg_2c[1] = ctxB5 ^ 1;
                        }
                    }
                }
                else
                {
                    *(ctxB + 0x1a) = 1;

                    if (valA37)
                    {
                        if (!(valA37 & 0xf))
                        {
                            if (!(valA37 & 0x30))
                            {
                                ctxB[6] = (valA37 >> 6 & 1) + 6;
                                ctxB[6] = ((valA37 >> 6 & 1) + 6) ^ 1;
                            }
                            else
                            {
                                ctxB[6] = (valA37 >> 4 & 1) + 4;
                                ctxB[6] = ((valA37 >> 4 & 1) + 4) ^ 1;
                            }
                        }
                        else if (!(valA37 & 3))
                        {
                            ctxB[6] = (valA37 >> 2 & 1) + 2;
                            ctxB[6] = ((valA37 >> 2 & 1) + 2) ^ 1;
                        }
                        else
                        {
                            valA37 &= 1;
                            ctxB[6] = valA37;
                            ctxB[6] = valA37 ^ 1;
                        }
                    }
                }
            }
            else
            {
                void* valA25 = *ctxB;
                tmpD34 = *(valA25 + 0x38);

                if (!*(ctxB + 6))
                {
                    if (tmpD34 & objC25)
                    {
                        for (void* i_1 = *(valA25 + 0x2c); i_1; i_1 = *(i_1 + 0x58))
                        {
                            float valA28 = *(i_1 + 0x44);
                            long double x87_r7_18 = *(i_1 + 0x20) - valA28;
                            long double f4_1 = arg_9c;
                            x87_r7_18 - f4_1;

                            if (*(&((x87_r7_18 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_18, f4_1) ? 1 : 0) << 0xa
                                | (x87_r7_18 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double x87_r7_20 = valA28 + *(i_1 + 0x20);
                                long double f5_1 = arg_78;
                                x87_r7_20 - f5_1;

                                if (!(*(&((x87_r7_20 < f5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_20, f5_1) ? 1 : 0) << 0xa
                                    | (x87_r7_20 == f5_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_22 = *(i_1 + 0x28) - valA28;
                                    long double f7_1 = 2.1219957904712067e-314;
                                    x87_r7_22 - f7_1;

                                    if (*(&((x87_r7_22 < f7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_22, f7_1) ? 1 : 0) << 0xa
                                        | (x87_r7_22 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double x87_r7_24 = valA28 + *(i_1 + 0x28);
                                        long double f9_1 = 2.1219957904712067e-314;
                                        x87_r7_24 - f9_1;

                                        if (!(*(&((x87_r7_24 < f9_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_24, f9_1) ? 1 : 0) << 0xa
                                            | (x87_r7_24 == f9_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double x87_r7_26 = *(i_1 + 0x30) - valA28;
                                            long double f11_1 = arg_ac;
                                            x87_r7_26 - f11_1;

                                            if (*(&((x87_r7_26 < f11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_26, f11_1) ? 1 : 0) << 0xa
                                                | (x87_r7_26 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                                long double x87_r7_28 = valA28 + *(i_1 + 0x30);
                                                long double f13_1 = 2.1219957904712067e-314;
                                                x87_r7_28 - f13_1;

                                                if (!(*(&((x87_r7_28 < f13_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_28, f13_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_28 == f13_1 ? 1 : 0) << 0xe) + 1)
                                                    & 1))
                                                {
                                                    int32_t valA30 = 0;
                                                    valA30 = *(i_1 + 0x1c);

                                                    if (*(valA30 * 0x30 + 0xaf5f0c) & arg_1c)
                                                    {
                                                        int32_t valA31 = *(
                                                            ((result_2 * 0x180 + valA30) << 2) +
                                                            &g_a96ae0);

                                                        if (valA31)
                                                            valA31(i_1, arg_c);
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
                else if (tmpD34 & objC25)
                {
                    for (void* i_2 = *(valA25 + 0x2c); i_2; i_2 = *(i_2 + 0x58))
                    {
                        int32_t valA26 = 0;
                        valA26 = *(i_2 + 0x1c);

                        if (*(valA26 * 0x30 + 0xaf5f0c) & arg_1c)
                        {
                            int32_t valA27 = *(((result_2 * 0x180 + valA26) << 2) + &g_a96ae0);

                            if (valA27)
                                valA27(i_2, arg_c);
                        }
                    }
                }

                tmpD34 = arg_38 + 1;
                arg_2c = ctxB - 0x14;
                arg_1c += 1;
                arg_38 = tmpD34;
                arg_4c <<= 1;
                a2 -= 1;
            }

            result = a2;

            if (!result)
                break;

            objC25 = arg_48;
            result_2 = result_1;
            ctxB = arg_2c;
        }
    }

    return result;
}
