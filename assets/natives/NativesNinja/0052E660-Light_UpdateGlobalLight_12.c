#include "0052E660-Light_UpdateGlobalLight_12.h"
/* 0x0052e660 Light_UpdateGlobalLight_12 full linked: callers=2 callees=22 */
float sub_52e660(float a1, int32_t* a2, int32_t a3 @ 0x110, int32_t a4, int32_t a5) __location("eax")

{
    uint32_t i_7;
    uint32_t i_6 = i_7;
    sub_4a54a0(0x2648);
    int32_t* edi = a2;
    float result = edi[9];
    int32_t arg_c = 0;

    if (result)
    {
        float ebx_1 = a1;
        g_a8457c += 1;
        int32_t eax = *(ebx_1 + 0x4ab8);
        void* __return_addr_1;

        if (edi[7] > eax || !eax)
        {
            arg_c = 1;
            __return_addr_1 = 6;
        }
        else
            __return_addr_1 = 1;

        int32_t arg_14 = 0;
        int32_t arg_c4 = *(ebx_1 + 0x4acc);
        int32_t arg_d0 = *(ebx_1 + 0x4ad0);
        int32_t arg_10 = edi[8];
        __return_addr = __return_addr_1;
        int32_t esi_3 = edi[1];
        int32_t arg_18 = *edi;
        int32_t arg_1c = esi_3;
        int32_t arg_20 = edi[2];
        int32_t arg_24 = edi[3];
        a1 = 0f;
        arg_10 = arg_10 / __return_addr;
        double arg_28 = *(ebx_1 + 0x4a94);
        int32_t __saved_edi;

        if (__return_addr_1 >= 0)
        {
            int32_t var_8_1 = 0;
            bool cond:3_1;

            do
            {
                i_6 = 0;
                void* const __return_addr_7;
                bool cond:10_1;

                do
                {
                    if (!arg_c)
                    {
                        memcpy(&(&__saved_edi)[(i_6 + var_8_1) * 6 + 0x59f], &arg_18,
                            0x18);
                        edi = a2;
                    }
                    else
                    {
                        int32_t ecx_1 = *(ebx_1 + 0x4ab8);
                        int32_t esi_5 = edi[7];
                        a2 = 1;

                        if (esi_5 == ecx_1 + 1)
                        {
                            long double x87_r7_4 = *edi;
                            void* edx_8 = ecx_1 * 0x300 + ebx_1;
                            long double temp1_1 = *(edx_8 + 0xc40);
                            x87_r7_4 - temp1_1;

                            if (!(*(&((x87_r7_4 < temp1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
                                | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40) || var_8_1)
                            {
                                long double x87_r7_5 = *edi;
                                long double temp5_1 = *(edx_8 + 0xe80);
                                x87_r7_5 - temp5_1;

                                if (!(*(&((x87_r7_5 < temp5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_5, temp5_1) ? 1 : 0) << 0xa
                                    | (x87_r7_5 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                    || a1 != __return_addr)
                                {
                                    long double x87_r7_6 = *(edi + 8);
                                    long double temp10_1 = *(edx_8 + 0xc48);
                                    x87_r7_6 - temp10_1;

                                    if (!(*(&((x87_r7_6 < temp10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_6, temp10_1) ? 1 : 0) << 0xa
                                        | (x87_r7_6 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40) || i_6)
                                    {
                                        long double x87_r7_7 = *(edi + 8);
                                        long double temp17_1 = *(edx_8 + 0xcd8);
                                        x87_r7_7 - temp17_1;

                                        if (*(&((x87_r7_7 < temp17_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_7, temp17_1) ? 1 : 0) << 0xa
                                                | (x87_r7_7 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x40
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

                        if (esi_5 == ecx_1 + 2)
                        {
                            long double x87_r7_8 = *edi;
                            int32_t eax_9 = ecx_1 * 0x300;
                            long double temp4_1 = *(eax_9 + ebx_1 + 0xc40);
                            x87_r7_8 - temp4_1;
                            void* ecx_2 = eax_9 + ebx_1;

                            if (!(*(&((x87_r7_8 < temp4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_8, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_8 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40) || var_8_1)
                            {
                                long double x87_r7_9 = *edi;
                                long double temp9_1 = *(ecx_2 + 0xe80);
                                x87_r7_9 - temp9_1;

                                if (*(&((x87_r7_9 < temp9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_9, temp9_1) ? 1 : 0) << 0xa
                                    | (x87_r7_9 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41
                                    || a1 != __return_addr)
                                {
                                    long double x87_r7_10 = *(edi + 8);
                                    long double temp16_1 = *(ecx_2 + 0xc48);
                                    x87_r7_10 - temp16_1;

                                    if (!(*(&((x87_r7_10 < temp16_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_10, temp16_1) ? 1 : 0) << 0xa
                                        | (x87_r7_10 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x40) || i_6)
                                    {
                                        long double x87_r7_11 = *(edi + 8);
                                        long double temp22_1 = *(ecx_2 + 0xcd8);
                                        x87_r7_11 - temp22_1;

                                        if (!(*(&((x87_r7_11 < temp22_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_11, temp22_1) ? 1 : 0) << 0xa
                                                | (x87_r7_11 == temp22_1 ? 1 : 0) << 0xe) + 1) & 0x41)
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

                        if (*(ebx_1 + 0x4abc) <= ecx_1 + 2 || a2)
                        {
                            void arg_d8;
                            sub_52dae0(ebx_1, &arg_d8, &arg_18);
                            int32_t eax_16 = var_8_1 + i_6;
                            void arg_e0;
                            memcpy(&(&__saved_edi)[eax_16 * 6 + 0x59f], &arg_e0, 0x18);
                            (&__saved_edi)[eax_16 * 3 + 0x3a4] = a3;
                            (&__saved_edi)[eax_16 * 3 + 0x3a5] = a4;
                            (&__saved_edi)[eax_16 * 3 + 0x3a6] = a5;
                            edi = a2;
                        }
                        else
                        {
                            int32_t ecx_9 = i_6 + var_8_1;
                            int32_t eax_20 = ecx_9 * 0x18;
                            void arg_1668;
                            *(&arg_1668 + eax_20) = arg_18;
                            void arg_1670;
                            *(&arg_1670 + eax_20) = arg_20;
                            int64_t arg_1678[0x2a];
                            arg_1678[ecx_9 * 3] = *(ebx_1 + 0x4a94);
                            void arg_e7c;
                            __builtin_memset(&arg_e7c + ecx_9 * 0xc, 0, 8);
                            int32_t arg_e84[0x29];
                            arg_e84[ecx_9 * 3] = 0x3f800000;
                        }
                    }

                    __return_addr_7 = __return_addr;
                    cond:10_1 = i_6 + 1 <= __return_addr_7;
                    i_6 += 1;
                    arg_20 = arg_20 + arg_10;
                } while (cond:10_1);
                arg_24 = edi[3];
                arg_20 = edi[2];
                arg_18 = arg_18 + arg_10;
                cond:3_1 = a1 + 1 <= __return_addr_7;
                a1 += 1;
                var_8_1 += 0xd;
            } while (cond:3_1);
            __return_addr_1 = __return_addr;
        }

        if (arg_c)
        {
            if (__return_addr_1 >= 1)
            {
                void arg_17e0;
                double* var_8_2 = &arg_17e0;
                void arg_f34;
                float* ebx_2 = &arg_f34;
                i_6 = (__return_addr + 1) >> 1;
                bool cond:2_1;

                do
                {
                    void* const __return_addr_2 = __return_addr;

                    if (__return_addr_2 > 2)
                    {
                        long double x87_r7_19 = edi[4];
                        double* edx_19 = var_8_2;
                        long double x87_r6_2 = 1f - x87_r7_19;
                        float* ecx_11 = ebx_2;
                        uint32_t i_3 = (__return_addr_2 - 1) >> 1;
                        uint32_t i;

                        do
                        {
                            *edx_19 = (edx_19[-0x27] + edx_19[0x27]) * x87_r6_2 * 0.5
                                + x87_r7_19 * *edx_19;
                            long double x87_r5_8 = x87_r7_19 * ecx_11[1] + x87_r6_2;
                            a1 = x87_r5_8;
                            ecx_11[1] = x87_r5_8;
                            long double x87_r5_9 = ecx_11[-1];
                            long double temp3_1 = 0f;
                            x87_r5_9 - temp3_1;

                            if (!(*(&((x87_r5_9 < temp3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_9, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r5_9 == temp3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                            {
                            label_52ea3b:
                                long double x87_r5_12 = a1;
                                long double x87_r4_4 = *ecx_11;
                                long double x87_r3_1 = ecx_11[-1];
                                long double x87_r5_14 = 1.0 / sqrtl(x87_r3_1 * x87_r3_1
                                    + x87_r4_4 * x87_r4_4 + x87_r5_12 * x87_r5_12);
                                ecx_11[-1] = ecx_11[-1] * x87_r5_14;
                                *ecx_11 = *ecx_11 * x87_r5_14;
                                ecx_11[1] = ecx_11[1] * x87_r5_14;
                            }
                            else
                            {
                                long double x87_r5_10 = *ecx_11;
                                long double temp8_1 = 0f;
                                x87_r5_10 - temp8_1;

                                if (!(*(&((x87_r5_10 < temp8_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r5_10, temp8_1) ? 1 : 0) << 0xa
                                        | (x87_r5_10 == temp8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52ea3b;

                                long double x87_r5_11 = a1;
                                long double temp15_1 = 0f;
                                x87_r5_11 - temp15_1;

                                if (!(*(&((x87_r5_11 < temp15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r5_11, temp15_1) ? 1 : 0) << 0xa
                                        | (x87_r5_11 == temp15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52ea3b;
                            }

                            edx_19 = &edx_19[6];
                            ecx_11 = &ecx_11[6];
                            i = i_3;
                            i_3 -= 1;
                        } while (i != 1);
                    }

                    ebx_2 = &ebx_2[0x4e];
                    cond:2_1 = i_6 != 1;
                    var_8_2 = &var_8_2[0x4e];
                    i_6 -= 1;
                } while (cond:2_1);
            }

            void* const __return_addr_3 = __return_addr;

            if (__return_addr_3 > 2)
            {
                void arg_1900;
                double* edx_20 = &arg_1900;
                double* var_8_3 = &arg_1900;
                void arg_fc4;
                float* ebx_3 = &arg_fc4;
                i_6 = (__return_addr_3 - 1) >> 1;
                bool cond:6_1;

                do
                {
                    void* const __return_addr_4 = __return_addr;

                    if (__return_addr_4 >= 1)
                    {
                        long double x87_r7_21 = edi[4];
                        float* ecx_15 = ebx_3;
                        long double x87_r6_5 = 1f - x87_r7_21;
                        uint32_t i_4 = (__return_addr_4 + 1) >> 1;
                        uint32_t i_1;

                        do
                        {
                            *edx_20 =
                                (edx_20[-3] + edx_20[3]) * x87_r6_5 * 0.5 + x87_r7_21 * *edx_20;
                            long double x87_r5_23 = x87_r7_21 * ecx_15[1] + x87_r6_5;
                            a1 = x87_r5_23;
                            ecx_15[1] = x87_r5_23;
                            long double x87_r5_24 = ecx_15[-1];
                            long double temp7_1 = 0f;
                            x87_r5_24 - temp7_1;

                            if (!(*(&((x87_r5_24 < temp7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_24, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r5_24 == temp7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                            {
                            label_52eb4d:
                                long double x87_r5_27 = a1;
                                long double x87_r4_15 = *ecx_15;
                                long double x87_r3_3 = ecx_15[-1];
                                long double x87_r5_29 = 1.0 / sqrtl(x87_r4_15 * x87_r4_15
                                    + x87_r3_3 * x87_r3_3 + x87_r5_27 * x87_r5_27);
                                ecx_15[-1] = ecx_15[-1] * x87_r5_29;
                                *ecx_15 = *ecx_15 * x87_r5_29;
                                ecx_15[1] = ecx_15[1] * x87_r5_29;
                            }
                            else
                            {
                                long double x87_r5_25 = *ecx_15;
                                long double temp13_1 = 0f;
                                x87_r5_25 - temp13_1;

                                if (!(*(&((x87_r5_25 < temp13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r5_25, temp13_1) ? 1 : 0) << 0xa
                                        | (x87_r5_25 == temp13_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52eb4d;

                                long double x87_r5_26 = a1;
                                long double temp21_1 = 0f;
                                x87_r5_26 - temp21_1;

                                if (!(*(&((x87_r5_26 < temp21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r5_26, temp21_1) ? 1 : 0) << 0xa
                                        | (x87_r5_26 == temp21_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52eb4d;
                            }

                            edx_20 = &edx_20[6];
                            ecx_15 = &ecx_15[6];
                            i_1 = i_4;
                            i_4 -= 1;
                        } while (i_1 != 1);
                    }

                    ebx_3 = &ebx_3[0x4e];
                    edx_20 = &var_8_3[0x4e];
                    cond:6_1 = i_6 != 1;
                    var_8_3 = edx_20;
                    i_6 -= 1;
                } while (cond:6_1);
            }

            void* const __return_addr_5 = __return_addr;

            if (__return_addr_5 >= 1)
            {
                uint32_t i_5 = (__return_addr_5 + 1) >> 1;
                void arg_17c8;
                double* var_8_4 = &arg_17c8;
                void arg_f28;
                float* ebx_4 = &arg_f28;
                a2 = i_5;
                i_6 = i_5;

                while (true)
                {
                    long double x87_r7_23 = edi[4];
                    double* edx_22 = var_8_4;
                    float* ecx_16 = ebx_4;
                    long double x87_r6_8 = 1f - x87_r7_23;
                    uint32_t i_2;

                    do
                    {
                        *edx_22 =
                            (edx_22[-0x24] + edx_22[0x24]) * x87_r6_8 * 0.5 + x87_r7_23 * *edx_22;
                        long double x87_r5_38 = x87_r7_23 * ecx_16[1] + x87_r6_8;
                        a1 = x87_r5_38;
                        ecx_16[1] = x87_r5_38;
                        long double x87_r5_39 = ecx_16[-1];
                        long double temp6_1 = 0f;
                        x87_r5_39 - temp6_1;

                        if (!(*(&((x87_r5_39 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r5_39, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r5_39 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                        {
                        label_52ec5f:
                            long double x87_r5_42 = a1;
                            long double x87_r4_26 = *ecx_16;
                            long double x87_r3_5 = ecx_16[-1];
                            long double x87_r5_44 = 1.0 / sqrtl(x87_r3_5 * x87_r3_5
                                + x87_r4_26 * x87_r4_26 + x87_r5_42 * x87_r5_42);
                            ecx_16[-1] = ecx_16[-1] * x87_r5_44;
                            *ecx_16 = *ecx_16 * x87_r5_44;
                            ecx_16[1] = ecx_16[1] * x87_r5_44;
                        }
                        else
                        {
                            long double x87_r5_40 = *ecx_16;
                            long double temp12_1 = 0f;
                            x87_r5_40 - temp12_1;

                            if (!(*(&((x87_r5_40 < temp12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_40, temp12_1) ? 1 : 0) << 0xa
                                    | (x87_r5_40 == temp12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                goto label_52ec5f;

                            long double x87_r5_41 = a1;
                            long double temp19_1 = 0f;
                            x87_r5_41 - temp19_1;

                            if (!(*(&((x87_r5_41 < temp19_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_41, temp19_1) ? 1 : 0) << 0xa
                                    | (x87_r5_41 == temp19_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                goto label_52ec5f;
                        }

                        edx_22 = &edx_22[6];
                        ecx_16 = &ecx_16[6];
                        i_2 = i_5;
                        i_5 -= 1;
                    } while (i_2 != 1);
                    ebx_4 = &ebx_4[0x4e];
                    bool cond:9_1 = i_6 != 1;
                    var_8_4 = &var_8_4[0x4e];
                    i_6 -= 1;

                    if (!cond:9_1)
                        break;

                    i_5 = a2;
                }
            }
        }

        void* const __return_addr_6 = __return_addr;
        double* var_24;
        int32_t arg_148[0x2];

        if (__return_addr_6 >= 0)
        {
            a1 = 0f;
            void* var_8_5 = __return_addr_6 + 1;
            bool cond:4_1;

            do
            {
                int32_t ebx_5 = 0;
                bool cond:5_1;

                do
                {
                    if (!arg_c)
                    {
                        int32_t eax_48 = a1 + ebx_5;
                        int32_t edi_4 = *(a1 + 0x4a6c);
                        __builtin_memset(&(&arg_148)[eax_48], 0, 8);
                        (&__saved_edi)[eax_48 * 3 + 0x1a9] = edi_4;
                        int32_t edx_28 = *(a1 + 0x4a74);
                        (&__saved_edi)[eax_48 * 3 + 0x1aa] = *(a1 + 0x4a70);
                        (&__saved_edi)[eax_48 * 3 + 0x1ab] = edx_28;
                    }
                    else
                    {
                        int32_t esi_10 = a1 + ebx_5;
                        sub_52e180(a1, &(&__saved_edi)[esi_10 * 3 + 0x1a9],
                            &(&__saved_edi)[esi_10 * 3 + 0x3a4]);
                        var_24 = &(&__saved_edi)[esi_10 * 3 + 0x3a4];
                        sub_52f3d0(a1, &(&var_24)[esi_10 * 2 + 0x5b],
                            &(&var_24)[esi_10 * 6 + 0x5a3], var_24);
                    }

                    ebx_5 += 1;
                    cond:5_1 = ebx_5 <= __return_addr;
                    arg_18 = arg_18 + arg_10;
                } while (cond:5_1);
                int32_t edx_29 = a2[1];
                arg_18 = *a2;
                arg_1c = edx_29;
                cond:4_1 = var_8_5 != 1;
                arg_20 = arg_20 + arg_10;
                a1 += 0xd;
                var_8_5 -= 1;
            } while (cond:4_1);
        }

        result = 0f;
        a1 = 0f;

        if (__return_addr > 0)
        {
            while (true)
            {
                i_6 = 0;
                void* const __return_addr_9;
                bool cond:12_1;

                do
                {
                    a2 = nullptr;
                    int32_t var_8_6 = 0;
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
                        var_8_6 = 0x10;
                        int32_t eax_54;
                        int32_t edx_31;
                        edx_31 = HIGHD(__return_addr_8);
                        eax_54 = LOWD(__return_addr_8);
                        int32_t edx_32 = 0;
                        edx_32 = i_8 >= (eax_54 - edx_31) >> 1;
                        void* edx_33 = edx_32 - 1;
                        edx_33 &= 0x20;
                        a2 = edx_33 + 0x100;
                    }

                    if (!i_8)
                    {
                        int32_t eax_57 = var_8_6;
                        eax_57 |= 4;
                        var_8_6 = eax_57;
                        int32_t eax_59;
                        int32_t edx_35;
                        edx_35 = HIGHD(__return_addr_8);
                        eax_59 = LOWD(__return_addr_8);
                        int32_t* eax_62 = a2;

                        if (a1 >= (eax_59 - edx_35) >> 1)
                            *(&eax_62 + 1) |= 1;
                        else
                            eax_62 |= 0x80;

                        a2 = eax_62;
                    }

                    if (a1 == __return_addr_8 - 1)
                    {
                        int32_t eax_63 = var_8_6;
                        eax_63 |= 8;
                        var_8_6 = eax_63;
                        int32_t eax_65;
                        int32_t edx_36;
                        edx_36 = HIGHD(__return_addr_8);
                        eax_65 = LOWD(__return_addr_8);
                        int32_t* eax_68 = a2;

                        if (i_8 >= (eax_65 - edx_36) >> 1)
                            eax_68 |= 0x80;
                        else
                            eax_68 |= 0x40;

                        a2 = eax_68;
                    }

                    if (i_8 == __return_addr_8 - 1)
                    {
                        int32_t eax_70;
                        int32_t edx_37;
                        edx_37 = HIGHD(__return_addr_8);
                        eax_70 = LOWD(__return_addr_8);
                        int32_t* eax_73 = a2;
                        var_8_6 |= 2;

                        if (a1 >= (eax_70 - edx_37) >> 1)
                            eax_73 |= 0x20;
                        else
                            eax_73 |= 0x40;

                        a2 = eax_73;
                    }

                    int32_t edx_38 = result * 0xd + i_6;
                    int32_t eax_76 = edx_38 * 0xc;
                    double arg_40[0x3];
                    memcpy(&arg_40, &(&__saved_edi)[edx_38 * 6 + 0x59f], 0x18);
                    void arg_58;
                    memcpy(&arg_58, &(&__saved_edi)[edx_38 * 6 + 0x5ed], 0x18);
                    void arg_70;
                    memcpy(&arg_70, &(&__saved_edi)[edx_38 * 6 + 0x5a5], 0x18);
                    int32_t arg_690[0x3];
                    int32_t arg_88 = (&arg_690)[edx_38][0];
                    int32_t arg_8c = (&__saved_edi)[edx_38 * 3 + 0x1aa];
                    int32_t arg_90 = (&__saved_edi)[edx_38 * 3 + 0x1ab];
                    int32_t arg_94 = (&__saved_edi)[edx_38 * 3 + 0x1d0];
                    int32_t arg_98 = (&__saved_edi)[edx_38 * 3 + 0x1d1];
                    int32_t arg_9c = (&__saved_edi)[edx_38 * 3 + 0x1d2];
                    int32_t arg_a0 = (&__saved_edi)[edx_38 * 3 + 0x1ac];
                    int32_t arg_a4 = (&__saved_edi)[edx_38 * 3 + 0x1ad];
                    int32_t arg_a8 = (&__saved_edi)[edx_38 * 3 + 0x1ae];
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
                        arg_ac = (&arg_148)[edx_38][0];
                        arg_14c;
                        arg_b0 = *(&arg_14c + (edx_38 << 3));
                        arg_b4 = (&arg_1b0)[edx_38][0];
                        arg_b8 = *(&arg_1b4 + (edx_38 << 3));
                        arg_bc = arg_150[edx_38 * 2];
                        arg_c0 = *(&arg_154 + (edx_38 << 3));
                    }

                    int32_t eax_84 = a2[6];
                    int32_t arg_c8;
                    int32_t arg_cc;

                    if (!(eax_84 & var_8_6 & 0x14))
                    {
                        double (* var_18_5)[0x3] = &arg_40;
                        arg_c8 = 0;
                        arg_cc = *(a1 + 0x4aa0);
                        sub_5116d0(var_18_5);

                        if (*(a1 + 0x4ac0) && arg_c)
                        {
                            int32_t eax_93 = *(a1 + 0x4aa4);
                            double (* var_18_6)[0x3] = &arg_40;
                            arg_c8 = 1;
                            arg_cc = eax_93;
                            sub_5116d0(var_18_6);
                        }
                    }
                    else
                    {
                        void* edi_8 = 2;

                        if (arg_c && eax_84 & a2 & 0x1e0)
                            edi_8 = 4;

                        arg_cc = *(a1 + 0x4aa0);
                        void* var_20_3 = nullptr;
                        var_24 = &arg_40;
                        arg_c8 = 0;
                        sub_52f630(a1, a2, var_24, var_20_3, edi_8, arg_c);

                        if (*(a1 + 0x4ac0) && arg_c)
                        {
                            arg_cc = *(a1 + 0x4aa4);
                            void* const var_20_4 = nullptr;
                            var_24 = &arg_40;
                            arg_c8 = 1;
                            sub_52f630(a1, a2, var_24, var_20_4, edi_8, arg_c);
                        }
                    }

                    memcpy(&arg_40, &(&__saved_edi)[edx_38 * 6 + 0x5a5], 0x18);
                    memcpy(&arg_58, &(&__saved_edi)[edx_38 * 6 + 0x5f3], 0x18);
                    memcpy(&arg_70, &(&__saved_edi)[edx_38 * 6 + 0x5ed], 0x18);

                    if (!*(a1 + 0x4ac8))
                    {
                        void arg_69c;
                        arg_88 = *(&arg_69c + eax_76);
                        void arg_6a0;
                        arg_8c = *(&arg_6a0 + eax_76);
                        int32_t arg_6a4[0x1f6];
                        arg_90 = arg_6a4[edx_38 * 3];
                        arg_94 = (&__saved_edi)[edx_38 * 3 + 0x1d3];
                        arg_98 = (&__saved_edi)[edx_38 * 3 + 0x1d4];
                        arg_9c = (&__saved_edi)[edx_38 * 3 + 0x1d5];
                        arg_a0 = (&__saved_edi)[edx_38 * 3 + 0x1d0];
                        arg_a4 = (&__saved_edi)[edx_38 * 3 + 0x1d1];
                        arg_a8 = (&__saved_edi)[edx_38 * 3 + 0x1d2];
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
                        arg_ac = arg_150[edx_38 * 2];
                        arg_b0 = *(&arg_154 + (edx_38 << 3));
                        int32_t arg_1b8[0x136];
                        arg_b4 = arg_1b8[edx_38 * 2];
                        arg_1bc;
                        arg_b8 = *(&arg_1bc + (edx_38 << 3));
                        arg_bc = (&arg_1b0)[edx_38][0];
                        arg_c0 = *(&arg_1b4 + (edx_38 << 3));
                    }

                    int32_t eax_104 = a2[6];

                    if (!(eax_104 & var_8_6 & 0xa))
                    {
                        double (* var_18_9)[0x3] = &arg_40;
                        arg_c8 = 0;
                        arg_cc = *(a1 + 0x4aa0);
                        sub_5116d0(var_18_9);

                        if (*(a1 + 0x4ac0) && arg_c)
                        {
                            int32_t edx_56 = *(a1 + 0x4aa4);
                            double (* var_18_10)[0x3] = &arg_40;
                            arg_c8 = 1;
                            arg_cc = edx_56;
                            sub_5116d0(var_18_10);
                        }
                    }
                    else
                    {
                        void* esi_28 = 2;

                        if (arg_c && eax_104 & a2 & 0x1e0)
                            esi_28 = 4;

                        float* edi_9 = a1;
                        arg_cc = edi_9[0x12a8];
                        void* const var_20_5 = nullptr;
                        var_24 = &arg_40;
                        arg_c8 = 0;
                        sub_52f630(edi_9, a2, var_24, var_20_5, esi_28, arg_c);

                        if (edi_9[0x12b0] && arg_c)
                        {
                            arg_cc = edi_9[0x12a9];
                            void* const var_20_6 = nullptr;
                            var_24 = &arg_40;
                            arg_c8 = 1;
                            sub_52f630(edi_9, a2, var_24, var_20_6, esi_28, arg_c);
                        }
                    }

                    __return_addr_9 = __return_addr;
                    cond:12_1 = i_6 + 1 < __return_addr_9;
                    i_6 += 1;
                } while (cond:12_1);
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
