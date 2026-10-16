#include "0052D6C0-Light_UpdateGlobalLight_11.h"
/* 0x0052d6c0 Light_UpdateGlobalLight_11 full linked: callers=1 callees=6 */
void* sub_52d6c0(int32_t a1)

{
    float var_14 = 0f;
    int32_t var_40 = 0;
    float var_10 = 0f;
    long double x87_r7 = *(a1 + 0x4a9c);
    float var_c = 0f;
    long double temp3 = 268435456.0;
    x87_r7 - temp3;
    double var_24;

    if (*(&((x87_r7 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp3) ? 1 : 0) << 0xa
            | (x87_r7 == temp3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        *(a1 + 0x4ab4) = 1;
    else
    {
        var_24 = x87_r7 * 3.7252902984619141e-09;
        *(a1 + 0x4ab4) = var_24;
    }

    *(a1 + 0x3c) = 0;
    *(a1 + 0x10) = *(a1 + 0x4840);
    *(a1 + 0x14) = *(a1 + 0x4844);
    *(a1 + 0x18) = *(a1 + 0x4848);
    *(a1 + 0x1c) = *(a1 + 0x484c);
    int32_t eax_4 = *(a1 + 0x4a9c) << 1;
    int32_t ecx_3 = 0;
    int32_t temp2 = *(a1 + 0x4ab4);
    *(a1 + 0x38) = 0;
    *(a1 + 0x2c) = 0xffffffff;
    *(a1 + 0x24) = 0;
    int32_t var_44_1 = 0;
    *(a1 + 0x30) = COMBINE(0, eax_4) / temp2;
    int32_t eax_6 = *(a1 + 0x4ab4);

    if (eax_6 > 0)
    {
        void* var_48_1 = a1 + 0x48;

        do
        {
            int32_t i = 0;

            if (eax_6 > 0)
            {
                void* ecx_4 = var_48_1;
                int32_t var_38_1 = 0;

                do
                {
                    *(ecx_4 + 0x24) = 0;
                    int32_t var_30_1 = 0;
                    uint32_t temp0_1 = COMBINE(0, *(a1 + 0x4a9c)) / *(a1 + 0x4ab4);
                    int32_t var_28_1 = 0;
                    var_24 = i;
                    *(&var_24 + 4) = 0;
                    ecx_4 += 0x30;
                    *(ecx_4 - 0x38) = temp0_1 * ecx_3 + *(a1 + 0x4840);
                    *(ecx_4 - 0x30) = (COMBINE(0, *(a1 + 0x4a9c)) / *(a1 + 0x4ab4)) * var_24
                        + *(a1 + 0x4848);
                    int32_t eax_11 = *(a1 + 0x4a9c);
                    int32_t temp2_3 = *(a1 + 0x4ab4);
                    *(ecx_4 - 0x10) = 0;
                    *(ecx_4 - 0x1c) = 0;
                    *(ecx_4 - 0x24) = 0;
                    i += 1;
                    *(ecx_4 - 0x18) = COMBINE(0, eax_11) / temp2_3;
                } while (i < *(a1 + 0x4ab4));

                ecx_3 = var_44_1;
            }

            eax_6 = *(a1 + 0x4ab4);
            ecx_3 += 1;
            var_44_1 = ecx_3;
            var_48_1 += 0x180;
        } while (ecx_3 < eax_6);
    }

    long double x87_r7_6 = *(a1 + 0x4a84) * 0.100000001f;
    *(a1 + 0x4aa8) = 0;
    *(a1 + 0x4ab8) = 0;
    *(a1 + 0x4a88) = x87_r7_6;
    sub_52d9f0(a1);
    int32_t eax_14 = *(a1 + 0x4890);
    int32_t ecx_5 = *(a1 + 0x4894);
    *(a1 + 0x48a0) = -(*(a1 + 0x4888));
    *(a1 + 0x4898) = eax_14;
    *(a1 + 0x489c) = ecx_5;
    sub_4b29a0(a1 + 0x4898);
    var_24 = 0;
    *(&var_24 + 4) = 0x3ff00000;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    long double st0 = sub_4b29f0(a1 + 0x4898, &var_24);
    var_24 = st0 * *(a1 + 0x4898);
    var_1c = st0 * *(a1 + 0x48a0);
    *(a1 + 0x48a8) = sub_4b29d0(&var_24);
    var_24 = 0;
    *(&var_24 + 4) = 0;
    int32_t var_1c_1 = 0;
    int32_t var_18_1 = 0x3ff00000;
    long double st0_2 = sub_4b29f0(a1 + 0x4898, &var_24);
    var_24 = st0_2 * *(a1 + 0x4898);
    var_1c_1 = st0_2 * *(a1 + 0x48a0);
    void* result;
    int80_t st0_3;
    st0_3 = sub_4b29d0(&var_24);
    *(a1 + 0x48b0) = st0_3;
    *(a1 + 0x4a98) = *(a1 + 0x4a80) / *(a1 + 0x4a84);
    int32_t i_2 = g_b041e8;
    long double x87_r7_17;

    if (i_2 <= 0)
        x87_r7_17 = var_14;
    else
    {
        x87_r7_17 = var_14;
        long double x87_r6_11 = var_10;
        int32_t* ecx_6 = g_b041e4;
        long double x87_r5_2 = var_c;
        int32_t i_1;

        do
        {
            result = g_b041f0 * *ecx_6 + g_b041e0;
            ecx_6 = &ecx_6[1];
            i_1 = i_2;
            i_2 -= 1;
            x87_r7_17 = x87_r7_17 + *(result + 0xc);
            x87_r6_11 = x87_r6_11 + *(result + 0x10);
            x87_r5_2 = x87_r5_2 + *(result + 0x14);
        } while (i_1 != 1);
        var_c = x87_r5_2;
        var_10 = x87_r6_11;
    }

    long double x87_r7_19 = x87_r7_17 + *(a1 + 0x4a54);
    *(a1 + 0x4ac8) = 0;
    *(a1 + 0x4ac4) = 0;
    *(a1 + 0x4ac0) = 0;
    *(a1 + 0x4a6c) = x87_r7_19;
    *(a1 + 0x4a70) = var_10 + *(a1 + 0x4a58);
    *(a1 + 0x4a74) = var_c + *(a1 + 0x4a5c);
    return result;
}
