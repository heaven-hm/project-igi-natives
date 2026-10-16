#include "0050BF20-Physics_CalculateSplineLength_13.h"
/* 0x0050bf20 Physics_CalculateSplineLength_13 full linked: callers=8 callees=23 */
int32_t sub_50bf20(float a1 @ 0xc, int32_t a2 @ 0x28, float a3 @ 0x34, int32_t a4 @ 0x50, float a5 @ 0x5c, int32_t a6 @ 0x78, int32_t a7, int32_t a8, int32_t a9)

{
    void arg_54;
    void* var_a8 = &arg_54;
    int32_t edx = a2;
    void arg_2c;
    void* var_ac = &arg_2c;
    int32_t ecx = a4;
    g_a7da08 += 1;
    void arg_4;
    void* var_b0 = &arg_4;
    int32_t eax = a6;
    char ebx_4 = edx | ecx | eax;
    int32_t esi_2 = edx & ecx & eax;
    int32_t var_dc = esi_2;

    if (!esi_2 && !(ebx_4 & 0x10))
    {
        void var_170;
        void var_148;
        void var_120;
        float var_d8;
        float var_d4;
        float var_d0;
        float var_cc;
        float var_c8;
        float var_c4;
        float var_c0;
        float var_bc;
        float var_b8;
        int32_t var_b4;

        if (ebx_4 & 1)
        {
            int32_t edx_1 = edx & 1;
            int32_t ecx_1 = ecx & 1;

            if ((eax & 1) + edx_1 + ecx_1 != 2)
            {
                float* eax_19;
                float* edx_4;
                float* ebp_1;

                if (edx_1)
                {
                    eax_19 = &arg_2c;
                    edx_4 = &arg_54;
                    ebp_1 = &arg_4;
                }
                else if (!ecx_1)
                {
                    eax_19 = &arg_4;
                    edx_4 = &arg_2c;
                    ebp_1 = &arg_54;
                }
                else
                {
                    eax_19 = &arg_54;
                    edx_4 = &arg_4;
                    ebp_1 = &arg_2c;
                }

                long double x87_r7_84 = *ebp_1 - *eax_19;
                long double x87_r6_9 = (g_bcabd0 - *eax_19) / x87_r7_84;
                memcpy(&var_d8, ebp_1, 0x28);
                float var_dc_3 = x87_r6_9;
                *ebp_1 = x87_r7_84 * var_dc_3 + *eax_19;
                ebp_1[1] = (ebp_1[1] - eax_19[1]) * var_dc_3 + eax_19[1];
                ebp_1[2] = (ebp_1[2] - eax_19[2]) * var_dc_3 + eax_19[2];
                ebp_1[6] = (ebp_1[6] - eax_19[6]) * var_dc_3 + eax_19[6];
                ebp_1[7] = (ebp_1[7] - eax_19[7]) * var_dc_3 + eax_19[7];
                ebp_1[8] = (ebp_1[8] - eax_19[8]) * var_dc_3 + eax_19[8];
                ebp_1[3] = (ebp_1[3] - eax_19[3]) * var_dc_3 + eax_19[3];
                ebp_1[4] = (ebp_1[4] - eax_19[4]) * var_dc_3 + eax_19[4];
                ebp_1[5] = (ebp_1[5] - eax_19[5]) * var_dc_3 + eax_19[5];
                long double x87_r7_119 = ebp_1[1];
                long double temp3_1 = g_bcabd4;
                x87_r7_119 - temp3_1;
                int32_t esi_8;

                esi_8 = !(*(&((x87_r7_119 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_119, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_119 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_121 = g_bcabd8 + 1f;
                long double temp8_1 = *ebp_1;
                x87_r7_121 - temp8_1;
                int32_t ecx_3;

                ecx_3 = !(*(&((x87_r7_121 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_121, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_121 == temp8_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_123 = g_bcabdc + 1f;
                long double temp15_1 = ebp_1[1];
                x87_r7_123 - temp15_1;
                int32_t eax_21;

                eax_21 = !(*(&((x87_r7_123 < temp15_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_123, temp15_1) ? 1 : 0) << 0xa
                    | (x87_r7_123 == temp15_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_124 = var_d8;
                ebp_1[9] = (((eax_21 * 2) | ecx_3) << 1 | esi_8) << 1;
                long double x87_r7_125 = x87_r7_124 - *edx_4;
                float var_dc_4 = (g_bcabd0 - *edx_4) / x87_r7_125;
                long double x87_r7_127 = x87_r7_125 * var_dc_4 + *edx_4;
                var_d8 = x87_r7_127;
                long double x87_r6_16 = (var_d4 - edx_4[1]) * var_dc_4 + edx_4[1];
                var_d4 = x87_r6_16;
                var_d0 = (var_d0 - edx_4[2]) * var_dc_4 + edx_4[2];
                var_c0 = (var_c0 - edx_4[6]) * var_dc_4 + edx_4[6];
                var_bc = (var_bc - edx_4[7]) * var_dc_4 + edx_4[7];
                var_b8 = (var_b8 - edx_4[8]) * var_dc_4 + edx_4[8];
                var_cc = (var_cc - edx_4[3]) * var_dc_4 + edx_4[3];
                var_c8 = (var_c8 - edx_4[4]) * var_dc_4 + edx_4[4];
                var_c4 = (var_c4 - edx_4[5]) * var_dc_4 + edx_4[5];
                long double temp20_1 = g_bcabd4;
                x87_r6_16 - temp20_1;
                int32_t esi_9;

                esi_9 = !(*(&((x87_r6_16 < temp20_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_16, temp20_1) ? 1 : 0) << 0xa
                    | (x87_r6_16 == temp20_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                long double x87_r6_18 = g_bcabd8 + 1f;
                x87_r7_127 - x87_r6_18;
                int32_t ecx_4;

                ecx_4 = *(&((x87_r7_127 < x87_r6_18 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_127, x87_r6_18) ? 1 : 0) << 0xa
                    | (x87_r7_127 == x87_r6_18 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_130 = g_bcabdc + 1f;
                long double temp23_1 = var_d4;
                x87_r7_130 - temp23_1;
                int32_t eax_28;

                eax_28 = !(*(&((x87_r7_130 < temp23_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_130, temp23_1) ? 1 : 0) << 0xa
                    | (x87_r7_130 == temp23_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                var_b4 = (((eax_28 * 2) | ecx_4) << 1 | esi_9) << 1;
                int32_t var_f0_1 = a9;
                ebx_4 = a2 | a4 | a6;
                int32_t var_f4_1 = a8;
                int32_t var_f8_1 = a7;
                memcpy(&var_120, ebp_1, 0x28);
                memcpy(&var_148, &var_d8, 0x28);
                memcpy(&var_170, edx_4, 0x28);
                sub_50bf20();
                eax = a6;
                ecx = a4;
                edx = a2;
                esi_2 = a2 & a4 & a6;
            }
            else
            {
                float* eax_4;
                float* ecx_2;
                float* edx_2;
                float* esi_3;

                if (!edx_1)
                {
                    eax_4 = &arg_4;
                    edx_2 = &arg_4;
                    esi_3 = &arg_2c;
                    ecx_2 = &arg_54;
                }
                else if (ecx_1)
                {
                    eax_4 = &arg_54;
                    edx_2 = &arg_54;
                    esi_3 = &arg_4;
                    ecx_2 = &arg_2c;
                }
                else
                {
                    eax_4 = &arg_2c;
                    edx_2 = &arg_2c;
                    esi_3 = &arg_54;
                    ecx_2 = &arg_4;
                }

                long double x87_r7_2 = *esi_3 - *eax_4;
                float var_dc_1 = (g_bcabd0 - *eax_4) / x87_r7_2;
                *esi_3 = x87_r7_2 * var_dc_1 + *eax_4;
                esi_3[1] = (esi_3[1] - eax_4[1]) * var_dc_1 + eax_4[1];
                esi_3[2] = (esi_3[2] - eax_4[2]) * var_dc_1 + eax_4[2];
                esi_3[6] = (esi_3[6] - eax_4[6]) * var_dc_1 + eax_4[6];
                esi_3[7] = (esi_3[7] - eax_4[7]) * var_dc_1 + eax_4[7];
                esi_3[8] = (esi_3[8] - eax_4[8]) * var_dc_1 + eax_4[8];
                esi_3[3] = (esi_3[3] - eax_4[3]) * var_dc_1 + eax_4[3];
                esi_3[4] = (esi_3[4] - eax_4[4]) * var_dc_1 + eax_4[4];
                esi_3[5] = (esi_3[5] - eax_4[5]) * var_dc_1 + eax_4[5];
                long double x87_r7_37 = esi_3[1];
                long double temp1_1 = g_bcabd4;
                x87_r7_37 - temp1_1;
                int32_t ebx_5;

                ebx_5 = !(*(&((x87_r7_37 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_37, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_37 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_39 = g_bcabd8 + 1f;
                long double temp4_1 = *esi_3;
                x87_r7_39 - temp4_1;
                int32_t edi_1;

                edi_1 = !(*(&((x87_r7_39 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_39, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_39 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_41 = g_bcabdc + 1f;
                long double temp9_1 = esi_3[1];
                x87_r7_41 - temp9_1;
                int32_t eax_6;

                eax_6 = !(*(&((x87_r7_41 < temp9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_41, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r7_41 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                esi_3[9] = (((eax_6 * 2) | edi_1) << 1 | ebx_5) << 1;
                long double x87_r7_43 = *ecx_2 - *edx_2;
                float var_dc_2 = (g_bcabd0 - *edx_2) / x87_r7_43;
                *ecx_2 = x87_r7_43 * var_dc_2 + *edx_2;
                ecx_2[1] = (ecx_2[1] - edx_2[1]) * var_dc_2 + edx_2[1];
                ecx_2[2] = (ecx_2[2] - edx_2[2]) * var_dc_2 + edx_2[2];
                ecx_2[6] = (ecx_2[6] - edx_2[6]) * var_dc_2 + edx_2[6];
                ecx_2[7] = (ecx_2[7] - edx_2[7]) * var_dc_2 + edx_2[7];
                ecx_2[8] = (ecx_2[8] - edx_2[8]) * var_dc_2 + edx_2[8];
                ecx_2[3] = (ecx_2[3] - edx_2[3]) * var_dc_2 + edx_2[3];
                ecx_2[4] = (ecx_2[4] - edx_2[4]) * var_dc_2 + edx_2[4];
                ecx_2[5] = (ecx_2[5] - edx_2[5]) * var_dc_2 + edx_2[5];
                long double x87_r7_78 = ecx_2[1];
                long double temp16_1 = g_bcabd4;
                x87_r7_78 - temp16_1;
                int32_t esi_4;

                esi_4 = !(*(&((x87_r7_78 < temp16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_78, temp16_1) ? 1 : 0) << 0xa
                    | (x87_r7_78 == temp16_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_80 = g_bcabd8 + 1f;
                long double temp21_1 = *ecx_2;
                x87_r7_80 - temp21_1;
                int32_t edx_3;

                edx_3 = !(*(&((x87_r7_80 < temp21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_80, temp21_1) ? 1 : 0) << 0xa
                    | (x87_r7_80 == temp21_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_82 = g_bcabdc + 1f;
                long double temp22_1 = ecx_2[1];
                x87_r7_82 - temp22_1;
                int32_t eax_13;

                eax_13 = !(*(&((x87_r7_82 < temp22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_82, temp22_1) ? 1 : 0) << 0xa
                    | (x87_r7_82 == temp22_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                ecx_2[9] = (((eax_13 * 2) | edx_3) << 1 | esi_4) << 1;
                edx = a2;
                ecx = a4;
                eax = a6;
                ebx_4 = edx | ecx | eax;
                esi_2 = edx & ecx & eax;
            }
        }

        if (!esi_2)
        {
            if (!(ebx_4 & 2))
            {
            label_50ca39:

                if (!(ebx_4 & 4))
                {
                label_50cf06:
                    int32_t ebp_6;

                    if (ebx_4 & 8)
                    {
                        int32_t edx_13 = edx & 8;
                        int32_t ecx_20 = ecx & 8;
                        int32_t eax_89 = (eax & 8) + edx_13 + ecx_20;
                        eax_89 &= 0xf8;

                        if (eax_89 != 0x10)
                        {
                            float* eax_92;
                            float* edx_15;
                            float* ebx_18;

                            if (edx_13)
                            {
                                edx_15 = &arg_2c;
                                ebx_18 = &arg_54;
                                eax_92 = &arg_4;
                            }
                            else if (!ecx_20)
                            {
                                edx_15 = &arg_4;
                                ebx_18 = &arg_2c;
                                eax_92 = &arg_54;
                            }
                            else
                            {
                                edx_15 = &arg_54;
                                ebx_18 = &arg_4;
                                eax_92 = &arg_2c;
                            }

                            long double x87_r7_295 = g_bcabdc + 1f - edx_15[1];
                            long double x87_r6_298 = eax_92[1] - edx_15[1];
                            memcpy(&var_d8, eax_92, 0x28);
                            long double x87_r7_296 = x87_r7_295 / x87_r6_298;
                            *eax_92 = (*eax_92 - *edx_15) * x87_r7_296 + *edx_15;
                            eax_92[1] = (eax_92[1] - edx_15[1]) * x87_r7_296 + edx_15[1];
                            eax_92[2] = (eax_92[2] - edx_15[2]) * x87_r7_296 + edx_15[2];
                            eax_92[6] = (eax_92[6] - edx_15[6]) * x87_r7_296 + edx_15[6];
                            eax_92[7] = (eax_92[7] - edx_15[7]) * x87_r7_296 + edx_15[7];
                            eax_92[8] = (eax_92[8] - edx_15[8]) * x87_r7_296 + edx_15[8];
                            eax_92[3] = (eax_92[3] - edx_15[3]) * x87_r7_296 + edx_15[3];
                            eax_92[4] = (eax_92[4] - edx_15[4]) * x87_r7_296 + edx_15[4];
                            long double x87_r6_334 =
                                (eax_92[5] - edx_15[5]) * x87_r7_296 + edx_15[5];
                            eax_92[9] = 0;
                            eax_92[5] = x87_r6_334;
                            long double x87_r7_299 = var_d4 - ebx_18[1];
                            float var_dc_13 = (g_bcabdc + 1f - ebx_18[1]) / x87_r7_299;
                            long double x87_r6_342 = (var_d8 - *ebx_18) * var_dc_13 + *ebx_18;
                            var_b4 = 0;
                            var_d8 = x87_r6_342;
                            int32_t var_f0_4 = a9;
                            int32_t var_f4_4 = a8;
                            int32_t var_f8_4 = a7;
                            long double x87_r7_301 = x87_r7_299 * var_dc_13 + ebx_18[1];
                            ebp_6 = a2 & a4 & a6;
                            memcpy(&var_120, eax_92, 0x28);
                            float var_d4_1 = x87_r7_301;
                            float var_d0_1 = (var_d0 - ebx_18[2]) * var_dc_13 + ebx_18[2];
                            float var_c0_1 = (var_c0 - ebx_18[6]) * var_dc_13 + ebx_18[6];
                            float var_bc_1 = (var_bc - ebx_18[7]) * var_dc_13 + ebx_18[7];
                            float var_b8_1 = (var_b8 - ebx_18[8]) * var_dc_13 + ebx_18[8];
                            float var_cc_1 = (var_cc - ebx_18[3]) * var_dc_13 + ebx_18[3];
                            float var_c8_1 = (var_c8 - ebx_18[4]) * var_dc_13 + ebx_18[4];
                            float var_c4_1 = (var_c4 - ebx_18[5]) * var_dc_13 + ebx_18[5];
                            memcpy(&var_148, &var_d8, 0x28);
                            memcpy(&var_170, ebx_18, 0x28);
                            sub_50bf20();
                        }
                        else
                        {
                            float* eax_90;
                            float* ecx_21;
                            float* edx_14;
                            float* esi_29;

                            if (!edx_13)
                            {
                                eax_90 = &arg_4;
                                ecx_21 = &arg_4;
                                edx_14 = &arg_2c;
                                esi_29 = &arg_54;
                            }
                            else if (ecx_20)
                            {
                                eax_90 = &arg_54;
                                ecx_21 = &arg_54;
                                edx_14 = &arg_4;
                                esi_29 = &arg_2c;
                            }
                            else
                            {
                                eax_90 = &arg_2c;
                                ecx_21 = &arg_2c;
                                edx_14 = &arg_54;
                                esi_29 = &arg_4;
                            }

                            long double x87_r7_286 =
                                (g_bcabdc + 1f - eax_90[1]) / (edx_14[1] - eax_90[1]);
                            *edx_14 = (*edx_14 - *eax_90) * x87_r7_286 + *eax_90;
                            edx_14[1] = (edx_14[1] - eax_90[1]) * x87_r7_286 + eax_90[1];
                            edx_14[2] = (edx_14[2] - eax_90[2]) * x87_r7_286 + eax_90[2];
                            edx_14[6] = (edx_14[6] - eax_90[6]) * x87_r7_286 + eax_90[6];
                            edx_14[7] = (edx_14[7] - eax_90[7]) * x87_r7_286 + eax_90[7];
                            edx_14[8] = (edx_14[8] - eax_90[8]) * x87_r7_286 + eax_90[8];
                            edx_14[3] = (edx_14[3] - eax_90[3]) * x87_r7_286 + eax_90[3];
                            edx_14[4] = (edx_14[4] - eax_90[4]) * x87_r7_286 + eax_90[4];
                            long double x87_r6_258 =
                                (edx_14[5] - eax_90[5]) * x87_r7_286 + eax_90[5];
                            edx_14[9] = 0;
                            edx_14[5] = x87_r6_258;
                            long double x87_r7_291 =
                                (g_bcabdc + 1f - ecx_21[1]) / (esi_29[1] - ecx_21[1]);
                            *esi_29 = (*esi_29 - *ecx_21) * x87_r7_291 + *ecx_21;
                            esi_29[1] = (esi_29[1] - ecx_21[1]) * x87_r7_291 + ecx_21[1];
                            esi_29[2] = (esi_29[2] - ecx_21[2]) * x87_r7_291 + ecx_21[2];
                            esi_29[6] = (esi_29[6] - ecx_21[6]) * x87_r7_291 + ecx_21[6];
                            esi_29[7] = (esi_29[7] - ecx_21[7]) * x87_r7_291 + ecx_21[7];
                            esi_29[8] = (esi_29[8] - ecx_21[8]) * x87_r7_291 + ecx_21[8];
                            esi_29[3] = (esi_29[3] - ecx_21[3]) * x87_r7_291 + ecx_21[3];
                            esi_29[4] = (esi_29[4] - ecx_21[4]) * x87_r7_291 + ecx_21[4];
                            long double x87_r6_296 =
                                (esi_29[5] - ecx_21[5]) * x87_r7_291 + ecx_21[5];
                            esi_29[9] = 0;
                            esi_29[5] = x87_r6_296;
                            ebp_6 = a2 & a4 & a6;
                        }
                    }

                    if (!(ebx_4 & 8) || !ebp_6)
                    {
                        void* var_9c = &arg_4;
                        void* var_98_1 = &arg_2c;
                        void* var_94_1 = &arg_54;
                        a8(&var_9c, a9);

                        if (0x80 & g_c28c7f && g_c28c8c & 0x80 && g_c28c69 & 0x80)
                        {
                            void** edx_18 = &var_b0;
                            void var_8c;
                            void* eax_95 = &var_8c;
                            int32_t i_3 = 3;
                            a1 = 1f / a1;
                            a3 = 1f / a3;
                            a5 = 1f / a5;
                            int32_t i;

                            do
                            {
                                int32_t* ecx_27 = *edx_18;
                                edx_18 = &edx_18[1];
                                eax_95 += 0x24;
                                *(eax_95 - 0x28) = *ecx_27;
                                *(eax_95 - 0x24) = ecx_27[1];
                                i = i_3;
                                i_3 -= 1;
                                *(eax_95 - 0x20) = ecx_27[2] * 0.99000001f - 4.09600019f;
                                *(eax_95 - 0x10) = 0x3f000000;
                                *(eax_95 - 0xc) = 0x3f000000;
                                *(eax_95 - 8) = 0x3f800000;
                                *(eax_95 - 0x14) = 0x3f800000;
                                *(eax_95 - 0x1c) = 0;
                                *(eax_95 - 0x18) = 0;
                            } while (i != 1);
                            void** var_f0_6 = &var_b0;
                            void var_90;
                            void* var_a0_1 = &var_90;
                            int32_t var_ac_1 = 0x40060000;
                            var_b0 = nullptr;
                            int32_t var_a8_1 = 0xffffffff;
                            int32_t var_a4_1 = 3;
                            g_a84a50 = 0;
                            sub_50d4c0(var_f0_6);
                            void var_88;
                            float* eax_96 = &var_88;
                            int32_t i_2 = 3;
                            int32_t i_1;

                            do
                            {
                                long double x87_r7_340 = *eax_96 * 0.99000001f;
                                eax_96 = &eax_96[9];
                                i_1 = i_2;
                                i_2 -= 1;
                                eax_96[-9] = x87_r7_340;
                                eax_96[-5] = 0;
                                eax_96[-4] = 0;
                                eax_96[-3] = 0x3f800000;
                            } while (i_1 != 1);
                            void var_24;
                            memcpy(&var_24, &var_90, 0x24);
                            void** var_f0_7 = &var_b0;
                            var_b0 = 1;
                            int32_t var_a4_2 = 4;
                            sub_50d4c0(var_f0_7);
                        }
                    }
                }
                else
                {
                    int32_t edx_9 = edx & 4;
                    int32_t ecx_15 = ecx & 4;
                    int32_t eax_69 = (eax & 4) + edx_9 + ecx_15;
                    eax_69 &= 0xfc;
                    int32_t esi_24;

                    if (eax_69 != 8)
                    {
                        float* eax_76;
                        float* edx_12;
                        float* ebp_3;

                        if (edx_9)
                        {
                            eax_76 = &arg_2c;
                            ebp_3 = &arg_54;
                            edx_12 = &arg_4;
                        }
                        else if (!ecx_15)
                        {
                            eax_76 = &arg_4;
                            ebp_3 = &arg_2c;
                            edx_12 = &arg_54;
                        }
                        else
                        {
                            eax_76 = &arg_54;
                            ebp_3 = &arg_4;
                            edx_12 = &arg_2c;
                        }

                        long double x87_r7_237 = *edx_12 - *eax_76;
                        long double x87_r6_184 = g_bcabd8 + 1f - *eax_76;
                        memcpy(&var_d8, edx_12, 0x28);
                        float var_dc_10 = x87_r6_184 / x87_r7_237;
                        *edx_12 = x87_r7_237 * var_dc_10 + *eax_76;
                        edx_12[1] = (edx_12[1] - eax_76[1]) * var_dc_10 + eax_76[1];
                        edx_12[2] = (edx_12[2] - eax_76[2]) * var_dc_10 + eax_76[2];
                        edx_12[6] = (edx_12[6] - eax_76[6]) * var_dc_10 + eax_76[6];
                        edx_12[7] = (edx_12[7] - eax_76[7]) * var_dc_10 + eax_76[7];
                        edx_12[8] = (edx_12[8] - eax_76[8]) * var_dc_10 + eax_76[8];
                        edx_12[3] = (edx_12[3] - eax_76[3]) * var_dc_10 + eax_76[3];
                        edx_12[4] = (edx_12[4] - eax_76[4]) * var_dc_10 + eax_76[4];
                        edx_12[5] = (edx_12[5] - eax_76[5]) * var_dc_10 + eax_76[5];
                        long double x87_r7_273 = g_bcabdc + 1f;
                        long double temp11_1 = edx_12[1];
                        x87_r7_273 - temp11_1;
                        int32_t eax_78;

                        eax_78 = !(*(&((x87_r7_273 < temp11_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_273, temp11_1) ? 1 : 0) << 0xa
                            | (x87_r7_273 == temp11_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                        long double x87_r7_274 = var_d8;
                        edx_12[9] = eax_78 << 3;
                        long double x87_r7_275 = x87_r7_274 - *ebp_3;
                        float var_dc_11 = (g_bcabd8 + 1f - *ebp_3) / x87_r7_275;
                        var_d8 = x87_r7_275 * var_dc_11 + *ebp_3;
                        long double x87_r7_281 = (var_d4 - ebp_3[1]) * var_dc_11 + ebp_3[1];
                        var_d4 = x87_r7_281;
                        var_d0 = (var_d0 - ebp_3[2]) * var_dc_11 + ebp_3[2];
                        var_c0 = (var_c0 - ebp_3[6]) * var_dc_11 + ebp_3[6];
                        var_bc = (var_bc - ebp_3[7]) * var_dc_11 + ebp_3[7];
                        var_b8 = (var_b8 - ebp_3[8]) * var_dc_11 + ebp_3[8];
                        var_cc = (var_cc - ebp_3[3]) * var_dc_11 + ebp_3[3];
                        var_c8 = (var_c8 - ebp_3[4]) * var_dc_11 + ebp_3[4];
                        var_c4 = (var_c4 - ebp_3[5]) * var_dc_11 + ebp_3[5];
                        long double x87_r6_219 = g_bcabdc + 1f;
                        x87_r7_281 - x87_r6_219;
                        int32_t eax_81;

                        eax_81 = *(&((x87_r7_281 < x87_r6_219 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_281, x87_r6_219) ? 1 : 0) << 0xa
                            | (x87_r7_281 == x87_r6_219 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        var_b4 = eax_81 << 3;
                        int32_t var_f0_3 = a9;
                        int32_t var_f4_3 = a8;
                        int32_t var_f8_3 = a7;
                        ebx_4 = a2 | a4 | a6;
                        memcpy(&var_120, edx_12, 0x28);
                        memcpy(&var_148, &var_d8, 0x28);
                        memcpy(&var_170, ebp_3, 0x28);
                        sub_50bf20();
                        eax = a6;
                        ecx = a4;
                        edx = a2;
                        esi_24 = a2 & a4 & a6;
                    }
                    else
                    {
                        float* eax_70;
                        float* ecx_16;
                        float* edx_10;
                        float* esi_21;

                        if (!edx_9)
                        {
                            eax_70 = &arg_4;
                            edx_10 = &arg_4;
                            esi_21 = &arg_2c;
                            ecx_16 = &arg_54;
                        }
                        else if (ecx_15)
                        {
                            eax_70 = &arg_54;
                            edx_10 = &arg_54;
                            esi_21 = &arg_4;
                            ecx_16 = &arg_2c;
                        }
                        else
                        {
                            eax_70 = &arg_2c;
                            edx_10 = &arg_2c;
                            esi_21 = &arg_54;
                            ecx_16 = &arg_4;
                        }

                        long double x87_r7_161 = *esi_21 - *eax_70;
                        float var_dc_8 = (g_bcabd8 + 1f - *eax_70) / x87_r7_161;
                        *esi_21 = x87_r7_161 * var_dc_8 + *eax_70;
                        esi_21[1] = (esi_21[1] - eax_70[1]) * var_dc_8 + eax_70[1];
                        esi_21[2] = (esi_21[2] - eax_70[2]) * var_dc_8 + eax_70[2];
                        esi_21[6] = (esi_21[6] - eax_70[6]) * var_dc_8 + eax_70[6];
                        esi_21[7] = (esi_21[7] - eax_70[7]) * var_dc_8 + eax_70[7];
                        esi_21[8] = (esi_21[8] - eax_70[8]) * var_dc_8 + eax_70[8];
                        esi_21[3] = (esi_21[3] - eax_70[3]) * var_dc_8 + eax_70[3];
                        esi_21[4] = (esi_21[4] - eax_70[4]) * var_dc_8 + eax_70[4];
                        esi_21[5] = (esi_21[5] - eax_70[5]) * var_dc_8 + eax_70[5];
                        long double x87_r7_197 = g_bcabdc + 1f;
                        long double temp5_1 = esi_21[1];
                        x87_r7_197 - temp5_1;
                        int32_t eax_72;

                        eax_72 = !(*(&((x87_r7_197 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_197, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_197 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                        esi_21[9] = eax_72 << 3;
                        long double x87_r7_199 = *ecx_16 - *edx_10;
                        float var_dc_9 = (g_bcabd8 + 1f - *edx_10) / x87_r7_199;
                        *ecx_16 = x87_r7_199 * var_dc_9 + *edx_10;
                        ecx_16[1] = (ecx_16[1] - edx_10[1]) * var_dc_9 + edx_10[1];
                        ecx_16[2] = (ecx_16[2] - edx_10[2]) * var_dc_9 + edx_10[2];
                        ecx_16[6] = (ecx_16[6] - edx_10[6]) * var_dc_9 + edx_10[6];
                        ecx_16[7] = (ecx_16[7] - edx_10[7]) * var_dc_9 + edx_10[7];
                        ecx_16[8] = (ecx_16[8] - edx_10[8]) * var_dc_9 + edx_10[8];
                        ecx_16[3] = (ecx_16[3] - edx_10[3]) * var_dc_9 + edx_10[3];
                        ecx_16[4] = (ecx_16[4] - edx_10[4]) * var_dc_9 + edx_10[4];
                        ecx_16[5] = (ecx_16[5] - edx_10[5]) * var_dc_9 + edx_10[5];
                        long double x87_r7_235 = g_bcabdc + 1f;
                        long double temp12_1 = ecx_16[1];
                        x87_r7_235 - temp12_1;
                        int32_t eax_75;

                        eax_75 = !(*(&((x87_r7_235 < temp12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_235, temp12_1) ? 1 : 0) << 0xa
                            | (x87_r7_235 == temp12_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                        ecx_16[9] = eax_75 << 3;
                        edx = a2;
                        ecx = a4;
                        eax = a6;
                        ebx_4 = edx | ecx | eax;
                        esi_24 = edx & ecx & eax;
                    }

                    if (!esi_24)
                        goto label_50cf06;
                }
            }
            else
            {
                int32_t edx_5 = edx & 2;
                int32_t ecx_8 = ecx & 2;
                int32_t eax_40 = (eax & 2) + edx_5 + ecx_8;
                eax_40 &= 0xfe;
                int32_t esi_16;

                if (eax_40 != 4)
                {
                    float* eax_52;
                    float* edx_8;
                    float* ebp_2;

                    if (edx_5)
                    {
                        eax_52 = &arg_2c;
                        edx_8 = &arg_54;
                        ebp_2 = &arg_4;
                    }
                    else if (!ecx_8)
                    {
                        eax_52 = &arg_4;
                        edx_8 = &arg_2c;
                        ebp_2 = &arg_54;
                    }
                    else
                    {
                        eax_52 = &arg_54;
                        edx_8 = &arg_4;
                        ebp_2 = &arg_2c;
                    }

                    long double x87_r7_149 = (g_bcabd4 - eax_52[1]) / (ebp_2[1] - eax_52[1]);
                    memcpy(&var_d8, ebp_2, 0x28);
                    *ebp_2 = (*ebp_2 - *eax_52) * x87_r7_149 + *eax_52;
                    ebp_2[1] = (ebp_2[1] - eax_52[1]) * x87_r7_149 + eax_52[1];
                    ebp_2[2] = (ebp_2[2] - eax_52[2]) * x87_r7_149 + eax_52[2];
                    ebp_2[6] = (ebp_2[6] - eax_52[6]) * x87_r7_149 + eax_52[6];
                    ebp_2[7] = (ebp_2[7] - eax_52[7]) * x87_r7_149 + eax_52[7];
                    ebp_2[8] = (ebp_2[8] - eax_52[8]) * x87_r7_149 + eax_52[8];
                    ebp_2[3] = (ebp_2[3] - eax_52[3]) * x87_r7_149 + eax_52[3];
                    ebp_2[4] = (ebp_2[4] - eax_52[4]) * x87_r7_149 + eax_52[4];
                    ebp_2[5] = (ebp_2[5] - eax_52[5]) * x87_r7_149 + eax_52[5];
                    long double x87_r7_152 = g_bcabd8 + 1f;
                    long double temp6_1 = *ebp_2;
                    x87_r7_152 - temp6_1;
                    int32_t ecx_10;

                    ecx_10 = !(*(&((x87_r7_152 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_152, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_152 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_154 = g_bcabdc + 1f;
                    long double temp13_1 = ebp_2[1];
                    x87_r7_154 - temp13_1;
                    int32_t eax_54;

                    eax_54 = !(*(&((x87_r7_154 < temp13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_154, temp13_1) ? 1 : 0) << 0xa
                        | (x87_r7_154 == temp13_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    ebp_2[9] = ((eax_54 * 2) | ecx_10) << 2;
                    long double x87_r7_156 = var_d4 - edx_8[1];
                    float var_dc_6 = (g_bcabd4 - edx_8[1]) / x87_r7_156;
                    var_d8 = (var_d8 - *edx_8) * var_dc_6 + *edx_8;
                    long double x87_r7_158 = x87_r7_156 * var_dc_6 + edx_8[1];
                    var_d4 = x87_r7_158;
                    var_d0 = (var_d0 - edx_8[2]) * var_dc_6 + edx_8[2];
                    var_c0 = (var_c0 - edx_8[6]) * var_dc_6 + edx_8[6];
                    var_bc = (var_bc - edx_8[7]) * var_dc_6 + edx_8[7];
                    var_b8 = (var_b8 - edx_8[8]) * var_dc_6 + edx_8[8];
                    var_cc = (var_cc - edx_8[3]) * var_dc_6 + edx_8[3];
                    var_c8 = (var_c8 - edx_8[4]) * var_dc_6 + edx_8[4];
                    var_c4 = (var_c4 - edx_8[5]) * var_dc_6 + edx_8[5];
                    long double x87_r6_170 = g_bcabd8 + 1f;
                    long double temp18_1 = var_d8;
                    x87_r6_170 - temp18_1;
                    int32_t ecx_11;

                    ecx_11 = !(*(&((x87_r6_170 < temp18_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_170, temp18_1) ? 1 : 0) << 0xa
                        | (x87_r6_170 == temp18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                    long double x87_r6_172 = g_bcabdc + 1f;
                    x87_r7_158 - x87_r6_172;
                    int32_t eax_59;

                    eax_59 = *(&((x87_r7_158 < x87_r6_172 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_158, x87_r6_172) ? 1 : 0) << 0xa
                        | (x87_r7_158 == x87_r6_172 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    var_b4 = ((eax_59 * 2) | ecx_11) << 2;
                    int32_t var_f0_2 = a9;
                    ebx_4 = a2 | a4 | a6;
                    int32_t var_f4_2 = a8;
                    int32_t var_f8_2 = a7;
                    memcpy(&var_120, ebp_2, 0x28);
                    memcpy(&var_148, &var_d8, 0x28);
                    memcpy(&var_170, edx_8, 0x28);
                    sub_50bf20();
                    eax = a6;
                    ecx = a4;
                    edx = a2;
                    esi_16 = a2 & a4 & a6;
                }
                else
                {
                    float* eax_41;
                    float* ecx_9;
                    float* edx_6;
                    float* esi_13;

                    if (!edx_5)
                    {
                        eax_41 = &arg_4;
                        edx_6 = &arg_4;
                        esi_13 = &arg_2c;
                        ecx_9 = &arg_54;
                    }
                    else if (ecx_8)
                    {
                        eax_41 = &arg_54;
                        edx_6 = &arg_54;
                        esi_13 = &arg_4;
                        ecx_9 = &arg_2c;
                    }
                    else
                    {
                        eax_41 = &arg_2c;
                        edx_6 = &arg_2c;
                        esi_13 = &arg_54;
                        ecx_9 = &arg_4;
                    }

                    long double x87_r7_133 = (g_bcabd4 - eax_41[1]) / (esi_13[1] - eax_41[1]);
                    *esi_13 = (*esi_13 - *eax_41) * x87_r7_133 + *eax_41;
                    esi_13[1] = (esi_13[1] - eax_41[1]) * x87_r7_133 + eax_41[1];
                    esi_13[2] = (esi_13[2] - eax_41[2]) * x87_r7_133 + eax_41[2];
                    esi_13[6] = (esi_13[6] - eax_41[6]) * x87_r7_133 + eax_41[6];
                    esi_13[7] = (esi_13[7] - eax_41[7]) * x87_r7_133 + eax_41[7];
                    esi_13[8] = (esi_13[8] - eax_41[8]) * x87_r7_133 + eax_41[8];
                    esi_13[3] = (esi_13[3] - eax_41[3]) * x87_r7_133 + eax_41[3];
                    esi_13[4] = (esi_13[4] - eax_41[4]) * x87_r7_133 + eax_41[4];
                    esi_13[5] = (esi_13[5] - eax_41[5]) * x87_r7_133 + eax_41[5];
                    long double x87_r7_136 = g_bcabd8 + 1f;
                    long double temp2_1 = *esi_13;
                    x87_r7_136 - temp2_1;
                    int32_t edi_2;

                    edi_2 = !(*(&((x87_r7_136 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_136, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_136 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_138 = g_bcabdc + 1f;
                    long double temp7_1 = esi_13[1];
                    x87_r7_138 - temp7_1;
                    int32_t eax_43;

                    eax_43 = !(*(&((x87_r7_138 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_138, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_138 == temp7_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    esi_13[9] = ((eax_43 * 2) | edi_2) << 2;
                    long double x87_r7_141 = (g_bcabd4 - edx_6[1]) / (ecx_9[1] - edx_6[1]);
                    *ecx_9 = (*ecx_9 - *edx_6) * x87_r7_141 + *edx_6;
                    ecx_9[1] = (ecx_9[1] - edx_6[1]) * x87_r7_141 + edx_6[1];
                    ecx_9[2] = (ecx_9[2] - edx_6[2]) * x87_r7_141 + edx_6[2];
                    ecx_9[6] = (ecx_9[6] - edx_6[6]) * x87_r7_141 + edx_6[6];
                    ecx_9[7] = (ecx_9[7] - edx_6[7]) * x87_r7_141 + edx_6[7];
                    ecx_9[8] = (ecx_9[8] - edx_6[8]) * x87_r7_141 + edx_6[8];
                    ecx_9[3] = (ecx_9[3] - edx_6[3]) * x87_r7_141 + edx_6[3];
                    ecx_9[4] = (ecx_9[4] - edx_6[4]) * x87_r7_141 + edx_6[4];
                    ecx_9[5] = (ecx_9[5] - edx_6[5]) * x87_r7_141 + edx_6[5];
                    long double x87_r7_144 = g_bcabd8 + 1f;
                    long double temp14_1 = *ecx_9;
                    x87_r7_144 - temp14_1;
                    int32_t edx_7;

                    edx_7 = !(*(&((x87_r7_144 < temp14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_144, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_144 == temp14_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_146 = g_bcabdc + 1f;
                    long double temp19_1 = ecx_9[1];
                    x87_r7_146 - temp19_1;
                    int32_t eax_48;

                    eax_48 = !(*(&((x87_r7_146 < temp19_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_146, temp19_1) ? 1 : 0) << 0xa
                        | (x87_r7_146 == temp19_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    ecx_9[9] = ((eax_48 * 2) | edx_7) << 2;
                    edx = a2;
                    ecx = a4;
                    eax = a6;
                    ebx_4 = edx | ecx | eax;
                    esi_16 = edx & ecx & eax;
                }

                if (!esi_16)
                    goto label_50ca39;
            }
        }
    }

    int32_t result = g_a7da08 - 1;
    g_a7da08 = result;
    return result;
}
