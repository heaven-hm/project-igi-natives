#include "DynObj_InsertHashItem_11.h"
❓  int32_t DynObj_InsertHashItem_11(int32_t* a1 @ 0x8, int32_t a2 @ 0x10, double* a3, int32_t a4 @ 0x9c, int32_t a5, int32_t a6, int32_t a7, int32_t a8, void* a9, void* a10, int32_t a11 @ 0xf0, int32_t a12)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    void* flagP;
    void* v_4 = flagP;
    Camera_UpdateTransform_5(0x15a4);
    void* srcS = a1[7];
    DynObj_UpdateDynTree_6();
    double* objC = a2;
    int32_t arg_c = 0;
    long double fpu7 = *objC;
    long double f0 = *a3;
    fpu7 - f0;
    long double x87_r7_1;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *a3;
    else
        x87_r7_1 = *objC;

    int32_t ctxB = *(srcS + 0xde0);
    v_4 = x87_r7_1;
    void* valA4 = v_4 + ctxB;
    long double x87_r7_2 = objC[1];
    long double fpu6 = a3[1];
    fpu6 - x87_r7_2;
    long double x87_r7_3;

    if (*(&((fpu6 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu6, x87_r7_2) ? 1 : 0) << 0xa
            | (fpu6 == x87_r7_2 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_3 = a3[1];
    else
        x87_r7_3 = objC[1];

    int32_t dstD = *(srcS + 0xde4);
    v_4 = x87_r7_3;
    void* valA7 = v_4 + dstD;
    long double x87_r7_4 = objC[2];
    long double x87_r6_1 = a3[2];
    x87_r6_1 - x87_r7_4;
    long double x87_r7_5;

    if (*(&((x87_r6_1 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_5 = a3[2];
    else
        x87_r7_5 = objC[2];

    int32_t srcS1 = *(srcS + 0xde8);
    v_4 = x87_r7_5;
    void* valA10 = v_4 + srcS1;
    long double x87_r7_6 = *objC;
    long double f1 = *a3;
    x87_r7_6 - f1;
    long double x87_r7_7;

    if (*(&((x87_r7_6 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f1) ? 1 : 0) << 0xa
            | (x87_r7_6 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_7 = *a3;
    else
        x87_r7_7 = *objC;

    v_4 = x87_r7_7;
    void* valA13 = v_4 + ctxB;
    long double x87_r7_8 = objC[1];
    long double x87_r6_2 = a3[1];
    x87_r6_2 - x87_r7_8;
    long double x87_r7_9;

    if (!(*(&((x87_r6_2 < x87_r7_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_8) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_8 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_9 = a3[1];
    else
        x87_r7_9 = objC[1];

    v_4 = x87_r7_9;
    void* arg_74 = v_4 + dstD;
    long double x87_r7_10 = objC[2];
    long double x87_r6_3 = a3[2];
    x87_r6_3 - x87_r7_10;
    long double x87_r7_11;

    if (!(*(&((x87_r6_3 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, x87_r7_10) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_11 = a3[2];
    else
        x87_r7_11 = objC[2];

    v_4 = x87_r7_11;
    void* valA19 = v_4 + srcS1;
    float arg_28 = *a3 - *objC;
    float __return_addr_1 = a3[1] - objC[1];
    float arg_30 = a3[2] - objC[2];
    long double x87_r7_18 = arg_28;
    long double f2 = 0f;
    x87_r7_18 - f2;
    long double x87_r7_19 = arg_28;

    if (*(&((x87_r7_18 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_18, f2) ? 1 : 0) << 0xa
            | (x87_r7_18 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_19 = -(x87_r7_19);

    long double x87_r6_4 = __return_addr_1;
    long double f3 = 0f;
    x87_r6_4 - f3;

    __return_addr = !(*(&((x87_r6_4 < f3 ? 1 : 0) << 8
        | (FCMP_UO(x87_r6_4, f3) ? 1 : 0) << 0xa | (x87_r6_4 == f3 ? 1 : 0) << 0xe | 0x3800) + 1)
        & 1) ? __return_addr_1 : -(__return_addr_1);

    long double x87_r6_7 = arg_30;
    long double f4 = 0f;
    x87_r6_7 - f4;
    float arg_4;

    arg_4 = !(*(&((x87_r6_7 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, f4) ? 1 : 0) << 0xa
        | (x87_r6_7 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? arg_30 : -(arg_30);

    long double f5 = __return_addr;
    x87_r7_19 - f5;
    long double f7_1;

    if (!(*(&((x87_r7_19 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, f5) ? 1 : 0) << 0xa
        | (x87_r7_19 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
        f7_1 = arg_4;
        x87_r7_19 - f7_1;
    }

    int32_t arg_1c;
    int32_t objC2;
    int32_t tmpD2;
    int32_t dstD1;
    int32_t arg_20;

    if (*(&((x87_r7_19 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, f5) ? 1 : 0) << 0xa
        | (x87_r7_19 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 || *(&(
        (x87_r7_19 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, f7_1) ? 1 : 0) << 0xa
        | (x87_r7_19 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r6_10 = __return_addr;
        long double f6_1 = arg_4;
        x87_r6_10 - f6_1;

        if (*(&((x87_r6_10 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_10, f6_1) ? 1 : 0) << 0xa
            | (x87_r6_10 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double f8_1 = __return_addr;
            x87_r7_19 - f8_1;
            tmpD2 = 2;
            arg_1c = 2;

            if (*(&((x87_r7_19 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_19, f8_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                dstD1 = 1;
                arg_20 = dstD1;
                objC2 = 0;
            }
            else
            {
                dstD1 = 0;
                objC2 = 1;
                arg_20 = 0;
            }
        }
        else
        {
            long double f9_1 = arg_4;
            x87_r7_19 - f9_1;
            tmpD2 = 1;
            arg_1c = 1;

            if (*(&((x87_r7_19 < f9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_19, f9_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                dstD1 = 2;
                arg_20 = dstD1;
                objC2 = 0;
            }
            else
            {
                dstD1 = 0;
                objC2 = 2;
                arg_20 = 0;
            }
        }
    }
    else
    {
        long double x87_r7_21 = __return_addr;
        long double f10_1 = arg_4;
        x87_r7_21 - f10_1;
        tmpD2 = 0;
        arg_1c = 0;

        if (*(&((x87_r7_21 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, f10_1) ? 1 : 0) << 0xa
            | (x87_r7_21 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            dstD1 = 2;
            objC2 = 1;
            arg_20 = 2;
        }
        else
        {
            dstD1 = 1;
            objC2 = 2;
            arg_20 = 1;
        }
    }
    long double x87_r7_22 = arg_28;
    long double f11 = 0f;
    x87_r7_22 - f11;
    int32_t arg_24 = objC2;
    v_4 = 1;

    if (*(&((x87_r7_22 < f11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, f11) ? 1 : 0) << 0xa
            | (x87_r7_22 == f11 ? 1 : 0) << 0xe) + 1) & 0x41)
        v_4 = nullptr;

    long double x87_r7_23 = __return_addr_1;
    long double f12 = 0f;
    x87_r7_23 - f12;
    __return_addr = 1;

    if (*(&((x87_r7_23 < f12 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, f12) ? 1 : 0) << 0xa
            | (x87_r7_23 == f12 ? 1 : 0) << 0xe) + 1) & 0x41)
        __return_addr = nullptr;

    long double x87_r7_24 = arg_30;
    long double f13 = 0f;
    x87_r7_24 - f13;
    arg_4 = 1.40129846e-45f;

    if (*(&((x87_r7_24 < f13 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_24, f13) ? 1 : 0) << 0xa
            | (x87_r7_24 == f13 ? 1 : 0) << 0xe) + 1) & 0x41)
        arg_4 = 0f;

    int32_t valA21 = (&v_4)[tmpD2];
    float tmpD3 = (&v_4)[objC2];
    int32_t valA22 = 0;
    void arg_17c;
    void* tmpD4 = &arg_17c;

    while (true)
    {
        tmpD4 += 4;
        int32_t srcS8 = ((valA22 >> 2 & 1) ^ tmpD3) << (objC2 & 0x1f)
            | ((valA22 >> 1 & 1) ^ (&v_4)[dstD1]) << (dstD1 & 0x1f)
            | ((valA22 & 1) ^ valA21) << (arg_1c & 0x1f);
        valA22 += 1;
        *(tmpD4 - 4) = srcS8;

        if (valA22 >= 8)
            break;

        objC2 = arg_24;
    }

    void arg_39c;
    int32_t* i = &arg_39c;
    memcpy(&arg_39c, a1, 0x24);
    a1 = &arg_39c;
    int32_t arg_19c[0x77];
    arg_19c[0] = 1;

    do
    {
        int32_t objC7 = 0x1e - i[1];

        if (objC7 < 0x10)
        {
            void* valA30 = i[8];
            v_4 = valA30;
            int32_t objC11 = g_b97d20;

            if (arg_19c[arg_c])
            {
                if (objC11 && valA30 && *(valA30 + 0x38) & 0x80)
                {
                    void* j = *(valA30 + 0x2c);

                    do
                    {
                        if (*(j + 0x5c) & 0x80)
                        {
                            int32_t objC12 = 0;
                            objC12 = *(j + 0x1c);
                            (*((objC12 << 2) + &g_a9c4e0))(j, *(j + 0x48));
                        }

                        j = *(j + 0x58);
                    } while (j);
                }

                int32_t saved_dst;
                (&saved_dst)[arg_c + 0x6c] = 0;
                int32_t arg_98;
                memcpy(&arg_98, i, 0x24);
                int32_t valA34 = 0;
                a2 = 8;
                valA34 = *(a9 + 0x18);
                int32_t* arg_38 = &arg_17c;
                bool cond_2_1;

                do
                {
                    int32_t tmpD9 = *arg_38;
                    int32_t objC15 = *(((tmpD9 + (a5 << 3)) << 2) + &g_548060);

                    if (valA34 & 1 << (objC15 & 0x1f))
                    {
                        int32_t valA38 = 0;
                        valA38 = *(a9 + (objC15 << 1));
                        int32_t valA40 = (valA38 << 5) + *(a10 + 0xc);
                        int32_t srcS21 = arg_98 >> 1;
                        int32_t objC19 = ((tmpD9 & 1) * 2 - 1) * srcS21 + a6;
                        int32_t dstD9 = ((tmpD9 & 2) - 1) * srcS21 + a7;
                        int32_t tmpD14 = ((tmpD9 >> 1 & 2) - 1) * srcS21 + a8;

                        if (valA4 > objC19 + srcS21 || valA13 < objC19 - srcS21
                            || valA7 > dstD9 + srcS21 || arg_74 < dstD9 - srcS21
                            || valA10 > tmpD14 + srcS21 + 0x4001
                            || valA19 < tmpD14 - srcS21 - 0x4001)
                        {
                        label_4cd125:
                            i = a1;
                        }
                        else
                        {
                            long double x87_r7_28 = srcS21;
                            a3 = x87_r7_28;
                            float arg_4c = a3 + 16385f;
                            double arg_58 = objC19 - *(srcS + 0xde0);
                            int32_t* arg_3c = &arg_1c;
                            double arg_60 = dstD9 - *(srcS + 0xde4);
                            int32_t v_8_5 = 0;
                            double arg_68 = tmpD14 - *(srcS + 0xde8);
                            double arg_d4 = arg_58 - x87_r7_28;
                            double arg_dc = arg_60 - a3;
                            double arg_e4 = arg_68 - arg_4c;
                            double arg_bc = x87_r7_28 + arg_58;
                            double arg_c4 = a3 + arg_60;
                            double arg_cc = arg_4c + arg_68;

                            while (true)
                            {
                                int32_t valA58 = *arg_3c;

                                if (valA58)
                                {
                                    if (valA58 != 1)
                                    {
                                        long double x87_r7_54 = arg_30;
                                        long double f16_1 = 0f;
                                        x87_r7_54 - f16_1;
                                        long double x87_r7_55;

                                        x87_r7_55 = *(&((x87_r7_54 < f16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_54, f16_1) ? 1 : 0) << 0xa
                                            | (x87_r7_54 == f16_1 ? 1 : 0) << 0xe) + 1) & 1
                                            ? -((srcS21 + 0x4001)) : srcS21 + 0x4001;

                                        long double x87_r7_59 = (x87_r7_55 + arg_68
                                            - *(a2 + 0x10)) / (a3[2] - *(a2 + 0x10));
                                        double arg_110 = (*a3 - *a2) * x87_r7_59 + *a2;
                                        double arg_118 =
                                            (a3[1] - *(a2 + 8)) * x87_r7_59 + *(a2 + 8);
                                        long double x87_r7_61 = arg_110;
                                        long double f21_1 = arg_d4;
                                        x87_r7_61 - f21_1;

                                        if (*(&((x87_r7_61 < f21_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_61, f21_1) ? 1 : 0) << 0xa
                                                | (x87_r7_61 == f21_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            goto label_4cd109;

                                        long double x87_r7_62 = arg_110;
                                        long double f24_1 = arg_bc;
                                        x87_r7_62 - f24_1;

                                        if (!(*(&((x87_r7_62 < f24_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_62, f24_1) ? 1 : 0) << 0xa
                                                | (x87_r7_62 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                            goto label_4cd109;

                                        long double x87_r7_63 = arg_118;
                                        long double f27_1 = arg_dc;
                                        x87_r7_63 - f27_1;

                                        if (*(&((x87_r7_63 < f27_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_63, f27_1) ? 1 : 0) << 0xa
                                                | (x87_r7_63 == f27_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            goto label_4cd109;

                                        long double x87_r7_64 = arg_118;
                                        long double f29_1 = arg_c4;
                                        x87_r7_64 - f29_1;

                                        if (*(&((x87_r7_64 < f29_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_64, f29_1) ? 1 : 0) << 0xa
                                                | (x87_r7_64 == f29_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            goto label_4cd16e;

                                        goto label_4cd109;
                                    }

                                    long double x87_r7_44 = __return_addr_1;
                                    long double f17_1 = 0f;
                                    x87_r7_44 - f17_1;
                                    long double x87_r7_45 = a3;

                                    if (*(&((x87_r7_44 < f17_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_44, f17_1) ? 1 : 0) << 0xa
                                            | (x87_r7_44 == f17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        x87_r7_45 = -(x87_r7_45);

                                    long double x87_r7_48 = (x87_r7_45 + arg_60 - *(a2 + 8))
                                        / (a3[1] - *(a2 + 8));
                                    double arg_f8 = (*a3 - *a2) * x87_r7_48 + *a2;
                                    double arg_108 =
                                        (a3[2] - *(a2 + 0x10)) * x87_r7_48 + *(a2 + 0x10);
                                    long double x87_r7_50 = arg_f8;
                                    long double f19_1 = arg_d4;
                                    x87_r7_50 - f19_1;

                                    if (*(&((x87_r7_50 < f19_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_50, f19_1) ? 1 : 0) << 0xa
                                            | (x87_r7_50 == f19_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4cd109;

                                    long double x87_r7_51 = arg_f8;
                                    long double f22_1 = arg_bc;
                                    x87_r7_51 - f22_1;

                                    if (!(*(&((x87_r7_51 < f22_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_51, f22_1) ? 1 : 0) << 0xa
                                            | (x87_r7_51 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        goto label_4cd109;

                                    long double x87_r7_52 = arg_108;
                                    long double f25_1 = arg_e4;
                                    x87_r7_52 - f25_1;

                                    if (*(&((x87_r7_52 < f25_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_52, f25_1) ? 1 : 0) << 0xa
                                            | (x87_r7_52 == f25_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4cd109;

                                    long double x87_r7_53 = arg_108;
                                    long double f28_1 = arg_cc;
                                    x87_r7_53 - f28_1;

                                    if (*(&((x87_r7_53 < f28_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_53, f28_1) ? 1 : 0) << 0xa
                                            | (x87_r7_53 == f28_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                        goto label_4cd16e;

                                    goto label_4cd109;
                                }

                                long double x87_r7_34 = arg_28;
                                long double f15_1 = 0f;
                                x87_r7_34 - f15_1;
                                long double x87_r7_35 = a3;

                                if (*(&((x87_r7_34 < f15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_34, f15_1) ? 1 : 0) << 0xa
                                        | (x87_r7_34 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                    x87_r7_35 = -(x87_r7_35);

                                long double x87_r7_38 =
                                    (x87_r7_35 + arg_58 - *a2) / (*a3 - *a2);
                                double arg_130 = (a3[1] - *(a2 + 8)) * x87_r7_38 + *(a2 + 8);
                                double arg_138 =
                                    (a3[2] - *(a2 + 0x10)) * x87_r7_38 + *(a2 + 0x10);
                                long double x87_r7_40 = arg_130;
                                long double f18_1 = arg_dc;
                                x87_r7_40 - f18_1;

                                if (!(*(&((x87_r7_40 < f18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_40, f18_1) ? 1 : 0) << 0xa
                                    | (x87_r7_40 == f18_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_41 = arg_130;
                                    long double f20_1 = arg_c4;
                                    x87_r7_41 - f20_1;

                                    if (!(*(&((x87_r7_41 < f20_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_41, f20_1) ? 1 : 0) << 0xa
                                            | (x87_r7_41 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        goto label_4cd109;

                                    long double x87_r7_42 = arg_138;
                                    long double f23_1 = arg_e4;
                                    x87_r7_42 - f23_1;

                                    if (*(&((x87_r7_42 < f23_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_42, f23_1) ? 1 : 0) << 0xa
                                            | (x87_r7_42 == f23_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4cd109;

                                    long double x87_r7_43 = arg_138;
                                    long double f26_1 = arg_cc;
                                    x87_r7_43 - f26_1;

                                    if (!(*(&((x87_r7_43 < f26_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_43, f26_1) ? 1 : 0) << 0xa
                                            | (x87_r7_43 == f26_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        goto label_4cd109;

                                label_4cd16e:
                                    a1 = &a1[9];
                                    int32_t valA80 = arg_c + 1;
                                    arg_c = valA80;
                                    arg_19c[valA80] = 1;
                                    int32_t valA85;

                                    if (a5 >= 4)
                                    {
                                        void* objC22 = a9;
                                        int32_t valA86 = objC15;
                                        valA86 = *(objC22 + valA86 + 0x10);
                                        objC22 = valA86;
                                        i = a1;
                                        valA85 =
                                            ((objC22 & 4) ^ (a5 & 4)) + ((a5 - valA86) & 3);
                                    }
                                    else
                                    {
                                        int32_t ctxB25 = objC15;
                                        char valA82 = *(a9 + ctxB25 + 0x10);
                                        ctxB25 = valA82;
                                        int32_t valA83 = a5;
                                        int32_t ctxB26 = ctxB25 + valA83;
                                        valA83 = valA82;
                                        valA85 = (valA83 & 4) + (ctxB26 & 3);
                                        i = a1;
                                    }

                                    i[2] = valA85;
                                    i[3] = objC19;
                                    i[1] = a4 - 1;
                                    i[5] = tmpD14;
                                    *i = srcS21;
                                    i[4] = dstD9;
                                    i[6] = valA40;
                                    i[7] = a10;
                                    int32_t objC27;

                                    objC27 = arg_c || arg_c ? tmpD9 : 7 - tmpD9;

                                    void* valA93;

                                    if (g_b97d20)
                                        valA93 = v_4;

                                    if (!g_b97d20 || !valA93)
                                        i[8] = 0;
                                    else
                                        i[8] = *(valA93 + (objC27 << 2) + 0xc);

                                    break;
                                }

                            label_4cd109:
                                v_8_5 += 1;
                                arg_3c = &arg_3c[1];

                                if (v_8_5 >= 3)
                                    goto label_4cd125;
                            }
                        }
                    }

                    cond_2_1 = a2 != 1;
                    arg_38 = &arg_38[1];
                    a2 -= 1;
                } while (cond_2_1);
            }
            else
            {
                if (objC11 && valA30 && *(valA30 + 0x39) & 1)
                {
                    void* j_1 = *(valA30 + 0x2c);

                    do
                    {
                        if (*(j_1 + 0x5d) & 1)
                        {
                            int32_t tmpD7 = 0;
                            tmpD7 = *(j_1 + 0x1c);
                            (*((tmpD7 << 2) + &g_a9cae0))(j_1, *(j_1 + 0x48));
                        }

                        j_1 = *(j_1 + 0x58);
                    } while (j_1);
                }

                i -= 0x24;
                a1 = i;
                arg_c -= 1;
            }
        }
        else
        {
            int16_t* tmpD6 = *(i[6] + 0x1c);
            void* valA24 = i[7];
            int32_t srcS12 = i[4];
            double arg_140 = i[3] - *(valA24 + 0xde0);
            int32_t srcS14 = i[5];
            double arg_148 = srcS12 - *(valA24 + 0xde4);
            int32_t srcS15 = srcS14 - *(valA24 + 0xde8);
            double arg_150 = srcS15;
            int32_t arg_80;
            int32_t arg_84;
            float arg_ec;
            void arg_164;

            if (DynObj_LookupHashItem_11(tmpD6, &arg_140, srcS15, a3, &arg_164, objC7, &arg_80, &arg_84, i[2],
                &arg_ec))
            {
                *(arg_4 + 0x38) = arg_ec;
                *(arg_4 + 0x3c) = a11;
                *(arg_4 + 0x40) = a12;
                int32_t valA97 = arg_80;
                memcpy(arg_4 + 8, &arg_164, 0x18);
                int32_t valA98;

                if (!valA97)
                    valA98 = 0;
                else
                    valA98 = *(srcS + (valA97 << 2) + 0xd3c);

                *(arg_4 + 0x4c) = valA98;
                int32_t valA99 = arg_84;
                int32_t valA100;

                if (!valA99)
                    valA100 = 0;
                else
                    valA100 = *(srcS + (valA99 << 2) + 0xd3c);

                *(arg_4 + 0x50) = valA100;
                *(arg_4 + 0x60) = Sys_DispatchOpcode_11(arg_4 + 8, srcS15);
                DynObj_LinkDynamicCube_6();
                return 1;
            }

            i -= 0x24;
            a1 = i;
            arg_c -= 1;
        }
    } while (i >= &arg_39c);

    DynObj_LinkDynamicCube_6();
    return 0;
}
