#include "RainDynCubeObj_Update.h"
int32_t** RainDynCubeObj_Update(void* a1)

{
    Script_ParseEnumReal32_5();
    long double fpu7 = *(a1 + 0x2c08);
    long double f1 = 0.0;
    fpu7 - f1;

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        *(a1 + 0x2c54) = g_bcab08 - *(a1 + 0x2c08);
        *(a1 + 0x2c58) = g_bcab10 - *(a1 + 0x2c10);
        *(a1 + 0x2c5c) = g_bcab18 - *(a1 + 0x2c18);
        long double x87_r7_7 = *(a1 + 0x2c54);
        long double f2_1 = -20480f;
        x87_r7_7 - f2_1;
        long double x87_r7_8;

        if (!(*(&((x87_r7_7 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_9 = *(a1 + 0x2c54);
            long double f3_1 = 20480f;
            x87_r7_9 - f3_1;

            if (*(&((x87_r7_9 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                x87_r7_8 = *(a1 + 0x2c54);
            else
                x87_r7_8 = 20480f;
        }
        else
            x87_r7_8 = -20480f;

        *(a1 + 0x2c54) = x87_r7_8;
        long double x87_r6_1 = *(a1 + 0x2c58);
        long double f4_1 = -20480f;
        x87_r6_1 - f4_1;
        long double x87_r6_2;

        if (!(*(&((x87_r6_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f4_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double x87_r6_3 = *(a1 + 0x2c58);
            long double f5_1 = 20480f;
            x87_r6_3 - f5_1;

            if (*(&((x87_r6_3 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, f5_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                x87_r6_2 = *(a1 + 0x2c58);
            else
                x87_r6_2 = 20480f;
        }
        else
            x87_r6_2 = -20480f;

        *(a1 + 0x2c58) = x87_r6_2;
        long double x87_r5_1 = *(a1 + 0x2c5c);
        long double f6_1 = -20480f;
        x87_r5_1 - f6_1;
        long double x87_r5_2;

        if (!(*(&((x87_r5_1 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_1, f6_1) ? 1 : 0) << 0xa
            | (x87_r5_1 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
        {
            long double x87_r5_3 = *(a1 + 0x2c5c);
            long double f7_1 = 20480f;
            x87_r5_3 - f7_1;

            if (*(&((x87_r5_3 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, f7_1) ? 1 : 0) << 0xa
                    | (x87_r5_3 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
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
    void v_28;
    memcpy(&v_28, &g_bcaae0, 0x28);
    int32_t v_10;
    *(a1 + 0x2c48) = v_10;
    int32_t v_c;
    *(a1 + 0x2c4c) = v_c;
    int32_t v_8;
    *(a1 + 0x2c50) = v_8;
    Script_VisibleCubesD(a1);
    int32_t** result = *(a1 + 0x2cac);

    if (!result)
        return result;

    return Script_ParseEnumInt32_20(a1);
}
