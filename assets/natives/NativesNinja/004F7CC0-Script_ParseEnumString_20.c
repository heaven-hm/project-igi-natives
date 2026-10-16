#include "004F7CC0-Script_ParseEnumString_20.h"
/* 0x004f7cc0 Script_ParseEnumString_20 full linked: callers=1 callees=3 */
long double sub_4f7cc0(void* a1, float a2, float a3)

{
    double* esi = a2;
    double var_18 = *esi - *(a1 + 0x2c08);
    double var_10 = esi[1] - *(a1 + 0x2c10);
    double var_8 = esi[2] - *(a1 + 0x2c18);
    sub_4a56da();
    long double x87_r6_2 = *esi - (var_18 - a3);
    *esi = x87_r6_2;
    sub_4a56da();
    long double x87_r5_2 = esi[1] - (var_10 - a3);
    esi[1] = x87_r5_2;
    sub_4a56da();
    long double x87_r4_1 = var_8;
    long double x87_r3_2 = esi[2] - (x87_r4_1 - a3);
    esi[2] = x87_r3_2;
    long double x87_r2_1 = a3 * 0.5f;
    long double temp1 = var_18;
    x87_r2_1 - temp1;

    if (*(&((x87_r2_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_1, temp1) ? 1 : 0) << 0xa
            | (x87_r2_1 == temp1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
        *esi = x87_r6_2 - a3;

    long double temp2 = var_10;
    x87_r2_1 - temp2;

    if (*(&((x87_r2_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_1, temp2) ? 1 : 0) << 0xa
            | (x87_r2_1 == temp2 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
        esi[1] = x87_r5_2 - a3;

    x87_r4_1 - x87_r2_1;

    if (!(*(&((x87_r4_1 < x87_r2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_1, x87_r2_1) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r2_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41))
        esi[2] = x87_r3_2 - a3;

    long double x87_r3_5 = a3 * -0.5f;
    long double temp3 = var_18;
    x87_r3_5 - temp3;

    if (!(*(&((x87_r3_5 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r3_5, temp3) ? 1 : 0) << 0xa
            | (x87_r3_5 == temp3 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41))
        *esi = a3 + *esi;

    long double temp4 = var_10;
    x87_r3_5 - temp4;

    if (!(*(&((x87_r3_5 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r3_5, temp4) ? 1 : 0) << 0xa
            | (x87_r3_5 == temp4 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41))
        esi[1] = a3 + esi[1];

    x87_r4_1 - x87_r3_5;

    if (*(&((x87_r4_1 < x87_r3_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_1, x87_r3_5) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r3_5 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        esi[2] = a3 + esi[2];

    return var_8;
}
