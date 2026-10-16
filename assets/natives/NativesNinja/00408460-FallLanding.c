#include "00408460-FallLanding.h"
/* 0x00408460 FallLanding full linked: callers=3 callees=7 */
int32_t FallLanding(float a1)

{
    float esi = a1;
    float var_54 = 0f;
    long double x87_r7_1 = *(esi + 0x66c) - 84.7416916f;
    *(esi + 0x66c) = x87_r7_1;
    long double x87_r6 = 0f;
    long double x87_r5 = *(esi + 0x1b8);
    long double temp1 = 0f;
    x87_r5 - temp1;

    if (!(*(&((x87_r5 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5, temp1) ? 1 : 0) << 0xa
            | (x87_r5 == temp1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        var_54 = -(g_56e1f4);

    long double x87_r5_3 = *(esi + 0x1bc);
    long double temp2 = 0f;
    x87_r5_3 - temp2;

    if (!(*(&((x87_r5_3 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, temp2) ? 1 : 0) << 0xa
            | (x87_r5_3 == temp2 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        var_54 = g_56e1f4 + var_54;

    long double x87_r5_6 = *(esi + 0x1c0);
    long double temp3 = 0f;
    x87_r5_6 - temp3;

    if (!(*(&((x87_r5_6 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_6, temp3) ? 1 : 0) << 0xa
            | (x87_r5_6 == temp3 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        x87_r6 = g_56e1f4;

    long double x87_r5_7 = *(esi + 0x1c4);
    long double temp4 = 0f;
    x87_r5_7 - temp4;
    int16_t result = (x87_r5_7 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_7, temp4) ? 1 : 0) << 0xa
        | (x87_r5_7 == temp4 ? 1 : 0) << 0xe | 0x3000;

    if (!(*(&result + 1) & 0x40))
        x87_r6 = x87_r6 - g_56e1f4;

    bool cond:0 = !(*(esi + 0x2f4) & 4);
    float var_44 = x87_r6 * *(esi + 0x88) + var_54 * *(esi + 0x84);
    long double x87_r6_3 = x87_r6 * *(esi + 0x94) + var_54 * *(esi + 0x90);
    *(esi + 0x664) = x87_r6 * *(esi + 0x7c) + var_54 * *(esi + 0x78) + *(esi + 0x664);
    *(esi + 0x668) = var_44 + *(esi + 0x668);
    long double x87_r7_3 = x87_r7_1 + x87_r6_3;
    *(esi + 0x66c) = x87_r7_3;

    if (cond:0)
        return result;

    long double temp5 = 0f;
    x87_r7_3 - temp5;

    if (*(&((x87_r7_3 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp5) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_3 = -(x87_r7_3);

    long double x87_r7_5 = x87_r7_3 * 0.000244140625f * 30f;
    long double x87_r7_6 = x87_r7_5 * 0.125f;
    long double temp6 = 0f;
    x87_r7_6 - temp6;

    if (!(*(&((x87_r7_6 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp6) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp6 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double temp7_1 = 1f;
        x87_r7_6 - temp7_1;

        if (!(*(&((x87_r7_6 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp7_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_6 = 1f;
    }
    else
        x87_r7_6 = 0f;

    int32_t ecx;
    int32_t var_60 = ecx;
    sub_4659b0(*(esi + 0x4ec), x87_r7_6 * -1024.0);
    int32_t var_30 = 0x46a00000;
    a1 = x87_r7_5 - 14f;
    long double x87_r7_12 = a1;
    long double temp8 = 0f;
    x87_r7_12 - temp8;

    if (!(*(&((x87_r7_12 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp8) ? 1 : 0) << 0xa
        | (x87_r7_12 == temp8 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        *(esi + 0x2e8) = 0xd;
        sub_489e10(esi + 0x254, 0xd);
        a1 = a1 * 0.0769230798f * *(esi + 0x258);

        if (!Human_HitDamage())
        {
            *(esi + 0x2c8) = a1 + *(esi + 0x2c8);
            *(esi + 0x254) = a1 + *(esi + 0x254);
        }

        long double x87_r7_20 = a1;
        long double temp9_1 = 0f;
        x87_r7_20 - temp9_1;

        if (!(*(&((x87_r7_20 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, temp9_1) ? 1 : 0) << 0xa
            | (x87_r7_20 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double x87_r7_22 = *(esi + 0x258) * 0.100000001f;
            long double temp10_1 = a1;
            x87_r7_22 - temp10_1;
            char* var_64_2;
            char* var_60_2;
            char var_20[0x20];

            if (*(&((x87_r7_22 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_22, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_22 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                long double x87_r7_24 = *(esi + 0x258) * 0.200000003f;
                long double temp11_1 = a1;
                x87_r7_24 - temp11_1;

                if (*(&((x87_r7_24 < temp11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_24, temp11_1) ? 1 : 0) << 0xa
                    | (x87_r7_24 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    var_60_2 = "player_fall_3";
                    var_64_2 = &var_20;
                }
                else
                {
                    var_60_2 = "player_fall_2";
                    var_64_2 = &var_20;
                }
            }
            else
            {
                var_60_2 = "player_fall_1";
                var_64_2 = &var_20;
            }

            Game_DataSymbolLoad(var_64_2, var_60_2);
            sub_4e6b00(*(esi + 0x4ec), &var_20);
            int32_t var_30_1 = 0x47200000;
        }
    }

    int32_t eax_6 = *(esi + 0xfc);
    int32_t var_3c = 0xb;
    int32_t var_38 = eax_6;
    int32_t var_34 = 0x46;
    int32_t var_2c = sub_4c3440(esi);
    float var_28 = esi;
    float var_24 = esi;
    return sub_450ce0(&var_3c);
}
