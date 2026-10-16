#include "00489960-AI_BuildEyeSnapshot.h"
/* 0x00489960 AI_BuildEyeSnapshot full linked: callers=1 callees=14 */
int32_t sub_489960(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, double* a4, double* a5)

{
    long double x87_r7_1 = *a5 - *a4;
    double var_38 = x87_r7_1;
    long double x87_r6_1 = a5[1] - a4[1];
    double var_30 = x87_r6_1;
    long double x87_r5_1 = a5[2] - a4[2];
    double* var_54 = &var_38;
    double var_28 = x87_r5_1;
    double var_20 = a4[6] * x87_r5_1 + *(a4 + 0x24) * x87_r6_1 + a4[3] * x87_r7_1;
    double var_18 = *(a4 + 0x34) * x87_r5_1 + a4[5] * x87_r6_1 + *(a4 + 0x1c) * x87_r7_1;
    long double x87_r3_11 = a4[4] * x87_r7_1;
    double var_10 = a4[7] * x87_r5_1 + *(a4 + 0x2c) * x87_r6_1 + x87_r3_11;
    memcpy(&var_38, &var_20, 0x18);
    double var_40 = sub_4b3130(var_54);
    void var_68;
    memcpy(&var_68, &var_38, 0x18);
    WeaponType_InitType();
    long double temp0 = 0f;
    a1 - temp0;

    if (!(*(&((a1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(a1, temp0) ? 1 : 0) << 0xa
        | (a1 == temp0 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
    {
        memcpy(&var_68, &var_38, 0x18);
        WeaponType_InitType();
    }
    else
    {
        memcpy(&var_68, &var_38, 0x18);
        WeaponType_InitType();
        a2 = -(a2);
    }

    float var_44 = a2;
    memcpy(&var_68, &var_38, 0x18);
    WeaponType_GetConfig();
    long double temp1 = 0f;
    a3 - temp1;

    if (!(*(&((a3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(a3, temp1) ? 1 : 0) << 0xa
        | (a3 == temp1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1))
    {
        memcpy(&var_68, &var_38, 0x18);
        WeaponType_GetConfig();
    }
    else
    {
        memcpy(&var_68, &var_38, 0x18);
        WeaponType_GetConfig();
        x87_r3_11 = -(x87_r3_11);
    }

    long double x87_r2 = var_40;
    long double temp2 = a4[0xa];
    x87_r2 - temp2;
    int16_t result = (x87_r2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r2, temp2) ? 1 : 0) << 0xa
        | (x87_r2 == temp2 ? 1 : 0) << 0xe | 0x1800;

    if (*(&result + 1) & 0x41)
    {
        long double x87_r2_1 = var_44;
        long double temp3_1 = a4[8];
        x87_r2_1 - temp3_1;
        result = (x87_r2_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_1, temp3_1) ? 1 : 0) << 0xa
            | (x87_r2_1 == temp3_1 ? 1 : 0) << 0xe | 0x1800;

        if (*(&result + 1) & 1)
        {
            long double temp5_1 = a4[9];
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

    result = a4[0xe];

    if (result)
    {
        long double x87_r2_2 = var_40;
        long double temp4_1 = a4[0xd];
        x87_r2_2 - temp4_1;
        result = (x87_r2_2 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_2, temp4_1) ? 1 : 0) << 0xa
            | (x87_r2_2 == temp4_1 ? 1 : 0) << 0xe | 0x1800;

        if (*(&result + 1) & 0x41)
        {
            long double x87_r2_3 = var_44;
            long double temp6_1 = a4[0xb];
            x87_r2_3 - temp6_1;
            result = (x87_r2_3 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_3, temp6_1) ? 1 : 0) << 0xa
                | (x87_r2_3 == temp6_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double temp7_1 = a4[0xc];
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
