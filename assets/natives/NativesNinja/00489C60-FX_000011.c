#include "00489C60-FX_000011.h"
/* 0x00489c60 FX_000011 full linked: callers=6 callees=2 */
int32_t sub_489c60(void* a1, int32_t* a2)

{
    float var_30 = a2[2];
    long double x87_r7_1 = -(var_30);
    long double x87_r6_1 = -(a2[3]);
    float var_28 = a2[4];
    int32_t eax_2 = *(*a2 + 0x44);
    long double x87_r5_1 = -(var_28);
    var_30 = x87_r5_1 * *(a1 + 0x90) + x87_r6_1 * *(a1 + 0x84) + x87_r7_1 * *(a1 + 0x78);
    long double x87_r7_3 =
        x87_r5_1 * *(a1 + 0x94) + x87_r6_1 * *(a1 + 0x88) + x87_r7_1 * *(a1 + 0x7c);
    int32_t result;

    if (eax_2 < 0x1e)
    {
        result = *((eax_2 << 2) + &g_5412a4);

        if (result == 0xc)
            goto label_489cec;

    label_489d6d:
        long double temp1_1 = 0f;
        x87_r7_3 - temp1_1;

        if (!(*(&((x87_r7_3 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            WeaponType_InitType_2(&var_30, a1, 4, "000_01_1");
            long double x87_r7_5 = var_30 + *(a1 + 0x20);
            void* eax_5 = *a2;
            var_30 = x87_r7_5;
            var_28 = var_28 + *(a1 + 0x28);
            double var_20;
            double var_20_1 = var_20 + *(a1 + 0x30);
            double var_18 = *(eax_5 + 8) - x87_r7_5;
            double var_10_1 = *(eax_5 + 0x10) - var_28;
            double var_8_1 = *(eax_5 + 0x18) - var_20_1;
            long double st0_1 = sub_4b3130(&var_18);
            long double temp3_1 = 614.39999999999998;
            st0_1 - temp3_1;

            if (*(&((st0_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp3_1) ? 1 : 0) << 0xa
                    | (st0_1 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
                return 0xf;
        }
    }
    else
    {
        result = 0xc;
    label_489cec:
        long double temp2_1 = 0f;
        x87_r7_3 - temp2_1;

        if (*(&((x87_r7_3 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double temp5_1 = 0f;
            x87_r7_3 - temp5_1;
            long double x87_r6_6 = x87_r7_3;

            if (*(&((x87_r7_3 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_6 = -(x87_r6_6);

            long double x87_r5_5 = var_30;
            long double temp7_1 = 0f;
            x87_r5_5 - temp7_1;
            long double x87_r5_6 = var_30;

            if (*(&((x87_r5_5 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_5, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r5_5 == temp7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                x87_r5_6 = -(x87_r5_6);

            x87_r6_6 - x87_r5_6;

            if (!(*(&((x87_r6_6 < x87_r5_6 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_6, x87_r5_6) ? 1 : 0) << 0xa
                    | (x87_r6_6 == x87_r5_6 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                result = 0xe;
        }

        long double temp4_1 = 0f;
        x87_r7_3 - temp4_1;

        if (!(*(&((x87_r7_3 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double x87_r6_9 = var_30;
            long double temp6_1 = 0f;
            x87_r6_9 - temp6_1;
            long double x87_r6_10 = var_30;

            if (*(&((x87_r6_9 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r6_9 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_10 = -(x87_r6_10);

            x87_r7_3 - x87_r6_10;

            if (!(*(&((x87_r7_3 < x87_r6_10 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, x87_r6_10) ? 1 : 0) << 0xa
                    | (x87_r7_3 == x87_r6_10 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                result = 0xd;

            goto label_489d6d;
        }
    }

    return result;
}
