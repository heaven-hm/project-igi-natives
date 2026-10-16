#include "Script_ParseEnumString_18.h"
int32_t Script_ParseEnumString_18(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9) __location("fp0")

{
    int32_t v_28 = 0;
    long double x87_r7_2 = (a4 - a2) * 0.5;
    long double x87_r6_1 = a7 - a5;
    long double f0 = 0.0;
    x87_r6_1 - f0;

    if (*(&((x87_r6_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f0) ? 1 : 0) << 0xa
        | (x87_r6_1 == f0 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
    {
        a4 = 0;
        *(&a4 + 4) = 0;
    }
    else
    {
        long double x87_r5_2 = a6 - a5;
        a4 = (x87_r5_2 + x87_r5_2) / x87_r6_1 * (a3 - a1) * 0.5;
    }

    long double x87_r6_5 = a8 - a6;
    long double f1 = 0.0;
    x87_r6_5 - f1;

    if (*(&((x87_r6_5 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, f1) ? 1 : 0) << 0xa
        | (x87_r6_5 == f1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
    {
        a5 = 0;
        *(&a5 + 4) = 0;
    }
    else
    {
        long double x87_r5_7 = a7 - a6;
        a5 = (x87_r5_7 + x87_r5_7) / x87_r6_5 * x87_r7_2;
    }

    int32_t v_2c = *(&a5 + 4);
    int32_t v_34 = *(&a4 + 4);
    int32_t v_3c = *(&a3 + 4);
    double v_20[0x4];
    Terrain_ConnectGraphNode_7(&v_20, a2, *(&a2 + 4), a3, a4, a5);
    long double x87_r7_6 = a7 - a6;
    long double f2 = 0.0;
    x87_r7_6 - f2;

    if (!(*(&((x87_r7_6 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f2) ? 1 : 0) << 0xa
            | (x87_r7_6 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        v_28 = (a9 - a6) / x87_r7_6;

    int32_t v_2c_1 = 0;
    return Terrain_SampleHeightmap_7(&v_20, v_28);
}
