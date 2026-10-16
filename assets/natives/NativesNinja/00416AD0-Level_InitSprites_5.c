#include "00416AD0-Level_InitSprites_5.h"
/* 0x00416ad0 Level_InitSprites_5 full linked: callers=8 callees=14 */
int32_t Level_InitSprites_5(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, void* a5, int32_t a6, float a7)

{
    double* eax = a7;
    double var_30 = *eax - *(a5 + 8);
    double var_28 = eax[1] - *(a5 + 0x10);
    double var_20 = eax[2] - *(a5 + 0x18);
    long double st0 = sub_4b3130(&var_30);
    long double temp0 = *(a5 + 0x78);
    st0 - temp0;
    int16_t result = (st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
        | (st0 == temp0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        double var_18 = *(a5 + 0x38) * var_20 + *(a5 + 0x2c) * var_28 + *(a5 + 0x20) * var_30;
        long double x87_r7_14 =
            *(a5 + 0x3c) * var_20 + *(a5 + 0x30) * var_28 + *(a5 + 0x24) * var_30;
        double var_10_1 = x87_r7_14;
        double var_8_1 =
            *(a5 + 0x40) * var_20 + *(a5 + 0x34) * var_28 + *(a5 + 0x28) * var_30;
        memcpy(&var_30, &var_18, 0x18);
        long double temp1_1 = 0.0;
        x87_r7_14 - temp1_1;
        result = (x87_r7_14 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_14 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            void var_54;
            memcpy(&var_54, &var_18, 0x18);
            WeaponType_InitType();
            long double temp2_1 = 0f;
            a1 - temp2_1;

            if (!(*(&((a1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(a1, temp2_1) ? 1 : 0) << 0xa
                | (a1 == temp2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
            {
                memcpy(&var_54, &var_30, 0x18);
                WeaponType_InitType();
            }
            else
            {
                memcpy(&var_54, &var_30, 0x18);
                WeaponType_InitType();
                a2 = -(a2);
            }

            a7 = a2;
            memcpy(&var_54, &var_30, 0x18);
            WeaponType_GetConfig();
            long double temp3_1 = 0f;
            a3 - temp3_1;

            if (!(*(&((a3 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(a3, temp3_1) ? 1 : 0) << 0xa
                | (a3 == temp3_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1))
            {
                memcpy(&var_54, &var_30, 0x18);
                WeaponType_GetConfig();
            }
            else
            {
                memcpy(&var_54, &var_30, 0x18);
                WeaponType_GetConfig();
                a4 = -(a4);
            }

            long double x87_r2 = a7;
            long double temp4_1 = *(a5 + 0x70);
            x87_r2 - temp4_1;
            result = (x87_r2 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2, temp4_1) ? 1 : 0) << 0xa
                | (x87_r2 == temp4_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double temp5_1 = *(a5 + 0x74);
                a4 - temp5_1;
                result = (a4 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(a4, temp5_1) ? 1 : 0) << 0xa
                    | (a4 == temp5_1 ? 1 : 0) << 0xe | 0x1800;

                if (*(&result + 1) & 1)
                {
                    *(a5 + 0x74) = a4;
                    *(a5 + 0x70) = a7;
                    *(a5 + 0x80) = a6;
                    result = 1;
                    return result;
                }
            }
        }
    }

    result = 0;
    return result;
}
