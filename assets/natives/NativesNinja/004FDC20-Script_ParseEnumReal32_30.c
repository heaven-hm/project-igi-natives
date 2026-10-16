#include "004FDC20-Script_ParseEnumReal32_30.h"
/* 0x004fdc20 Script_ParseEnumReal32_30 full linked: callers=2 callees=1 */
long double sub_4fdc20(void* a1)

{
    double var_18 = *(a1 + 0xa0) - *(a1 + 0x88);
    long double x87_r7_3 = *(a1 + 0xa8) - *(a1 + 0x90);
    double var_10 = x87_r7_3;
    long double x87_r6_2 = var_18;
    long double temp0 = 0.0;
    x87_r6_2 - temp0;

    if (*(&((x87_r6_2 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp0) ? 1 : 0) << 0xa
        | (x87_r6_2 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
    {
        long double temp1_1 = 0.0;
        x87_r7_3 - temp1_1;

        if (*(&((x87_r7_3 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_4 = *(a1 + 0xb0) - *(a1 + 0x98);
            long double temp3_1 = 0.0;
            x87_r7_4 - temp3_1;

            if (*(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 1f;
        }
    }

    long double result = sub_4b3130(&var_18) * 0.5 + 8192f;
    long double temp2 = 1f;
    result - temp2;

    if (!(*(&((result < temp2 ? 1 : 0) << 8 | (FCMP_UO(result, temp2) ? 1 : 0) << 0xa
            | (result == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return result;

    return 1f;
}
