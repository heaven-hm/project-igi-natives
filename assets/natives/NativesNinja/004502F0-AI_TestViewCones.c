#include "004502F0-AI_TestViewCones.h"
/* 0x004502f0 AI_TestViewCones full linked: callers=1 callees=14 */
double* sub_4502f0(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, void* a4, double* a5, char a6)

{
    double* result = a5;
    long double x87_r7_1 = *result - *(a4 + 0x18);
    double var_38 = x87_r7_1;
    long double x87_r6_1 = result[1] - *(a4 + 0x20);
    double var_30 = x87_r6_1;
    long double x87_r5_1 = result[2] - *(a4 + 0x28);
    double var_28 = x87_r5_1;
    double var_20 =
        *(a4 + 0x70) * x87_r5_1 + *(a4 + 0x64) * x87_r6_1 + *(a4 + 0x58) * x87_r7_1;
    double var_18 =
        *(a4 + 0x74) * x87_r5_1 + *(a4 + 0x68) * x87_r6_1 + *(a4 + 0x5c) * x87_r7_1;
    long double x87_r3_11 = *(a4 + 0x60) * x87_r7_1;
    double var_10 = *(a4 + 0x78) * x87_r5_1 + *(a4 + 0x6c) * x87_r6_1 + x87_r3_11;
    memcpy(&var_38, &var_20, 0x18);
    long double x87_r7_3 = var_18;
    long double temp0 = 0.0;
    x87_r7_3 - temp0;
    result = (x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        double var_40_1 = sub_4b3130(&var_38);
        int32_t var_48_1;

        if (!a6)
        {
            var_48_1 = *(a4 + 0x90);
            int32_t var_44_2 = *(a4 + 0x94);
        }
        else
        {
            var_48_1 = *(a4 + 0x98);
            int32_t var_44_1 = *(a4 + 0x9c);
        }

        void var_70;
        memcpy(&var_70, &var_38, 0x18);
        WeaponType_InitType();
        long double temp1_1 = 0f;
        a1 - temp1_1;

        if (!(*(&((a1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(a1, temp1_1) ? 1 : 0) << 0xa
            | (a1 == temp1_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
        {
            memcpy(&var_70, &var_38, 0x18);
            WeaponType_InitType();
        }
        else
        {
            memcpy(&var_70, &var_38, 0x18);
            WeaponType_InitType();
            a2 = -(a2);
        }

        float var_4c_1 = a2;
        memcpy(&var_70, &var_38, 0x18);
        WeaponType_GetConfig();
        long double temp2_1 = 0f;
        a3 - temp2_1;

        if (!(*(&((a3 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(a3, temp2_1) ? 1 : 0) << 0xa
            | (a3 == temp2_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1))
        {
            memcpy(&var_70, &var_38, 0x18);
            result = WeaponType_GetConfig();
        }
        else
        {
            memcpy(&var_70, &var_38, 0x18);
            result = WeaponType_GetConfig();
            x87_r3_11 = -(x87_r3_11);
        }

        long double x87_r2 = var_40_1;
        long double temp3_1 = var_48_1;
        x87_r2 - temp3_1;
        result = (x87_r2 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2, temp3_1) ? 1 : 0) << 0xa
            | (x87_r2 == temp3_1 ? 1 : 0) << 0xe | 0x1800;

        if (*(&result + 1) & 0x41)
        {
            long double x87_r2_1 = var_4c_1;
            long double temp4_1 = *(a4 + 0x80);
            x87_r2_1 - temp4_1;
            result = (x87_r2_1 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_1, temp4_1) ? 1 : 0) << 0xa
                | (x87_r2_1 == temp4_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double temp5_1 = *(a4 + 0x88);
                x87_r3_11 - temp5_1;
                result = (x87_r3_11 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r3_11, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r3_11 == temp5_1 ? 1 : 0) << 0xe | 0x1800;

                if (*(&result + 1) & 1)
                {
                    result = 1;
                    return result;
                }
            }
        }

        result = a6;
        long double x87_r2_2;

        if (!result)
            x87_r2_2 = *(a4 + 0xb0);
        else
            x87_r2_2 = *(a4 + 0xb8);

        long double x87_r1 = var_40_1;
        x87_r1 - x87_r2_2;
        result = (x87_r1 < x87_r2_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r1, x87_r2_2) ? 1 : 0) << 0xa
            | (x87_r1 == x87_r2_2 ? 1 : 0) << 0xe | 0x1000;

        if (*(&result + 1) & 0x41)
        {
            long double x87_r2_4 = var_4c_1;
            long double temp6_1 = *(a4 + 0xa0);
            x87_r2_4 - temp6_1;
            result = (x87_r2_4 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_4, temp6_1) ? 1 : 0) << 0xa
                | (x87_r2_4 == temp6_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double temp7_1 = *(a4 + 0xa8);
                x87_r3_11 - temp7_1;
                result = (x87_r3_11 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r3_11, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r3_11 == temp7_1 ? 1 : 0) << 0xe | 0x2000;

                if (*(&result + 1) & 1)
                {
                    result = 1;
                    return result;
                }
            }
        }
    }

    result = 0;
    return result;
}
