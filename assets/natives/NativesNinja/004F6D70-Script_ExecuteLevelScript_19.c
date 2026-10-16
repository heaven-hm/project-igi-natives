#include "004F6D70-Script_ExecuteLevelScript_19.h"
/* 0x004f6d70 Script_ExecuteLevelScript_19 full linked: callers=1 callees=5 */
int32_t sub_4f6d70(long double a1 @ st0, float a2)

{
    float esi = a2;
    long double x87_r7_1 = *(esi + 0x2ca4) * 30f;
    long double temp1 = 1f;
    x87_r7_1 - temp1;

    a2 = *(&((x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 1f : x87_r7_1;

    long double x87_r7_3 = *(esi + 0x2c5c);
    long double x87_r6 = *(esi + 0x2c58);
    long double x87_r5 = *(esi + 0x2c54);
    long double x87_r7_6 =
        (16384f - sqrtl(x87_r5 * x87_r5 + x87_r6 * x87_r6 + x87_r7_3 * x87_r7_3)) * 0.000244140625f;
    long double temp2 = 0f;
    x87_r7_6 - temp2;

    if (*(&((x87_r7_6 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp2) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        x87_r7_6 = 0f;

    int32_t eax_1 = sub_4f6fe0(esi);
    int32_t eax_2 = -(eax_1);
    *(esi + 0x2cac) = eax_2 - eax_2 + 1;
    int32_t result = sub_4f16e0(esi + 0x2cb8, esi);
    long double temp4 = 0.0;
    a1 - temp4;
    result = (a1 < temp4 ? 1 : 0) << 8 | (FCMP_UO(a1, temp4) ? 1 : 0) << 0xa
        | (a1 == temp4 ? 1 : 0) << 0xe | 0x800;
    long double x87_r0_2;

    if (!(*(&result + 1) & 0x40))
    {
        result = *(esi + 0x2cac);

        if (!result)
            goto label_4f6e4f;

        long double x87_r0 = *(esi + 0x2d08);
        long double temp6_1 = a2;
        x87_r0 - temp6_1;
        result = (x87_r0 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0, temp6_1) ? 1 : 0) << 0xa
            | (x87_r0 == temp6_1 ? 1 : 0) << 0xe | 0x800;

        if (!(*(&result + 1) & 1))
            goto label_4f6e78;

        x87_r0_2 = *(esi + 0x2d08) + 1f;
        goto label_4f6e72;
    }

label_4f6e4f:
    long double x87_r0_3 = *(esi + 0x2d08);
    long double temp5_1 = 0f;
    x87_r0_3 - temp5_1;
    result = (x87_r0_3 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_3, temp5_1) ? 1 : 0) << 0xa
        | (x87_r0_3 == temp5_1 ? 1 : 0) << 0xe | 0x800;

    if (!(*(&result + 1) & 0x41))
    {
        x87_r0_2 = *(esi + 0x2d08) - 1f;
    label_4f6e72:
        *(esi + 0x2d08) = x87_r0_2;
    label_4f6e78:
        float ecx_1 = *(esi + 0x2c70);
        long double x87_r0_5 = *(esi + 0x2c6c);
        long double x87_r7_10 = ecx_1;
        long double x87_r7_12 = 1.0 / sqrtl(x87_r0_5 * x87_r0_5 + x87_r7_10 * x87_r7_10 + 1.0);
        float var_18 = x87_r0_5 * x87_r7_12;
        float var_14_2 = ecx_1 * x87_r7_12;
        float var_10_1 = x87_r7_12 * -1.0;
        long double x87_r0_12 =
            *(esi + 0x2d08) / a2 * *(esi + 0x2c9c) * *(esi + 0x2c88) + *(esi + 0x2c84);
        *(esi + 0x2c84) = x87_r0_12;
        long double temp7_1 = 1f;
        x87_r0_12 - temp7_1;
        result = (x87_r0_12 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_12, temp7_1) ? 1 : 0) << 0xa
            | (x87_r0_12 == temp7_1 ? 1 : 0) << 0xe | 0x800;

        while (!(*(&result + 1) & 1))
        {
            a2 = 0.5f - sub_4b4770(0xa76c90);
            long double x87_r0_16 = 0.5f - sub_4b4770(0xa76c90);
            int32_t edx_1 = *(esi + 0x2c94);
            float eax_6 = *(esi + 0x2c90);
            float ecx_2 = *(esi + 0x2c8c);
            float var_c = a2 * *(esi + 0x2c7c);
            float var_8_1 = x87_r0_16 * *(esi + 0x2c7c);
            float var_4_1 = *(esi + 0x2c7c) * 0.5f;
            result = sub_4f6750(esi, &var_c, &var_18, ecx_2, eax_6, edx_1);
            long double x87_r0_21 = *(esi + 0x2c84) - 1f;
            *(esi + 0x2c84) = x87_r0_21;
            long double temp8_1 = 1f;
            x87_r0_21 - temp8_1;
            result = (x87_r0_21 < temp8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r0_21, temp8_1) ? 1 : 0) << 0xa
                | (x87_r0_21 == temp8_1 ? 1 : 0) << 0xe | 0x800;
        }

        float* ecx_3 = esi + 0x80;
        int32_t i_1 = 7;
        int32_t i;

        do
        {
            int32_t j_1 = 7;
            int32_t j;

            do
            {
                int32_t k_1 = 7;
                int32_t k;

                do
                {
                    long double x87_r0_22 = *ecx_3;
                    long double temp9_1 = *(esi + 0x2ca0);
                    x87_r0_22 - temp9_1;
                    result = (x87_r0_22 < temp9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r0_22, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r0_22 == temp9_1 ? 1 : 0) << 0xe | 0x800;

                    if (*(&result + 1) & 1)
                        *ecx_3 = *(esi + 0x2ca0) / (x87_r7_6 + x87_r7_6 + 1f) + *ecx_3;

                    ecx_3 = &ecx_3[8];
                    k = k_1;
                    k_1 -= 1;
                } while (k != 1);
                j = j_1;
                j_1 -= 1;
            } while (j != 1);
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
