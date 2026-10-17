// Original IGI.EXE function: Human_WallSweep (VA 0x00461A70; static CFG gate PASS, CFG score 0.905).
#include "Human_WallSweep.h"
int32_t Human_WallSweep(void* a1, double* a2, int32_t* a3, float* a4, int32_t* a5)

{
    float v_25c;
    float* valA1 = FX_ExplosionSpawn_16(&v_25c, a1, 0);
    float v_280 = *valA1;
    int32_t v_28c = 0;
    int32_t v_27c = valA1[1];
    float tmpD1 = valA1[2];
    *a5 &= 0xfffffff7;
    double* ctxB1;
    double* srcS4;

    while (true)
    {
        srcS4 = a3;
        ctxB1 = a2;
        char v_299_1 = 0;
        double v_250 = *srcS4 - *ctxB1;
        double v_248 = srcS4[1] - ctxB1[1];
        double v_240_1 = srcS4[2] - ctxB1[2];

        if (Sys_PopStack_11(&v_250))
            break;

        double v_288_1 = Sys_OpenFileStream_11(&v_250) + 10.24;
        Sys_FreeMemory_11(&v_250);
        long double x87_r7_10 = v_288_1 * v_250;
        void v_22c;
        memcpy(&v_22c, &v_250, 0x18);
        double v_224 = v_224 * v_288_1;
        double v_21c = v_21c * v_288_1;
        v_28c += 1;
        double v_204_1 = 409.60000000000002 - tmpD1;
        char valA5 = *(a1 + 0x33d);
        int32_t v_214 = 0;
        double v_1a0 = x87_r7_10;
        long double x87_r6_7 = v_224;
        double v_238_1 = x87_r6_7;
        double v_198_1 = x87_r6_7;
        int32_t v_210_1 = 0;
        int32_t v_20c_1 = 0;
        int32_t v_208_1 = 0;
        double v_190_1 = v_204_1 + v_21c;
        long double x87_r5_3;

        x87_r5_3 = !valA5 ? 1638.4000000000001 : 819.20000000000005;

        int32_t v_1fc_1 = 0;
        int32_t v_1f8_1 = 0;
        int32_t v_1f4_1 = 0;
        int32_t v_1f0_1 = 0;
        double v_188_1 = x87_r7_10;
        double v_180_1 = x87_r6_7;
        double v_178_1 = x87_r5_3 - tmpD1 + v_21c;
        long double x87_r6_10;

        x87_r6_10 = !valA5 ? 7372.8000000000002 : 5324.8000000000002;

        int32_t v_168 = v_238_1;
        int32_t v_1e4_1 = 0;
        int32_t v_1e0_1 = 0;
        int32_t v_1dc_1 = 0;
        double v_170_1 = x87_r7_10;
        long double x87_r7_12 = x87_r6_10 - tmpD1 + v_21c;
        int32_t v_1d8 = 0;
        int32_t v_164_1 = *(&v_238_1 + 4);
        int32_t i = 0;
        double v_160_1 = x87_r7_12;
        double v_1b8;
        double v_1b0;
        void v_1a8;

        do
        {
            long double x87_r7_14 = *(&v_214 + i) + *ctxB1;
            i += 0x18;
            *(&v_22c + i) = x87_r7_14;
            *(&v_224 + i) = *(&v_224 + i) + ctxB1[1];
            *(&v_21c + i) = ctxB1[2] + *(&v_21c + i);
            *(&v_1b8 + i) = *(&v_1b8 + i) + *ctxB1;
            *(&v_1b0 + i) = *(&v_1b0 + i) + ctxB1[1];
            *(&v_1a8 + i) = ctxB1[2] + *(&v_1a8 + i);
        } while (i < 0x48);

        void* v_1a4_1 = a1;
        void v_158;
        __builtin_memset(&v_158, 0, 0x150);
        char valA7 = Level_LoadObjects_4();
        World_TraceBatch(Level_StartMission_4(), &v_158, &v_214, &v_1a0, 3, valA7, &v_1a8,
            0xffffffff, 1);
        void* ctxB2 = nullptr;
        double v_288_2 = v_288_1 - 10.24;
        int32_t* tmpD6;

        if (*a5 & 4)
        {
            void v_b0;
            float* objC10 = &v_b0;
            int32_t i_4 = 2;
            int32_t i_1;

            do
            {
                if (objC10[8])
                {
                    int32_t* valA22 = objC10;
                    float srcS1 = *valA22;
                    long double x87_r7_61 = srcS1;
                    float srcS2 = valA22[1];
                    long double f2_1 = 0f;
                    x87_r7_61 - f2_1;
                    long double x87_r7_62 = valA22[2];

                    if (!(*(&((x87_r7_61 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_61, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_61 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    {
                    label_462120:
                        long double x87_r5_17 = srcS2;
                        long double x87_r4_15 = srcS1;
                        x87_r7_62 = 1.0 / sqrtl(x87_r4_15 * x87_r4_15 + x87_r5_17 * x87_r5_17
                            + x87_r7_62 * x87_r7_62) * x87_r7_62;
                    }
                    else
                    {
                        long double x87_r6_32 = srcS2;
                        long double f5_1 = 0f;
                        x87_r6_32 - f5_1;

                        if (!(*(&((x87_r6_32 < f5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_32, f5_1) ? 1 : 0) << 0xa
                                | (x87_r6_32 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                            goto label_462120;

                        long double f8_1 = 0f;
                        x87_r7_62 - f8_1;

                        if (!(*(&((x87_r7_62 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_62, f8_1) ? 1 : 0) << 0xa
                                | (x87_r7_62 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                            goto label_462120;
                    }

                    long double f7_1 = 0f;
                    x87_r7_62 - f7_1;

                    if (*(&((x87_r7_62 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_62, f7_1) ? 1 : 0) << 0xa
                            | (x87_r7_62 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        x87_r7_62 = -(x87_r7_62);

                    long double f11_1 = 0.100000001f;
                    x87_r7_62 - f11_1;

                    if (*(&((x87_r7_62 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_62, f11_1) ? 1 : 0) << 0xa
                        | (x87_r7_62 == f11_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        objC10[2] = 0;
                        long double x87_r7_64 = *objC10;
                        long double f14_1 = 0f;
                        x87_r7_64 - f14_1;
                        long double x87_r7_65;
                        long double f18_1;

                        if (*(&((x87_r7_64 < f14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_64, f14_1) ? 1 : 0) << 0xa
                            | (x87_r7_64 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        {
                            x87_r7_65 = objC10[1];
                            f18_1 = 0f;
                            x87_r7_65 - f18_1;
                        }

                        if (!(*(&((x87_r7_64 < f14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_64, f14_1) ? 1 : 0) << 0xa
                            | (x87_r7_64 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
                            (x87_r7_65 < f18_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_65, f18_1) ? 1 : 0) << 0xa
                            | (x87_r7_65 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                            long double x87_r7_66 = objC10[1];
                            long double x87_r6_37 = *objC10;
                            long double x87_r7_71 =
                                1.0 / sqrtl(x87_r7_66 * x87_r7_66 + x87_r6_37 * x87_r6_37);
                            *objC10 = *objC10 * x87_r7_71;
                            objC10[1] = objC10[1] * x87_r7_71;
                            objC10[2] = objC10[2] * x87_r7_71;
                        }

                        long double x87_r7_73;
                        long double f24_1;

                        if (ctxB2)
                        {
                            x87_r7_73 = *(objC10 + 0x28);
                            f24_1 = *(ctxB2 + 0x60);
                            x87_r7_73 - f24_1;
                        }

                        if (!ctxB2 || *(&((x87_r7_73 < f24_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_73, f24_1) ? 1 : 0) << 0xa
                                | (x87_r7_73 == f24_1 ? 1 : 0) << 0xe) + 1) & 1)
                            ctxB2 = &objC10[-0xe];
                    }
                }

                objC10 = &objC10[0x1c];
                i_1 = i_4;
                i_4 -= 1;
            } while (i_1 != 1);
            tmpD6 = a3;
            goto label_4621e4;
        }

        float v_120;
        int32_t* objC4 = &v_120;
        int32_t i_3 = 3;
        int32_t i_2;

        do
        {
            if (objC4[8])
            {
                float dstD1 = *objC4;
                long double x87_r7_27 = dstD1;
                float dstD2 = objC4[1];
                long double f4_1 = 0f;
                x87_r7_27 - f4_1;
                long double x87_r7_28 = objC4[2];

                if (!(*(&((x87_r7_27 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_27, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_27 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                {
                label_461dfb:
                    long double x87_r5_8 = dstD2;
                    long double x87_r4_3 = dstD1;
                    x87_r7_28 = 1.0
                        / sqrtl(x87_r4_3 * x87_r4_3 + x87_r5_8 * x87_r5_8 + x87_r7_28 * x87_r7_28)
                        * x87_r7_28;
                }
                else
                {
                    long double x87_r6_12 = dstD2;
                    long double f6_1 = 0f;
                    x87_r6_12 - f6_1;

                    if (!(*(&((x87_r6_12 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_12, f6_1) ? 1 : 0) << 0xa
                            | (x87_r6_12 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_461dfb;

                    long double f10_1 = 0f;
                    x87_r7_28 - f10_1;

                    if (!(*(&((x87_r7_28 < f10_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_28, f10_1) ? 1 : 0) << 0xa
                            | (x87_r7_28 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_461dfb;
                }

                long double f9_1 = 0f;
                x87_r7_28 - f9_1;

                if (*(&((x87_r7_28 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_28, f9_1) ? 1 : 0) << 0xa
                        | (x87_r7_28 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    x87_r7_28 = -(x87_r7_28);

                long double f13_1 = 0.100000001f;
                x87_r7_28 - f13_1;

                if (*(&((x87_r7_28 < f13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_28, f13_1) ? 1 : 0) << 0xa
                    | (x87_r7_28 == f13_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    objC4[2] = 0;
                    long double x87_r7_30 = *objC4;
                    long double f16_1 = 0f;
                    x87_r7_30 - f16_1;
                    long double x87_r7_31;
                    long double f22_1;

                    if (*(&((x87_r7_30 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_30, f16_1) ? 1 : 0) << 0xa
                        | (x87_r7_30 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    {
                        x87_r7_31 = objC4[1];
                        f22_1 = 0f;
                        x87_r7_31 - f22_1;
                    }

                    if (!(*(&((x87_r7_30 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_30, f16_1) ? 1 : 0) << 0xa
                        | (x87_r7_30 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
                        (x87_r7_31 < f22_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_31, f22_1) ? 1 : 0) << 0xa
                        | (x87_r7_31 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        long double x87_r7_32 = objC4[1];
                        long double x87_r6_17 = *objC4;
                        long double x87_r7_37 =
                            1.0 / sqrtl(x87_r7_32 * x87_r7_32 + x87_r6_17 * x87_r6_17);
                        *objC4 = *objC4 * x87_r7_37;
                        objC4[1] = objC4[1] * x87_r7_37;
                        objC4[2] = objC4[2] * x87_r7_37;
                    }

                    long double x87_r7_39;
                    long double f27_1;

                    if (ctxB2)
                    {
                        x87_r7_39 = *(objC4 + 0x28);
                        f27_1 = *(ctxB2 + 0x60);
                        x87_r7_39 - f27_1;
                    }

                    if (!ctxB2 || *(&((x87_r7_39 < f27_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_39, f27_1) ? 1 : 0) << 0xa
                            | (x87_r7_39 == f27_1 ? 1 : 0) << 0xe) + 1) & 1)
                        ctxB2 = &objC4[-0xe];
                }
            }

            objC4 = &objC4[0x1c];
            i_2 = i_3;
            i_3 -= 1;
        } while (i_2 != 1);
        int32_t v_100;

        if (!v_100 || ctxB2)
            tmpD6 = a3;
        else
        {
            long double x87_r7_40 = v_120;
            long double f12_1 = 0f;
            x87_r7_40 - f12_1;
            float v_298_2 = v_120;
            float v_11c;
            float v_294_2 = v_11c;
            long double x87_r7_46;
            float v_118;

            if (!(*(&((x87_r7_40 < f12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_40, f12_1) ? 1 : 0) << 0xa
                | (x87_r7_40 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_461f28:
                long double x87_r7_43 = v_118;
                long double x87_r6_28 = v_11c;
                long double x87_r5_13 = v_120;
                x87_r7_46 = 1.0
                    / sqrtl(x87_r5_13 * x87_r5_13 + x87_r6_28 * x87_r6_28 + x87_r7_43 * x87_r7_43)
                    * v_118;
            }
            else
            {
                long double x87_r7_41 = v_11c;
                long double f15_1 = 0f;
                x87_r7_41 - f15_1;

                if (!(*(&((x87_r7_41 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_41, f15_1) ? 1 : 0) << 0xa
                        | (x87_r7_41 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_461f28;

                long double x87_r7_42 = v_118;
                long double f21_1 = 0f;
                x87_r7_42 - f21_1;

                if (!(*(&((x87_r7_42 < f21_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_42, f21_1) ? 1 : 0) << 0xa
                        | (x87_r7_42 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_461f28;

                x87_r7_46 = v_118;
            }
            long double f20_1 = 0.999899983f;
            x87_r7_46 - f20_1;

            if (*(&((x87_r7_46 < f20_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_46, f20_1) ? 1 : 0) << 0xa
                    | (x87_r7_46 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                tmpD6 = a3;
            else
            {
                tmpD6 = a3;
                void v_150;
                memcpy(tmpD6, &v_150, 0x18);
                *(tmpD6 + 0x10) = tmpD1 - 409.60000000000002 + *(tmpD6 + 0x10);
            }
        }

        int32_t v_20;

        if (!v_20)
        {
        label_4621e4:

            if (ctxB2)
            {
            label_4621f3:
                double v_274 = *(ctxB2 + 0x38);
                double v_26c = *(ctxB2 + 0x3c);
                double v_264_1 = *(ctxB2 + 0x40);
                Sys_FreeMemory_11(&v_274);
                long double x87_r7_78 = v_288_2 * v_250;
                void v_1c0;
                memcpy(&v_1c0, &v_250, 0x18);
                v_1b8 = v_1b8 * v_288_2;
                long double x87_r6_51 = v_1b0 * v_288_2;
                v_1b0 = x87_r6_51;
                long double x87_r7_80 =
                    x87_r6_51 * v_264_1 + v_1b8 * v_26c + x87_r7_78 * v_274;
                long double f17_1 = 0.0;
                x87_r7_80 - f17_1;

                if (*(&((x87_r7_80 < f17_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_80, f17_1) ? 1 : 0) << 0xa
                    | (x87_r7_80 == f17_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    float v_1cc = *a3 - *(ctxB2 + 8);
                    float v_1c8_1 = *(a3 + 8) - *(ctxB2 + 0x10);
                    float v_1c4_1 = *(a3 + 0x10) - *(ctxB2 + 0x18);
                    Sys_PopStack_10(&v_25c, &v_1cc, ctxB2 + 0x38, ctxB2 + 0x38);
                    v_299_1 = 1;
                    *a3 = v_25c + *(ctxB2 + 8);
                    float v_258;
                    *(a3 + 8) = v_258 + *(ctxB2 + 0x10);
                    float v_254;
                    *(a3 + 0x10) = v_254 + *(ctxB2 + 0x18);
                    long double x87_r7_94 = v_274 * 10.24;
                    v_26c = v_26c * 10.24;
                    double v_264_2 = v_264_1 * 10.24;
                    *a3 = x87_r7_94 + *a3;
                    *(a3 + 8) = v_26c + *(a3 + 8);
                    *(a3 + 0x10) = v_264_2 + *(a3 + 0x10);
                    *a5 |= 8;
                }

                tmpD6 = a3;
            }
        }
        else
        {
            if (ctxB2)
                goto label_4621f3;

            float v_40;
            long double x87_r7_50 = v_40;
            long double f19_1 = 0f;
            x87_r7_50 - f19_1;
            float v_3c;
            float v_294_3 = v_3c;
            float v_298_3 = v_40;
            long double x87_r7_56;
            float v_38;

            if (!(*(&((x87_r7_50 < f19_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_50, f19_1) ? 1 : 0) << 0xa
                | (x87_r7_50 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_462011:
                long double x87_r7_53 = v_38;
                long double x87_r6_30 = v_3c;
                long double x87_r5_15 = v_40;
                x87_r7_56 = 1.0
                    / sqrtl(x87_r5_15 * x87_r5_15 + x87_r6_30 * x87_r6_30 + x87_r7_53 * x87_r7_53)
                    * v_38;
            }
            else
            {
                long double x87_r7_51 = v_3c;
                long double f23_1 = 0f;
                x87_r7_51 - f23_1;

                if (!(*(&((x87_r7_51 < f23_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_51, f23_1) ? 1 : 0) << 0xa
                        | (x87_r7_51 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_462011;

                long double x87_r7_52 = v_38;
                long double f26_1 = 0f;
                x87_r7_52 - f26_1;

                if (!(*(&((x87_r7_52 < f26_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_52, f26_1) ? 1 : 0) << 0xa
                        | (x87_r7_52 == f26_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_462011;

                x87_r7_56 = v_38;
            }
            long double f25_1 = -0.999899983f;
            x87_r7_56 - f25_1;
            void* valA18;

            if (!(*(&((x87_r7_56 < f25_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_56, f25_1) ? 1 : 0) << 0xa
                | (x87_r7_56 == f25_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                int32_t v_70;
                *tmpD6 = v_70;
                int32_t v_6c;
                tmpD6[1] = v_6c;
                int32_t v_68;
                tmpD6[2] = v_68;
                int32_t v_64;
                tmpD6[3] = v_64;
                valA18 = a1;
                *(valA18 + 0x664) = 0;
                *(valA18 + 0x668) = 0;
            }
            else
                valA18 = a1;

            *(valA18 + 0x66c) = 0;
            double v_60;
            *(tmpD6 + 0x10) = v_60 - (7372.8000000000002 - tmpD1) - 10.24;
        }

        if (v_28c > 0xa)
        {
            *tmpD6 = *a2;
            tmpD6[1] = *(a2 + 4);
            tmpD6[2] = a2[1];
            tmpD6[3] = *(a2 + 0xc);
        }
        else if (v_299_1)
            continue;

        ctxB1 = a2;
        srcS4 = a3;
        break;
    }

    *a4 = *srcS4 - *ctxB1;
    a4[1] = srcS4[1] - ctxB1[1];
    int32_t v_2ac_5 = v_28c;
    a4[2] = srcS4[2] - ctxB1[2];
    return AI_CheckHearing_18(a1, "Checks: %d\n");
}
