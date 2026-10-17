// Original IGI.EXE function: Physics_CalculateSplineLength_13 (VA 0x0050BF20; static CFG gate FAIL, CFG score 0.754).
#include "Physics_CalculateSplineLength_13.h"
int32_t Physics_CalculateSplineLength_13(float a1 @ 0xc, int32_t a2 @ 0x28, float a3 @ 0x34, int32_t a4 @ 0x50, float a5 @ 0x5c, int32_t a6 @ 0x78, int32_t a7, int32_t a8, int32_t a9)

{
    void arg_54;
    void* v_a8 = &arg_54;
    int32_t tmpD = a2;
    void arg_2c;
    void* v_ac = &arg_2c;
    int32_t objC = a4;
    g_a7da08 += 1;
    void arg_4;
    void* v_b0 = &arg_4;
    int32_t valA = a6;
    char ctxB4 = tmpD | objC | valA;
    int32_t srcS2 = tmpD & objC & valA;
    int32_t v_dc = srcS2;

    if (!srcS2 && !(ctxB4 & 0x10))
    {
        void v_170;
        void v_148;
        void v_120;
        float v_d8;
        float v_d4;
        float v_d0;
        float v_cc;
        float v_c8;
        float v_c4;
        float v_c0;
        float v_bc;
        float v_b8;
        int32_t v_b4;

        if (ctxB4 & 1)
        {
            int32_t tmpD1 = tmpD & 1;
            int32_t objC1 = objC & 1;

            if ((valA & 1) + tmpD1 + objC1 != 2)
            {
                float* valA19;
                float* tmpD4;
                float* flagP1;

                if (tmpD1)
                {
                    valA19 = &arg_2c;
                    tmpD4 = &arg_54;
                    flagP1 = &arg_4;
                }
                else if (!objC1)
                {
                    valA19 = &arg_4;
                    tmpD4 = &arg_2c;
                    flagP1 = &arg_54;
                }
                else
                {
                    valA19 = &arg_54;
                    tmpD4 = &arg_4;
                    flagP1 = &arg_2c;
                }

                long double x87_r7_84 = *flagP1 - *valA19;
                long double x87_r6_9 = (g_bcabd0 - *valA19) / x87_r7_84;
                memcpy(&v_d8, flagP1, 0x28);
                float v_dc_3 = x87_r6_9;
                *flagP1 = x87_r7_84 * v_dc_3 + *valA19;
                flagP1[1] = (flagP1[1] - valA19[1]) * v_dc_3 + valA19[1];
                flagP1[2] = (flagP1[2] - valA19[2]) * v_dc_3 + valA19[2];
                flagP1[6] = (flagP1[6] - valA19[6]) * v_dc_3 + valA19[6];
                flagP1[7] = (flagP1[7] - valA19[7]) * v_dc_3 + valA19[7];
                flagP1[8] = (flagP1[8] - valA19[8]) * v_dc_3 + valA19[8];
                flagP1[3] = (flagP1[3] - valA19[3]) * v_dc_3 + valA19[3];
                flagP1[4] = (flagP1[4] - valA19[4]) * v_dc_3 + valA19[4];
                flagP1[5] = (flagP1[5] - valA19[5]) * v_dc_3 + valA19[5];
                long double x87_r7_119 = flagP1[1];
                long double f3_1 = g_bcabd4;
                x87_r7_119 - f3_1;
                int32_t srcS8;

                srcS8 = !(*(&((x87_r7_119 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_119, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_119 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_121 = g_bcabd8 + 1f;
                long double f8_1 = *flagP1;
                x87_r7_121 - f8_1;
                int32_t objC3;

                objC3 = !(*(&((x87_r7_121 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_121, f8_1) ? 1 : 0) << 0xa
                    | (x87_r7_121 == f8_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_123 = g_bcabdc + 1f;
                long double f15_1 = flagP1[1];
                x87_r7_123 - f15_1;
                int32_t valA21;

                valA21 = !(*(&((x87_r7_123 < f15_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_123, f15_1) ? 1 : 0) << 0xa
                    | (x87_r7_123 == f15_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_124 = v_d8;
                flagP1[9] = (((valA21 * 2) | objC3) << 1 | srcS8) << 1;
                long double x87_r7_125 = x87_r7_124 - *tmpD4;
                float v_dc_4 = (g_bcabd0 - *tmpD4) / x87_r7_125;
                long double x87_r7_127 = x87_r7_125 * v_dc_4 + *tmpD4;
                v_d8 = x87_r7_127;
                long double x87_r6_16 = (v_d4 - tmpD4[1]) * v_dc_4 + tmpD4[1];
                v_d4 = x87_r6_16;
                v_d0 = (v_d0 - tmpD4[2]) * v_dc_4 + tmpD4[2];
                v_c0 = (v_c0 - tmpD4[6]) * v_dc_4 + tmpD4[6];
                v_bc = (v_bc - tmpD4[7]) * v_dc_4 + tmpD4[7];
                v_b8 = (v_b8 - tmpD4[8]) * v_dc_4 + tmpD4[8];
                v_cc = (v_cc - tmpD4[3]) * v_dc_4 + tmpD4[3];
                v_c8 = (v_c8 - tmpD4[4]) * v_dc_4 + tmpD4[4];
                v_c4 = (v_c4 - tmpD4[5]) * v_dc_4 + tmpD4[5];
                long double f20_1 = g_bcabd4;
                x87_r6_16 - f20_1;
                int32_t srcS9;

                srcS9 = !(*(&((x87_r6_16 < f20_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_16, f20_1) ? 1 : 0) << 0xa
                    | (x87_r6_16 == f20_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                long double x87_r6_18 = g_bcabd8 + 1f;
                x87_r7_127 - x87_r6_18;
                int32_t objC4;

                objC4 = *(&((x87_r7_127 < x87_r6_18 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_127, x87_r6_18) ? 1 : 0) << 0xa
                    | (x87_r7_127 == x87_r6_18 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_130 = g_bcabdc + 1f;
                long double f23_1 = v_d4;
                x87_r7_130 - f23_1;
                int32_t valA28;

                valA28 = !(*(&((x87_r7_130 < f23_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_130, f23_1) ? 1 : 0) << 0xa
                    | (x87_r7_130 == f23_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                v_b4 = (((valA28 * 2) | objC4) << 1 | srcS9) << 1;
                int32_t v_f0_1 = a9;
                ctxB4 = a2 | a4 | a6;
                int32_t v_f4_1 = a8;
                int32_t v_f8_1 = a7;
                memcpy(&v_120, flagP1, 0x28);
                memcpy(&v_148, &v_d8, 0x28);
                memcpy(&v_170, tmpD4, 0x28);
                Physics_CalculateSplineLength_13();
                valA = a6;
                objC = a4;
                tmpD = a2;
                srcS2 = a2 & a4 & a6;
            }
            else
            {
                float* valA4;
                float* objC2;
                float* tmpD2;
                float* srcS3;

                if (!tmpD1)
                {
                    valA4 = &arg_4;
                    tmpD2 = &arg_4;
                    srcS3 = &arg_2c;
                    objC2 = &arg_54;
                }
                else if (objC1)
                {
                    valA4 = &arg_54;
                    tmpD2 = &arg_54;
                    srcS3 = &arg_4;
                    objC2 = &arg_2c;
                }
                else
                {
                    valA4 = &arg_2c;
                    tmpD2 = &arg_2c;
                    srcS3 = &arg_54;
                    objC2 = &arg_4;
                }

                long double x87_r7_2 = *srcS3 - *valA4;
                float v_dc_1 = (g_bcabd0 - *valA4) / x87_r7_2;
                *srcS3 = x87_r7_2 * v_dc_1 + *valA4;
                srcS3[1] = (srcS3[1] - valA4[1]) * v_dc_1 + valA4[1];
                srcS3[2] = (srcS3[2] - valA4[2]) * v_dc_1 + valA4[2];
                srcS3[6] = (srcS3[6] - valA4[6]) * v_dc_1 + valA4[6];
                srcS3[7] = (srcS3[7] - valA4[7]) * v_dc_1 + valA4[7];
                srcS3[8] = (srcS3[8] - valA4[8]) * v_dc_1 + valA4[8];
                srcS3[3] = (srcS3[3] - valA4[3]) * v_dc_1 + valA4[3];
                srcS3[4] = (srcS3[4] - valA4[4]) * v_dc_1 + valA4[4];
                srcS3[5] = (srcS3[5] - valA4[5]) * v_dc_1 + valA4[5];
                long double x87_r7_37 = srcS3[1];
                long double f1_1 = g_bcabd4;
                x87_r7_37 - f1_1;
                int32_t ctxB5;

                ctxB5 = !(*(&((x87_r7_37 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_37, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_37 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_39 = g_bcabd8 + 1f;
                long double f4_1 = *srcS3;
                x87_r7_39 - f4_1;
                int32_t dstD1;

                dstD1 = !(*(&((x87_r7_39 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_39, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_39 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_41 = g_bcabdc + 1f;
                long double f9_1 = srcS3[1];
                x87_r7_41 - f9_1;
                int32_t valA6;

                valA6 = !(*(&((x87_r7_41 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_41, f9_1) ? 1 : 0) << 0xa
                    | (x87_r7_41 == f9_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                srcS3[9] = (((valA6 * 2) | dstD1) << 1 | ctxB5) << 1;
                long double x87_r7_43 = *objC2 - *tmpD2;
                float v_dc_2 = (g_bcabd0 - *tmpD2) / x87_r7_43;
                *objC2 = x87_r7_43 * v_dc_2 + *tmpD2;
                objC2[1] = (objC2[1] - tmpD2[1]) * v_dc_2 + tmpD2[1];
                objC2[2] = (objC2[2] - tmpD2[2]) * v_dc_2 + tmpD2[2];
                objC2[6] = (objC2[6] - tmpD2[6]) * v_dc_2 + tmpD2[6];
                objC2[7] = (objC2[7] - tmpD2[7]) * v_dc_2 + tmpD2[7];
                objC2[8] = (objC2[8] - tmpD2[8]) * v_dc_2 + tmpD2[8];
                objC2[3] = (objC2[3] - tmpD2[3]) * v_dc_2 + tmpD2[3];
                objC2[4] = (objC2[4] - tmpD2[4]) * v_dc_2 + tmpD2[4];
                objC2[5] = (objC2[5] - tmpD2[5]) * v_dc_2 + tmpD2[5];
                long double x87_r7_78 = objC2[1];
                long double f16_1 = g_bcabd4;
                x87_r7_78 - f16_1;
                int32_t srcS4;

                srcS4 = !(*(&((x87_r7_78 < f16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_78, f16_1) ? 1 : 0) << 0xa
                    | (x87_r7_78 == f16_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_80 = g_bcabd8 + 1f;
                long double f21_1 = *objC2;
                x87_r7_80 - f21_1;
                int32_t tmpD3;

                tmpD3 = !(*(&((x87_r7_80 < f21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_80, f21_1) ? 1 : 0) << 0xa
                    | (x87_r7_80 == f21_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_82 = g_bcabdc + 1f;
                long double f22_1 = objC2[1];
                x87_r7_82 - f22_1;
                int32_t valA13;

                valA13 = !(*(&((x87_r7_82 < f22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_82, f22_1) ? 1 : 0) << 0xa
                    | (x87_r7_82 == f22_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                objC2[9] = (((valA13 * 2) | tmpD3) << 1 | srcS4) << 1;
                tmpD = a2;
                objC = a4;
                valA = a6;
                ctxB4 = tmpD | objC | valA;
                srcS2 = tmpD & objC & valA;
            }
        }

        if (!srcS2)
        {
            if (!(ctxB4 & 2))
            {
            label_50ca39:

                if (!(ctxB4 & 4))
                {
                label_50cf06:
                    int32_t flagP6;

                    if (ctxB4 & 8)
                    {
                        int32_t tmpD13 = tmpD & 8;
                        int32_t objC20 = objC & 8;
                        int32_t valA89 = (valA & 8) + tmpD13 + objC20;
                        valA89 &= 0xf8;

                        if (valA89 != 0x10)
                        {
                            float* valA92;
                            float* tmpD15;
                            float* ctxB18;

                            if (tmpD13)
                            {
                                tmpD15 = &arg_2c;
                                ctxB18 = &arg_54;
                                valA92 = &arg_4;
                            }
                            else if (!objC20)
                            {
                                tmpD15 = &arg_4;
                                ctxB18 = &arg_2c;
                                valA92 = &arg_54;
                            }
                            else
                            {
                                tmpD15 = &arg_54;
                                ctxB18 = &arg_4;
                                valA92 = &arg_2c;
                            }

                            long double x87_r7_295 = g_bcabdc + 1f - tmpD15[1];
                            long double x87_r6_298 = valA92[1] - tmpD15[1];
                            memcpy(&v_d8, valA92, 0x28);
                            long double x87_r7_296 = x87_r7_295 / x87_r6_298;
                            *valA92 = (*valA92 - *tmpD15) * x87_r7_296 + *tmpD15;
                            valA92[1] = (valA92[1] - tmpD15[1]) * x87_r7_296 + tmpD15[1];
                            valA92[2] = (valA92[2] - tmpD15[2]) * x87_r7_296 + tmpD15[2];
                            valA92[6] = (valA92[6] - tmpD15[6]) * x87_r7_296 + tmpD15[6];
                            valA92[7] = (valA92[7] - tmpD15[7]) * x87_r7_296 + tmpD15[7];
                            valA92[8] = (valA92[8] - tmpD15[8]) * x87_r7_296 + tmpD15[8];
                            valA92[3] = (valA92[3] - tmpD15[3]) * x87_r7_296 + tmpD15[3];
                            valA92[4] = (valA92[4] - tmpD15[4]) * x87_r7_296 + tmpD15[4];
                            long double x87_r6_334 =
                                (valA92[5] - tmpD15[5]) * x87_r7_296 + tmpD15[5];
                            valA92[9] = 0;
                            valA92[5] = x87_r6_334;
                            long double x87_r7_299 = v_d4 - ctxB18[1];
                            float v_dc_13 = (g_bcabdc + 1f - ctxB18[1]) / x87_r7_299;
                            long double x87_r6_342 = (v_d8 - *ctxB18) * v_dc_13 + *ctxB18;
                            v_b4 = 0;
                            v_d8 = x87_r6_342;
                            int32_t v_f0_4 = a9;
                            int32_t v_f4_4 = a8;
                            int32_t v_f8_4 = a7;
                            long double x87_r7_301 = x87_r7_299 * v_dc_13 + ctxB18[1];
                            flagP6 = a2 & a4 & a6;
                            memcpy(&v_120, valA92, 0x28);
                            float v_d4_1 = x87_r7_301;
                            float v_d0_1 = (v_d0 - ctxB18[2]) * v_dc_13 + ctxB18[2];
                            float v_c0_1 = (v_c0 - ctxB18[6]) * v_dc_13 + ctxB18[6];
                            float v_bc_1 = (v_bc - ctxB18[7]) * v_dc_13 + ctxB18[7];
                            float v_b8_1 = (v_b8 - ctxB18[8]) * v_dc_13 + ctxB18[8];
                            float v_cc_1 = (v_cc - ctxB18[3]) * v_dc_13 + ctxB18[3];
                            float v_c8_1 = (v_c8 - ctxB18[4]) * v_dc_13 + ctxB18[4];
                            float v_c4_1 = (v_c4 - ctxB18[5]) * v_dc_13 + ctxB18[5];
                            memcpy(&v_148, &v_d8, 0x28);
                            memcpy(&v_170, ctxB18, 0x28);
                            Physics_CalculateSplineLength_13();
                        }
                        else
                        {
                            float* valA90;
                            float* objC21;
                            float* tmpD14;
                            float* srcS29;

                            if (!tmpD13)
                            {
                                valA90 = &arg_4;
                                objC21 = &arg_4;
                                tmpD14 = &arg_2c;
                                srcS29 = &arg_54;
                            }
                            else if (objC20)
                            {
                                valA90 = &arg_54;
                                objC21 = &arg_54;
                                tmpD14 = &arg_4;
                                srcS29 = &arg_2c;
                            }
                            else
                            {
                                valA90 = &arg_2c;
                                objC21 = &arg_2c;
                                tmpD14 = &arg_54;
                                srcS29 = &arg_4;
                            }

                            long double x87_r7_286 =
                                (g_bcabdc + 1f - valA90[1]) / (tmpD14[1] - valA90[1]);
                            *tmpD14 = (*tmpD14 - *valA90) * x87_r7_286 + *valA90;
                            tmpD14[1] = (tmpD14[1] - valA90[1]) * x87_r7_286 + valA90[1];
                            tmpD14[2] = (tmpD14[2] - valA90[2]) * x87_r7_286 + valA90[2];
                            tmpD14[6] = (tmpD14[6] - valA90[6]) * x87_r7_286 + valA90[6];
                            tmpD14[7] = (tmpD14[7] - valA90[7]) * x87_r7_286 + valA90[7];
                            tmpD14[8] = (tmpD14[8] - valA90[8]) * x87_r7_286 + valA90[8];
                            tmpD14[3] = (tmpD14[3] - valA90[3]) * x87_r7_286 + valA90[3];
                            tmpD14[4] = (tmpD14[4] - valA90[4]) * x87_r7_286 + valA90[4];
                            long double x87_r6_258 =
                                (tmpD14[5] - valA90[5]) * x87_r7_286 + valA90[5];
                            tmpD14[9] = 0;
                            tmpD14[5] = x87_r6_258;
                            long double x87_r7_291 =
                                (g_bcabdc + 1f - objC21[1]) / (srcS29[1] - objC21[1]);
                            *srcS29 = (*srcS29 - *objC21) * x87_r7_291 + *objC21;
                            srcS29[1] = (srcS29[1] - objC21[1]) * x87_r7_291 + objC21[1];
                            srcS29[2] = (srcS29[2] - objC21[2]) * x87_r7_291 + objC21[2];
                            srcS29[6] = (srcS29[6] - objC21[6]) * x87_r7_291 + objC21[6];
                            srcS29[7] = (srcS29[7] - objC21[7]) * x87_r7_291 + objC21[7];
                            srcS29[8] = (srcS29[8] - objC21[8]) * x87_r7_291 + objC21[8];
                            srcS29[3] = (srcS29[3] - objC21[3]) * x87_r7_291 + objC21[3];
                            srcS29[4] = (srcS29[4] - objC21[4]) * x87_r7_291 + objC21[4];
                            long double x87_r6_296 =
                                (srcS29[5] - objC21[5]) * x87_r7_291 + objC21[5];
                            srcS29[9] = 0;
                            srcS29[5] = x87_r6_296;
                            flagP6 = a2 & a4 & a6;
                        }
                    }

                    if (!(ctxB4 & 8) || !flagP6)
                    {
                        void* v_9c = &arg_4;
                        void* v_98_1 = &arg_2c;
                        void* v_94_1 = &arg_54;
                        a8(&v_9c, a9);

                        if (0x80 & g_c28c7f && g_c28c8c & 0x80 && g_c28c69 & 0x80)
                        {
                            void** tmpD18 = &v_b0;
                            void v_8c;
                            void* valA95 = &v_8c;
                            int32_t i_3 = 3;
                            a1 = 1f / a1;
                            a3 = 1f / a3;
                            a5 = 1f / a5;
                            int32_t i;

                            do
                            {
                                int32_t* objC27 = *tmpD18;
                                tmpD18 = &tmpD18[1];
                                valA95 += 0x24;
                                *(valA95 - 0x28) = *objC27;
                                *(valA95 - 0x24) = objC27[1];
                                i = i_3;
                                i_3 -= 1;
                                *(valA95 - 0x20) = objC27[2] * 0.99000001f - 4.09600019f;
                                *(valA95 - 0x10) = 0x3f000000;
                                *(valA95 - 0xc) = 0x3f000000;
                                *(valA95 - 8) = 0x3f800000;
                                *(valA95 - 0x14) = 0x3f800000;
                                *(valA95 - 0x1c) = 0;
                                *(valA95 - 0x18) = 0;
                            } while (i != 1);
                            void** v_f0_6 = &v_b0;
                            void v_90;
                            void* v_a0_1 = &v_90;
                            int32_t v_ac_1 = 0x40060000;
                            v_b0 = nullptr;
                            int32_t v_a8_1 = 0xffffffff;
                            int32_t v_a4_1 = 3;
                            g_a84a50 = 0;
                            Physics_InterpolateWaypoint_13(v_f0_6);
                            void v_88;
                            float* valA96 = &v_88;
                            int32_t i_2 = 3;
                            int32_t i_1;

                            do
                            {
                                long double x87_r7_340 = *valA96 * 0.99000001f;
                                valA96 = &valA96[9];
                                i_1 = i_2;
                                i_2 -= 1;
                                valA96[-9] = x87_r7_340;
                                valA96[-5] = 0;
                                valA96[-4] = 0;
                                valA96[-3] = 0x3f800000;
                            } while (i_1 != 1);
                            void v_24;
                            memcpy(&v_24, &v_90, 0x24);
                            void** v_f0_7 = &v_b0;
                            v_b0 = 1;
                            int32_t v_a4_2 = 4;
                            Physics_InterpolateWaypoint_13(v_f0_7);
                        }
                    }
                }
                else
                {
                    int32_t tmpD9 = tmpD & 4;
                    int32_t objC15 = objC & 4;
                    int32_t valA69 = (valA & 4) + tmpD9 + objC15;
                    valA69 &= 0xfc;
                    int32_t srcS24;

                    if (valA69 != 8)
                    {
                        float* valA76;
                        float* tmpD12;
                        float* flagP3;

                        if (tmpD9)
                        {
                            valA76 = &arg_2c;
                            flagP3 = &arg_54;
                            tmpD12 = &arg_4;
                        }
                        else if (!objC15)
                        {
                            valA76 = &arg_4;
                            flagP3 = &arg_2c;
                            tmpD12 = &arg_54;
                        }
                        else
                        {
                            valA76 = &arg_54;
                            flagP3 = &arg_4;
                            tmpD12 = &arg_2c;
                        }

                        long double x87_r7_237 = *tmpD12 - *valA76;
                        long double x87_r6_184 = g_bcabd8 + 1f - *valA76;
                        memcpy(&v_d8, tmpD12, 0x28);
                        float v_dc_10 = x87_r6_184 / x87_r7_237;
                        *tmpD12 = x87_r7_237 * v_dc_10 + *valA76;
                        tmpD12[1] = (tmpD12[1] - valA76[1]) * v_dc_10 + valA76[1];
                        tmpD12[2] = (tmpD12[2] - valA76[2]) * v_dc_10 + valA76[2];
                        tmpD12[6] = (tmpD12[6] - valA76[6]) * v_dc_10 + valA76[6];
                        tmpD12[7] = (tmpD12[7] - valA76[7]) * v_dc_10 + valA76[7];
                        tmpD12[8] = (tmpD12[8] - valA76[8]) * v_dc_10 + valA76[8];
                        tmpD12[3] = (tmpD12[3] - valA76[3]) * v_dc_10 + valA76[3];
                        tmpD12[4] = (tmpD12[4] - valA76[4]) * v_dc_10 + valA76[4];
                        tmpD12[5] = (tmpD12[5] - valA76[5]) * v_dc_10 + valA76[5];
                        long double x87_r7_273 = g_bcabdc + 1f;
                        long double f11_1 = tmpD12[1];
                        x87_r7_273 - f11_1;
                        int32_t valA78;

                        valA78 = !(*(&((x87_r7_273 < f11_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_273, f11_1) ? 1 : 0) << 0xa
                            | (x87_r7_273 == f11_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                        long double x87_r7_274 = v_d8;
                        tmpD12[9] = valA78 << 3;
                        long double x87_r7_275 = x87_r7_274 - *flagP3;
                        float v_dc_11 = (g_bcabd8 + 1f - *flagP3) / x87_r7_275;
                        v_d8 = x87_r7_275 * v_dc_11 + *flagP3;
                        long double x87_r7_281 = (v_d4 - flagP3[1]) * v_dc_11 + flagP3[1];
                        v_d4 = x87_r7_281;
                        v_d0 = (v_d0 - flagP3[2]) * v_dc_11 + flagP3[2];
                        v_c0 = (v_c0 - flagP3[6]) * v_dc_11 + flagP3[6];
                        v_bc = (v_bc - flagP3[7]) * v_dc_11 + flagP3[7];
                        v_b8 = (v_b8 - flagP3[8]) * v_dc_11 + flagP3[8];
                        v_cc = (v_cc - flagP3[3]) * v_dc_11 + flagP3[3];
                        v_c8 = (v_c8 - flagP3[4]) * v_dc_11 + flagP3[4];
                        v_c4 = (v_c4 - flagP3[5]) * v_dc_11 + flagP3[5];
                        long double x87_r6_219 = g_bcabdc + 1f;
                        x87_r7_281 - x87_r6_219;
                        int32_t valA81;

                        valA81 = *(&((x87_r7_281 < x87_r6_219 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_281, x87_r6_219) ? 1 : 0) << 0xa
                            | (x87_r7_281 == x87_r6_219 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        v_b4 = valA81 << 3;
                        int32_t v_f0_3 = a9;
                        int32_t v_f4_3 = a8;
                        int32_t v_f8_3 = a7;
                        ctxB4 = a2 | a4 | a6;
                        memcpy(&v_120, tmpD12, 0x28);
                        memcpy(&v_148, &v_d8, 0x28);
                        memcpy(&v_170, flagP3, 0x28);
                        Physics_CalculateSplineLength_13();
                        valA = a6;
                        objC = a4;
                        tmpD = a2;
                        srcS24 = a2 & a4 & a6;
                    }
                    else
                    {
                        float* valA70;
                        float* objC16;
                        float* tmpD10;
                        float* srcS21;

                        if (!tmpD9)
                        {
                            valA70 = &arg_4;
                            tmpD10 = &arg_4;
                            srcS21 = &arg_2c;
                            objC16 = &arg_54;
                        }
                        else if (objC15)
                        {
                            valA70 = &arg_54;
                            tmpD10 = &arg_54;
                            srcS21 = &arg_4;
                            objC16 = &arg_2c;
                        }
                        else
                        {
                            valA70 = &arg_2c;
                            tmpD10 = &arg_2c;
                            srcS21 = &arg_54;
                            objC16 = &arg_4;
                        }

                        long double x87_r7_161 = *srcS21 - *valA70;
                        float v_dc_8 = (g_bcabd8 + 1f - *valA70) / x87_r7_161;
                        *srcS21 = x87_r7_161 * v_dc_8 + *valA70;
                        srcS21[1] = (srcS21[1] - valA70[1]) * v_dc_8 + valA70[1];
                        srcS21[2] = (srcS21[2] - valA70[2]) * v_dc_8 + valA70[2];
                        srcS21[6] = (srcS21[6] - valA70[6]) * v_dc_8 + valA70[6];
                        srcS21[7] = (srcS21[7] - valA70[7]) * v_dc_8 + valA70[7];
                        srcS21[8] = (srcS21[8] - valA70[8]) * v_dc_8 + valA70[8];
                        srcS21[3] = (srcS21[3] - valA70[3]) * v_dc_8 + valA70[3];
                        srcS21[4] = (srcS21[4] - valA70[4]) * v_dc_8 + valA70[4];
                        srcS21[5] = (srcS21[5] - valA70[5]) * v_dc_8 + valA70[5];
                        long double x87_r7_197 = g_bcabdc + 1f;
                        long double f5_1 = srcS21[1];
                        x87_r7_197 - f5_1;
                        int32_t valA72;

                        valA72 = !(*(&((x87_r7_197 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_197, f5_1) ? 1 : 0) << 0xa
                            | (x87_r7_197 == f5_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                        srcS21[9] = valA72 << 3;
                        long double x87_r7_199 = *objC16 - *tmpD10;
                        float v_dc_9 = (g_bcabd8 + 1f - *tmpD10) / x87_r7_199;
                        *objC16 = x87_r7_199 * v_dc_9 + *tmpD10;
                        objC16[1] = (objC16[1] - tmpD10[1]) * v_dc_9 + tmpD10[1];
                        objC16[2] = (objC16[2] - tmpD10[2]) * v_dc_9 + tmpD10[2];
                        objC16[6] = (objC16[6] - tmpD10[6]) * v_dc_9 + tmpD10[6];
                        objC16[7] = (objC16[7] - tmpD10[7]) * v_dc_9 + tmpD10[7];
                        objC16[8] = (objC16[8] - tmpD10[8]) * v_dc_9 + tmpD10[8];
                        objC16[3] = (objC16[3] - tmpD10[3]) * v_dc_9 + tmpD10[3];
                        objC16[4] = (objC16[4] - tmpD10[4]) * v_dc_9 + tmpD10[4];
                        objC16[5] = (objC16[5] - tmpD10[5]) * v_dc_9 + tmpD10[5];
                        long double x87_r7_235 = g_bcabdc + 1f;
                        long double f12_1 = objC16[1];
                        x87_r7_235 - f12_1;
                        int32_t valA75;

                        valA75 = !(*(&((x87_r7_235 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_235, f12_1) ? 1 : 0) << 0xa
                            | (x87_r7_235 == f12_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                        objC16[9] = valA75 << 3;
                        tmpD = a2;
                        objC = a4;
                        valA = a6;
                        ctxB4 = tmpD | objC | valA;
                        srcS24 = tmpD & objC & valA;
                    }

                    if (!srcS24)
                        goto label_50cf06;
                }
            }
            else
            {
                int32_t tmpD5 = tmpD & 2;
                int32_t objC8 = objC & 2;
                int32_t valA40 = (valA & 2) + tmpD5 + objC8;
                valA40 &= 0xfe;
                int32_t srcS16;

                if (valA40 != 4)
                {
                    float* valA52;
                    float* tmpD8;
                    float* flagP2;

                    if (tmpD5)
                    {
                        valA52 = &arg_2c;
                        tmpD8 = &arg_54;
                        flagP2 = &arg_4;
                    }
                    else if (!objC8)
                    {
                        valA52 = &arg_4;
                        tmpD8 = &arg_2c;
                        flagP2 = &arg_54;
                    }
                    else
                    {
                        valA52 = &arg_54;
                        tmpD8 = &arg_4;
                        flagP2 = &arg_2c;
                    }

                    long double x87_r7_149 = (g_bcabd4 - valA52[1]) / (flagP2[1] - valA52[1]);
                    memcpy(&v_d8, flagP2, 0x28);
                    *flagP2 = (*flagP2 - *valA52) * x87_r7_149 + *valA52;
                    flagP2[1] = (flagP2[1] - valA52[1]) * x87_r7_149 + valA52[1];
                    flagP2[2] = (flagP2[2] - valA52[2]) * x87_r7_149 + valA52[2];
                    flagP2[6] = (flagP2[6] - valA52[6]) * x87_r7_149 + valA52[6];
                    flagP2[7] = (flagP2[7] - valA52[7]) * x87_r7_149 + valA52[7];
                    flagP2[8] = (flagP2[8] - valA52[8]) * x87_r7_149 + valA52[8];
                    flagP2[3] = (flagP2[3] - valA52[3]) * x87_r7_149 + valA52[3];
                    flagP2[4] = (flagP2[4] - valA52[4]) * x87_r7_149 + valA52[4];
                    flagP2[5] = (flagP2[5] - valA52[5]) * x87_r7_149 + valA52[5];
                    long double x87_r7_152 = g_bcabd8 + 1f;
                    long double f6_1 = *flagP2;
                    x87_r7_152 - f6_1;
                    int32_t objC10;

                    objC10 = !(*(&((x87_r7_152 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_152, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_152 == f6_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_154 = g_bcabdc + 1f;
                    long double f13_1 = flagP2[1];
                    x87_r7_154 - f13_1;
                    int32_t valA54;

                    valA54 = !(*(&((x87_r7_154 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_154, f13_1) ? 1 : 0) << 0xa
                        | (x87_r7_154 == f13_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    flagP2[9] = ((valA54 * 2) | objC10) << 2;
                    long double x87_r7_156 = v_d4 - tmpD8[1];
                    float v_dc_6 = (g_bcabd4 - tmpD8[1]) / x87_r7_156;
                    v_d8 = (v_d8 - *tmpD8) * v_dc_6 + *tmpD8;
                    long double x87_r7_158 = x87_r7_156 * v_dc_6 + tmpD8[1];
                    v_d4 = x87_r7_158;
                    v_d0 = (v_d0 - tmpD8[2]) * v_dc_6 + tmpD8[2];
                    v_c0 = (v_c0 - tmpD8[6]) * v_dc_6 + tmpD8[6];
                    v_bc = (v_bc - tmpD8[7]) * v_dc_6 + tmpD8[7];
                    v_b8 = (v_b8 - tmpD8[8]) * v_dc_6 + tmpD8[8];
                    v_cc = (v_cc - tmpD8[3]) * v_dc_6 + tmpD8[3];
                    v_c8 = (v_c8 - tmpD8[4]) * v_dc_6 + tmpD8[4];
                    v_c4 = (v_c4 - tmpD8[5]) * v_dc_6 + tmpD8[5];
                    long double x87_r6_170 = g_bcabd8 + 1f;
                    long double f18_1 = v_d8;
                    x87_r6_170 - f18_1;
                    int32_t objC11;

                    objC11 = !(*(&((x87_r6_170 < f18_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_170, f18_1) ? 1 : 0) << 0xa
                        | (x87_r6_170 == f18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                    long double x87_r6_172 = g_bcabdc + 1f;
                    x87_r7_158 - x87_r6_172;
                    int32_t valA59;

                    valA59 = *(&((x87_r7_158 < x87_r6_172 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_158, x87_r6_172) ? 1 : 0) << 0xa
                        | (x87_r7_158 == x87_r6_172 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    v_b4 = ((valA59 * 2) | objC11) << 2;
                    int32_t v_f0_2 = a9;
                    ctxB4 = a2 | a4 | a6;
                    int32_t v_f4_2 = a8;
                    int32_t v_f8_2 = a7;
                    memcpy(&v_120, flagP2, 0x28);
                    memcpy(&v_148, &v_d8, 0x28);
                    memcpy(&v_170, tmpD8, 0x28);
                    Physics_CalculateSplineLength_13();
                    valA = a6;
                    objC = a4;
                    tmpD = a2;
                    srcS16 = a2 & a4 & a6;
                }
                else
                {
                    float* valA41;
                    float* objC9;
                    float* tmpD6;
                    float* srcS13;

                    if (!tmpD5)
                    {
                        valA41 = &arg_4;
                        tmpD6 = &arg_4;
                        srcS13 = &arg_2c;
                        objC9 = &arg_54;
                    }
                    else if (objC8)
                    {
                        valA41 = &arg_54;
                        tmpD6 = &arg_54;
                        srcS13 = &arg_4;
                        objC9 = &arg_2c;
                    }
                    else
                    {
                        valA41 = &arg_2c;
                        tmpD6 = &arg_2c;
                        srcS13 = &arg_54;
                        objC9 = &arg_4;
                    }

                    long double x87_r7_133 = (g_bcabd4 - valA41[1]) / (srcS13[1] - valA41[1]);
                    *srcS13 = (*srcS13 - *valA41) * x87_r7_133 + *valA41;
                    srcS13[1] = (srcS13[1] - valA41[1]) * x87_r7_133 + valA41[1];
                    srcS13[2] = (srcS13[2] - valA41[2]) * x87_r7_133 + valA41[2];
                    srcS13[6] = (srcS13[6] - valA41[6]) * x87_r7_133 + valA41[6];
                    srcS13[7] = (srcS13[7] - valA41[7]) * x87_r7_133 + valA41[7];
                    srcS13[8] = (srcS13[8] - valA41[8]) * x87_r7_133 + valA41[8];
                    srcS13[3] = (srcS13[3] - valA41[3]) * x87_r7_133 + valA41[3];
                    srcS13[4] = (srcS13[4] - valA41[4]) * x87_r7_133 + valA41[4];
                    srcS13[5] = (srcS13[5] - valA41[5]) * x87_r7_133 + valA41[5];
                    long double x87_r7_136 = g_bcabd8 + 1f;
                    long double f2_1 = *srcS13;
                    x87_r7_136 - f2_1;
                    int32_t dstD2;

                    dstD2 = !(*(&((x87_r7_136 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_136, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_136 == f2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_138 = g_bcabdc + 1f;
                    long double f7_1 = srcS13[1];
                    x87_r7_138 - f7_1;
                    int32_t valA43;

                    valA43 = !(*(&((x87_r7_138 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_138, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_138 == f7_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    srcS13[9] = ((valA43 * 2) | dstD2) << 2;
                    long double x87_r7_141 = (g_bcabd4 - tmpD6[1]) / (objC9[1] - tmpD6[1]);
                    *objC9 = (*objC9 - *tmpD6) * x87_r7_141 + *tmpD6;
                    objC9[1] = (objC9[1] - tmpD6[1]) * x87_r7_141 + tmpD6[1];
                    objC9[2] = (objC9[2] - tmpD6[2]) * x87_r7_141 + tmpD6[2];
                    objC9[6] = (objC9[6] - tmpD6[6]) * x87_r7_141 + tmpD6[6];
                    objC9[7] = (objC9[7] - tmpD6[7]) * x87_r7_141 + tmpD6[7];
                    objC9[8] = (objC9[8] - tmpD6[8]) * x87_r7_141 + tmpD6[8];
                    objC9[3] = (objC9[3] - tmpD6[3]) * x87_r7_141 + tmpD6[3];
                    objC9[4] = (objC9[4] - tmpD6[4]) * x87_r7_141 + tmpD6[4];
                    objC9[5] = (objC9[5] - tmpD6[5]) * x87_r7_141 + tmpD6[5];
                    long double x87_r7_144 = g_bcabd8 + 1f;
                    long double f14_1 = *objC9;
                    x87_r7_144 - f14_1;
                    int32_t tmpD7;

                    tmpD7 = !(*(&((x87_r7_144 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_144, f14_1) ? 1 : 0) << 0xa
                        | (x87_r7_144 == f14_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_146 = g_bcabdc + 1f;
                    long double f19_1 = objC9[1];
                    x87_r7_146 - f19_1;
                    int32_t valA48;

                    valA48 = !(*(&((x87_r7_146 < f19_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_146, f19_1) ? 1 : 0) << 0xa
                        | (x87_r7_146 == f19_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    objC9[9] = ((valA48 * 2) | tmpD7) << 2;
                    tmpD = a2;
                    objC = a4;
                    valA = a6;
                    ctxB4 = tmpD | objC | valA;
                    srcS16 = tmpD & objC & valA;
                }

                if (!srcS16)
                    goto label_50ca39;
            }
        }
    }

    int32_t result = g_a7da08 - 1;
    g_a7da08 = result;
    return result;
}
