#include "0052CC40-Light_ComputeDirectional.h"
/* 0x0052cc40 Light_ComputeDirectional full linked: callers=3 callees=2 */
int32_t sub_52cc40(float* a1)

{
    float* edi = a1;
    int32_t* eax = edi[0x14];
    int32_t* var_24 = nullptr;
    (*(*eax + 0xc))(eax, 0x20, &var_24, 0);
    *var_24 = 0;
    var_24[1] = 0;
    var_24[2] = g_bcadbc * 0.800000012f;
    float var_20 = 1.57079637f;
    int32_t var_c = 0xf;
    var_24[3] = sub_52ce90(edi, edi, edi, edi, 0f, 0f);
    int32_t* ecx_4 = &var_24[4];
    var_24 = ecx_4;

    while (true)
    {
        long double x87_r7_3 = var_20 - 0.104719758f;
        float var_1c_1 = 0f;
        float var_18_1 = 0f;
        var_20 = x87_r7_3;
        long double temp0_1 = edi[0x12];
        x87_r7_3 - temp0_1;
        float* esi_1;
        long double x87_r7_6;

        if (*(&((x87_r7_3 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double x87_r7_8 = edi[0x12] * 0.5f;
            long double x87_r6_3 = var_20;
            esi_1 = &edi[6];
            x87_r6_3 - x87_r7_8;

            x87_r7_6 = *(&((x87_r6_3 < x87_r7_8 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_3, x87_r7_8) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 ? 0f
                : var_20 / x87_r7_8 - 1f;
        }
        else
        {
            esi_1 = edi;
            x87_r7_6 = (var_20 - edi[0x12]) / (1.57079637f - edi[0x12]);
        }

        long double x87_r6_4 = var_20;
        long double st0_1;
        bool c1_1;
        bool c2_3;
        st0_1 = __fcos(x87_r6_4);
        int32_t i_3 = 0x14;
        float var_14_1 = st0_1;
        long double st0_2;
        bool c1_2;
        bool c2_4;
        st0_2 = __fsin(x87_r6_4);
        float var_8_1 = st0_2;
        float var_4_1 = 1f - x87_r7_6;
        int32_t i;

        do
        {
            long double st0_3;
            bool c1_3;
            bool c2_5;
            st0_3 = __fcos(var_18_1);
            *ecx_4 = st0_3 * g_bcadbc * 0.800000012f * var_14_1;
            long double st0_4;
            bool c1_4;
            bool c2_6;
            st0_4 = __fsin(var_18_1);
            var_24[1] = st0_4 * g_bcadbc * 0.800000012f * var_14_1;
            var_24[2] = g_bcadbc * 0.800000012f * var_8_1;
            long double x87_r7_23 = var_1c_1;
            long double temp1_1 = 1f;
            x87_r7_23 - temp1_1;
            long double x87_r7_25;

            x87_r7_25 = !(*(&((x87_r7_23 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_23, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1) ? var_1c_1 - 1f : 1f - var_1c_1;

            var_24[3] = sub_52ce90(esi_1, &esi_1[3], &esi_1[6], &esi_1[9], x87_r7_25, var_4_1);
            var_1c_1 = var_1c_1 + 0.100000001f;
            ecx_4 = &var_24[4];
            i = i_3;
            i_3 -= 1;
            var_24 = ecx_4;
            var_18_1 = var_18_1 + 0.314159274f;
        } while (i != 1);
        bool cond:0_1 = var_c != 1;
        var_c -= 1;

        if (!cond:0_1)
            break;

        edi = a1;
    }

    int32_t i_2 = 0x14;
    int32_t i_1;

    do
    {
        *ecx_4 = ecx_4[-0x50];
        int32_t* eax_10 = var_24;
        eax_10[1] = eax_10[-0x4f];
        var_24[2] = g_bcadbc * 0.800000012f * -0.5f;
        int32_t* eax_12 = var_24;
        eax_12[3] = eax_12[-0x4d];
        ecx_4 = &var_24[4];
        i_1 = i_2;
        i_2 -= 1;
        var_24 = ecx_4;
    } while (i_1 != 1);
    int32_t* eax_13 = a1[0x14];
    return (*(*eax_13 + 0x10))(eax_13);
}
