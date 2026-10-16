#include "004CC810-DynObj_InsertHashItem_11.h"
/* 0x004cc810 DynObj_InsertHashItem_11 full linked: callers=2 callees=9 */
❓  int32_t sub_4cc810(int32_t* a1 @ 0x8, int32_t a2 @ 0x10, double* a3, int32_t a4 @ 0x9c, int32_t a5, int32_t a6, int32_t a7, int32_t a8, void* a9, void* a10, int32_t a11 @ 0xf0, int32_t a12)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    void* ebp;
    void* var_4 = ebp;
    sub_4a54a0(0x15a4);
    void* esi = a1[7];
    sub_4c5830();
    double* ecx = a2;
    int32_t arg_c = 0;
    long double x87_r7 = *ecx;
    long double temp0 = *a3;
    x87_r7 - temp0;
    long double x87_r7_1;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *a3;
    else
        x87_r7_1 = *ecx;

    int32_t ebx = *(esi + 0xde0);
    var_4 = x87_r7_1;
    void* eax_4 = var_4 + ebx;
    long double x87_r7_2 = ecx[1];
    long double x87_r6 = a3[1];
    x87_r6 - x87_r7_2;
    long double x87_r7_3;

    if (*(&((x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_3 = a3[1];
    else
        x87_r7_3 = ecx[1];

    int32_t edi = *(esi + 0xde4);
    var_4 = x87_r7_3;
    void* eax_7 = var_4 + edi;
    long double x87_r7_4 = ecx[2];
    long double x87_r6_1 = a3[2];
    x87_r6_1 - x87_r7_4;
    long double x87_r7_5;

    if (*(&((x87_r6_1 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_5 = a3[2];
    else
        x87_r7_5 = ecx[2];

    int32_t esi_1 = *(esi + 0xde8);
    var_4 = x87_r7_5;
    void* eax_10 = var_4 + esi_1;
    long double x87_r7_6 = *ecx;
    long double temp1 = *a3;
    x87_r7_6 - temp1;
    long double x87_r7_7;

    if (*(&((x87_r7_6 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_7 = *a3;
    else
        x87_r7_7 = *ecx;

    var_4 = x87_r7_7;
    void* eax_13 = var_4 + ebx;
    long double x87_r7_8 = ecx[1];
    long double x87_r6_2 = a3[1];
    x87_r6_2 - x87_r7_8;
    long double x87_r7_9;

    if (!(*(&((x87_r6_2 < x87_r7_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_8) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_8 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_9 = a3[1];
    else
        x87_r7_9 = ecx[1];

    var_4 = x87_r7_9;
    void* arg_74 = var_4 + edi;
    long double x87_r7_10 = ecx[2];
    long double x87_r6_3 = a3[2];
    x87_r6_3 - x87_r7_10;
    long double x87_r7_11;

    if (!(*(&((x87_r6_3 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, x87_r7_10) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_11 = a3[2];
    else
        x87_r7_11 = ecx[2];

    var_4 = x87_r7_11;
    void* eax_19 = var_4 + esi_1;
    float arg_28 = *a3 - *ecx;
    float __return_addr_1 = a3[1] - ecx[1];
    float arg_30 = a3[2] - ecx[2];
    long double x87_r7_18 = arg_28;
    long double temp2 = 0f;
    x87_r7_18 - temp2;
    long double x87_r7_19 = arg_28;

    if (*(&((x87_r7_18 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_18, temp2) ? 1 : 0) << 0xa
            | (x87_r7_18 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_19 = -(x87_r7_19);

    long double x87_r6_4 = __return_addr_1;
    long double temp3 = 0f;
    x87_r6_4 - temp3;

    __return_addr = !(*(&((x87_r6_4 < temp3 ? 1 : 0) << 8
        | (FCMP_UO(x87_r6_4, temp3) ? 1 : 0) << 0xa | (x87_r6_4 == temp3 ? 1 : 0) << 0xe | 0x3800) + 1)
        & 1) ? __return_addr_1 : -(__return_addr_1);

    long double x87_r6_7 = arg_30;
    long double temp4 = 0f;
    x87_r6_7 - temp4;
    float arg_4;

    arg_4 = !(*(&((x87_r6_7 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, temp4) ? 1 : 0) << 0xa
        | (x87_r6_7 == temp4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? arg_30 : -(arg_30);

    long double temp5 = __return_addr;
    x87_r7_19 - temp5;
    long double temp7_1;

    if (!(*(&((x87_r7_19 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, temp5) ? 1 : 0) << 0xa
        | (x87_r7_19 == temp5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
        temp7_1 = arg_4;
        x87_r7_19 - temp7_1;
    }

    int32_t arg_1c;
    int32_t ecx_2;
    int32_t edx_2;
    int32_t edi_1;
    int32_t arg_20;

    if (*(&((x87_r7_19 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, temp5) ? 1 : 0) << 0xa
        | (x87_r7_19 == temp5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 || *(&(
        (x87_r7_19 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, temp7_1) ? 1 : 0) << 0xa
        | (x87_r7_19 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r6_10 = __return_addr;
        long double temp6_1 = arg_4;
        x87_r6_10 - temp6_1;

        if (*(&((x87_r6_10 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_10, temp6_1) ? 1 : 0) << 0xa
            | (x87_r6_10 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double temp8_1 = __return_addr;
            x87_r7_19 - temp8_1;
            edx_2 = 2;
            arg_1c = 2;

            if (*(&((x87_r7_19 < temp8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_19, temp8_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                edi_1 = 1;
                arg_20 = edi_1;
                ecx_2 = 0;
            }
            else
            {
                edi_1 = 0;
                ecx_2 = 1;
                arg_20 = 0;
            }
        }
        else
        {
            long double temp9_1 = arg_4;
            x87_r7_19 - temp9_1;
            edx_2 = 1;
            arg_1c = 1;

            if (*(&((x87_r7_19 < temp9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_19, temp9_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                edi_1 = 2;
                arg_20 = edi_1;
                ecx_2 = 0;
            }
            else
            {
                edi_1 = 0;
                ecx_2 = 2;
                arg_20 = 0;
            }
        }
    }
    else
    {
        long double x87_r7_21 = __return_addr;
        long double temp10_1 = arg_4;
        x87_r7_21 - temp10_1;
        edx_2 = 0;
        arg_1c = 0;

        if (*(&((x87_r7_21 < temp10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, temp10_1) ? 1 : 0) << 0xa
            | (x87_r7_21 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            edi_1 = 2;
            ecx_2 = 1;
            arg_20 = 2;
        }
        else
        {
            edi_1 = 1;
            ecx_2 = 2;
            arg_20 = 1;
        }
    }
    long double x87_r7_22 = arg_28;
    long double temp11 = 0f;
    x87_r7_22 - temp11;
    int32_t arg_24 = ecx_2;
    var_4 = 1;

    if (*(&((x87_r7_22 < temp11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, temp11) ? 1 : 0) << 0xa
            | (x87_r7_22 == temp11 ? 1 : 0) << 0xe) + 1) & 0x41)
        var_4 = nullptr;

    long double x87_r7_23 = __return_addr_1;
    long double temp12 = 0f;
    x87_r7_23 - temp12;
    __return_addr = 1;

    if (*(&((x87_r7_23 < temp12 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, temp12) ? 1 : 0) << 0xa
            | (x87_r7_23 == temp12 ? 1 : 0) << 0xe) + 1) & 0x41)
        __return_addr = nullptr;

    long double x87_r7_24 = arg_30;
    long double temp13 = 0f;
    x87_r7_24 - temp13;
    arg_4 = 1.40129846e-45f;

    if (*(&((x87_r7_24 < temp13 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_24, temp13) ? 1 : 0) << 0xa
            | (x87_r7_24 == temp13 ? 1 : 0) << 0xe) + 1) & 0x41)
        arg_4 = 0f;

    int32_t eax_21 = (&var_4)[edx_2];
    float edx_3 = (&var_4)[ecx_2];
    int32_t eax_22 = 0;
    void arg_17c;
    void* edx_4 = &arg_17c;

    while (true)
    {
        edx_4 += 4;
        int32_t esi_8 = ((eax_22 >> 2 & 1) ^ edx_3) << (ecx_2 & 0x1f)
            | ((eax_22 >> 1 & 1) ^ (&var_4)[edi_1]) << (edi_1 & 0x1f)
            | ((eax_22 & 1) ^ eax_21) << (arg_1c & 0x1f);
        eax_22 += 1;
        *(edx_4 - 4) = esi_8;

        if (eax_22 >= 8)
            break;

        ecx_2 = arg_24;
    }

    void arg_39c;
    int32_t* i = &arg_39c;
    memcpy(&arg_39c, a1, 0x24);
    a1 = &arg_39c;
    int32_t arg_19c[0x77];
    arg_19c[0] = 1;

    do
    {
        int32_t ecx_7 = 0x1e - i[1];

        if (ecx_7 < 0x10)
        {
            void* eax_30 = i[8];
            var_4 = eax_30;
            int32_t ecx_11 = g_b97d20;

            if (arg_19c[arg_c])
            {
                if (ecx_11 && eax_30 && *(eax_30 + 0x38) & 0x80)
                {
                    void* j = *(eax_30 + 0x2c);

                    do
                    {
                        if (*(j + 0x5c) & 0x80)
                        {
                            int32_t ecx_12 = 0;
                            ecx_12 = *(j + 0x1c);
                            (*((ecx_12 << 2) + &g_a9c4e0))(j, *(j + 0x48));
                        }

                        j = *(j + 0x58);
                    } while (j);
                }

                int32_t __saved_edi;
                (&__saved_edi)[arg_c + 0x6c] = 0;
                int32_t arg_98;
                memcpy(&arg_98, i, 0x24);
                int32_t eax_34 = 0;
                a2 = 8;
                eax_34 = *(a9 + 0x18);
                int32_t* arg_38 = &arg_17c;
                bool cond:2_1;

                do
                {
                    int32_t edx_9 = *arg_38;
                    int32_t ecx_15 = *(((edx_9 + (a5 << 3)) << 2) + &g_548060);

                    if (eax_34 & 1 << (ecx_15 & 0x1f))
                    {
                        int32_t eax_38 = 0;
                        eax_38 = *(a9 + (ecx_15 << 1));
                        int32_t eax_40 = (eax_38 << 5) + *(a10 + 0xc);
                        int32_t esi_21 = arg_98 >> 1;
                        int32_t ecx_19 = ((edx_9 & 1) * 2 - 1) * esi_21 + a6;
                        int32_t edi_9 = ((edx_9 & 2) - 1) * esi_21 + a7;
                        int32_t edx_14 = ((edx_9 >> 1 & 2) - 1) * esi_21 + a8;

                        if (eax_4 > ecx_19 + esi_21 || eax_13 < ecx_19 - esi_21
                            || eax_7 > edi_9 + esi_21 || arg_74 < edi_9 - esi_21
                            || eax_10 > edx_14 + esi_21 + 0x4001
                            || eax_19 < edx_14 - esi_21 - 0x4001)
                        {
                        label_4cd125:
                            i = a1;
                        }
                        else
                        {
                            long double x87_r7_28 = esi_21;
                            a3 = x87_r7_28;
                            float arg_4c = a3 + 16385f;
                            double arg_58 = ecx_19 - *(esi + 0xde0);
                            int32_t* arg_3c = &arg_1c;
                            double arg_60 = edi_9 - *(esi + 0xde4);
                            int32_t var_8_5 = 0;
                            double arg_68 = edx_14 - *(esi + 0xde8);
                            double arg_d4 = arg_58 - x87_r7_28;
                            double arg_dc = arg_60 - a3;
                            double arg_e4 = arg_68 - arg_4c;
                            double arg_bc = x87_r7_28 + arg_58;
                            double arg_c4 = a3 + arg_60;
                            double arg_cc = arg_4c + arg_68;

                            while (true)
                            {
                                int32_t eax_58 = *arg_3c;

                                if (eax_58)
                                {
                                    if (eax_58 != 1)
                                    {
                                        long double x87_r7_54 = arg_30;
                                        long double temp16_1 = 0f;
                                        x87_r7_54 - temp16_1;
                                        long double x87_r7_55;

                                        x87_r7_55 = *(&((x87_r7_54 < temp16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_54, temp16_1) ? 1 : 0) << 0xa
                                            | (x87_r7_54 == temp16_1 ? 1 : 0) << 0xe) + 1) & 1
                                            ? -((esi_21 + 0x4001)) : esi_21 + 0x4001;

                                        long double x87_r7_59 = (x87_r7_55 + arg_68
                                            - *(a2 + 0x10)) / (a3[2] - *(a2 + 0x10));
                                        double arg_110 = (*a3 - *a2) * x87_r7_59 + *a2;
                                        double arg_118 =
                                            (a3[1] - *(a2 + 8)) * x87_r7_59 + *(a2 + 8);
                                        long double x87_r7_61 = arg_110;
                                        long double temp21_1 = arg_d4;
                                        x87_r7_61 - temp21_1;

                                        if (*(&((x87_r7_61 < temp21_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_61, temp21_1) ? 1 : 0) << 0xa
                                                | (x87_r7_61 == temp21_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            goto label_4cd109;

                                        long double x87_r7_62 = arg_110;
                                        long double temp24_1 = arg_bc;
                                        x87_r7_62 - temp24_1;

                                        if (!(*(&((x87_r7_62 < temp24_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_62, temp24_1) ? 1 : 0) << 0xa
                                                | (x87_r7_62 == temp24_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                            goto label_4cd109;

                                        long double x87_r7_63 = arg_118;
                                        long double temp27_1 = arg_dc;
                                        x87_r7_63 - temp27_1;

                                        if (*(&((x87_r7_63 < temp27_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_63, temp27_1) ? 1 : 0) << 0xa
                                                | (x87_r7_63 == temp27_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            goto label_4cd109;

                                        long double x87_r7_64 = arg_118;
                                        long double temp29_1 = arg_c4;
                                        x87_r7_64 - temp29_1;

                                        if (*(&((x87_r7_64 < temp29_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_64, temp29_1) ? 1 : 0) << 0xa
                                                | (x87_r7_64 == temp29_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            goto label_4cd16e;

                                        goto label_4cd109;
                                    }

                                    long double x87_r7_44 = __return_addr_1;
                                    long double temp17_1 = 0f;
                                    x87_r7_44 - temp17_1;
                                    long double x87_r7_45 = a3;

                                    if (*(&((x87_r7_44 < temp17_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_44, temp17_1) ? 1 : 0) << 0xa
                                            | (x87_r7_44 == temp17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        x87_r7_45 = -(x87_r7_45);

                                    long double x87_r7_48 = (x87_r7_45 + arg_60 - *(a2 + 8))
                                        / (a3[1] - *(a2 + 8));
                                    double arg_f8 = (*a3 - *a2) * x87_r7_48 + *a2;
                                    double arg_108 =
                                        (a3[2] - *(a2 + 0x10)) * x87_r7_48 + *(a2 + 0x10);
                                    long double x87_r7_50 = arg_f8;
                                    long double temp19_1 = arg_d4;
                                    x87_r7_50 - temp19_1;

                                    if (*(&((x87_r7_50 < temp19_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_50, temp19_1) ? 1 : 0) << 0xa
                                            | (x87_r7_50 == temp19_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4cd109;

                                    long double x87_r7_51 = arg_f8;
                                    long double temp22_1 = arg_bc;
                                    x87_r7_51 - temp22_1;

                                    if (!(*(&((x87_r7_51 < temp22_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_51, temp22_1) ? 1 : 0) << 0xa
                                            | (x87_r7_51 == temp22_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        goto label_4cd109;

                                    long double x87_r7_52 = arg_108;
                                    long double temp25_1 = arg_e4;
                                    x87_r7_52 - temp25_1;

                                    if (*(&((x87_r7_52 < temp25_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_52, temp25_1) ? 1 : 0) << 0xa
                                            | (x87_r7_52 == temp25_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4cd109;

                                    long double x87_r7_53 = arg_108;
                                    long double temp28_1 = arg_cc;
                                    x87_r7_53 - temp28_1;

                                    if (*(&((x87_r7_53 < temp28_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_53, temp28_1) ? 1 : 0) << 0xa
                                            | (x87_r7_53 == temp28_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                        goto label_4cd16e;

                                    goto label_4cd109;
                                }

                                long double x87_r7_34 = arg_28;
                                long double temp15_1 = 0f;
                                x87_r7_34 - temp15_1;
                                long double x87_r7_35 = a3;

                                if (*(&((x87_r7_34 < temp15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_34, temp15_1) ? 1 : 0) << 0xa
                                        | (x87_r7_34 == temp15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                    x87_r7_35 = -(x87_r7_35);

                                long double x87_r7_38 =
                                    (x87_r7_35 + arg_58 - *a2) / (*a3 - *a2);
                                double arg_130 = (a3[1] - *(a2 + 8)) * x87_r7_38 + *(a2 + 8);
                                double arg_138 =
                                    (a3[2] - *(a2 + 0x10)) * x87_r7_38 + *(a2 + 0x10);
                                long double x87_r7_40 = arg_130;
                                long double temp18_1 = arg_dc;
                                x87_r7_40 - temp18_1;

                                if (!(*(&((x87_r7_40 < temp18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_40, temp18_1) ? 1 : 0) << 0xa
                                    | (x87_r7_40 == temp18_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_41 = arg_130;
                                    long double temp20_1 = arg_c4;
                                    x87_r7_41 - temp20_1;

                                    if (!(*(&((x87_r7_41 < temp20_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_41, temp20_1) ? 1 : 0) << 0xa
                                            | (x87_r7_41 == temp20_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        goto label_4cd109;

                                    long double x87_r7_42 = arg_138;
                                    long double temp23_1 = arg_e4;
                                    x87_r7_42 - temp23_1;

                                    if (*(&((x87_r7_42 < temp23_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_42, temp23_1) ? 1 : 0) << 0xa
                                            | (x87_r7_42 == temp23_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4cd109;

                                    long double x87_r7_43 = arg_138;
                                    long double temp26_1 = arg_cc;
                                    x87_r7_43 - temp26_1;

                                    if (!(*(&((x87_r7_43 < temp26_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_43, temp26_1) ? 1 : 0) << 0xa
                                            | (x87_r7_43 == temp26_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        goto label_4cd109;

                                label_4cd16e:
                                    a1 = &a1[9];
                                    int32_t eax_80 = arg_c + 1;
                                    arg_c = eax_80;
                                    arg_19c[eax_80] = 1;
                                    int32_t eax_85;

                                    if (a5 >= 4)
                                    {
                                        void* ecx_22 = a9;
                                        int32_t eax_86 = ecx_15;
                                        eax_86 = *(ecx_22 + eax_86 + 0x10);
                                        ecx_22 = eax_86;
                                        i = a1;
                                        eax_85 =
                                            ((ecx_22 & 4) ^ (a5 & 4)) + ((a5 - eax_86) & 3);
                                    }
                                    else
                                    {
                                        int32_t ebx_25 = ecx_15;
                                        char eax_82 = *(a9 + ebx_25 + 0x10);
                                        ebx_25 = eax_82;
                                        int32_t eax_83 = a5;
                                        int32_t ebx_26 = ebx_25 + eax_83;
                                        eax_83 = eax_82;
                                        eax_85 = (eax_83 & 4) + (ebx_26 & 3);
                                        i = a1;
                                    }

                                    i[2] = eax_85;
                                    i[3] = ecx_19;
                                    i[1] = a4 - 1;
                                    i[5] = edx_14;
                                    *i = esi_21;
                                    i[4] = edi_9;
                                    i[6] = eax_40;
                                    i[7] = a10;
                                    int32_t ecx_27;

                                    ecx_27 = arg_c || arg_c ? edx_9 : 7 - edx_9;

                                    void* eax_93;

                                    if (g_b97d20)
                                        eax_93 = var_4;

                                    if (!g_b97d20 || !eax_93)
                                        i[8] = 0;
                                    else
                                        i[8] = *(eax_93 + (ecx_27 << 2) + 0xc);

                                    break;
                                }

                            label_4cd109:
                                var_8_5 += 1;
                                arg_3c = &arg_3c[1];

                                if (var_8_5 >= 3)
                                    goto label_4cd125;
                            }
                        }
                    }

                    cond:2_1 = a2 != 1;
                    arg_38 = &arg_38[1];
                    a2 -= 1;
                } while (cond:2_1);
            }
            else
            {
                if (ecx_11 && eax_30 && *(eax_30 + 0x39) & 1)
                {
                    void* j_1 = *(eax_30 + 0x2c);

                    do
                    {
                        if (*(j_1 + 0x5d) & 1)
                        {
                            int32_t edx_7 = 0;
                            edx_7 = *(j_1 + 0x1c);
                            (*((edx_7 << 2) + &g_a9cae0))(j_1, *(j_1 + 0x48));
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
            int16_t* edx_6 = *(i[6] + 0x1c);
            void* eax_24 = i[7];
            int32_t esi_12 = i[4];
            double arg_140 = i[3] - *(eax_24 + 0xde0);
            int32_t esi_14 = i[5];
            double arg_148 = esi_12 - *(eax_24 + 0xde4);
            int32_t esi_15 = esi_14 - *(eax_24 + 0xde8);
            double arg_150 = esi_15;
            int32_t arg_80;
            int32_t arg_84;
            float arg_ec;
            void arg_164;

            if (sub_4cd300(edx_6, &arg_140, esi_15, a3, &arg_164, ecx_7, &arg_80, &arg_84, i[2],
                &arg_ec))
            {
                *(arg_4 + 0x38) = arg_ec;
                *(arg_4 + 0x3c) = a11;
                *(arg_4 + 0x40) = a12;
                int32_t eax_97 = arg_80;
                memcpy(arg_4 + 8, &arg_164, 0x18);
                int32_t eax_98;

                if (!eax_97)
                    eax_98 = 0;
                else
                    eax_98 = *(esi + (eax_97 << 2) + 0xd3c);

                *(arg_4 + 0x4c) = eax_98;
                int32_t eax_99 = arg_84;
                int32_t eax_100;

                if (!eax_99)
                    eax_100 = 0;
                else
                    eax_100 = *(esi + (eax_99 << 2) + 0xd3c);

                *(arg_4 + 0x50) = eax_100;
                *(arg_4 + 0x60) = sub_4b32b0(arg_4 + 8, esi_15);
                sub_4c5870();
                return 1;
            }

            i -= 0x24;
            a1 = i;
            arg_c -= 1;
        }
    } while (i >= &arg_39c);

    sub_4c5870();
    return 0;
}
