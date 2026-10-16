#include "00528930-Light_SetLightColor_6.h"
/* 0x00528930 Light_SetLightColor_6 full linked: callers=0 callees=9 */
void* sub_528930(void* a1)

{
    void* result = *(a1 + 0x108);
    float var_118 = 1f;
    float var_114 = 0f;
    float var_110 = 0f;
    float var_10c = 0f;
    float var_108 = 1f;
    float var_104 = 0f;
    float var_100 = 0f;
    float var_fc = 0f;
    float var_f8 = 1f;
    int32_t var_f4 = 0;
    float var_b0 = 1f;
    float var_ac = 0f;
    float var_a8 = 0f;
    float var_a4 = 0f;
    float var_a0 = 1f;
    float var_9c = 0f;
    float var_98 = 0f;
    float var_94 = 0f;
    float var_90 = 1f;
    int32_t var_c8;
    __builtin_memset(&var_c8, 0, 0x18);
    double var_e0;

    if (result >= 0)
    {
        result = sub_4f1030(result);

        if (result)
        {
            int32_t ecx_1 = 0;
            int32_t var_10_1 = 0;
            ecx_1 = *(result + 0x1c);
            int32_t ecx_2 = *((ecx_1 << 2) + &g_a994e0);

            if (ecx_2)
            {
                void var_60;
                ecx_2(result, &var_60);
                memcpy(&var_c8, &var_60, 0x18);
                float var_134_1 = -1.57079637f;
                void var_3c;
                memcpy(&var_b0, &var_3c, 0x28);
                float var_f0;
                int32_t* var_138_1 = &var_f0;
                memcpy(&var_118, &var_3c, 0x28);
                sub_4b3b60(var_138_1, var_134_1);
                int64_t var_e8;
                float var_d8;
                float var_88 = var_d8 * var_110 + *(&var_e8 + 4) * var_114 + var_f0 * var_118;
                float var_ec;
                float var_d4;
                float var_84_1 = var_d4 * var_110 + var_e0 * var_114 + var_ec * var_118;
                float var_d0;
                float var_80_1 = var_d0 * var_110 + *(&var_e0 + 4) * var_114 + var_e8 * var_118;
                float var_7c_1 = var_d8 * var_104 + *(&var_e8 + 4) * var_108 + var_f0 * var_10c;
                float var_78 = var_d4 * var_104 + var_e0 * var_108 + var_ec * var_10c;
                float var_74_1 = var_d0 * var_104 + *(&var_e0 + 4) * var_108 + var_e8 * var_10c;
                long double x87_r7_27 = var_d8 * var_f8 + *(&var_e8 + 4) * var_fc;
                long double x87_r6_28 = var_f0 * var_100;
                int32_t var_cc;
                result = var_cc + var_f4 + 1;
                void* result_1 = result;
                float var_70_1 = x87_r7_27 + x87_r6_28;
                float var_6c_1 = var_d4 * var_f8 + var_e0 * var_fc + var_ec * var_100;
                float var_68_1 = var_d0 * var_f8 + *(&var_e0 + 4) * var_fc + var_e8 * var_100;
                memcpy(&var_118, &var_88, 0x28);
            }
        }
    }

    long double x87_r7_38 = var_ac * *(a1 + 0x150);
    long double x87_r6_38 = var_b0 * *(a1 + 0x148);
    *(a1 + 0xd0) = 0x3f800000;
    long double x87_r6_40 = var_a8 * *(a1 + 0x158);
    memcpy(a1 + 0x8c, &var_118, 0x28);
    double var_e8_1 =
        var_a0 * *(a1 + 0x150) + var_a4 * *(a1 + 0x148) + var_9c * *(a1 + 0x158);
    var_e0 = var_94 * *(a1 + 0x150) + var_98 * *(a1 + 0x148) + var_90 * *(a1 + 0x158);
    var_c8 = x87_r7_38 + x87_r6_38 + x87_r6_40 + var_c8;
    int32_t var_c0;
    var_c0 = var_e8_1 + var_c0;
    int32_t var_b8;
    var_b8 = var_e0 + var_b8;
    long double x87_r7_47 = *(a1 + 0x160) + *(a1 + 0x148);
    memcpy(a1 + 0xb8, &var_c8, 0x18);
    *(a1 + 0x148) = x87_r7_47;
    *(a1 + 0x150) = *(a1 + 0x168) + *(a1 + 0x150);
    *(a1 + 0x158) = *(a1 + 0x170) + *(a1 + 0x158);
    return result;
}
