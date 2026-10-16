#include "0043C8D0-ElevatorFloorIndicator_LoadParameters.h"
/* 0x0043c8d0 ElevatorFloorIndicator_LoadParameters full linked: callers=0 callees=6 */
int32_t* ElevatorFloorIndicator_LoadParameters(float a1)

{
    int32_t eax = g_a44344;
    int32_t* esi = a1;
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    sub_4c5710(eax, esi, 0);
    long double x87_r7 = esi[0x27];
    long double x87_r6 = esi[0x28];
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = esi[0x28];
    else
        x87_r7_1 = esi[0x27];

    long double x87_r6_1 = esi[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = esi[0x27];
        long double x87_r6_2 = esi[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = esi[0x28];
        else
            x87_r7_3 = esi[0x27];
    }
    else
        x87_r7_3 = esi[0x26];

    long double x87_r7_6 = sub_4d0950(esi[0x1b]) * x87_r7_3;
    sub_4c7140(g_a44344, esi, &var_18, x87_r7_6, 1);
    esi[0x1c] = 0x3f800000;
    esi[0x1d] = 0;
    esi[0x1e] = 0;
    esi[0x1f] = 0;
    esi[0x20] = 0x3f800000;
    esi[0x21] = 0;
    esi[0x22] = 0;
    esi[0x23] = 0;
    esi[0x24] = 0x3f800000;
    esi[0x25] = 0;
    esi[0x5c] = 0;
    esi[0x60] = 0;
    esi[0x64] = 0;
    esi[0x68] = 0;
    sub_4f1320(&esi[0x69]);
    return sub_4f1320(&esi[0x7d]);
}
