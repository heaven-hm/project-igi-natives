#include "00500EF0-SplineObj_Update.h"
/* 0x00500ef0 SplineObj_Update full linked: callers=0 callees=48 */
float* sub_500ef0(int32_t* a1)

{
    int32_t* i_10 = a1;
    int32_t* i_9 = QTask_TriggerEvent_2(i_10, g_a7a620);
    void* eax_1 = QTask_AllocateEvent_2(i_10, g_a7a620);
    int32_t* edi = i_10[5];
    void* var_64 = eax_1;
    a1 = edi;
    float var_50;
    float var_48;
    float var_38;
    float var_28;
    char ecx_19;

    if ((*(edi + 0x4f) || *(i_10 + 0x1a5)) && (eax_1 || i_9))
    {
        if (!*(edi + 0x4e))
        {
            var_50 = 0f;
            float var_4c_1 = 0f;
            void* var_48_1 = nullptr;

            if (eax_1)
            {
                long double x87_r7_2 = *(i_10 + 0xf8) - *(eax_1 + 0xf8);
                float var_34_1 = *(i_10 + 0x100) - *(eax_1 + 0x100);
                eax_1 = *(i_10 + 0x108) - *(eax_1 + 0x108);
                var_50 = x87_r7_2;
                var_4c_1 = var_34_1;
                var_48_1 = eax_1;
            }

            if (i_9)
            {
                float var_34_2 = *(i_9 + 0x100) - *(i_10 + 0x100);
                float var_30_2 = *(i_9 + 0x108) - *(i_10 + 0x108);
                var_50 = *(i_9 + 0xf8) - *(i_10 + 0xf8) + var_50;
                var_4c_1 = var_34_2 + var_4c_1;
                var_48_1 = var_30_2 + var_48_1;
            }

            long double x87_r7_10 = var_50;
            long double temp1_1 = 0f;
            x87_r7_10 - temp1_1;
            int32_t* edx_2;

            if (!(*(&((x87_r7_10 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_501055:
                edx_2 = &i_10[0x44];
                float* ecx_3 = edx_2;
                *ecx_3 = var_50;
                ecx_3[1] = var_4c_1;
                ecx_3[2] = var_48_1;
            }
            else
            {
                long double x87_r7_11 = var_4c_1;
                long double temp2_1 = 0f;
                x87_r7_11 - temp2_1;

                if (!(*(&((x87_r7_11 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_11, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_11 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_501055;

                long double x87_r7_12 = var_48_1;
                long double temp4_1 = 0f;
                x87_r7_12 - temp4_1;

                if (!(*(&((x87_r7_12 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_12, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_12 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_501055;

                edx_2 = &i_10[0x44];
                i_10[0x45] = 0;
                i_10[0x46] = 0;
                *edx_2 = 0x3f800000;
            }

            long double x87_r7_13 = *edx_2;
            long double temp3_1 = 0f;
            x87_r7_13 - temp3_1;
            long double x87_r7_14;
            long double temp6_1;

            if (*(&((x87_r7_13 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_13, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                x87_r7_14 = i_10[0x45];
                temp6_1 = 0f;
                x87_r7_14 - temp6_1;
            }

            if (!(*(&((x87_r7_13 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_13, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
                (x87_r7_14 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                long double x87_r7_15 = i_10[0x45];
                i_10[0x49] = 0;
                i_10[0x47] = x87_r7_15;
                long double x87_r6_10 = -(*edx_2);
                i_10[0x48] = x87_r6_10;
                long double temp5_1 = 0f;
                x87_r7_15 - temp5_1;
                long double temp7_1;

                if (*(&((x87_r7_15 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == temp5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                {
                    temp7_1 = 0f;
                    x87_r6_10 - temp7_1;
                }

                if (!(*(&((x87_r7_15 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == temp5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40) || !(*(&(
                    (x87_r6_10 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_10, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r6_10 == temp7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                {
                    i_10[0x49] = 0;
                    long double x87_r5_4 =
                        1.0 / sqrtl(x87_r7_15 * x87_r7_15 + x87_r6_10 * x87_r6_10);
                    i_10[0x47] = x87_r7_15 * x87_r5_4;
                    i_10[0x48] = x87_r6_10 * x87_r5_4;
                }
            }
            else
            {
                i_10[0x47] = 0;
                i_10[0x48] = 0x3f800000;
                i_10[0x49] = 0;
            }

            var_38 = i_10[0x48] * i_10[0x46] - i_10[0x49] * i_10[0x45];
            long double x87_r7_23 = i_10[0x47] * i_10[0x46];
            long double x87_r6_16 = i_10[0x49] * *edx_2;
            i_10[0x4a] = var_38;
            long double x87_r7_27 = i_10[0x47] * i_10[0x45];
            long double x87_r6_18 = i_10[0x48] * *edx_2;
            i_10[0x4b] = -((x87_r7_23 - x87_r6_16));
            i_10[0x4c] = x87_r7_27 - x87_r6_18;
            var_28 = *edx_2;
            long double x87_r7_29 = var_28;
            long double temp8_1 = 0f;
            x87_r7_29 - temp8_1;
            float var_24_1 = edx_2[1];
            float var_20_1 = edx_2[2];

            if (!(*(&((x87_r7_29 < temp8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_29, temp8_1) ? 1 : 0) << 0xa
                | (x87_r7_29 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_5011d2:
                long double x87_r7_32 = var_20_1;
                long double x87_r6_19 = var_24_1;
                long double x87_r5_7 = var_28;
                long double x87_r7_34 = 1.0
                    / sqrtl(x87_r5_7 * x87_r5_7 + x87_r6_19 * x87_r6_19 + x87_r7_32 * x87_r7_32);
                var_28 = var_28 * x87_r7_34;
                var_24_1 = var_24_1 * x87_r7_34;
                var_20_1 = var_20_1 * x87_r7_34;
            }
            else
            {
                long double x87_r7_30 = var_24_1;
                long double temp9_1 = 0f;
                x87_r7_30 - temp9_1;

                if (!(*(&((x87_r7_30 < temp9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_30, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r7_30 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_5011d2;

                long double x87_r7_31 = var_20_1;
                long double temp11_1 = 0f;
                x87_r7_31 - temp11_1;

                if (!(*(&((x87_r7_31 < temp11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_31, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r7_31 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_5011d2;
            }

            var_50 = i_10[0x46] * i_10[0x4b] - i_10[0x4c] * i_10[0x45];
            float var_1c_1 = var_50;
            float var_4c_2 = -((i_10[0x46] * i_10[0x4a] - i_10[0x4c] * *edx_2));
            var_48 = i_10[0x45] * i_10[0x4a] - *edx_2 * i_10[0x4b];
            var_38 = var_48 * var_24_1 - var_4c_2 * var_20_1;
            float var_10_1 = var_38;
            float var_34_4 = -((var_48 * var_28 - var_50 * var_20_1));
            float var_30_4 = var_4c_2 * var_28 - var_50 * var_24_1;
            long double x87_r7_56 = var_50;
            long double temp10_1 = 0f;
            x87_r7_56 - temp10_1;

            if (!(*(&((x87_r7_56 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_56, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_56 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_50130f:
                long double x87_r7_59 = var_50;
                long double x87_r6_39 = var_4c_2;
                long double x87_r5_9 = var_48;
                long double x87_r7_61 = 1.0
                    / sqrtl(x87_r5_9 * x87_r5_9 + x87_r6_39 * x87_r6_39 + x87_r7_59 * x87_r7_59);
                float var_1c_2 = var_50 * x87_r7_61;
                float var_18_2 = var_4c_2 * x87_r7_61;
                float var_14_2 = var_48 * x87_r7_61;
            }
            else
            {
                long double x87_r7_57 = var_4c_2;
                long double temp12_1 = 0f;
                x87_r7_57 - temp12_1;

                if (!(*(&((x87_r7_57 < temp12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_57, temp12_1) ? 1 : 0) << 0xa
                        | (x87_r7_57 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50130f;

                long double x87_r7_58 = var_48;
                long double temp14_1 = 0f;
                x87_r7_58 - temp14_1;

                if (!(*(&((x87_r7_58 < temp14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_58, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_58 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50130f;
            }

            long double x87_r7_63 = var_38;
            long double temp13_1 = 0f;
            x87_r7_63 - temp13_1;

            if (!(*(&((x87_r7_63 < temp13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_63, temp13_1) ? 1 : 0) << 0xa
                | (x87_r7_63 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_50138c:
                long double x87_r7_66 = var_30_4;
                long double x87_r6_47 = var_34_4;
                long double x87_r5_11 = var_38;
                long double x87_r7_68 = 1.0
                    / sqrtl(x87_r5_11 * x87_r5_11 + x87_r6_47 * x87_r6_47 + x87_r7_66 * x87_r7_66);
                float var_10_2 = var_38 * x87_r7_68;
                float var_c_2 = var_34_4 * x87_r7_68;
                float var_8_2 = var_30_4 * x87_r7_68;
            }
            else
            {
                long double x87_r7_64 = var_34_4;
                long double temp15_1 = 0f;
                x87_r7_64 - temp15_1;

                if (!(*(&((x87_r7_64 < temp15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_64, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r7_64 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50138c;

                long double x87_r7_65 = var_30_4;
                long double temp16_1 = 0f;
                x87_r7_65 - temp16_1;

                if (!(*(&((x87_r7_65 < temp16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_65, temp16_1) ? 1 : 0) << 0xa
                        | (x87_r7_65 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50138c;
            }

            memcpy(edx_2, &var_28, 0x28);
            var_28 = *edx_2;
            int32_t var_24_2 = i_10[0x47];
            float var_20_2 = i_10[0x4a];
            int32_t var_1c_3 = i_10[0x45];
            int32_t var_18_3 = i_10[0x48];
            int32_t var_14_3 = i_10[0x4b];
            int32_t var_10_3 = i_10[0x46];
            int32_t var_c_3 = i_10[0x49];
            int32_t var_8_3 = i_10[0x4c];
            i_10[0x4d] = 0;
            int32_t var_4_1 = 0;
            eax_1 = var_64;
            memcpy(edx_2, &var_28, 0x28);
            edi = a1;
            goto label_50145b;
        }

        ecx_19 = 1;
    }
    else
    {
    label_50145b:

        if (*(edi + 0x4e) || *(i_10 + 0x1a1))
            ecx_19 = 1;
        else
            ecx_19 = 0;
    }

    *(i_10 + 0x1a2) = ecx_19;
    int32_t ecx_20 = i_10[0x66];
    int32_t edx_3 = edi[9];
    int32_t esi_1 = ecx_20;

    if (ecx_20 >= edx_3)
        esi_1 = edx_3;

    if (esi_1 > 0x14)
        ecx_20 = 0x14;
    else if (ecx_20 >= edx_3)
        ecx_20 = edx_3;

    i_10[0x66] = ecx_20;

    if (edi[0x13] && eax_1)
    {
        void* ecx_22 = i_10[0x3c];

        if (ecx_22)
        {
            var_38 = *(i_10 + 0xf8) - *(eax_1 + 0xf8);
            float var_34_5 = *(i_10 + 0x100) - *(eax_1 + 0x100);
            long double x87_r7_75 = *(i_10 + 0x108) - *(eax_1 + 0x108);
            long double x87_r5_13 = var_34_5;
            long double x87_r4_18 = var_38;
            long double x87_r6_58 = (*(ecx_22 + 0x100) - *(ecx_22 + 0xfc))
                / sqrtl(x87_r4_18 * x87_r4_18 + x87_r5_13 * x87_r5_13 + x87_r7_75 * x87_r7_75);
            var_38 = var_38 * x87_r6_58;
            float var_34_6 = var_34_5 * x87_r6_58;
            *(i_10 + 0xf8) = var_38 + *(eax_1 + 0xf8);
            *(i_10 + 0x100) = var_34_6 + *(eax_1 + 0x100);
            *(i_10 + 0x108) = x87_r7_75 * x87_r6_58 + *(eax_1 + 0x108);
        }
    }

    int16_t eax_16;
    eax_16 = i_10[0x68];
    bool cond:1 = !eax_16;
    eax_16 = *(edi + 0x4d);

    if (cond:1)
    {
        if (eax_16)
        {
            long double x87_r7_79 = i_10[0x27];
            long double x87_r6_67 = i_10[0x28];
            x87_r6_67 - x87_r7_79;
            long double x87_r7_80;

            if (!(*(&((x87_r6_67 < x87_r7_79 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_67, x87_r7_79) ? 1 : 0) << 0xa
                    | (x87_r6_67 == x87_r7_79 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_80 = i_10[0x28];
            else
                x87_r7_80 = i_10[0x27];

            long double x87_r6_68 = i_10[0x26];
            x87_r6_68 - x87_r7_80;
            eax_16 = (x87_r6_68 < x87_r7_80 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_68, x87_r7_80) ? 1 : 0) << 0xa
                | (x87_r6_68 == x87_r7_80 ? 1 : 0) << 0xe | 0x3800;
            long double x87_r7_82;

            if (*(&eax_16 + 1) & 0x41)
            {
                long double x87_r7_83 = i_10[0x27];
                long double x87_r6_69 = i_10[0x28];
                x87_r6_69 - x87_r7_83;
                eax_16 = (x87_r6_69 < x87_r7_83 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_69, x87_r7_83) ? 1 : 0) << 0xa
                    | (x87_r6_69 == x87_r7_83 ? 1 : 0) << 0xe;

                if (!(*(&eax_16 + 1) & 1))
                    x87_r7_82 = i_10[0x28];
                else
                    x87_r7_82 = i_10[0x27];
            }
            else
                x87_r7_82 = i_10[0x26];

            long double x87_r7_85 = sub_4d0950(i_10[0x1b]) * x87_r7_82;
            sub_4c7140(g_a44344, i_10, &i_10[0x3e], x87_r7_85, 1);
            i_10[0x68] = 1;
        }
    }
    else if (!eax_16)
    {
        sub_4c7560(i_10[0x1a], i_10);
        i_10[0x68] = 0;
    }

    eax_16 = i_10[0x5e];
    float ecx_24 = memcpy(&i_10[0x1c], &i_10[0x44], 0x28);

    if (eax_16 != 0x2a && eax_16)
    {
        void* eax_20;
        eax_20 = sub_4cec10(&i_10[0x5e]);

        if (!eax_20)
        {
            char* edi_4 = &i_10[0x5e];
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond:4_1 = 0 != *edi_4;
                edi_4 = &edi_4[1];
                i -= 1;

                if (!cond:4_1)
                    break;
            }

            int32_t ecx_25 = ~i;
            int32_t esi_4;
            int32_t edi_6;
            edi_6 = memcpy(&var_38, edi_4 - ecx_25, ecx_25 & 0xfffffffc);
            memcpy(edi_6, esi_4, ecx_25 & 3);
            float* var_7c_3 = &var_38;
            int32_t eax_22;
            eax_22 = Game_DataSymbolLoad(&i_10[0x5e], "*%s");
        }
        else
            i_10[0x1b] = eax_20;
    }

    eax_16 = i_10[0x68];

    if (eax_16)
    {
        float var_7c_5 = sub_4d0950(i_10[0x1b]);
        ecx_24 = sub_4c6940(i_10[0x67], i_10, &i_10[0x3e], var_7c_5);
    }

    int32_t* eax_27;

    if (!var_64)
    {
        eax_27 = i_10[0x3c];

        if (eax_27)
        {
            ecx_24 = Menu_FormatScreen_3(eax_27);
            i_10[0x3c] = 0;
        }
    }
    else
    {
        float esi_5 = i_10[0x3c];
        char ecx_30 = *(i_10 + 0x1a2);

        if (esi_5)
        {
            char ecx_34;

            if (ecx_30 || *(i_10 + 0x1a1))
                ecx_34 = 1;
            else
                ecx_34 = 0;

            int32_t var_80_6 = a1[8];
            int32_t edx_15 = i_10[0x66];
            int32_t var_84_5 = edx_15;
            edx_15 = i_10[0x69];
            ecx_24 = sub_4e4530(esi_5, var_64 + 0xf8, &i_10[0x3e], var_64 + 0x110, &i_10[0x44],
                ecx_34, edx_15, var_84_5, &i_10[0x62]);
        }
        else
        {
            char ecx_31;

            if (ecx_30 || *(i_10 + 0x1a1))
                ecx_31 = 1;
            else
                ecx_31 = 0;

            int32_t edx_10 = i_10[0x66];
            int32_t var_84_4 = edx_10;
            edx_10 = i_10[0x69];
            eax_27 = sub_4e43d0(i_10, i_10[0x67], var_64 + 0xf8, &i_10[0x3e], var_64 + 0x110,
                &i_10[0x44], ecx_31, edx_10, var_84_4, a1[8], &i_10[0x62]);
            i_10[0x3c] = eax_27;
        }
    }
    int32_t* i_5 = i_9;

    if (i_5)
    {
        ecx_24 = i_5[0x3c];

        if (ecx_24)
        {
            char eax_30;

            if (*(i_5 + 0x1a2) || *(i_5 + 0x1a1))
                eax_30 = 1;
            else
                eax_30 = 0;

            int32_t var_80_7 = a1[8];
            int32_t edx_20 = i_5[0x66];
            int32_t var_84_6 = edx_20;
            edx_20 = i_5[0x69];
            ecx_24 = sub_4e4530(ecx_24, &i_10[0x3e], &i_5[0x3e], &i_10[0x44], &i_5[0x44], eax_30,
                edx_20, var_84_6, &i_5[0x62]);
        }
    }

    char eax_34 = *(i_10 + 0x1a1);

    if (eax_34)
    {
    label_501862:
        int32_t ebx_3 = 0;
        int32_t var_60_2 = 0;
        int32_t* i_8;
        int32_t* i_6;

        if (!eax_34)
        {
            i_6 = i_5;
            i_8 = i_6;
        }
        else
        {
            i_6 = i_10;
            i_5 = i_10;
            i_8 = i_6;
        }

        ecx_24 = g_a7a620;
        int32_t* i_7 = i_5;
        void* i_1 = QTask_AllocateEvent_2(i_6, ecx_24);

        if (*(i_6 + 0x1a1))
        {
            while (i_1)
            {
                i_6 = i_1;
                i_1 = QTask_AllocateEvent_2(i_1, g_a7a620);
                ebx_3 += 1;

                if (!*(i_6 + 0x1a1))
                    break;
            }

            var_60_2 = ebx_3;
            i_8 = i_6;
        }

        i_1 = g_a7a620;
        int32_t* i_2;
        i_2 = QTask_TriggerEvent_2(i_5, i_1);

        if (i_2)
        {
            do
            {
                ecx_24 = *(i_2 + 0x1a1);

                if (!ecx_24)
                    break;

                ecx_24 = g_a7a620;
                i_5 = i_2;
                i_2 = QTask_TriggerEvent_2(i_2, ecx_24);
                ebx_3 += 1;
            } while (i_2);

            var_60_2 = ebx_3;
            i_7 = i_5;
        }

        if (i_6 != i_5)
        {
            int32_t* i_3 = QTask_TriggerEvent_2(i_8, g_a7a620);
            int32_t* i_11 = i_7;
            float var_34_7 = *(i_11 + 0x100) - *(i_8 + 0x100);
            float var_30_5 = *(i_11 + 0x108) - *(i_8 + 0x108);
            long double x87_r6_75 = 1f / var_60_2;
            float var_60_3 = x87_r6_75;
            var_38 = x87_r6_75 * (*(i_11 + 0xf8) - *(i_8 + 0xf8));
            float var_34_8 = var_60_3 * var_34_7;
            float var_30_6 = var_60_3 * var_30_5;
            float var_58;
            float var_54;
            sub_4b2d00(&var_38, &var_54, &var_58);
            sub_4b38e0(&var_28, 0f, var_54, var_58);
            int32_t* i_12 = i_8;
            memcpy(&var_50, &i_8[0x3e], 0x18);
            memcpy(&i_12[0x44], &var_28, 0x28);
            memcpy(&i_12[0x1c], &var_28, 0x28);

            if (i_12[0x3c])
            {
                i_12 = g_a7a620;
                void* eax_37 = QTask_AllocateEvent_2(i_8, i_12);
                char edi_10;

                if (*(i_8 + 0x1a2) || *(i_8 + 0x1a1))
                    edi_10 = 1;
                else
                    edi_10 = 0;

                int32_t ecx_47 = a1[8];
                int32_t var_80_14 = ecx_47;
                ecx_47 = i_8[0x69];
                sub_4e4530(i_8[0x3c], eax_37 + 0xf8, &i_8[0x3e], eax_37 + 0x110, &i_8[0x44],
                    edi_10, ecx_47, i_8[0x66], &i_8[0x62]);
            }

            for (; i_3 != i_7; i_3 = QTask_TriggerEvent_2(i_3, g_a7a620))
            {
                char eax_40 = i_3[0x68];
                memcpy(&i_3[0x44], &var_28, 0x28);
                var_50 = var_38 + var_50;
                var_48 = var_34_8 + var_48;
                double var_40 = var_30_6 + var_40;
                memcpy(&i_3[0x3e], &var_50, 0x18);
                memcpy(&i_3[0x1c], &var_28, 0x28);

                if (eax_40)
                {
                    float var_7c_18 = sub_4d0950(i_3[0x1b]);
                    sub_4c6940(i_3[0x67], i_3, &i_3[0x3e], var_7c_18);
                }

                int32_t eax_42 = i_3[0x3c];

                if (eax_42)
                {
                    eax_42 = g_a7a620;
                    void* eax_43 = QTask_AllocateEvent_2(i_3, eax_42);
                    char esi_8;

                    if (*(i_3 + 0x1a2) || *(i_3 + 0x1a1))
                        esi_8 = 1;
                    else
                        esi_8 = 0;

                    int32_t ecx_55 = a1[8];
                    int32_t var_80_17 = ecx_55;
                    ecx_55 = i_3[0x69];
                    sub_4e4530(i_3[0x3c], eax_43 + 0xf8, &i_3[0x3e], eax_43 + 0x110, &i_3[0x44],
                        esi_8, ecx_55, i_3[0x66], &i_3[0x62]);
                }
            }

            int32_t* i_13 = i_7;
            int32_t eax_47 = i_13[0x3c];
            memcpy(&i_13[0x44], &var_28, 0x28);
            memcpy(&i_13[0x1c], &var_28, 0x28);

            if (eax_47)
            {
                void* eax_48 = QTask_AllocateEvent_2(i_13, g_a7a620);
                char esi_9;

                if (*(i_13 + 0x1a2) || *(i_13 + 0x1a1))
                    esi_9 = 1;
                else
                    esi_9 = 0;

                int32_t ecx_62 = a1[8];
                int32_t var_80_20 = ecx_62;
                ecx_62 = i_13[0x69];
                sub_4e4530(i_13[0x3c], eax_48 + 0xf8, &i_11[0x3e], eax_48 + 0x110, &i_13[0x44],
                    esi_9, ecx_62, i_13[0x66], &i_13[0x62]);
            }

            int32_t* eax_51;
            eax_51 = QTask_TriggerEvent_2(i_13, g_a7a620);

            if (eax_51)
            {
                float esi_10 = eax_51[0x3c];

                if (esi_10)
                {
                    char ecx_65;

                    if (*(eax_51 + 0x1a2) || *(eax_51 + 0x1a1))
                        ecx_65 = 1;
                    else
                        ecx_65 = 0;

                    int32_t var_80_22 = a1[8];
                    int32_t edx_38 = eax_51[0x66];
                    int32_t var_84_12 = edx_38;
                    edx_38 = eax_51[0x69];
                    ecx_24 = sub_4e4530(esi_10, &i_11[0x3e], &eax_51[0x3e], &i_13[0x44],
                        &eax_51[0x44], ecx_65, edx_38, var_84_12, &eax_51[0x62]);
                }
            }
        }
    }
    else if (i_5)
    {
        ecx_24 = *(i_5 + 0x1a1);

        if (ecx_24)
            goto label_501862;
    }

    ecx_24 = g_a7a620;
    int32_t* eax_54 = QTask_DeleteTask_2(a1, ecx_24);
    a1[0xa] = 0;

    if (eax_54)
    {
        void* ecx_67;

        for (int32_t* i_4 = QTask_TriggerEvent_2(eax_54, g_a7a620); i_4;
            i_4 = QTask_TriggerEvent_2(i_4, ecx_67))
        {
            ecx_67 = i_4[0x3c];

            if (ecx_67)
                a1[0xa] = *(ecx_67 + 0xf8) + a1[0xa];

            ecx_67 = g_a7a620;
        }
    }

    void* eax_55 = i_10[0x3c];

    if (eax_55)
    {
        *(eax_55 + 0xa8) = a1[0x14];
        *(eax_55 + 0xac) = a1[0x15];
        *(eax_55 + 0xb0) = a1[0x16];
        int32_t* eax_58 = i_10[0x3c] + 0xb4;
        *eax_58 = a1[0x17];
        eax_58[1] = a1[0x18];
        eax_58[2] = a1[0x19];
    }

    return sub_501d70(i_10);
}
