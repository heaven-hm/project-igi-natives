#include "00514760-Terrain_BuildMipMaps_2.h"
/* 0x00514760 Terrain_BuildMipMaps_2 full linked: callers=7 callees=26 */
uint32_t sub_514760(char a1 @ 0x24, char a2 @ 0x64, int32_t a3 @ 0xa4, int32_t* a4 @ 0xc4)

{
    void arg_44;
    void* var_40 = &arg_44;
    g_a7e070 += 1;
    char ecx_2 = a1;
    void arg_4;
    void* var_44 = &arg_4;
    void arg_84;
    void* var_3c = &arg_84;
    int32_t edx = a3;
    uint32_t eax_1 = ecx_2;
    uint32_t edi_1 = a2;
    uint32_t esi_1 = edx;
    uint32_t ebx_2 = eax_1 | edi_1 | esi_1;
    uint32_t ebp_2 = eax_1 & edi_1 & esi_1;
    uint32_t var_a0 = ebp_2;

    if (ebp_2)
    {
        g_a7e070 -= 1;
        return eax_1;
    }

    void var_174;
    void var_134;
    void var_f4;
    float var_90;
    float var_8c;
    float var_88;
    float var_68;
    float var_64;
    float var_60;
    float var_5c;
    float var_58;
    float var_54;
    uint32_t var_50;

    if (ebx_2 & 0x10)
    {
        void** esi_3 = &var_44;
        int32_t eax_5;
        int32_t edx_1;
        edx_1 = HIGHD((eax_1 & 0x10) + (edi_1 & 0x10) + (esi_1 & 0x10));
        eax_5 = LOWD((eax_1 & 0x10) + (edi_1 & 0x10) + (esi_1 & 0x10));
        int32_t i_5 = 3;
        void var_30;
        float* edx_3 = &var_30;
        int32_t eax_7 = (eax_5 + (edx_1 & 0xf)) >> 4;
        int32_t var_48_1 = eax_7;
        int32_t i;

        do
        {
            float* ecx_3 = *esi_3;
            ecx_3[9] = edx_3;

            if (ecx_3[8] & 0x10)
            {
                *edx_3 = *ecx_3;
                edx_3[1] = ecx_3[1];
                edx_3[2] = ecx_3[2];
                eax_7 = var_48_1;
            }
            else
            {
                edx_3[2] = 1f / ecx_3[2];
                *edx_3 = (*ecx_3 - g_c311b0) / (g_c311a4 * ecx_3[2]);
                edx_3[1] = (ecx_3[1] - g_c311b4) / (g_c311a0 * ecx_3[2]);
            }

            int32_t var_94_1 = 0;
            int32_t var_9c_1 = 0;
            int32_t var_34_1 = 0;
            int32_t var_4c_1 = 0;
            edx_3 = &edx_3[3];
            esi_3 = &esi_3[1];
            ecx_3[0xa] = ecx_3[4] >> 0x10;
            ecx_3[0xb] = ecx_3[4] >> 8;
            ecx_3[0xc] = ecx_3[4];
            ecx_3[0xd] = ecx_3[6];
            ecx_3[0xe] = ecx_3[7];
            var_50 = ecx_3[5] >> 0x18;
            i = i_5;
            i_5 -= 1;
            ecx_3[0xf] = var_50;
        } while (i != 1);

        if (eax_7 != 2)
        {
            void* eax_27;
            float* edx_16;
            void* ebp_5;

            if (a1 & 0x10)
            {
                eax_27 = &arg_44;
                ebp_5 = &arg_84;
                edx_16 = &arg_4;
            }
            else if (!(a2 & 0x10))
            {
                eax_27 = &arg_4;
                ebp_5 = &arg_44;
                edx_16 = &arg_84;
            }
            else
            {
                eax_27 = &arg_84;
                ebp_5 = &arg_4;
                edx_16 = &arg_44;
            }

            memcpy(&var_90, edx_16, 0x40);
            long double x87_r7_59 = g_bcadc0;
            float var_c;
            int32_t* var_6c_1 = &var_c;
            int32_t* ecx_8 = edx_16[9];
            var_c = *ecx_8;
            float esi_7 = ecx_8[1];
            float ecx_9 = ecx_8[2];
            float* ecx_10 = *(eax_27 + 0x24);
            float* esi_8 = edx_16[9];
            long double x87_r7_61 = (x87_r7_59 - ecx_10[2]) / (esi_8[2] - ecx_10[2]);
            *esi_8 = (*esi_8 - *ecx_10) * x87_r7_61 + *ecx_10;
            void* ecx_11 = edx_16[9];
            void* esi_9 = *(eax_27 + 0x24);
            *(ecx_11 + 4) = (*(ecx_11 + 4) - *(esi_9 + 4)) * x87_r7_61 + *(esi_9 + 4);
            void* ecx_12 = edx_16[9];
            void* esi_10 = *(eax_27 + 0x24);
            *(ecx_12 + 8) = (*(ecx_12 + 8) - *(esi_10 + 8)) * x87_r7_61 + *(esi_10 + 8);
            edx_16[0xa] = (edx_16[0xa] - *(eax_27 + 0x28)) * x87_r7_61 + *(eax_27 + 0x28);
            edx_16[0xb] = (edx_16[0xb] - *(eax_27 + 0x2c)) * x87_r7_61 + *(eax_27 + 0x2c);
            edx_16[0xc] = (edx_16[0xc] - *(eax_27 + 0x30)) * x87_r7_61 + *(eax_27 + 0x30);
            edx_16[0xd] = (edx_16[0xd] - *(eax_27 + 0x34)) * x87_r7_61 + *(eax_27 + 0x34);
            edx_16[0xe] = (edx_16[0xe] - *(eax_27 + 0x38)) * x87_r7_61 + *(eax_27 + 0x38);
            edx_16[0xf] = (edx_16[0xf] - *(eax_27 + 0x3c)) * x87_r7_61 + *(eax_27 + 0x3c);
            float* eax_28 = edx_16[9];
            char var_98_4 = 1;
            long double x87_r7_64 = 1f / eax_28[2];
            edx_16[2] = x87_r7_64;
            *edx_16 = x87_r7_64 * *eax_28 * g_c311a4 + g_c311b0;
            edx_16[1] = eax_28[1] * edx_16[2] * g_c311a0 + g_c311b4;
            long double x87_r7_72 = *edx_16;
            long double temp15_1 = g_bcabd0;
            x87_r7_72 - temp15_1;

            if (!(*(&((x87_r7_72 < temp15_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_72, temp15_1) ? 1 : 0) << 0xa
                    | (x87_r7_72 == temp15_1 ? 1 : 0) << 0xe) + 1) & 1))
                var_98_4 = 0;

            long double x87_r7_73 = edx_16[1];
            long double temp18_1 = g_bcabd4;
            x87_r7_73 - temp18_1;
            char ebx_23;

            ebx_23 = !(*(&((x87_r7_73 < temp18_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_73, temp18_1) ? 1 : 0) << 0xa
                | (x87_r7_73 == temp18_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_74 = *edx_16;
            long double temp25_1 = g_bcabd8;
            x87_r7_74 - temp25_1;
            char ecx_13;

            ecx_13 = *(&((x87_r7_74 < temp25_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_74, temp25_1) ? 1 : 0) << 0xa
                | (x87_r7_74 == temp25_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_75 = edx_16[1];
            long double temp30_1 = g_bcabdc;
            x87_r7_75 - temp30_1;
            char eax_30;

            eax_30 = *(&((x87_r7_75 < temp30_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_75, temp30_1) ? 1 : 0) << 0xa
                | (x87_r7_75 == temp30_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            edx_16[8] = ((eax_30 << 1 | ecx_13) << 1 | ebx_23) << 1 | var_98_4;
            float* eax_32 = *(ebp_5 + 0x24);
            long double x87_r7_78 = (g_bcadc0 - eax_32[2]) / (ecx_9 - eax_32[2]);
            var_c = (var_c - *eax_32) * x87_r7_78 + *eax_32;
            void* eax_33 = *(ebp_5 + 0x24);
            float var_8_2 = (esi_7 - *(eax_33 + 4)) * x87_r7_78 + *(eax_33 + 4);
            void* eax_34 = *(ebp_5 + 0x24);
            float var_68_1 = (var_68 - *(ebp_5 + 0x28)) * x87_r7_78 + *(ebp_5 + 0x28);
            float var_64_1 = (var_64 - *(ebp_5 + 0x2c)) * x87_r7_78 + *(ebp_5 + 0x2c);
            float var_60_1 = (var_60 - *(ebp_5 + 0x30)) * x87_r7_78 + *(ebp_5 + 0x30);
            float var_5c_1 = (var_5c - *(ebp_5 + 0x34)) * x87_r7_78 + *(ebp_5 + 0x34);
            float var_58_1 = (var_58 - *(ebp_5 + 0x38)) * x87_r7_78 + *(ebp_5 + 0x38);
            long double x87_r7_80 = x87_r7_78 * (var_54 - *(ebp_5 + 0x3c)) + *(ebp_5 + 0x3c);
            long double x87_r6_156 = 1f / ((ecx_9 - *(eax_34 + 8)) * x87_r7_78 + *(eax_34 + 8));
            var_88 = x87_r6_156;
            long double x87_r6_159 = x87_r6_156 * var_c * g_c311a4 + g_c311b0;
            var_90 = x87_r6_159;
            long double x87_r5_4 = var_88 * var_8_2 * g_c311a0 + g_c311b4;
            char var_98_5 = 1;
            var_8c = x87_r5_4;
            long double temp35_1 = g_bcabd0;
            x87_r6_159 - temp35_1;

            if (!(*(&((x87_r6_159 < temp35_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_159, temp35_1) ? 1 : 0) << 0xa
                    | (x87_r6_159 == temp35_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1))
                var_98_5 = 0;

            long double temp37_1 = g_bcabd4;
            x87_r5_4 - temp37_1;
            char ebx_24;

            ebx_24 = !(*(&((x87_r5_4 < temp37_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_4, temp37_1) ? 1 : 0) << 0xa
                | (x87_r5_4 == temp37_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

            long double temp39_1 = g_bcabd8;
            x87_r6_159 - temp39_1;
            char ecx_15;

            ecx_15 = *(&((x87_r6_159 < temp39_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_159, temp39_1) ? 1 : 0) << 0xa
                | (x87_r6_159 == temp39_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

            long double x87_r6_160 = var_8c;
            long double temp41_1 = g_bcabdc;
            x87_r6_160 - temp41_1;
            char eax_36;

            eax_36 = *(&((x87_r6_160 < temp41_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_160, temp41_1) ? 1 : 0) << 0xa
                | (x87_r6_160 == temp41_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

            char var_70_1 = ((eax_36 << 1 | ecx_15) << 1 | ebx_24) << 1 | var_98_5;
            uint32_t eax_39 = a1;
            uint32_t esi_12 = a2;
            uint32_t ecx_17 = a3;
            ebx_2 = eax_39 | esi_12 | ecx_17;
            void** ecx_18 = &var_44;
            int32_t i_4 = 3;
            int32_t i_1;

            do
            {
                void* eax_42 = *ecx_18;
                ecx_18 = &ecx_18[1];
                i_1 = i_4;
                i_4 -= 1;
                *(eax_42 + 0x28) = *(eax_42 + 8) * *(eax_42 + 0x28);
                *(eax_42 + 0x2c) = *(eax_42 + 8) * *(eax_42 + 0x2c);
                *(eax_42 + 0x30) = *(eax_42 + 8) * *(eax_42 + 0x30);
                *(eax_42 + 0x34) = *(eax_42 + 8) * *(eax_42 + 0x34);
                *(eax_42 + 0x38) = *(eax_42 + 8) * *(eax_42 + 0x38);
                *(eax_42 + 0x3c) = *(eax_42 + 8) * *(eax_42 + 0x3c);
            } while (i_1 != 1);
            int32_t* var_b4_1 = a4;
            var_68 = var_88 * var_68_1;
            memcpy(&var_f4, edx_16, 0x40);
            var_64 = var_88 * var_64_1;
            var_60 = var_88 * var_60_1;
            var_5c = var_88 * var_5c_1;
            var_58 = var_88 * var_58_1;
            var_54 = var_88 * x87_r7_80;
            memcpy(&var_134, &var_90, 0x40);
            memcpy(&var_174, ebp_5, 0x40);
            eax_1 = sub_514760();
            edx = a3;
            ecx_2 = a1;
            ebp_2 = eax_39 & esi_12 & ecx_17;
        }
        else
        {
            void* eax_11;
            float* ecx_4;
            float* esi_4;
            void* edi_3;

            if (!(a1 & 0x10))
            {
                eax_11 = &arg_4;
                edi_3 = &arg_4;
                esi_4 = &arg_44;
                ecx_4 = &arg_84;
            }
            else if (a2 & 0x10)
            {
                eax_11 = &arg_84;
                edi_3 = &arg_84;
                esi_4 = &arg_4;
                ecx_4 = &arg_44;
            }
            else
            {
                eax_11 = &arg_44;
                edi_3 = &arg_44;
                esi_4 = &arg_84;
                ecx_4 = &arg_4;
            }

            float* edx_4 = *(eax_11 + 0x24);
            float* ebx_16 = esi_4[9];
            long double x87_r7_15 = (g_bcadc0 - edx_4[2]) / (ebx_16[2] - edx_4[2]);
            *ebx_16 = (*ebx_16 - *edx_4) * x87_r7_15 + *edx_4;
            void* edx_5 = esi_4[9];
            void* ebx_17 = *(eax_11 + 0x24);
            *(edx_5 + 4) = (*(edx_5 + 4) - *(ebx_17 + 4)) * x87_r7_15 + *(ebx_17 + 4);
            void* edx_6 = esi_4[9];
            void* ebx_18 = *(eax_11 + 0x24);
            *(edx_6 + 8) = (*(edx_6 + 8) - *(ebx_18 + 8)) * x87_r7_15 + *(ebx_18 + 8);
            esi_4[0xa] = (esi_4[0xa] - *(eax_11 + 0x28)) * x87_r7_15 + *(eax_11 + 0x28);
            esi_4[0xb] = (esi_4[0xb] - *(eax_11 + 0x2c)) * x87_r7_15 + *(eax_11 + 0x2c);
            esi_4[0xc] = (esi_4[0xc] - *(eax_11 + 0x30)) * x87_r7_15 + *(eax_11 + 0x30);
            esi_4[0xd] = (esi_4[0xd] - *(eax_11 + 0x34)) * x87_r7_15 + *(eax_11 + 0x34);
            esi_4[0xe] = (esi_4[0xe] - *(eax_11 + 0x38)) * x87_r7_15 + *(eax_11 + 0x38);
            float* eax_12 = esi_4[9];
            esi_4[0xf] = (esi_4[0xf] - *(eax_11 + 0x3c)) * x87_r7_15 + *(eax_11 + 0x3c);
            long double x87_r7_18 = 1f / eax_12[2];
            esi_4[2] = x87_r7_18;
            *esi_4 = x87_r7_18 * g_c311a4 * *eax_12 + g_c311b0;
            esi_4[1] = g_c311a0 * eax_12[1] * esi_4[2] + g_c311b4;
            long double x87_r7_26 = *esi_4;
            long double temp6_1 = g_bcabd0;
            x87_r7_26 - temp6_1;
            char var_98_2 = 1;

            if (!(*(&((x87_r7_26 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_26, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_26 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1))
                var_98_2 = 0;

            long double x87_r7_27 = esi_4[1];
            long double temp10_1 = g_bcabd4;
            x87_r7_27 - temp10_1;
            char ebx_19;

            ebx_19 = !(*(&((x87_r7_27 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_27, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_27 == temp10_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_28 = *esi_4;
            long double temp19_1 = g_bcabd8;
            x87_r7_28 - temp19_1;
            char edx_7;

            edx_7 = *(&((x87_r7_28 < temp19_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_28, temp19_1) ? 1 : 0) << 0xa
                | (x87_r7_28 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_29 = esi_4[1];
            long double temp26_1 = g_bcabdc;
            x87_r7_29 - temp26_1;
            char eax_14;

            eax_14 = *(&((x87_r7_29 < temp26_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_29, temp26_1) ? 1 : 0) << 0xa
                | (x87_r7_29 == temp26_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            esi_4[8] = ((eax_14 << 1 | edx_7) << 1 | ebx_19) << 1 | var_98_2;
            float* eax_16 = *(edi_3 + 0x24);
            float* edx_9 = ecx_4[9];
            long double x87_r7_32 = (g_bcadc0 - eax_16[2]) / (edx_9[2] - eax_16[2]);
            *edx_9 = (*edx_9 - *eax_16) * x87_r7_32 + *eax_16;
            void* eax_17 = ecx_4[9];
            void* edx_10 = *(edi_3 + 0x24);
            *(eax_17 + 4) = (*(eax_17 + 4) - *(edx_10 + 4)) * x87_r7_32 + *(edx_10 + 4);
            void* eax_18 = ecx_4[9];
            void* edx_11 = *(edi_3 + 0x24);
            *(eax_18 + 8) = (*(eax_18 + 8) - *(edx_11 + 8)) * x87_r7_32 + *(edx_11 + 8);
            float* eax_19 = ecx_4[9];
            ecx_4[0xa] = (ecx_4[0xa] - *(edi_3 + 0x28)) * x87_r7_32 + *(edi_3 + 0x28);
            ecx_4[0xb] = (ecx_4[0xb] - *(edi_3 + 0x2c)) * x87_r7_32 + *(edi_3 + 0x2c);
            ecx_4[0xc] = (ecx_4[0xc] - *(edi_3 + 0x30)) * x87_r7_32 + *(edi_3 + 0x30);
            ecx_4[0xd] = (ecx_4[0xd] - *(edi_3 + 0x34)) * x87_r7_32 + *(edi_3 + 0x34);
            ecx_4[0xe] = (ecx_4[0xe] - *(edi_3 + 0x38)) * x87_r7_32 + *(edi_3 + 0x38);
            ecx_4[0xf] = (ecx_4[0xf] - *(edi_3 + 0x3c)) * x87_r7_32 + *(edi_3 + 0x3c);
            long double x87_r7_35 = 1f / eax_19[2];
            ecx_4[2] = x87_r7_35;
            char var_98_3 = 1;
            *ecx_4 = x87_r7_35 * *eax_19 * g_c311a4 + g_c311b0;
            ecx_4[1] = eax_19[1] * ecx_4[2] * g_c311a0 + g_c311b4;
            long double x87_r7_43 = *ecx_4;
            long double temp31_1 = g_bcabd0;
            x87_r7_43 - temp31_1;

            if (!(*(&((x87_r7_43 < temp31_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_43, temp31_1) ? 1 : 0) << 0xa
                    | (x87_r7_43 == temp31_1 ? 1 : 0) << 0xe) + 1) & 1))
                var_98_3 = 0;

            long double x87_r7_44 = ecx_4[1];
            long double temp34_1 = g_bcabd4;
            x87_r7_44 - temp34_1;
            char ebx_20;

            ebx_20 = !(*(&((x87_r7_44 < temp34_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_44, temp34_1) ? 1 : 0) << 0xa
                | (x87_r7_44 == temp34_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_45 = *ecx_4;
            long double temp38_1 = g_bcabd8;
            x87_r7_45 - temp38_1;
            char edx_12;

            edx_12 = *(&((x87_r7_45 < temp38_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_45, temp38_1) ? 1 : 0) << 0xa
                | (x87_r7_45 == temp38_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_46 = ecx_4[1];
            long double temp40_1 = g_bcabdc;
            x87_r7_46 - temp40_1;
            char eax_21;

            eax_21 = *(&((x87_r7_46 < temp40_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_46, temp40_1) ? 1 : 0) << 0xa
                | (x87_r7_46 == temp40_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            ecx_4[8] = ((eax_21 << 1 | edx_12) << 1 | ebx_20) << 1 | var_98_3;
            uint32_t eax_24 = a1;
            uint32_t edx_15 = a2;
            uint32_t ecx_6 = a3;
            ebx_2 = eax_24 | edx_15 | ecx_6;
            ebp_2 = eax_24 & edx_15 & ecx_6;
            void** ecx_7 = &var_44;
            int32_t i_3 = 3;
            int32_t i_2;

            do
            {
                eax_1 = *ecx_7;
                ecx_7 = &ecx_7[1];
                i_2 = i_3;
                i_3 -= 1;
                *(eax_1 + 0x28) = *(eax_1 + 0x28) * *(eax_1 + 8);
                *(eax_1 + 0x2c) = *(eax_1 + 0x2c) * *(eax_1 + 8);
                *(eax_1 + 0x30) = *(eax_1 + 0x30) * *(eax_1 + 8);
                *(eax_1 + 0x34) = *(eax_1 + 0x34) * *(eax_1 + 8);
                *(eax_1 + 0x38) = *(eax_1 + 0x38) * *(eax_1 + 8);
                *(eax_1 + 0x3c) = *(eax_1 + 0x3c) * *(eax_1 + 8);
            } while (i_2 != 1);
            edx = a3;
            ecx_2 = a1;
        }
    }

    if (ebp_2)
    {
        g_a7e070 -= 1;
        return eax_1;
    }

    if (ebx_2 & 1)
    {
        ebx_2 = a2;
        eax_1 = ecx_2;

        if ((eax_1 & 1) + (ebx_2 & 1) + (edx & 1) != 2)
        {
            float* eax_56;
            float* edx_20;
            float* ebp_6;

            if (ecx_2 & 1)
            {
                eax_56 = &arg_44;
                edx_20 = &arg_84;
                ebp_6 = &arg_4;
            }
            else if (!(a2 & 1))
            {
                eax_56 = &arg_4;
                edx_20 = &arg_44;
                ebp_6 = &arg_84;
            }
            else
            {
                eax_56 = &arg_84;
                edx_20 = &arg_4;
                ebp_6 = &arg_44;
            }

            long double x87_r7_161 = *ebp_6 - *eax_56;
            long double x87_r6_193 = (g_bcabd0 - *eax_56) / x87_r7_161;
            memcpy(&var_90, ebp_6, 0x40);
            float var_a0_5 = x87_r6_193;
            *ebp_6 = x87_r7_161 * var_a0_5 + *eax_56;
            ebp_6[1] = (ebp_6[1] - eax_56[1]) * var_a0_5 + eax_56[1];
            ebp_6[2] = (ebp_6[2] - eax_56[2]) * var_a0_5 + eax_56[2];
            ebp_6[0xa] = (ebp_6[0xa] - eax_56[0xa]) * var_a0_5 + eax_56[0xa];
            ebp_6[0xb] = (ebp_6[0xb] - eax_56[0xb]) * var_a0_5 + eax_56[0xb];
            ebp_6[0xc] = (ebp_6[0xc] - eax_56[0xc]) * var_a0_5 + eax_56[0xc];
            ebp_6[0xd] = (ebp_6[0xd] - eax_56[0xd]) * var_a0_5 + eax_56[0xd];
            ebp_6[0xe] = (ebp_6[0xe] - eax_56[0xe]) * var_a0_5 + eax_56[0xe];
            ebp_6[0xf] = (ebp_6[0xf] - eax_56[0xf]) * var_a0_5 + eax_56[0xf];
            long double x87_r7_196 = ebp_6[1];
            long double temp4_1 = g_bcabd4;
            x87_r7_196 - temp4_1;
            char ebx_33;

            ebx_33 = !(*(&((x87_r7_196 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_196, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_196 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_197 = *ebp_6;
            long double temp13_1 = g_bcabd8;
            x87_r7_197 - temp13_1;
            char ecx_20;

            ecx_20 = *(&((x87_r7_197 < temp13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_197, temp13_1) ? 1 : 0) << 0xa
                | (x87_r7_197 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_198 = ebp_6[1];
            long double temp21_1 = g_bcabdc;
            x87_r7_198 - temp21_1;
            char eax_58;

            eax_58 = *(&((x87_r7_198 < temp21_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_198, temp21_1) ? 1 : 0) << 0xa
                | (x87_r7_198 == temp21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t eax_59;
            eax_59 = eax_58 << 1;
            long double x87_r7_199 = var_90;
            eax_59 |= ecx_20;
            eax_59 <<= 1;
            eax_59 |= ebx_33;
            eax_59 <<= 1;
            ebp_6[8] = eax_59;
            long double x87_r7_200 = x87_r7_199 - *edx_20;
            float var_a0_6 = (g_bcabd0 - *edx_20) / x87_r7_200;
            long double x87_r7_202 = x87_r7_200 * var_a0_6 + *edx_20;
            var_90 = x87_r7_202;
            long double x87_r6_200 = (var_8c - edx_20[1]) * var_a0_6 + edx_20[1];
            var_8c = x87_r6_200;
            var_88 = (var_88 - edx_20[2]) * var_a0_6 + edx_20[2];
            var_68 = (var_68 - edx_20[0xa]) * var_a0_6 + edx_20[0xa];
            var_64 = (var_64 - edx_20[0xb]) * var_a0_6 + edx_20[0xb];
            var_60 = (var_60 - edx_20[0xc]) * var_a0_6 + edx_20[0xc];
            var_5c = (var_5c - edx_20[0xd]) * var_a0_6 + edx_20[0xd];
            var_58 = (var_58 - edx_20[0xe]) * var_a0_6 + edx_20[0xe];
            var_54 = (var_54 - edx_20[0xf]) * var_a0_6 + edx_20[0xf];
            long double temp27_1 = g_bcabd4;
            x87_r6_200 - temp27_1;
            char ebx_34;

            ebx_34 = !(*(&((x87_r6_200 < temp27_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_200, temp27_1) ? 1 : 0) << 0xa
                | (x87_r6_200 == temp27_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

            long double temp32_1 = g_bcabd8;
            x87_r7_202 - temp32_1;
            char ecx_21;

            ecx_21 = *(&((x87_r7_202 < temp32_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_202, temp32_1) ? 1 : 0) << 0xa
                | (x87_r7_202 == temp32_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_203 = var_8c;
            long double temp36_1 = g_bcabdc;
            x87_r7_203 - temp36_1;
            char eax_60;

            eax_60 = *(&((x87_r7_203 < temp36_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_203, temp36_1) ? 1 : 0) << 0xa
                | (x87_r7_203 == temp36_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            char var_70_2 = ((eax_60 << 1 | ecx_21) << 1 | ebx_34) << 1;
            uint32_t eax_63 = a1;
            uint32_t esi_20 = a2;
            uint32_t ecx_23 = a3;
            ebx_2 = eax_63 | esi_20 | ecx_23;
            int32_t* var_b4_2 = a4;
            memcpy(&var_f4, ebp_6, 0x40);
            memcpy(&var_134, &var_90, 0x40);
            memcpy(&var_174, edx_20, 0x40);
            sub_514760();
            edx = a3;
            ecx_2 = a1;
            eax_1 = eax_63 & esi_20 & ecx_23;
        }
        else
        {
            float* eax_47;
            float* ecx_19;
            float* esi_15;
            float* edi_4;

            if (!(ecx_2 & 1))
            {
                eax_47 = &arg_4;
                esi_15 = &arg_4;
                edi_4 = &arg_44;
                ecx_19 = &arg_84;
            }
            else if (a2 & 1)
            {
                eax_47 = &arg_84;
                esi_15 = &arg_84;
                edi_4 = &arg_4;
                ecx_19 = &arg_44;
            }
            else
            {
                eax_47 = &arg_44;
                esi_15 = &arg_44;
                edi_4 = &arg_84;
                ecx_19 = &arg_4;
            }

            long double x87_r7_83 = *edi_4 - *eax_47;
            float var_a0_3 = (g_bcabd0 - *eax_47) / x87_r7_83;
            *edi_4 = x87_r7_83 * var_a0_3 + *eax_47;
            edi_4[1] = (edi_4[1] - eax_47[1]) * var_a0_3 + eax_47[1];
            edi_4[2] = (edi_4[2] - eax_47[2]) * var_a0_3 + eax_47[2];
            edi_4[0xa] = (edi_4[0xa] - eax_47[0xa]) * var_a0_3 + eax_47[0xa];
            edi_4[0xb] = (edi_4[0xb] - eax_47[0xb]) * var_a0_3 + eax_47[0xb];
            edi_4[0xc] = (edi_4[0xc] - eax_47[0xc]) * var_a0_3 + eax_47[0xc];
            edi_4[0xd] = (edi_4[0xd] - eax_47[0xd]) * var_a0_3 + eax_47[0xd];
            edi_4[0xe] = (edi_4[0xe] - eax_47[0xe]) * var_a0_3 + eax_47[0xe];
            edi_4[0xf] = (edi_4[0xf] - eax_47[0xf]) * var_a0_3 + eax_47[0xf];
            long double x87_r7_118 = edi_4[1];
            long double temp1_1 = g_bcabd4;
            x87_r7_118 - temp1_1;
            char ebx_29;

            ebx_29 = !(*(&((x87_r7_118 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_118, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_118 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_119 = *edi_4;
            long double temp5_1 = g_bcabd8;
            x87_r7_119 - temp5_1;
            char edx_18;

            edx_18 = *(&((x87_r7_119 < temp5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_119, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_119 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_120 = edi_4[1];
            long double temp14_1 = g_bcabdc;
            x87_r7_120 - temp14_1;
            char eax_49;

            eax_49 = *(&((x87_r7_120 < temp14_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_120, temp14_1) ? 1 : 0) << 0xa
                | (x87_r7_120 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t eax_50;
            eax_50 = eax_49 << 1;
            eax_50 |= edx_18;
            eax_50 <<= 1;
            eax_50 |= ebx_29;
            eax_50 <<= 1;
            edi_4[8] = eax_50;
            long double x87_r7_122 = *ecx_19 - *esi_15;
            float var_a0_4 = (g_bcabd0 - *esi_15) / x87_r7_122;
            *ecx_19 = x87_r7_122 * var_a0_4 + *esi_15;
            ecx_19[1] = (ecx_19[1] - esi_15[1]) * var_a0_4 + esi_15[1];
            ecx_19[2] = (ecx_19[2] - esi_15[2]) * var_a0_4 + esi_15[2];
            ecx_19[0xa] = (ecx_19[0xa] - esi_15[0xa]) * var_a0_4 + esi_15[0xa];
            ecx_19[0xb] = (ecx_19[0xb] - esi_15[0xb]) * var_a0_4 + esi_15[0xb];
            ecx_19[0xc] = (ecx_19[0xc] - esi_15[0xc]) * var_a0_4 + esi_15[0xc];
            ecx_19[0xd] = (ecx_19[0xd] - esi_15[0xd]) * var_a0_4 + esi_15[0xd];
            ecx_19[0xe] = (ecx_19[0xe] - esi_15[0xe]) * var_a0_4 + esi_15[0xe];
            ecx_19[0xf] = (ecx_19[0xf] - esi_15[0xf]) * var_a0_4 + esi_15[0xf];
            long double x87_r7_157 = ecx_19[1];
            long double temp22_1 = g_bcabd4;
            x87_r7_157 - temp22_1;
            char ebx_30;

            ebx_30 = !(*(&((x87_r7_157 < temp22_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_157, temp22_1) ? 1 : 0) << 0xa
                | (x87_r7_157 == temp22_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_158 = *ecx_19;
            long double temp28_1 = g_bcabd8;
            x87_r7_158 - temp28_1;
            char edx_19;

            edx_19 = *(&((x87_r7_158 < temp28_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_158, temp28_1) ? 1 : 0) << 0xa
                | (x87_r7_158 == temp28_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_159 = ecx_19[1];
            long double temp33_1 = g_bcabdc;
            x87_r7_159 - temp33_1;
            char eax_51;

            eax_51 = *(&((x87_r7_159 < temp33_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_159, temp33_1) ? 1 : 0) << 0xa
                | (x87_r7_159 == temp33_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            ecx_19[8] = ((eax_51 << 1 | edx_19) << 1 | ebx_30) << 1;
            ecx_2 = a1;
            edx = a3;
            uint32_t eax_54 = ecx_2;
            uint32_t edi_6 = a2;
            uint32_t esi_17 = edx;
            ebx_2 = eax_54 | edi_6 | esi_17;
            eax_1 = eax_54 & edi_6 & esi_17;
        }

        if (eax_1)
        {
            g_a7e070 -= 1;
            return eax_1;
        }
    }

    if (ebx_2 & 2)
    {
        ebx_2 = a2;
        eax_1 = ecx_2;
        int32_t eax_69;
        int32_t edx_22;
        edx_22 = HIGHD((eax_1 & 2) + (ebx_2 & 2) + (edx & 2));
        eax_69 = LOWD((eax_1 & 2) + (ebx_2 & 2) + (edx & 2));
        int32_t eax_71 = (eax_69 - edx_22) >> 1;

        if (eax_71 != 2)
        {
            float* eax_81;
            float* edx_25;
            float* ebp_7;

            if (ecx_2 & 2)
            {
                eax_81 = &arg_44;
                edx_25 = &arg_84;
                ebp_7 = &arg_4;
            }
            else if (!(a2 & 2))
            {
                eax_81 = &arg_4;
                edx_25 = &arg_44;
                ebp_7 = &arg_84;
            }
            else
            {
                eax_81 = &arg_84;
                edx_25 = &arg_4;
                ebp_7 = &arg_44;
            }

            long double x87_r7_218 = (g_bcabd4 - eax_81[1]) / (ebp_7[1] - eax_81[1]);
            memcpy(&var_90, ebp_7, 0x40);
            *ebp_7 = (*ebp_7 - *eax_81) * x87_r7_218 + *eax_81;
            ebp_7[1] = (ebp_7[1] - eax_81[1]) * x87_r7_218 + eax_81[1];
            ebp_7[2] = (ebp_7[2] - eax_81[2]) * x87_r7_218 + eax_81[2];
            ebp_7[0xa] = (ebp_7[0xa] - eax_81[0xa]) * x87_r7_218 + eax_81[0xa];
            ebp_7[0xb] = (ebp_7[0xb] - eax_81[0xb]) * x87_r7_218 + eax_81[0xb];
            ebp_7[0xc] = (ebp_7[0xc] - eax_81[0xc]) * x87_r7_218 + eax_81[0xc];
            ebp_7[0xd] = (ebp_7[0xd] - eax_81[0xd]) * x87_r7_218 + eax_81[0xd];
            ebp_7[0xe] = (ebp_7[0xe] - eax_81[0xe]) * x87_r7_218 + eax_81[0xe];
            ebp_7[0xf] = (ebp_7[0xf] - eax_81[0xf]) * x87_r7_218 + eax_81[0xf];
            long double x87_r7_220 = *ebp_7;
            long double temp8_1 = g_bcabd8;
            x87_r7_220 - temp8_1;
            char ecx_26;

            ecx_26 = *(&((x87_r7_220 < temp8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_220, temp8_1) ? 1 : 0) << 0xa
                | (x87_r7_220 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_221 = ebp_7[1];
            long double temp16_1 = g_bcabdc;
            x87_r7_221 - temp16_1;
            char eax_83;

            eax_83 = *(&((x87_r7_221 < temp16_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_221, temp16_1) ? 1 : 0) << 0xa
                | (x87_r7_221 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t eax_84;
            eax_84 = eax_83 << 1;
            eax_84 |= ecx_26;
            eax_84 <<= 2;
            ebp_7[8] = eax_84;
            long double x87_r7_223 = var_8c - edx_25[1];
            float var_a0_8 = (g_bcabd4 - edx_25[1]) / x87_r7_223;
            var_90 = (var_90 - *edx_25) * var_a0_8 + *edx_25;
            long double x87_r7_225 = x87_r7_223 * var_a0_8 + edx_25[1];
            var_8c = x87_r7_225;
            var_88 = (var_88 - edx_25[2]) * var_a0_8 + edx_25[2];
            var_68 = (var_68 - edx_25[0xa]) * var_a0_8 + edx_25[0xa];
            var_64 = (var_64 - edx_25[0xb]) * var_a0_8 + edx_25[0xb];
            var_60 = (var_60 - edx_25[0xc]) * var_a0_8 + edx_25[0xc];
            var_5c = (var_5c - edx_25[0xd]) * var_a0_8 + edx_25[0xd];
            var_58 = (var_58 - edx_25[0xe]) * var_a0_8 + edx_25[0xe];
            var_54 = (var_54 - edx_25[0xf]) * var_a0_8 + edx_25[0xf];
            long double x87_r6_350 = var_90;
            long double temp23_1 = g_bcabd8;
            x87_r6_350 - temp23_1;
            char ecx_27;

            ecx_27 = *(&((x87_r6_350 < temp23_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_350, temp23_1) ? 1 : 0) << 0xa
                | (x87_r6_350 == temp23_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

            long double temp29_1 = g_bcabdc;
            x87_r7_225 - temp29_1;
            char eax_85;

            eax_85 = *(&((x87_r7_225 < temp29_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_225, temp29_1) ? 1 : 0) << 0xa
                | (x87_r7_225 == temp29_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            uint32_t esi_28 = a2;
            char var_70_3 = (eax_85 << 1 | ecx_27) << 2;
            uint32_t eax_88 = a1;
            uint32_t ecx_29 = a3;
            int32_t* var_b4_3 = a4;
            ebx_2 = eax_88 | esi_28 | ecx_29;
            memcpy(&var_f4, ebp_7, 0x40);
            memcpy(&var_134, &var_90, 0x40);
            memcpy(&var_174, edx_25, 0x40);
            sub_514760();
            edx = a3;
            ecx_2 = a1;
            eax_1 = eax_88 & esi_28 & ecx_29;
        }
        else
        {
            float* eax_72;
            float* ecx_25;
            float* esi_23;
            float* edi_7;

            if (!(eax_71 & ecx_2))
            {
                eax_72 = &arg_4;
                esi_23 = &arg_4;
                edi_7 = &arg_44;
                ecx_25 = &arg_84;
            }
            else if (a2 & 2)
            {
                eax_72 = &arg_84;
                esi_23 = &arg_84;
                edi_7 = &arg_4;
                ecx_25 = &arg_44;
            }
            else
            {
                eax_72 = &arg_44;
                esi_23 = &arg_44;
                edi_7 = &arg_84;
                ecx_25 = &arg_4;
            }

            long double x87_r7_206 = (g_bcabd4 - eax_72[1]) / (edi_7[1] - eax_72[1]);
            *edi_7 = (*edi_7 - *eax_72) * x87_r7_206 + *eax_72;
            edi_7[1] = (edi_7[1] - eax_72[1]) * x87_r7_206 + eax_72[1];
            edi_7[2] = (edi_7[2] - eax_72[2]) * x87_r7_206 + eax_72[2];
            edi_7[0xa] = (edi_7[0xa] - eax_72[0xa]) * x87_r7_206 + eax_72[0xa];
            edi_7[0xb] = (edi_7[0xb] - eax_72[0xb]) * x87_r7_206 + eax_72[0xb];
            edi_7[0xc] = (edi_7[0xc] - eax_72[0xc]) * x87_r7_206 + eax_72[0xc];
            edi_7[0xd] = (edi_7[0xd] - eax_72[0xd]) * x87_r7_206 + eax_72[0xd];
            edi_7[0xe] = (edi_7[0xe] - eax_72[0xe]) * x87_r7_206 + eax_72[0xe];
            edi_7[0xf] = (edi_7[0xf] - eax_72[0xf]) * x87_r7_206 + eax_72[0xf];
            long double x87_r7_208 = *edi_7;
            long double temp2_1 = g_bcabd8;
            x87_r7_208 - temp2_1;
            char edx_23;

            edx_23 = *(&((x87_r7_208 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_208, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_208 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_209 = edi_7[1];
            long double temp9_1 = g_bcabdc;
            x87_r7_209 - temp9_1;
            char eax_74;

            eax_74 = *(&((x87_r7_209 < temp9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_209, temp9_1) ? 1 : 0) << 0xa
                | (x87_r7_209 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t eax_75;
            eax_75 = eax_74 << 1;
            eax_75 |= edx_23;
            eax_75 <<= 2;
            edi_7[8] = eax_75;
            long double x87_r7_212 = (g_bcabd4 - esi_23[1]) / (ecx_25[1] - esi_23[1]);
            *ecx_25 = (*ecx_25 - *esi_23) * x87_r7_212 + *esi_23;
            ecx_25[1] = (ecx_25[1] - esi_23[1]) * x87_r7_212 + esi_23[1];
            ecx_25[2] = (ecx_25[2] - esi_23[2]) * x87_r7_212 + esi_23[2];
            ecx_25[0xa] = (ecx_25[0xa] - esi_23[0xa]) * x87_r7_212 + esi_23[0xa];
            ecx_25[0xb] = (ecx_25[0xb] - esi_23[0xb]) * x87_r7_212 + esi_23[0xb];
            ecx_25[0xc] = (ecx_25[0xc] - esi_23[0xc]) * x87_r7_212 + esi_23[0xc];
            ecx_25[0xd] = (ecx_25[0xd] - esi_23[0xd]) * x87_r7_212 + esi_23[0xd];
            ecx_25[0xe] = (ecx_25[0xe] - esi_23[0xe]) * x87_r7_212 + esi_23[0xe];
            ecx_25[0xf] = (ecx_25[0xf] - esi_23[0xf]) * x87_r7_212 + esi_23[0xf];
            long double x87_r7_214 = *ecx_25;
            long double temp17_1 = g_bcabd8;
            x87_r7_214 - temp17_1;
            char edx_24;

            edx_24 = *(&((x87_r7_214 < temp17_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_214, temp17_1) ? 1 : 0) << 0xa
                | (x87_r7_214 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_215 = ecx_25[1];
            long double temp24_1 = g_bcabdc;
            x87_r7_215 - temp24_1;
            char eax_76;

            eax_76 = *(&((x87_r7_215 < temp24_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_215, temp24_1) ? 1 : 0) << 0xa
                | (x87_r7_215 == temp24_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            ecx_25[8] = (eax_76 << 1 | edx_24) << 2;
            ecx_2 = a1;
            edx = a3;
            uint32_t eax_79 = ecx_2;
            uint32_t edi_9 = a2;
            uint32_t esi_25 = edx;
            ebx_2 = eax_79 | edi_9 | esi_25;
            eax_1 = eax_79 & edi_9 & esi_25;
        }

        if (eax_1)
        {
            g_a7e070 -= 1;
            return eax_1;
        }
    }

    if (ebx_2 & 4)
    {
        ebx_2 = a2;
        eax_1 = ecx_2;
        int32_t eax_95;
        int32_t edx_27;
        edx_27 = HIGHD((eax_1 & 4) + (ebx_2 & 4) + (edx & 4));
        eax_95 = LOWD((eax_1 & 4) + (ebx_2 & 4) + (edx & 4));

        if ((eax_95 + (edx_27 & 3)) >> 2 != 2)
        {
            float* eax_107;
            float* edx_30;
            float* ebp_8;

            if (ecx_2 & 4)
            {
                eax_107 = &arg_44;
                ebp_8 = &arg_84;
                edx_30 = &arg_4;
            }
            else if (!(a2 & 4))
            {
                eax_107 = &arg_4;
                ebp_8 = &arg_44;
                edx_30 = &arg_84;
            }
            else
            {
                eax_107 = &arg_84;
                ebp_8 = &arg_4;
                edx_30 = &arg_44;
            }

            long double x87_r7_301 = *edx_30 - *eax_107;
            long double x87_r6_359 = (g_bcabd8 - *eax_107) / x87_r7_301;
            memcpy(&var_90, edx_30, 0x40);
            float var_a0_12 = x87_r6_359;
            *edx_30 = x87_r7_301 * var_a0_12 + *eax_107;
            edx_30[1] = (edx_30[1] - eax_107[1]) * var_a0_12 + eax_107[1];
            edx_30[2] = (edx_30[2] - eax_107[2]) * var_a0_12 + eax_107[2];
            edx_30[0xa] = (edx_30[0xa] - eax_107[0xa]) * var_a0_12 + eax_107[0xa];
            edx_30[0xb] = (edx_30[0xb] - eax_107[0xb]) * var_a0_12 + eax_107[0xb];
            edx_30[0xc] = (edx_30[0xc] - eax_107[0xc]) * var_a0_12 + eax_107[0xc];
            edx_30[0xd] = (edx_30[0xd] - eax_107[0xd]) * var_a0_12 + eax_107[0xd];
            edx_30[0xe] = (edx_30[0xe] - eax_107[0xe]) * var_a0_12 + eax_107[0xe];
            edx_30[0xf] = (edx_30[0xf] - eax_107[0xf]) * var_a0_12 + eax_107[0xf];
            long double x87_r7_336 = edx_30[1];
            long double temp11_1 = g_bcabdc;
            x87_r7_336 - temp11_1;
            char eax_109;

            eax_109 = *(&((x87_r7_336 < temp11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_336, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_336 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_337 = var_90;
            int16_t eax_110;
            eax_110 = eax_109 << 3;
            edx_30[8] = eax_110;
            long double x87_r7_338 = x87_r7_337 - *ebp_8;
            float var_a0_13 = (g_bcabd8 - *ebp_8) / x87_r7_338;
            var_90 = x87_r7_338 * var_a0_13 + *ebp_8;
            long double x87_r7_344 = (var_8c - ebp_8[1]) * var_a0_13 + ebp_8[1];
            var_8c = x87_r7_344;
            var_88 = (var_88 - ebp_8[2]) * var_a0_13 + ebp_8[2];
            var_68 = (var_68 - ebp_8[0xa]) * var_a0_13 + ebp_8[0xa];
            var_64 = (var_64 - ebp_8[0xb]) * var_a0_13 + ebp_8[0xb];
            var_60 = (var_60 - ebp_8[0xc]) * var_a0_13 + ebp_8[0xc];
            var_5c = (var_5c - ebp_8[0xd]) * var_a0_13 + ebp_8[0xd];
            var_58 = (var_58 - ebp_8[0xe]) * var_a0_13 + ebp_8[0xe];
