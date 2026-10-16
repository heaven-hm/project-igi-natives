#include "004B2A10-Sys_DispatchOpcode_10.h"
/* 0x004b2a10 Sys_DispatchOpcode_10 full linked: callers=3 callees=0 */
long double sub_4b2a10(int32_t* a1)

{
    float var_c = *a1;
    long double x87_r7 = var_c;
    long double temp1 = 0f;
    x87_r7 - temp1;
    float var_4 = a1[2];
    float var_8 = a1[1];

    if (*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
            | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 1)
        var_c = -(var_c);

    long double x87_r7_3 = var_8;
    long double temp2 = 0f;
    x87_r7_3 - temp2;

    if (*(&((x87_r7_3 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp2 ? 1 : 0) << 0xe) + 1) & 1)
        var_8 = -(var_8);

    long double x87_r7_6 = var_4;
    long double temp3 = 0f;
    x87_r7_6 - temp3;

    if (*(&((x87_r7_6 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp3) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp3 ? 1 : 0) << 0xe) + 1) & 1)
        var_4 = -(var_4);

    long double x87_r7_9 = var_c;
    long double temp4 = var_8;
    x87_r7_9 - temp4;
    long double x87_r7_10;
    long double temp6_1;

    if (!(*(&((x87_r7_9 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp4) ? 1 : 0) << 0xa
        | (x87_r7_9 == temp4 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        x87_r7_10 = var_c;
        temp6_1 = var_4;
        x87_r7_10 - temp6_1;
    }

    long double x87_r5;
    long double x87_r6_1;
    long double x87_r7_11;

    if (*(&((x87_r7_9 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp4) ? 1 : 0) << 0xa
        | (x87_r7_9 == temp4 ? 1 : 0) << 0xe) + 1) & 0x41 || *(&((x87_r7_10 < temp6_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_10, temp6_1) ? 1 : 0) << 0xa | (x87_r7_10 == temp6_1 ? 1 : 0) << 0xe) + 1)
        & 0x41)
    {
        long double x87_r7_12 = var_8;
        long double temp5_1 = var_4;
        x87_r7_12 - temp5_1;

        if (*(&((x87_r7_12 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_12 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            x87_r7_11 = var_4;
            long double x87_r6_3 = var_c;
            long double temp7_1 = var_8;
            x87_r6_3 - temp7_1;

            if (*(&((x87_r6_3 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, temp7_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                x87_r6_1 = var_8;
                x87_r5 = var_c;
            }
            else
            {
                x87_r6_1 = var_c;
                x87_r5 = var_8;
            }
        }
        else
        {
            x87_r7_11 = var_8;
            long double x87_r6_2 = var_c;
            long double temp8_1 = var_4;
            x87_r6_2 - temp8_1;

            if (*(&((x87_r6_2 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp8_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                x87_r6_1 = var_4;
                x87_r5 = var_c;
            }
            else
            {
                x87_r6_1 = var_c;
                x87_r5 = var_4;
            }
        }
    }
    else
    {
        x87_r7_11 = var_c;
        long double x87_r6 = var_8;
        long double temp9_1 = var_4;
        x87_r6 - temp9_1;

        if (*(&((x87_r6 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, temp9_1) ? 1 : 0) << 0xa
            | (x87_r6 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            x87_r6_1 = var_4;
            x87_r5 = var_8;
        }
        else
        {
            x87_r6_1 = var_8;
            x87_r5 = var_4;
        }
    }

    return x87_r7_11 + x87_r5 * 0.317837238f + x87_r6_1 * 0.414213568f;
}
