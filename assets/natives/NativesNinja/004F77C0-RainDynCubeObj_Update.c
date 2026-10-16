#include "004F77C0-RainDynCubeObj_Update.h"
/* 0x004f77c0 RainDynCubeObj_Update full linked: callers=0 callees=5 */
int32_t** sub_4f77c0(void* a1)

{
    sub_4f1160();
    long double x87_r7 = *(a1 + 0x2c08);
    long double temp1 = 0.0;
    x87_r7 - temp1;

    if (!(*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        *(a1 + 0x2c54) = g_bcab08 - *(a1 + 0x2c08);
        *(a1 + 0x2c58) = g_bcab10 - *(a1 + 0x2c10);
        *(a1 + 0x2c5c) = g_bcab18 - *(a1 + 0x2c18);
        long double x87_r7_7 = *(a1 + 0x2c54);
        long double temp2_1 = -20480f;
        x87_r7_7 - temp2_1;
        long double x87_r7_8;

        if (!(*(&((x87_r7_7 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_9 = *(a1 + 0x2c54);
            long double temp3_1 = 20480f;
            x87_r7_9 - temp3_1;

            if (*(&((x87_r7_9 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                x87_r7_8 = *(a1 + 0x2c54);
            else
                x87_r7_8 = 20480f;
        }
        else
            x87_r7_8 = -20480f;

        *(a1 + 0x2c54) = x87_r7_8;
        long double x87_r6_1 = *(a1 + 0x2c58);
        long double temp4_1 = -20480f;
        x87_r6_1 - temp4_1;
        long double x87_r6_2;

        if (!(*(&((x87_r6_1 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp4_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double x87_r6_3 = *(a1 + 0x2c58);
            long double temp5_1 = 20480f;
            x87_r6_3 - temp5_1;

            if (*(&((x87_r6_3 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                x87_r6_2 = *(a1 + 0x2c58);
            else
                x87_r6_2 = 20480f;
        }
        else
            x87_r6_2 = -20480f;

        *(a1 + 0x2c58) = x87_r6_2;
        long double x87_r5_1 = *(a1 + 0x2c5c);
        long double temp6_1 = -20480f;
        x87_r5_1 - temp6_1;
        long double x87_r5_2;

        if (!(*(&((x87_r5_1 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_1, temp6_1) ? 1 : 0) << 0xa
            | (x87_r5_1 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
        {
            long double x87_r5_3 = *(a1 + 0x2c5c);
            long double temp7_1 = 20480f;
            x87_r5_3 - temp7_1;

            if (*(&((x87_r5_3 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r5_3 == temp7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                x87_r5_2 = *(a1 + 0x2c5c);
            else
                x87_r5_2 = 20480f;
        }
        else
            x87_r5_2 = -20480f;

        *(a1 + 0x2c54) = x87_r7_8 * 0.5f;
        *(a1 + 0x2c58) = x87_r6_2 * 0.5f;
        *(a1 + 0x2c5c) = x87_r5_2 * 0.5f;
    }

    memcpy(a1 + 0x2c08, &g_bcab08, 0x18);
    void var_28;
    memcpy(&var_28, &g_bcaae0, 0x28);
    int32_t var_10;
    *(a1 + 0x2c48) = var_10;
    int32_t var_c;
    *(a1 + 0x2c4c) = var_c;
    int32_t var_8;
    *(a1 + 0x2c50) = var_8;
    sub_4f7990(a1);
    int32_t** result = *(a1 + 0x2cac);

    if (!result)
        return result;

    return sub_4f7960(a1);
}
