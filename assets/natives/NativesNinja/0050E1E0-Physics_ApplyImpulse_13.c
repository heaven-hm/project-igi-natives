#include "0050E1E0-Physics_ApplyImpulse_13.h"
/* 0x0050e1e0 Physics_ApplyImpulse_13 full linked: callers=1 callees=8 */
void* sub_50e1e0(void* a1)

{
    void* result = a1;
    int32_t var_5c;
    memcpy(&var_5c, result, 0x14);
    int32_t ebx = 0;
    void var_48;
    void* var_4c = &var_48;
    bool cond:0 = *(result + 0xc) <= 0;
    int32_t var_50 = 2;
    var_5c = 0;
    void* result_1 = nullptr;

    if (!cond:0)
    {
        int32_t var_b4_1 = 0;

        while (true)
        {
            float* edx_2 = *(result + 0x10) + var_b4_1;
            int32_t ebp_1 = ebx;
            long double x87_r7_1 = *edx_2;
            long double temp0_1 = g_bcabd0;
            x87_r7_1 - temp0_1;
            int32_t edi_1;

            edi_1 = !(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_2 = edx_2[1];
            long double temp1_1 = g_bcabd4;
            x87_r7_2 - temp1_1;
            int32_t esi_1;

            esi_1 = !(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_4 = g_bcabd8 + 1f;
            long double temp2_1 = *edx_2;
            x87_r7_4 - temp2_1;
            int32_t ecx_1;

            ecx_1 = !(*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_6 = g_bcabdc + 1f;
            long double temp3_1 = edx_2[1];
            x87_r7_6 - temp3_1;
            int32_t eax_2;

            eax_2 = !(*(&((x87_r7_6 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_6, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            ebx = (((eax_2 * 2) | ecx_1) << 1 | esi_1) << 1 | edi_1;

            if (var_b4_1 > 0)
            {
                if (!(ebx | ebp_1))
                {
                    memcpy(&var_48, &edx_2[-9], 0x24);
                    void var_24;
                    memcpy(&var_24, edx_2, 0x24);
                    var_5c = 1;
                    sub_50d4c0(&var_5c);
                }
                else if (!(ebp_1 & ebx))
                {
                    long double x87_r7_8 = 1f / edx_2[-7];
                    int32_t ecx_4 = edx_2[-8];
                    int32_t var_ac = edx_2[-9];
                    int32_t var_a8_1 = ecx_4;
                    int32_t ecx_5 = edx_2[1];
                    float var_84 = *edx_2;
                    int32_t eax_6 = g_bcadc0;
                    int32_t var_80_1 = ecx_5;
                    int32_t var_88_1 = ebp_1;
                    int32_t var_60_1 = ebx;
                    float var_a4_1 = x87_r7_8;
                    float var_a0_1 = x87_r7_8 * edx_2[-6];
                    float var_9c_1 = var_a4_1 * edx_2[-5];
                    float var_98_1 = var_a4_1 * edx_2[-4];
                    float var_94_1 = var_a4_1 * edx_2[-3];
                    float var_90_1 = var_a4_1 * edx_2[-2];
                    float var_8c_1 = var_a4_1 * edx_2[-1];
                    long double x87_r7_21 = 1f / edx_2[2];
                    float var_7c_1 = x87_r7_21;
                    float var_78_1 = x87_r7_21 * edx_2[3];
                    float var_74_1 = var_7c_1 * edx_2[4];
                    float var_70 = var_7c_1 * edx_2[5];
                    float var_6c = var_7c_1 * edx_2[6];
                    float var_68_1 = var_7c_1 * edx_2[7];
                    long double x87_r7_32 = var_7c_1 * edx_2[8];
                    var_5c = 0;
                    int32_t* var_c8_1 = &var_5c;
                    void (* var_cc_1)(int32_t* a1, int32_t* a2) = sub_50e450;
                    int32_t var_d0_1 = eax_6;
                    float var_64_1 = x87_r7_32;
                    void var_f8;
                    memcpy(&var_f8, &var_ac, 0x28);
                    void var_120;
                    memcpy(&var_120, &var_84, 0x28);
                    void var_148;
                    memcpy(&var_148, &var_ac, 0x28);
                    sub_50bf20();
                }
            }

            result = result_1 + 1;
            var_b4_1 += 0x24;
            result_1 = result;

            if (result >= *(a1 + 0xc))
                break;

            result = a1;
        }
    }

    return result;
}
