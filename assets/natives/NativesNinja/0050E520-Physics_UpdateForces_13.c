#include "0050E520-Physics_UpdateForces_13.h"
/* 0x0050e520 Physics_UpdateForces_13 full linked: callers=1 callees=5 */
void* sub_50e520(void* a1)

{
    void* result = a1;
    void var_f8;
    memcpy(&var_f8, result, 0x14);
    int32_t ebx = 0;
    void var_6c;
    void* var_e8 = &var_6c;
    int32_t var_ec = 3;
    void* result_1 = nullptr;

    if (*(result + 0xc) > 0)
    {
        float* var_114_1 = nullptr;

        while (true)
        {
            int32_t eax = *(result + 0x10);
            int32_t edx_1 = 0;
            long double x87_r7_1 = *(var_114_1 + eax);
            long double temp0_1 = g_bcabd0;
            x87_r7_1 - temp0_1;
            edx_1 = ebx > 2;
            float* ecx_2 = var_114_1 + eax;
            int32_t ebx_1 = ebx & (edx_1 - 1);
            int32_t ebp_1;

            ebp_1 = !(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_2 = ecx_2[1];
            long double temp1_1 = g_bcabd4;
            x87_r7_2 - temp1_1;
            int32_t edi_1;

            edi_1 = !(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_4 = g_bcabd8 + 1f;
            long double temp2_1 = *ecx_2;
            x87_r7_4 - temp2_1;
            int32_t esi_1;

            esi_1 = !(*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_6 = g_bcabdc + 1f;
            long double temp3_1 = ecx_2[1];
            x87_r7_6 - temp3_1;
            int32_t edx_3;

            edx_3 = !(*(&((x87_r7_6 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_6, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_8 = 1f / ecx_2[2];
            int32_t eax_3 = ebx_1 * 0x28;
            var_c0;
            *(&var_c0 + eax_3) = (((edx_3 * 2) | esi_1) << 1 | edi_1) << 1 | ebp_1;
            int32_t var_e4[0x1e];
            var_e4[ebx_1 * 0xa] = *ecx_2;
            var_e0;
            *(&var_e0 + eax_3) = ecx_2[1];
            var_dc;
            *(&var_dc + eax_3) = x87_r7_8;
            var_d8;
            *(&var_d8 + eax_3) = x87_r7_8 * ecx_2[3];
            var_d4;
            *(&var_d4 + eax_3) = ecx_2[4] * *(&var_dc + eax_3);
            var_d0;
            *(&var_d0 + eax_3) = ecx_2[5] * *(&var_dc + eax_3);
            var_cc;
            *(&var_cc + eax_3) = ecx_2[6] * *(&var_dc + eax_3);
            var_c8;
            *(&var_c8 + eax_3) = ecx_2[7] * *(&var_dc + eax_3);
            var_c4;
            *(&var_c4 + eax_3) = ecx_2[8] * *(&var_dc + eax_3);

            if (var_114_1 > 0x24)
            {
                int32_t var_108 = 2;
                int32_t var_fc_1 = 2;
                int32_t var_10c = 1;
                int32_t var_104 = 0;
                int32_t var_100_1 = 1;
                void* var_128_1 = &var_f8;
                int32_t** (* var_12c_1)(int32_t* a1, int32_t* a2) = sub_50e730;
                int32_t var_130_1 = g_bcadc0;
                int32_t eax_5 = (&var_108)[ebx_1];
                void var_158;
                memcpy(&var_158, &var_158 + (&var_104)[ebx_1] * 0x28 + 0x74, 0x28);
                int32_t eax_7 = (&var_10c)[ebx_1];
                void var_180;
                memcpy(&var_180, &var_180 + eax_5 * 0x28 + 0x9c, 0x28);
                void var_1a8;
                memcpy(&var_1a8, &var_1a8 + eax_7 * 0x28 + 0xc4, 0x28);
                sub_50bf20();
            }

            result = result_1 + 1;
            ebx = ebx_1 + 1;
            result_1 = result;
            var_114_1 = &var_114_1[9];

            if (result >= *(a1 + 0xc))
                break;

            result = a1;
        }
    }

    return result;
}
