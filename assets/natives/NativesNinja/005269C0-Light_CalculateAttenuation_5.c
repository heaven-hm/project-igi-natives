#include "005269C0-Light_CalculateAttenuation_5.h"
/* 0x005269c0 Light_CalculateAttenuation_5 full linked: callers=1 callees=14 */
int32_t* sub_5269c0(float a1)

{
    float esi = a1;
    sub_4ce3d0(*(esi + 0x20));
    int32_t* var_64_1;
    int32_t* var_60_1;
    int32_t* var_5c_3;
    char var_58_5;
    char var_54_7;
    int32_t* eax_14;
    int32_t* ecx_4;
    int32_t* edx_5;
    int32_t edi_7;
    int32_t* edi_9;

    if (!QTask_DeleteTask_2(esi, g_a83d4c))
    {
        edx_5 = *(esi + 0x48);
        eax_14 = esi + 0x30;
        ecx_4 = esi + 0x3c;
        edi_9 = esi + 0x24;
        *eax_14 = 0;
        __builtin_memset(esi + 0x34, 0, 0x14);
        *edi_9 = 0;
        *(esi + 0x28) = 0;
        *(esi + 0x2c) = 0x3f800000;

        if (edx_5)
        {
        label_526e79:
            *edx_5 = *edi_9;
            edx_5[1] = edi_9[1];
            edi_7 = edi_9[2];
        label_526e84:
            edx_5[2] = edi_7;
            int32_t* edx_21 = *(esi + 0x48) + 0xc;
            *edx_21 = *eax_14;
            edx_21[1] = eax_14[1];
            edx_21[2] = eax_14[2];
            int32_t* edx_23 = *(esi + 0x48) + 0x18;
            *edx_23 = *ecx_4;
            edx_23[1] = ecx_4[1];
            edx_23[2] = ecx_4[2];
        label_526eb9:
            *(*(esi + 0x48) + 0x24) = *(esi + 0x4c);
            *(*(esi + 0x48) + 0x25) = *(esi + 0x4d);
            return sub_4cea30(*(esi + 0x20));
        }

        edx_5 = *(esi + 0x4d);
        var_54_7 = edx_5;
        edx_5 = *(esi + 0x4c);
        var_58_5 = edx_5;
        var_5c_3 = ecx_4;
        var_60_1 = eax_14;
        var_64_1 = edi_9;
    }
    else
    {
        long double x87_r7_1 = *(esi + 0x58);
        long double temp0_1 = *(esi + 0x54);
        x87_r7_1 - temp0_1;

        if (*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            int32_t* eax_19 = QTask_DeleteTask_2(esi, g_a83d4c);
            *(esi + 0x30) = eax_19[0xd];
            *(esi + 0x34) = eax_19[0xe];
            *(esi + 0x38) = eax_19[0xf];
            int32_t* eax_20 = &eax_19[0xa];
            *(esi + 0x3c) = eax_19[0x10];
            *(esi + 0x40) = eax_19[0x11];
            *(esi + 0x44) = eax_19[0x12];
            *(esi + 0x24) = *eax_20;
            *(esi + 0x28) = eax_20[1];
            *(esi + 0x2c) = eax_20[2];
            int32_t* edi_14 = *(esi + 0x48);

            if (edi_14)
            {
                *edi_14 = *eax_20;
                edi_14[1] = eax_20[1];
                edi_14[2] = eax_20[2];
                int32_t* eax_23 = *(esi + 0x48) + 0xc;
                *eax_23 = *(esi + 0x30);
                eax_23[1] = *(esi + 0x34);
                eax_23[2] = *(esi + 0x38);
                int32_t* eax_25 = *(esi + 0x48) + 0x18;
                *eax_25 = *(esi + 0x3c);
                eax_25[1] = *(esi + 0x40);
                eax_25[2] = *(esi + 0x44);
                *(*(esi + 0x48) + 0x24) = *(esi + 0x4c);
                *(*(esi + 0x48) + 0x25) = *(esi + 0x4d);
                return sub_4cea30(*(esi + 0x20));
            }

            eax_20 = *(esi + 0x4d);
            var_54_7 = eax_20;
            eax_20 = *(esi + 0x4c);
            var_58_5 = eax_20;
            var_5c_3 = esi + 0x3c;
            var_60_1 = esi + 0x30;
            var_64_1 = esi + 0x24;
        }
        else
        {
            int32_t* i_4 = nullptr;
            int32_t* i_3 = nullptr;
            int32_t* i_2 = QTask_DeleteTask_2(esi, g_a83d4c);
            int32_t* i = i_2;

            if (i)
            {
                do
                {
                    long double x87_r7_2 = i[0x14];
                    long double temp1_1 = *(esi + 0x5c);
                    x87_r7_2 - temp1_1;
                    i_2 = (x87_r7_2 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe;

                    if (*(&i_2 + 1) & 0x40)
                    {
                        i_4 = i;
                        i_3 = i;
                        break;
                    }

                    long double x87_r7_3 = i[0x14];
                    long double temp2_1 = *(esi + 0x5c);
                    x87_r7_3 - temp2_1;
                    i_2 = (x87_r7_3 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe;

                    if (*(&i_2 + 1) & 1)
                    {
                        if (i_4)
                        {
                            long double x87_r7_4 = i[0x14];
                            long double temp4_1 = i_4[0x14];
                            x87_r7_4 - temp4_1;
                            i_2 = (x87_r7_4 < temp4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_4, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_4 == temp4_1 ? 1 : 0) << 0xe;
                        }

                        if (!i_4 || !(*(&i_2 + 1) & 0x41))
                            i_4 = i;
                    }

                    long double x87_r7_5 = i[0x14];
                    long double temp3_1 = *(esi + 0x5c);
                    x87_r7_5 - temp3_1;
                    i_2 = (x87_r7_5 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe;

                    if (!(*(&i_2 + 1) & 0x41))
                    {
                        if (i_3)
                        {
                            long double x87_r7_6 = i[0x14];
                            long double temp5_1 = i_3[0x14];
                            x87_r7_6 - temp5_1;
                            i_2 = (x87_r7_6 < temp5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_6, temp5_1) ? 1 : 0) << 0xa
                                | (x87_r7_6 == temp5_1 ? 1 : 0) << 0xe;
                        }

                        if (!i_3 || *(&i_2 + 1) & 1)
                            i_3 = i;
                    }

                    i_2 = g_a83d4c;
                    i_2 = QTask_TriggerEvent_2(i, i_2);
                    i = i_2;
                } while (i);

                if (!i_4)
                    goto label_526a86;

                long double x87_r7_7;
                long double temp6_1;

                if (i_3 && i_4 != i_3)
                {
                    x87_r7_7 = i_4[0x14];
                    temp6_1 = i_3[0x14];
                    x87_r7_7 - temp6_1;
                }

                if (!i_3 || i_4 == i_3 || *(&((x87_r7_7 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    eax_14 = esi + 0x30;
                    *eax_14 = i_4[0xd];
                    eax_14[1] = i_4[0xe];
                    eax_14[2] = i_4[0xf];
                    ecx_4 = esi + 0x3c;
                    edi_9 = &i_4[0xa];
                    *ecx_4 = i_4[0x10];
                    ecx_4[1] = i_4[0x11];
                    ecx_4[2] = i_4[0x12];
                    *(esi + 0x24) = *edi_9;
                    *(esi + 0x28) = edi_9[1];
                    *(esi + 0x2c) = edi_9[2];
                    edx_5 = *(esi + 0x48);

                    if (edx_5)
                        goto label_526e79;

                    goto label_526d3b;
                }

                int32_t* i_1 = i;
                a1 = (*(esi + 0x5c) - i_4[0x14]) / (i_3[0x14] - i_4[0x14]);
                *(esi + 0x30) = (i_3[0xd] - i_4[0xd]) * a1 + i_4[0xd];
                *(esi + 0x34) = (i_3[0xe] - i_4[0xe]) * a1 + i_4[0xe];
                *(esi + 0x38) = (i_3[0xf] - i_4[0xf]) * a1 + i_4[0xf];
                *(esi + 0x3c) = (i_3[0x10] - i_4[0x10]) * a1 + i_4[0x10];
                *(esi + 0x40) = (i_3[0x11] - i_4[0x11]) * a1 + i_4[0x11];
                *(esi + 0x44) = (i_3[0x12] - i_4[0x12]) * a1 + i_4[0x12];
                long double st0_1 =
                    sub_4b2760(i_3[0xa] * i_4[0xa] + i_4[0xb] * i_3[0xb] + i_4[0xc] * i_3[0xc]);
                float var_3c_1 = -((i_3[0xc] * i_4[0xa] - i_3[0xa] * i_4[0xc]));
                long double x87_r7_47 = i_3[0xb] * i_4[0xa];
                long double x87_r6_12 = i_3[0xa] * i_4[0xb];
                float var_34 = i_3[0xc] * i_4[0xb] - i_4[0xc] * i_3[0xb];
                float var_30_1 = var_3c_1;
                float var_2c_1 = x87_r7_47 - x87_r6_12;
                float var_28;
                sub_4b3ef0(&var_28, &var_34, st0_1 * a1);
                float var_24;
                float var_20;
                float edx_7 = var_20 * i_4[0xc] + var_24 * i_4[0xb] + var_28 * i_4[0xa];
                float var_1c;
                float var_18;
                float var_14;
                float var_3c_2 = var_14 * i_4[0xc] + var_18 * i_4[0xb] + var_1c * i_4[0xa];
                float var_c;
                float var_8;
                long double x87_r0_13 = var_8 * i_4[0xc] + var_c * i_4[0xb];
                float var_10;
                long double x87_r7_60 = var_10 * i_4[0xa];
                *(esi + 0x24) = edx_7;
                *(esi + 0x28) = var_3c_2;
                float var_38_2 = x87_r0_13 + x87_r7_60;
                *(esi + 0x2c) = var_38_2;
                float* eax_6 = *(esi + 0x48);

                if (!eax_6)
                {
                    edx_7 = *(esi + 0x4d);
                    eax_6 = *(esi + 0x4c);
                    *(esi + 0x48) = sub_4daa60(esi + 0x24, esi + 0x30, esi + 0x3c, eax_6, edx_7);
                    return sub_4cea30(*(esi + 0x20));
                }

                *eax_6 = edx_7;
                eax_6[1] = var_3c_2;
                eax_6[2] = var_38_2;
                float* ecx_8 = *(esi + 0x48) + 0xc;
                *ecx_8 = *(esi + 0x30);
                ecx_8[1] = *(esi + 0x34);
                ecx_8[2] = *(esi + 0x38);
                int32_t* eax_13 = *(esi + 0x48) + 0x18;
                *eax_13 = *(esi + 0x3c);
                eax_13[1] = *(esi + 0x40);
                eax_13[2] = *(esi + 0x44);
                goto label_526eb9;
            }

        label_526a86:
            eax_14 = esi + 0x30;
            *eax_14 = i_3[0xd];
            eax_14[1] = i_3[0xe];
            eax_14[2] = i_3[0xf];
            ecx_4 = esi + 0x3c;
            *ecx_4 = i_3[0x10];
            ecx_4[1] = i_3[0x11];
            ecx_4[2] = i_3[0x12];
            *(esi + 0x24) = i_3[0xa];
            *(esi + 0x28) = i_3[0xb];
            *(esi + 0x2c) = i_3[0xc];
            edx_5 = *(esi + 0x48);

            if (edx_5)
            {
                *edx_5 = i_3[0xa];
                edx_5[1] = i_3[0xb];
                edi_7 = i_3[0xc];
                goto label_526e84;
            }

        label_526d3b:
            edx_5 = *(esi + 0x4d);
            var_54_7 = edx_5;
            edx_5 = *(esi + 0x4c);
            var_58_5 = edx_5;
            var_5c_3 = ecx_4;
            var_60_1 = eax_14;
            var_64_1 = esi + 0x24;
        }
    }
    *(esi + 0x48) = sub_4daa60(var_64_1, var_60_1, var_5c_3, var_58_5, var_54_7);
    return sub_4cea30(*(esi + 0x20));
}
