#include "004FD660-Particle2DDynCubeObjTask_LoadParameters.h"
/* 0x004fd660 Particle2DDynCubeObjTask_LoadParameters full linked: callers=0 callees=16 */
void* sub_4fd660(int32_t* a1)

{
    void* result = a1[0x3c];
    int32_t esi = 0;
    int32_t edi = 0;

    if (!result)
    {
        result = *(a1 + 0xfd);

        if (result)
            return QTask_FindType(a1);
    }
    else
    {
        result = a1[0x3f];
        int32_t var_94 = 0xffffffff;
        int32_t var_90_1 = 0x7fefffff;
        int32_t var_8c_1 = 0xffffffff;
        int32_t var_88_1 = 0x7fefffff;
        int32_t var_84_1 = 0xffffffff;
        int32_t var_80_1 = 0x7fefffff;
        int32_t var_ac = 0xffffffff;
        int32_t var_a8_1 = 0xffefffff;
        int32_t var_a4_1 = 0xffffffff;
        int32_t var_a0_1 = 0xffefffff;
        int32_t var_9c_1 = 0xffffffff;
        int32_t var_98_1 = 0xffefffff;

        if (result)
        {
            result = a1[0x20];
            esi = *(*(result + 0xc) + 4) - 1;
        }

        int32_t edx_1;

        do
        {
            edx_1 = a1[0x1b];
            double* ecx_2 = *(edx_1 + (edi << 2));
            ecx_2[3] = ecx_2[3] + a1[0x31];
            *(ecx_2 + 0x1c) = a1[0x32] + *(ecx_2 + 0x1c);
            ecx_2[4] = a1[0x33] + ecx_2[4];
            *ecx_2 = ecx_2[3] + *ecx_2;
            ecx_2[1] = *(ecx_2 + 0x1c) + ecx_2[1];
            ecx_2[2] = ecx_2[4] + ecx_2[2];
            ecx_2[7] = *(ecx_2 + 0x2c) + ecx_2[7];
            *(ecx_2 + 0x3c) = a1[0x39] + *(ecx_2 + 0x3c);

            if (esi)
            {
                *(ecx_2 + 0x2a) += 1;
                edx_1 = a1[0x3d];
                result = *(ecx_2 + 0x2a);

                if (result >= edx_1)
                {
                    result = ecx_2[5];
                    *(ecx_2 + 0x2a) = 0;
                    edx_1 = result;

                    if (edx_1 < esi)
                    {
                        result += 1;
                        ecx_2[5] = result;
                    }
                }
            }

            result = *(ecx_2 + 0x26);

            if (!result)
            {
                long double x87_r7_49 = ecx_2[6] - *(ecx_2 + 0x34);
                ecx_2[6] = x87_r7_49;
                long double temp0_1 = 0f;
                x87_r7_49 - temp0_1;
                long double x87_r7_50;
                long double temp1_1;

                if (!(*(&((x87_r7_49 < temp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_49, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_49 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    x87_r7_50 = *(ecx_2 + 0x3c);
                    temp1_1 = 0f;
                    x87_r7_50 - temp1_1;
                }

                if (!(*(&((x87_r7_49 < temp0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_49, temp0_1) ? 1 : 0) << 0xa
                        | (x87_r7_49 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41) && !(*(&(
                        (x87_r7_50 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_50, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_50 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    edi += 1;
                else
                    edx_1 = sub_4fdd30(a1, edi);
            }
            else
            {
                *(ecx_2 + 0x26) = result - 1;
                edi += 1;
            }

            result = a1[0x3c];
        } while (edi < result);

        if (result)
        {
            if (result > 0)
            {
                int32_t* edx_2 = a1[0x1b];
                void* esi_2 = result;
                void* i;

                do
                {
                    double* ecx_3 = *edx_2;
                    long double x87_r7_17 = var_ac;
                    long double temp5_1 = *ecx_3;
                    x87_r7_17 - temp5_1;

                    if (*(&((x87_r7_17 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_17, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        int32_t edi_1 = *(ecx_3 + 4);
                        var_ac = *ecx_3;
                        int32_t var_a8_2 = edi_1;
                    }

                    long double x87_r7_18 = var_a4_1;
                    long double temp7_1 = ecx_3[1];
                    x87_r7_18 - temp7_1;

                    if (*(&((x87_r7_18 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_18, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_18 == temp7_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        var_a4_1 = ecx_3[1];
                        int32_t var_a0_2 = *(ecx_3 + 0xc);
                    }

                    long double x87_r7_19 = var_9c_1;
                    long double temp9_1 = ecx_3[2];
                    x87_r7_19 - temp9_1;

                    if (*(&((x87_r7_19 < temp9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_19, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r7_19 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        var_9c_1 = ecx_3[2];
                        int32_t var_98_2 = *(ecx_3 + 0x14);
                    }

                    long double x87_r7_20 = var_94;
                    long double temp11_1 = *ecx_3;
                    x87_r7_20 - temp11_1;

                    if (!(*(&((x87_r7_20 < temp11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_20, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r7_20 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        int32_t edi_4 = *(ecx_3 + 4);
                        var_94 = *ecx_3;
                        int32_t var_90_2 = edi_4;
                    }

                    long double x87_r7_21 = var_8c_1;
                    long double temp13_1 = ecx_3[1];
                    x87_r7_21 - temp13_1;

                    if (!(*(&((x87_r7_21 < temp13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_21, temp13_1) ? 1 : 0) << 0xa
                        | (x87_r7_21 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        var_8c_1 = ecx_3[1];
                        int32_t var_88_2 = *(ecx_3 + 0xc);
                    }

                    long double x87_r7_22 = var_84_1;
                    long double temp15_1 = ecx_3[2];
                    x87_r7_22 - temp15_1;

                    if (!(*(&((x87_r7_22 < temp15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_22, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r7_22 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        var_84_1 = ecx_3[2];
                        int32_t var_80_2 = *(ecx_3 + 0x14);
                    }

                    edx_2 = &edx_2[1];
                    i = esi_2;
                    esi_2 -= 1;
                } while (i != 1);
            }

            edx_1 = &a1[0x28];
            double var_60_1 = var_94 - *(a1 + 0x88);
            double var_58_1 = var_8c_1 - *(a1 + 0x90);
            double var_50 = var_84_1 - *(a1 + 0x98);
            double var_78 = var_ac - *edx_1;
            double var_70_1 = var_a4_1 - *(a1 + 0xa8);
            double var_68_1 = var_9c_1 - *(a1 + 0xb0);
            long double x87_r7_35 = var_60_1;
            long double temp3_1 = 0.0;
            x87_r7_35 - temp3_1;

            if (*(&((x87_r7_35 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_35, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_35 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
            label_4fd9a5:
                memcpy(&a1[0x22], &var_94, 0x18);
                memcpy(edx_1, &var_ac, 0x18);
                float var_b4_1 = sub_4fdc20(a1);
                sub_4fdcd0(&var_78, a1);
                edx_1 = sub_4c6940(a1[0x2e], a1, &var_78, var_b4_1);
            }
            else
            {
                long double x87_r7_36 = var_58_1;
                long double temp4_1 = 0.0;
                x87_r7_36 - temp4_1;

                if (*(&((x87_r7_36 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_36, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_36 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double x87_r7_37 = var_50;
                long double temp6_1 = 0.0;
                x87_r7_37 - temp6_1;

                if (*(&((x87_r7_37 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_37, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_37 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double x87_r7_38 = var_78;
                long double temp8_1 = 0.0;
                x87_r7_38 - temp8_1;

                if (!(*(&((x87_r7_38 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_38, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_38 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_39 = var_70_1;
                long double temp10_1 = 0.0;
                x87_r7_39 - temp10_1;

                if (!(*(&((x87_r7_39 < temp10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_39, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r7_39 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_40 = var_68_1;
                long double temp12_1 = 0.0;
                x87_r7_40 - temp12_1;

                if (!(*(&((x87_r7_40 < temp12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_40, temp12_1) ? 1 : 0) << 0xa
                        | (x87_r7_40 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_41 = var_60_1;
                long double temp14_1 = 12288.0;
                x87_r7_41 - temp14_1;

                if (!(*(&((x87_r7_41 < temp14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_41, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_41 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_42 = var_58_1;
                long double temp16_1 = 12288.0;
                x87_r7_42 - temp16_1;

                if (!(*(&((x87_r7_42 < temp16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_42, temp16_1) ? 1 : 0) << 0xa
                        | (x87_r7_42 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_43 = var_50;
                long double temp18_1 = 12288.0;
                x87_r7_43 - temp18_1;

                if (!(*(&((x87_r7_43 < temp18_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_43, temp18_1) ? 1 : 0) << 0xa
                        | (x87_r7_43 == temp18_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_44 = var_78;
                long double temp19_1 = 12288.0;
                x87_r7_44 - temp19_1;

                if (*(&((x87_r7_44 < temp19_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_44, temp19_1) ? 1 : 0) << 0xa
                        | (x87_r7_44 == temp19_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double x87_r7_45 = var_70_1;
                long double temp20_1 = 12288.0;
                x87_r7_45 - temp20_1;

                if (*(&((x87_r7_45 < temp20_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_45, temp20_1) ? 1 : 0) << 0xa
                        | (x87_r7_45 == temp20_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double x87_r7_46 = var_68_1;
                long double temp21_1 = 12288.0;
                x87_r7_46 - temp21_1;

                if (*(&((x87_r7_46 < temp21_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_46, temp21_1) ? 1 : 0) << 0xa
                        | (x87_r7_46 == temp21_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;
            }
        }

        result = a1[0x3b];
        int32_t i_1 = 0;

        if (result)
        {
            int32_t* esi_3 = nullptr;
            int32_t* var_b0_1 = nullptr;
            int32_t i_2 = 0;

            if (a1[0x3c] > 0)
            {
                int32_t var_bc_1 = 0;

                do
                {
                    void* eax_12 = *(a1[0x1b] + (i_1 << 2));
                    edx_1 = *(eax_12 + 0x24);

                    if (edx_1)
                    {
                        edx_1 -= 1;
                        *(eax_12 + 0x24) = edx_1;
                    }

                    if (!*(eax_12 + 0x24))
                    {
                        *(a1[0x1f] + (esi_3 << 2)) = i_1;
                        edx_1 = eax_12 + 0x40;
                        memcpy(a1[0x1d] + var_bc_1, edx_1, 0x18);
                        memcpy(a1[0x1e] + var_bc_1, eax_12, 0x18);
                        var_b0_1 += 1;
                        var_bc_1 += 0x18;
                        *(eax_12 + 0x24) = 0xf;
                        memcpy(edx_1, eax_12, 0x18);
                        esi_3 = var_b0_1;
                        i_1 = i_2;
                    }

                    i_1 += 1;
                    i_2 = i_1;
                } while (i_1 < a1[0x3c]);
            }

            i_1 = g_54e56a;
            int32_t var_44_1 = 0;
            void var_48;
            sub_4cc2a0(a1[0x2e], a1[0x1c], a1[0x1d], a1[0x1e], esi_3, i_1, &var_48,
                0x20000000);
            result = nullptr;
            int32_t var_bc_2 = 0;

            if (esi_3 > 0)
            {
                int32_t edx_7 = 0;
                void* result_1 = nullptr;
                int32_t var_b4_2 = 0;
                bool cond:5_1;

                do
                {
                    void* eax_15 = result + a1[0x1c];

                    if (*(eax_15 + 0x58))
                    {
                        int32_t eax_18 = g_a7a4d8 * 0x30;
                        memcpy(eax_18 + 0xa774c0, a1[0x1d] + edx_7, 0x18);
                        int32_t eax_20 = g_a7a4d8 + 1;
                        memcpy(eax_18 + 0xa774d8, a1[0x1e] + edx_7, 0x18);
                        g_a7a4d8 = eax_20;

                        if (eax_20 == 0x100)
                            g_a7a4d8 = 0;

                        int32_t esi_15 = a1[0x1d] + edx_7;
                        void* var_40 = eax_15;
                        void var_38;
                        memcpy(&var_38, esi_15, 0x18);
                        void var_20;
                        memcpy(&var_20, a1[0x1e] + edx_7, 0x18);
                        a1[0x3b](&var_40);
                        sub_4fdd30(a1, *(a1[0x1f] + (var_bc_2 << 2)));
                        esi_3 = var_b0_1;
                        edx_7 = var_b4_2;
                    }

                    result = result_1 + 0x70;
                    edx_7 += 0x18;
                    cond:5_1 = var_bc_2 + 1 < esi_3;
                    var_bc_2 += 1;
                    result_1 = result;
                    var_b4_2 = edx_7;
                } while (cond:5_1);
            }
        }
    }

    return result;
}
