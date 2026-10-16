#include "00502740-SplineObj_Setup.h"
/* 0x00502740 SplineObj_Setup full linked: callers=0 callees=9 */
int32_t sub_502740(void* a1, char* a2)

{
    char* esi = a2;
    int32_t edx;
    void* edi;

    if (!esi || !*esi)
        edi = a1;
    else
    {
        edi = a1;
        *(edi + 0x38) = *(edi + 0x2c);
        edx = *(edi + 0x30);
        *(edi + 0x3c) = edx;
        *(edi + 0x40) = *(edi + 0x34);
        *(edi + 0x48) = *(edi + 0x44);
    }

    long double x87_r7 = *(edi + 0x44);
    float var_90 = x87_r7;
    long double temp1 = *(edi + 0x48);
    x87_r7 - temp1;
    float var_8c;
    float var_88;
    float var_84;
    float var_80;
    float var_7c;
    float var_78;
    float var_74;
    float var_70;
    float var_6c;

    if (!(*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        edx = g_a7a620;
        int32_t* eax_3;
        int32_t ecx_3;
        eax_3 = QTask_DeleteTask_2(edi, edx);
        int32_t* ebx_1 = eax_3;

        if (ebx_1)
        {
            int32_t var_bc_2 = ecx_3;
            double* esi_1 = &ebx_1[0x3e];
            double* var_90_1 = esi_1;
            float var_64;
            sub_4b3be0(&var_64, *(edi + 0x44) - *(edi + 0x48));

            while (true)
            {
                long double x87_r7_4 = *(ebx_1 + 0xf8) - *esi_1;
                long double x87_r6_2 = *(ebx_1 + 0x100) - esi_1[1];
                long double x87_r5_2 = *(ebx_1 + 0x108) - esi_1[2];
                float var_58;
                float var_54;
                float var_50;
                float var_10_1 = var_50 * x87_r5_2 + var_54 * x87_r6_2 + var_58 * x87_r7_4;
                float var_60;
                float var_5c;
                *(ebx_1 + 0xf8) =
                    var_5c * x87_r5_2 + var_60 * x87_r6_2 + var_64 * x87_r7_4 + *esi_1;
                *(ebx_1 + 0x100) = var_10_1 + esi_1[1];
                float var_4c;
                float var_48;
                float var_44;
                *(ebx_1 + 0x108) =
                    var_44 * x87_r5_2 + var_48 * x87_r6_2 + var_4c * x87_r7_4 + esi_1[2];
                float var_3c = var_64 * ebx_1[0x44] + var_4c * ebx_1[0x46] + var_58 * ebx_1[0x45];
                float var_38_1 = var_60 * ebx_1[0x44] + var_48 * ebx_1[0x46] + var_54 * ebx_1[0x45];
                float var_34_1 = var_5c * ebx_1[0x44] + var_44 * ebx_1[0x46] + var_50 * ebx_1[0x45];
                int32_t var_40;
                float eax_4 = ebx_1[0x4d] + var_40 + 1;
                float var_18_1 = eax_4;
                float var_30_1 = var_64 * ebx_1[0x47] + var_4c * ebx_1[0x49] + var_58 * ebx_1[0x48];
                float var_2c_1 = var_60 * ebx_1[0x47] + var_48 * ebx_1[0x49] + var_54 * ebx_1[0x48];
                float var_28_1 = var_5c * ebx_1[0x47] + var_44 * ebx_1[0x49] + var_50 * ebx_1[0x48];
                float var_24_1 = var_4c * ebx_1[0x4c] + var_58 * ebx_1[0x4b] + var_64 * ebx_1[0x4a];
                float var_20_1 = var_48 * ebx_1[0x4c] + var_54 * ebx_1[0x4b] + var_60 * ebx_1[0x4a];
                float var_1c_1 = var_44 * ebx_1[0x4c] + var_50 * ebx_1[0x4b] + var_5c * ebx_1[0x4a];
                memcpy(&ebx_1[0x44], &var_3c, 0x28);

                if (eax_4 > 0x3e8)
                {
                    long double x87_r7_43 = var_3c;
                    long double temp5_1 = 0f;
                    x87_r7_43 - temp5_1;
                    var_8c = var_3c;
                    var_88 = var_38_1;
                    var_84 = var_34_1;

                    if (!(*(&((x87_r7_43 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_43, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_43 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_502a58:
                        long double x87_r7_46 = var_34_1;
                        long double x87_r6_44 = var_38_1;
                        long double x87_r5_4 = var_3c;
                        long double x87_r7_48 = 1.0 / sqrtl(x87_r5_4 * x87_r5_4
                            + x87_r6_44 * x87_r6_44 + x87_r7_46 * x87_r7_46);
                        var_8c = var_3c * x87_r7_48;
                        var_88 = var_88 * x87_r7_48;
                        var_84 = var_84 * x87_r7_48;
                    }
                    else
                    {
                        long double x87_r7_44 = var_38_1;
                        long double temp6_1 = 0f;
                        x87_r7_44 - temp6_1;

                        if (!(*(&((x87_r7_44 < temp6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_44, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r7_44 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_502a58;

                        long double x87_r7_45 = var_34_1;
                        long double temp8_1 = 0f;
                        x87_r7_45 - temp8_1;

                        if (!(*(&((x87_r7_45 < temp8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_45, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r7_45 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_502a58;
                    }

                    float var_9c_1 = var_20_1 * var_34_1 - var_1c_1 * var_38_1;
                    var_80 = var_9c_1;
                    float var_98_1 = -((var_24_1 * var_34_1 - var_1c_1 * var_3c));
                    var_7c = var_98_1;
                    float var_94_1 = var_24_1 * var_38_1 - var_20_1 * var_3c;
                    var_78 = var_94_1;
                    float var_a8_1 = var_94_1 * var_88 - var_98_1 * var_84;
                    eax_4 = var_a8_1;
                    var_74 = eax_4;
                    float var_a4_1 = -((var_94_1 * var_8c - var_9c_1 * var_84));
                    var_70 = var_a4_1;
                    float var_a0_1 = var_98_1 * var_8c - var_9c_1 * var_88;
                    long double x87_r7_70 = var_9c_1;
                    long double temp7_1 = 0f;
                    x87_r7_70 - temp7_1;
                    var_6c = var_a0_1;
                    eax_4 = (x87_r7_70 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_70, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_70 == temp7_1 ? 1 : 0) << 0xe;

                    if (!(*(&eax_4 + 1) & 0x40))
                    {
                    label_502bb1:
                        long double x87_r7_73 = var_9c_1;
                        long double x87_r6_64 = var_98_1;
                        long double x87_r5_6 = var_94_1;
                        long double x87_r7_75 = 1.0 / sqrtl(x87_r5_6 * x87_r5_6
                            + x87_r6_64 * x87_r6_64 + x87_r7_73 * x87_r7_73);
                        var_80 = var_9c_1 * x87_r7_75;
                        var_7c = var_7c * x87_r7_75;
                        var_78 = var_78 * x87_r7_75;
                    }
                    else
                    {
                        long double x87_r7_71 = var_98_1;
                        long double temp9_1 = 0f;
                        x87_r7_71 - temp9_1;
                        eax_4 = (x87_r7_71 < temp9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_71, temp9_1) ? 1 : 0) << 0xa
                            | (x87_r7_71 == temp9_1 ? 1 : 0) << 0xe;

                        if (!(*(&eax_4 + 1) & 0x40))
                            goto label_502bb1;

                        long double x87_r7_72 = var_94_1;
                        long double temp12_1 = 0f;
                        x87_r7_72 - temp12_1;
                        eax_4 = (x87_r7_72 < temp12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_72, temp12_1) ? 1 : 0) << 0xa
                            | (x87_r7_72 == temp12_1 ? 1 : 0) << 0xe;

                        if (!(*(&eax_4 + 1) & 0x40))
                            goto label_502bb1;
                    }

                    long double x87_r7_77 = var_a8_1;
                    long double temp11_1 = 0f;
                    x87_r7_77 - temp11_1;
                    eax_4 = (x87_r7_77 < temp11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_77, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r7_77 == temp11_1 ? 1 : 0) << 0xe;

                    if (!(*(&eax_4 + 1) & 0x40))
                    {
                    label_502c2e:
                        long double x87_r7_80 = var_a0_1;
                        long double x87_r6_72 = var_a4_1;
                        long double x87_r5_8 = var_a8_1;
                        long double x87_r7_86 = 1.0 / sqrtl(x87_r7_80 * x87_r7_80
                            + x87_r5_8 * x87_r5_8 + x87_r6_72 * x87_r6_72);
                        var_74 = var_a8_1 * x87_r7_86;
                        var_70 = var_70 * x87_r7_86;
                        var_6c = var_6c * x87_r7_86;
                    }
                    else
                    {
                        long double x87_r7_78 = var_a4_1;
                        long double temp13_1 = 0f;
                        x87_r7_78 - temp13_1;
                        eax_4 = (x87_r7_78 < temp13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_78, temp13_1) ? 1 : 0) << 0xa
                            | (x87_r7_78 == temp13_1 ? 1 : 0) << 0xe;

                        if (!(*(&eax_4 + 1) & 0x40))
                            goto label_502c2e;

                        long double x87_r7_79 = var_a0_1;
                        long double temp14_1 = 0f;
                        x87_r7_79 - temp14_1;
                        eax_4 = (x87_r7_79 < temp14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_79, temp14_1) ? 1 : 0) << 0xa
                            | (x87_r7_79 == temp14_1 ? 1 : 0) << 0xe;

                        if (!(*(&eax_4 + 1) & 0x40))
                            goto label_502c2e;
                    }

                    memcpy(&var_3c, &var_8c, 0x28);
                    int32_t var_18_2 = 0;
                }

                eax_4 = g_a7a620;
                ebx_1 = QTask_TriggerEvent_2(ebx_1, eax_4);

                if (!ebx_1)
                    break;

                esi_1 = var_90_1;
            }

            edi = a1;
            esi = a2;
        }

        long double x87_r7_88 = *(edi + 0x44);
        var_90 = x87_r7_88;
        *(edi + 0x48) = x87_r7_88;
    }

    long double x87_r7_89 = *(edi + 0x2c);
    long double temp2 = *(edi + 0x38);
    x87_r7_89 - temp2;

    if (!(*(&((x87_r7_89 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_89, temp2) ? 1 : 0) << 0xa
        | (x87_r7_89 == temp2 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_502cf9:
        float var_a8_2 = *(edi + 0x2c) - *(edi + 0x38);
        float var_a4_2 = *(edi + 0x30) - *(edi + 0x3c);
        float var_a0_2 = *(edi + 0x34) - *(edi + 0x40);
        sub_4b3be0(&var_8c, var_90);
        float var_9c_2 = var_84 * var_a0_2 + var_88 * var_a4_2 + var_8c * var_a8_2;

        for (int32_t* i = QTask_DeleteTask_2(edi, g_a7a620); i;
            i = QTask_TriggerEvent_2(i, g_a7a620))
        {
            *(i + 0xf8) = var_9c_2 + *(i + 0xf8);
            *(i + 0x100) = var_78 * var_a0_2 + var_7c * var_a4_2 + var_80 * var_a8_2 + *(i + 0x100);
            *(i + 0x108) = var_6c * var_a0_2 + var_70 * var_a4_2 + var_74 * var_a8_2 + *(i + 0x108);
        }

        int32_t eax_9 = *(edi + 0x30);
        int32_t ecx_10 = *(edi + 0x34);
        *(edi + 0x38) = *(edi + 0x2c);
        *(edi + 0x3c) = eax_9;
        *(edi + 0x40) = ecx_10;
    }
    else
    {
        long double x87_r7_90 = *(edi + 0x30);
        long double temp3_1 = *(edi + 0x3c);
        x87_r7_90 - temp3_1;

        if (!(*(&((x87_r7_90 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_90, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_90 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_502cf9;

        long double x87_r7_91 = *(edi + 0x34);
        long double temp4_1 = *(edi + 0x40);
        x87_r7_91 - temp4_1;

        if (!(*(&((x87_r7_91 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_91, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_91 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_502cf9;
    }

    int32_t result = *(edi + 0x20);

    if (result < 0)
        *(edi + 0x20) = 0;

    if (!esi || !*esi)
    {
        int32_t* i_1 = *(edi + 8);

        if (*i_1 && i_1)
        {
            int32_t ecx_11 = g_afa7e0;

            do
            {
                int32_t* edx_7 = *i_1;
                void* eax_13;

                if (!edx_7)
                    eax_13 = nullptr;
                else
                {
                    int32_t eax_10 = *edx_7;
                    int32_t eax_11 = -(eax_10);
                    eax_13 = (eax_11 - eax_11) & edx_7;
                }

                *((ecx_11 << 2) + &g_afa6e0) = eax_13;
                g_afa7e0 = ecx_11 + 1;
                uint32_t eax_15 = sub_4f1a70();
                int32_t eax_16 = 0;
                eax_16 = i_1[7];
                result = *(((eax_15 * 0x180 + eax_16) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1, esi);

                ecx_11 = g_afa7e0 - 1;
                g_afa7e0 = ecx_11;
                i_1 = *((ecx_11 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
