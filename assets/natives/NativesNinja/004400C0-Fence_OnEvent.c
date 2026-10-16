#include "004400C0-Fence_OnEvent.h"
/* 0x004400c0 Fence_OnEvent full linked: callers=0 callees=3 */
int32_t sub_4400c0(void* a1, void* a2)

{
    int16_t result;
    result = *(a1 + 0x11c);

    if (!result)
    {
        long double x87_r7_2 = *(a2 + 8) - *(a1 + 0x20);
        long double x87_r6_2 = *(a2 + 0x10) - *(a1 + 0x28);
        long double x87_r5_2 = *(a2 + 0x18) - *(a1 + 0x30);
        double var_18_1 =
            *(a1 + 0x88) * x87_r5_2 + *(a1 + 0x7c) * x87_r6_2 + *(a1 + 0x70) * x87_r7_2;
        double var_10_1 =
            *(a1 + 0x80) * x87_r6_2 + *(a1 + 0x8c) * x87_r5_2 + *(a1 + 0x74) * x87_r7_2;
        float var_30;
        WeaponType_RegisterType_2(&var_30, a1, 0);
        float var_24;
        WeaponType_RegisterType_2(&var_24, a1, 1);
        long double x87_r7_4 = var_10_1;
        long double temp0_1 = 0.0;
        x87_r7_4 - temp0_1;
        long double x87_r7_5 = var_10_1;

        if (*(&((x87_r7_4 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_5 = -(x87_r7_5);

        long double temp1_1 = *(a2 + 0x78);
        x87_r7_5 - temp1_1;
        result = (x87_r7_5 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            long double x87_r7_6 = var_30;
            long double temp2_1 = var_18_1;
            x87_r7_6 - temp2_1;
            result = (x87_r7_6 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp2_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                long double x87_r7_7 = var_24;
                long double temp3_1 = var_18_1;
                x87_r7_7 - temp3_1;
                result = (x87_r7_7 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp3_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    long double x87_r7_8 = var_10_1;
                    long double temp4_1 = 0.0;
                    x87_r7_8 - temp4_1;
                    int32_t ecx_1 = *(a2 + 0x3c);
                    int32_t var_38_1 = *(a2 + 0x30);
                    float eax_1 = *(a1 + 0x80);
                    int32_t var_3c = *(a2 + 0x24);
                    int32_t var_34_1 = ecx_1;
                    float ecx_2 = *(a1 + 0x8c);
                    float var_48 = *(a1 + 0x74);

                    if (!(*(&((x87_r7_8 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_8, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_8 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        var_48 = -(var_48);
                        float var_44_2 = -(eax_1);
                        float var_40_2 = -(ecx_2);
                    }

                    long double st0_1 = sub_4b2b30(&var_3c, &var_48);
                    long double temp5_1 = 1.04719758f;
                    st0_1 - temp5_1;
                    result = (st0_1 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(st0_1, temp5_1) ? 1 : 0) << 0xa
                        | (st0_1 == temp5_1 ? 1 : 0) << 0xe;

                    if (*(&result + 1) & 1)
                    {
                        *(a2 + 0x70) = 0;
                        *(a2 + 0x74) = 0;
                        *(a2 + 0x80) = a1;
                    }
                }
            }
        }
    }

    return result;
}
