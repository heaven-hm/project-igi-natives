#include "Light_UpdateGlobalLight_12.h"
float Light_UpdateGlobalLight_12(float a1, int32_t* a2, int32_t a3 @ 0x110, int32_t a4, int32_t a5) __location("valA")

{
    uint32_t i_7;
    uint32_t i_6 = i_7;
    Camera_UpdateTransform_5(0x2648);
    int32_t* dstD = a2;
    float result = dstD[9];
    int32_t arg_c = 0;

    if (result)
    {
        float ctxB1 = a1;
        g_a8457c += 1;
        int32_t valA = *(ctxB1 + 0x4ab8);
        void* __return_addr_1;

        if (dstD[7] > valA || !valA)
        {
            arg_c = 1;
            __return_addr_1 = 6;
        }
        else
            __return_addr_1 = 1;

        int32_t arg_14 = 0;
        int32_t arg_c4 = *(ctxB1 + 0x4acc);
        int32_t arg_d0 = *(ctxB1 + 0x4ad0);
        int32_t arg_10 = dstD[8];
        __return_addr = __return_addr_1;
        int32_t srcS3 = dstD[1];
        int32_t arg_18 = *dstD;
        int32_t arg_1c = srcS3;
        int32_t arg_20 = dstD[2];
        int32_t arg_24 = dstD[3];
        a1 = 0f;
        arg_10 = arg_10 / __return_addr;
        double arg_28 = *(ctxB1 + 0x4a94);
        int32_t saved_dst;

        if (__return_addr_1 >= 0)
        {
            int32_t v_8_1 = 0;
            bool cond_3_1;

            do
            {
                i_6 = 0;
                void* const __return_addr_7;
                bool cond_10_1;

                do
                {
                    if (!arg_c)
                    {
                        memcpy(&(&saved_dst)[(i_6 + v_8_1) * 6 + 0x59f], &arg_18,
                            0x18);
                        dstD = a2;
                    }
                    else
                    {
                        int32_t objC1 = *(ctxB1 + 0x4ab8);
                        int32_t srcS5 = dstD[7];
                        a2 = 1;

                        if (srcS5 == objC1 + 1)
                        {
                            long double x87_r7_4 = *dstD;
                            void* tmpD8 = objC1 * 0x300 + ctxB1;
                            long double f1_1 = *(tmpD8 + 0xc40);
                            x87_r7_4 - f1_1;

                            if (!(*(&((x87_r7_4 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_4, f1_1) ? 1 : 0) << 0xa
                                | (x87_r7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40) || v_8_1)
                            {
                                long double x87_r7_5 = *dstD;
                                long double f5_1 = *(tmpD8 + 0xe80);
                                x87_r7_5 - f5_1;

                                if (!(*(&((x87_r7_5 < f5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_5, f5_1) ? 1 : 0) << 0xa
                                    | (x87_r7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                    || a1 != __return_addr)
                                {
                                    long double x87_r7_6 = *(dstD + 8);
                                    long double f10_1 = *(tmpD8 + 0xc48);
                                    x87_r7_6 - f10_1;

                                    if (!(*(&((x87_r7_6 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_6, f10_1) ? 1 : 0) << 0xa
                                        | (x87_r7_6 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40) || i_6)
                                    {
                                        long double x87_r7_7 = *(dstD + 8);
                                        long double f17_1 = *(tmpD8 + 0xcd8);
                                        x87_r7_7 - f17_1;

                                        if (*(&((x87_r7_7 < f17_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_7, f17_1) ? 1 : 0) << 0xa
                                                | (x87_r7_7 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40
                                                && i_6 == __return_addr)
                                            a2 = nullptr;
                                    }
                                    else
                                        a2 = nullptr;
                                }
                                else
                                    a2 = nullptr;
                            }
                            else
                                a2 = nullptr;
                        }

                        if (srcS5 == objC1 + 2)
                        {
                            long double x87_r7_8 = *dstD;
                            int32_t valA9 = objC1 * 0x300;
                            long double f4_1 = *(valA9 + ctxB1 + 0xc40);
                            x87_r7_8 - f4_1;
                            void* objC2 = valA9 + ctxB1;

                            if (!(*(&((x87_r7_8 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_8, f4_1) ? 1 : 0) << 0xa
                                | (x87_r7_8 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40) || v_8_1)
                            {
                                long double x87_r7_9 = *dstD;
                                long double f9_1 = *(objC2 + 0xe80);
                                x87_r7_9 - f9_1;

                                if (*(&((x87_r7_9 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_9, f9_1) ? 1 : 0) << 0xa
                                    | (x87_r7_9 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41
                                    || a1 != __return_addr)
                                {
                                    long double x87_r7_10 = *(dstD + 8);
                                    long double f16_1 = *(objC2 + 0xc48);
                                    x87_r7_10 - f16_1;

                                    if (!(*(&((x87_r7_10 < f16_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_10, f16_1) ? 1 : 0) << 0xa
                                        | (x87_r7_10 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40) || i_6)
                                    {
                                        long double x87_r7_11 = *(dstD + 8);
                                        long double f22_1 = *(objC2 + 0xcd8);
                                        x87_r7_11 - f22_1;

                                        if (!(*(&((x87_r7_11 < f22_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_11, f22_1) ? 1 : 0) << 0xa
                                                | (x87_r7_11 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                                && i_6 == __return_addr)
                                            a2 = nullptr;
                                    }
                                    else
                                        a2 = nullptr;
                                }
                                else
                                    a2 = nullptr;
                            }
                            else
                                a2 = nullptr;
                        }

                        if (*(ctxB1 + 0x4abc) <= objC1 + 2 || a2)
                        {
                            void arg_d8;
                            Light_SetLightColor_11(ctxB1, &arg_d8, &arg_18);
                            int32_t valA16 = v_8_1 + i_6;
                            void arg_e0;
                            memcpy(&(&saved_dst)[valA16 * 6 + 0x59f], &arg_e0, 0x18);
                            (&saved_dst)[valA16 * 3 + 0x3a4] = a3;
                            (&saved_dst)[valA16 * 3 + 0x3a5] = a4;
                            (&saved_dst)[valA16 * 3 + 0x3a6] = a5;
                            dstD = a2;
                        }
                        else
                        {
                            int32_t objC9 = i_6 + v_8_1;
                            int32_t valA20 = objC9 * 0x18;
                            void arg_1668;
                            *(&arg_1668 + valA20) = arg_18;
                            void arg_1670;
                            *(&arg_1670 + valA20) = arg_20;
                            int64_t arg_1678[0x2a];
                            arg_1678[objC9 * 3] = *(ctxB1 + 0x4a94);
                            void arg_e7c;
                            __builtin_memset(&arg_e7c + objC9 * 0xc, 0, 8);
                            int32_t arg_e84[0x29];
                            arg_e84[objC9 * 3] = 0x3f800000;
                        }
                    }

                    __return_addr_7 = __return_addr;
                    cond_10_1 = i_6 + 1 <= __return_addr_7;
                    i_6 += 1;
                    arg_20 = arg_20 + arg_10;
                } while (cond_10_1);
                arg_24 = dstD[3];
                arg_20 = dstD[2];
                arg_18 = arg_18 + arg_10;
                cond_3_1 = a1 + 1 <= __return_addr_7;
                a1 += 1;
                v_8_1 += 0xd;
            } while (cond_3_1);
            __return_addr_1 = __return_addr;
        }

        if (arg_c)
        {
            if (__return_addr_1 >= 1)
            {
                void arg_17e0;
                double* v_8_2 = &arg_17e0;
                void arg_f34;
                float* ctxB2 = &arg_f34;
                i_6 = (__return_addr + 1) >> 1;
                bool cond_2_1;

                do
                {
                    void* const __return_addr_2 = __return_addr;

                    if (__return_addr_2 > 2)
                    {
                        long double x87_r7_19 = dstD[4];
                        double* tmpD19 = v_8_2;
                        long double x87_r6_2 = 1f - x87_r7_19;
                        float* objC11 = ctxB2;
                        uint32_t i_3 = (__return_addr_2 - 1) >> 1;
                        uint32_t i;

                        do
                        {
                            *tmpD19 = (tmpD19[-0x27] + tmpD19[0x27]) * x87_r6_2 * 0.5
                                + x87_r7_19 * *tmpD19;
                            long double x87_r5_8 = x87_r7_19 * objC11[1] + x87_r6_2;
                            a1 = x87_r5_8;
                            objC11[1] = x87_r5_8;
                            long double x87_r5_9 = objC11[-1];
                            long double f3_1 = 0f;
                            x87_r5_9 - f3_1;

                            if (!(*(&((x87_r5_9 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_9, f3_1) ? 1 : 0) << 0xa
                                | (x87_r5_9 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                            {
                            label_52ea3b:
                                long double x87_r5_12 = a1;
                                long double x87_r4_4 = *objC11;
                                long double x87_r3_1 = objC11[-1];
                                long double x87_r5_14 = 1.0 / sqrtl(x87_r3_1 * x87_r3_1
                                    + x87_r4_4 * x87_r4_4 + x87_r5_12 * x87_r5_12);
                                objC11[-1] = objC11[-1] * x87_r5_14;
                                *objC11 = *objC11 * x87_r5_14;
                                objC11[1] = objC11[1] * x87_r5_14;
                            }
                            else
                            {
                                long double x87_r5_10 = *objC11;
                                long double f8_1 = 0f;
                                x87_r5_10 - f8_1;

                                if (!(*(&((x87_r5_10 < f8_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r5_10, f8_1) ? 1 : 0) << 0xa
                                        | (x87_r5_10 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52ea3b;

                                long double x87_r5_11 = a1;
                                long double f15_1 = 0f;
                                x87_r5_11 - f15_1;

                                if (!(*(&((x87_r5_11 < f15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r5_11, f15_1) ? 1 : 0) << 0xa
                                        | (x87_r5_11 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52ea3b;
                            }

                            tmpD19 = &tmpD19[6];
                            objC11 = &objC11[6];
                            i = i_3;
                            i_3 -= 1;
                        } while (i != 1);
                    }

                    ctxB2 = &ctxB2[0x4e];
                    cond_2_1 = i_6 != 1;
                    v_8_2 = &v_8_2[0x4e];
                    i_6 -= 1;
                } while (cond_2_1);
            }

            void* const __return_addr_3 = __return_addr;

            if (__return_addr_3 > 2)
            {
                void arg_1900;
                double* tmpD20 = &arg_1900;
                double* v_8_3 = &arg_1900;
                void arg_fc4;
                float* ctxB3 = &arg_fc4;
                i_6 = (__return_addr_3 - 1) >> 1;
                bool cond_6_1;

                do
                {
                    void* const __return_addr_4 = __return_addr;

                    if (__return_addr_4 >= 1)
                    {
                        long double x87_r7_21 = dstD[4];
                        float* objC15 = ctxB3;
                        long double x87_r6_5 = 1f - x87_r7_21;
                        uint32_t i_4 = (__return_addr_4 + 1) >> 1;
                        uint32_t i_1;

                        do
                        {
                            *tmpD20 =
                                (tmpD20[-3] + tmpD20[3]) * x87_r6_5 * 0.5 + x87_r7_21 * *tmpD20;
                            long double x87_r5_23 = x87_r7_21 * objC15[1] + x87_r6_5;
                            a1 = x87_r5_23;
                            objC15[1] = x87_r5_23;
                            long double x87_r5_24 = objC15[-1];
                            long double f7_1 = 0f;
                            x87_r5_24 - f7_1;

                            if (!(*(&((x87_r5_24 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_24, f7_1) ? 1 : 0) << 0xa
                                | (x87_r5_24 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                            {
                            label_52eb4d:
                                long double x87_r5_27 = a1;
                                long double x87_r4_15 = *objC15;
                                long double x87_r3_3 = objC15[-1];
                                long double x87_r5_29 = 1.0 / sqrtl(x87_r4_15 * x87_r4_15
                                    + x87_r3_3 * x87_r3_3 + x87_r5_27 * x87_r5_27);
                                objC15[-1] = objC15[-1] * x87_r5_29;
                                *objC15 = *objC15 * x87_r5_29;
                                objC15[1] = objC15[1] * x87_r5_29;
                            }
                            else
                            {
                                long double x87_r5_25 = *objC15;
                                long double f13_1 = 0f;
                                x87_r5_25 - f13_1;

                                if (!(*(&((x87_r5_25 < f13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r5_25, f13_1) ? 1 : 0) << 0xa
                                        | (x87_r5_25 == f13_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52eb4d;

                                long double x87_r5_26 = a1;
                                long double f21_1 = 0f;
                                x87_r5_26 - f21_1;

                                if (!(*(&((x87_r5_26 < f21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r5_26, f21_1) ? 1 : 0) << 0xa
                                        | (x87_r5_26 == f21_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52eb4d;
                            }

                            tmpD20 = &tmpD20[6];
                            objC15 = &objC15[6];
                            i_1 = i_4;
                            i_4 -= 1;
                        } while (i_1 != 1);
                    }

                    ctxB3 = &ctxB3[0x4e];
                    tmpD20 = &v_8_3[0x4e];
                    cond_6_1 = i_6 != 1;
                    v_8_3 = tmpD20;
                    i_6 -= 1;
                } while (cond_6_1);
            }

            void* const __return_addr_5 = __return_addr;

            if (__return_addr_5 >= 1)
            {
                uint32_t i_5 = (__return_addr_5 + 1) >> 1;
                void arg_17c8;
                double* v_8_4 = &arg_17c8;
                void arg_f28;
                float* ctxB4 = &arg_f28;
                a2 = i_5;
                i_6 = i_5;

                while (true)
                {
                    long double x87_r7_23 = dstD[4];
                    double* tmpD22 = v_8_4;
                    float* objC16 = ctxB4;
                    long double x87_r6_8 = 1f - x87_r7_23;
                    uint32_t i_2;

                    do
                    {
                        *tmpD22 =
                            (tmpD22[-0x24] + tmpD22[0x24]) * x87_r6_8 * 0.5 + x87_r7_23 * *tmpD22;
                        long double x87_r5_38 = x87_r7_23 * objC16[1] + x87_r6_8;
                        a1 = x87_r5_38;
                        objC16[1] = x87_r5_38;
                        long double x87_r5_39 = objC16[-1];
                        long double f6_1 = 0f;
                        x87_r5_39 - f6_1;

                        if (!(*(&((x87_r5_39 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r5_39, f6_1) ? 1 : 0) << 0xa
                            | (x87_r5_39 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                        {
                        label_52ec5f:
                            long double x87_r5_42 = a1;
                            long double x87_r4_26 = *objC16;
                            long double x87_r3_5 = objC16[-1];
                            long double x87_r5_44 = 1.0 / sqrtl(x87_r3_5 * x87_r3_5
                                + x87_r4_26 * x87_r4_26 + x87_r5_42 * x87_r5_42);
                            objC16[-1] = objC16[-1] * x87_r5_44;
                            *objC16 = *objC16 * x87_r5_44;
                            objC16[1] = objC16[1] * x87_r5_44;
                        }
                        else
                        {
                            long double x87_r5_40 = *objC16;
                            long double f12_1 = 0f;
                            x87_r5_40 - f12_1;

                            if (!(*(&((x87_r5_40 < f12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_40, f12_1) ? 1 : 0) << 0xa
                                    | (x87_r5_40 == f12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                goto label_52ec5f;

                            long double x87_r5_41 = a1;
                            long double f19_1 = 0f;
                            x87_r5_41 - f19_1;

                            if (!(*(&((x87_r5_41 < f19_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_41, f19_1) ? 1 : 0) << 0xa
                                    | (x87_r5_41 == f19_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                goto label_52ec5f;
                        }

                        tmpD22 = &tmpD22[6];
                        objC16 = &objC16[6];
                        i_2 = i_5;
                        i_5 -= 1;
                    } while (i_2 != 1);
                    ctxB4 = &ctxB4[0x4e];
                    bool cond_9_1 = i_6 != 1;
                    v_8_4 = &v_8_4[0x4e];
                    i_6 -= 1;

                    if (!cond_9_1)
                        break;

                    i_5 = a2;
                }
            }
        }

        void* const __return_addr_6 = __return_addr;
        double* v_24;
        int32_t arg_148[0x2];

        if (__return_addr_6 >= 0)
        {
            a1 = 0f;
            void* v_8_5 = __return_addr_6 + 1;
            bool cond_4_1;

            do
            {
                int32_t ctxB5 = 0;
                bool cond_5_1;

                do
                {
                    if (!arg_c)
                    {
                        int32_t valA48 = a1 + ctxB5;
                        int32_t dstD4 = *(a1 + 0x4a6c);
                        __builtin_memset(&(&arg_148)[valA48], 0, 8);
                        (&saved_dst)[valA48 * 3 + 0x1a9] = dstD4;
                        int32_t tmpD28 = *(a1 + 0x4a74);
                        (&saved_dst)[valA48 * 3 + 0x1aa] = *(a1 + 0x4a70);
                        (&saved_dst)[valA48 * 3 + 0x1ab] = tmpD28;
                    }
                    else
                    {
                        int32_t srcS10 = a1 + ctxB5;
                        Light_RenderLensflare_12(a1, &(&saved_dst)[srcS10 * 3 + 0x1a9],
                            &(&saved_dst)[srcS10 * 3 + 0x3a4]);
                        v_24 = &(&saved_dst)[srcS10 * 3 + 0x3a4];
                        Light_CalculateAttenuation_12(a1, &(&v_24)[srcS10 * 2 + 0x5b],
                            &(&v_24)[srcS10 * 6 + 0x5a3], v_24);
                    }

                    ctxB5 += 1;
                    cond_5_1 = ctxB5 <= __return_addr;
                    arg_18 = arg_18 + arg_10;
                } while (cond_5_1);
                int32_t tmpD29 = a2[1];
                arg_18 = *a2;
                arg_1c = tmpD29;
                cond_4_1 = v_8_5 != 1;
                arg_20 = arg_20 + arg_10;
                a1 += 0xd;
                v_8_5 -= 1;
            } while (cond_4_1);
        }

        result = 0f;
        a1 = 0f;

        if (__return_addr > 0)
        {
            while (true)
            {
                i_6 = 0;
                void* const __return_addr_9;
                bool cond_12_1;

                do
                {
                    a2 = nullptr;
                    int32_t v_8_6 = 0;
                    void* const __return_addr_8;
                    uint32_t i_8;

                    if (a1)
                    {
                        i_8 = i_6;
                        __return_addr_8 = __return_addr;
                    }
                    else
                    {
                        __return_addr_8 = __return_addr;
                        i_8 = i_6;
                        v_8_6 = 0x10;
                        int32_t valA54;
                        int32_t tmpD31;
                        tmpD31 = HIGHD(__return_addr_8);
                        valA54 = LOWD(__return_addr_8);
                        int32_t tmpD32 = 0;
                        tmpD32 = i_8 >= (valA54 - tmpD31) >> 1;
                        void* tmpD33 = tmpD32 - 1;
                        tmpD33 &= 0x20;
                        a2 = tmpD33 + 0x100;
                    }

                    if (!i_8)
                    {
                        int32_t valA57 = v_8_6;
                        valA57 |= 4;
                        v_8_6 = valA57;
                        int32_t valA59;
                        int32_t tmpD35;
                        tmpD35 = HIGHD(__return_addr_8);
                        valA59 = LOWD(__return_addr_8);
                        int32_t* valA62 = a2;

                        if (a1 >= (valA59 - tmpD35) >> 1)
                            *(&valA62 + 1) |= 1;
                        else
                            valA62 |= 0x80;

                        a2 = valA62;
                    }

                    if (a1 == __return_addr_8 - 1)
                    {
                        int32_t valA63 = v_8_6;
                        valA63 |= 8;
                        v_8_6 = valA63;
                        int32_t valA65;
                        int32_t tmpD36;
                        tmpD36 = HIGHD(__return_addr_8);
                        valA65 = LOWD(__return_addr_8);
                        int32_t* valA68 = a2;

                        if (i_8 >= (valA65 - tmpD36) >> 1)
                            valA68 |= 0x80;
                        else
                            valA68 |= 0x40;

                        a2 = valA68;
                    }

                    if (i_8 == __return_addr_8 - 1)
                    {
                        int32_t valA70;
                        int32_t tmpD37;
                        tmpD37 = HIGHD(__return_addr_8);
                        valA70 = LOWD(__return_addr_8);
                        int32_t* valA73 = a2;
                        v_8_6 |= 2;

                        if (a1 >= (valA70 - tmpD37) >> 1)
                            valA73 |= 0x20;
                        else
                            valA73 |= 0x40;

                        a2 = valA73;
                    }

                    int32_t tmpD38 = result * 0xd + i_6;
                    int32_t valA76 = tmpD38 * 0xc;
                    double arg_40[0x3];
                    memcpy(&arg_40, &(&saved_dst)[tmpD38 * 6 + 0x59f], 0x18);
                    void arg_58;
                    memcpy(&arg_58, &(&saved_dst)[tmpD38 * 6 + 0x5ed], 0x18);
                    void arg_70;
                    memcpy(&arg_70, &(&saved_dst)[tmpD38 * 6 + 0x5a5], 0x18);
                    int32_t arg_690[0x3];
                    int32_t arg_88 = (&arg_690)[tmpD38][0];
                    int32_t arg_8c = (&saved_dst)[tmpD38 * 3 + 0x1aa];
                    int32_t arg_90 = (&saved_dst)[tmpD38 * 3 + 0x1ab];
                    int32_t arg_94 = (&saved_dst)[tmpD38 * 3 + 0x1d0];
                    int32_t arg_98 = (&saved_dst)[tmpD38 * 3 + 0x1d1];
                    int32_t arg_9c = (&saved_dst)[tmpD38 * 3 + 0x1d2];
                    int32_t arg_a0 = (&saved_dst)[tmpD38 * 3 + 0x1ac];
                    int32_t arg_a4 = (&saved_dst)[tmpD38 * 3 + 0x1ad];
                    int32_t arg_a8 = (&saved_dst)[tmpD38 * 3 + 0x1ae];
                    int32_t arg_ac;
                    int32_t arg_b0;
                    int32_t arg_b4;
                    int32_t arg_b8;
                    int32_t arg_bc;
                    int32_t arg_c0;
                    int32_t arg_150[0x18];
                    arg_154;
                    int32_t arg_1b0[0x2];
                    arg_1b4;

                    if (*(a1 + 0x4ac0) && arg_c)
                    {
                        arg_ac = (&arg_148)[tmpD38][0];
                        arg_14c;
                        arg_b0 = *(&arg_14c + (tmpD38 << 3));
                        arg_b4 = (&arg_1b0)[tmpD38][0];
                        arg_b8 = *(&arg_1b4 + (tmpD38 << 3));
                        arg_bc = arg_150[tmpD38 * 2];
                        arg_c0 = *(&arg_154 + (tmpD38 << 3));
                    }

                    int32_t valA84 = a2[6];
                    int32_t arg_c8;
                    int32_t arg_cc;

                    if (!(valA84 & v_8_6 & 0x14))
                    {
                        double (* v_18_5)[0x3] = &arg_40;
                        arg_c8 = 0;
                        arg_cc = *(a1 + 0x4aa0);
                        Terrain_ConnectGraphNode(v_18_5);

                        if (*(a1 + 0x4ac0) && arg_c)
                        {
                            int32_t valA93 = *(a1 + 0x4aa4);
                            double (* v_18_6)[0x3] = &arg_40;
                            arg_c8 = 1;
                            arg_cc = valA93;
                            Terrain_ConnectGraphNode(v_18_6);
                        }
                    }
                    else
                    {
                        void* dstD8 = 2;

                        if (arg_c && valA84 & a2 & 0x1e0)
                            dstD8 = 4;

                        arg_cc = *(a1 + 0x4aa0);
                        void* v_20_3 = nullptr;
                        v_24 = &arg_40;
                        arg_c8 = 0;
                        Light_SetLightColor_12(a1, a2, v_24, v_20_3, dstD8, arg_c);

                        if (*(a1 + 0x4ac0) && arg_c)
                        {
                            arg_cc = *(a1 + 0x4aa4);
                            void* const v_20_4 = nullptr;
                            v_24 = &arg_40;
                            arg_c8 = 1;
                            Light_SetLightColor_12(a1, a2, v_24, v_20_4, dstD8, arg_c);
                        }
                    }

                    memcpy(&arg_40, &(&saved_dst)[tmpD38 * 6 + 0x5a5], 0x18);
                    memcpy(&arg_58, &(&saved_dst)[tmpD38 * 6 + 0x5f3], 0x18);
                    memcpy(&arg_70, &(&saved_dst)[tmpD38 * 6 + 0x5ed], 0x18);

                    if (!*(a1 + 0x4ac8))
                    {
                        void arg_69c;
                        arg_88 = *(&arg_69c + valA76);
                        void arg_6a0;
                        arg_8c = *(&arg_6a0 + valA76);
                        int32_t arg_6a4[0x1f6];
                        arg_90 = arg_6a4[tmpD38 * 3];
                        arg_94 = (&saved_dst)[tmpD38 * 3 + 0x1d3];
                        arg_98 = (&saved_dst)[tmpD38 * 3 + 0x1d4];
                        arg_9c = (&saved_dst)[tmpD38 * 3 + 0x1d5];
                        arg_a0 = (&saved_dst)[tmpD38 * 3 + 0x1d0];
                        arg_a4 = (&saved_dst)[tmpD38 * 3 + 0x1d1];
                        arg_a8 = (&saved_dst)[tmpD38 * 3 + 0x1d2];
                    }
                    else
                    {
                        arg_88 = 0x3f800000;
                        arg_8c = 0x3f800000;
                        arg_90 = 0;
                        arg_94 = 0x3f800000;
                        arg_98 = 0x3f800000;
                        arg_9c = 0;
                        arg_a0 = 0x3f800000;
                        arg_a4 = 0x3f800000;
                        arg_a8 = 0;
                    }

                    if (*(a1 + 0x4ac0) && arg_c)
                    {
                        arg_ac = arg_150[tmpD38 * 2];
                        arg_b0 = *(&arg_154 + (tmpD38 << 3));
                        int32_t arg_1b8[0x136];
                        arg_b4 = arg_1b8[tmpD38 * 2];
                        arg_1bc;
                        arg_b8 = *(&arg_1bc + (tmpD38 << 3));
                        arg_bc = (&arg_1b0)[tmpD38][0];
                        arg_c0 = *(&arg_1b4 + (tmpD38 << 3));
                    }

                    int32_t valA104 = a2[6];

                    if (!(valA104 & v_8_6 & 0xa))
                    {
                        double (* v_18_9)[0x3] = &arg_40;
                        arg_c8 = 0;
                        arg_cc = *(a1 + 0x4aa0);
                        Terrain_ConnectGraphNode(v_18_9);

                        if (*(a1 + 0x4ac0) && arg_c)
                        {
                            int32_t tmpD56 = *(a1 + 0x4aa4);
                            double (* v_18_10)[0x3] = &arg_40;
                            arg_c8 = 1;
                            arg_cc = tmpD56;
                            Terrain_ConnectGraphNode(v_18_10);
                        }
                    }
                    else
                    {
                        void* srcS28 = 2;

                        if (arg_c && valA104 & a2 & 0x1e0)
                            srcS28 = 4;

                        float* dstD9 = a1;
                        arg_cc = dstD9[0x12a8];
                        void* const v_20_5 = nullptr;
                        v_24 = &arg_40;
                        arg_c8 = 0;
                        Light_SetLightColor_12(dstD9, a2, v_24, v_20_5, srcS28, arg_c);

                        if (dstD9[0x12b0] && arg_c)
                        {
                            arg_cc = dstD9[0x12a9];
                            void* const v_20_6 = nullptr;
                            v_24 = &arg_40;
                            arg_c8 = 1;
                            Light_SetLightColor_12(dstD9, a2, v_24, v_20_6, srcS28, arg_c);
                        }
                    }

                    __return_addr_9 = __return_addr;
                    cond_12_1 = i_6 + 1 < __return_addr_9;
                    i_6 += 1;
                } while (cond_12_1);
                result = a1 + 1;
                a1 = result;

                if (result >= __return_addr_9)
                    break;

                result = a1;
            }
        }
    }

    return result;
}
