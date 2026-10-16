#include "0043FAE0-Fence_LoadParameters.h"
/* 0x0043fae0 Fence_LoadParameters full linked: callers=0 callees=12 */
int32_t* sub_43fae0(int32_t* a1)

{
    int32_t var_20;
    __builtin_memset(&var_20, 0, 0x18);
    sub_4c1790(Level_StartMission_3(), a1);
    sub_4c1790(Level_LoadLevel_4(), a1);
    sub_4c5710(Level_StartMission_4(), a1, 0);
    long double x87_r7 = a1[0x27];
    long double x87_r6 = a1[0x28];
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = a1[0x28];
    else
        x87_r7_1 = a1[0x27];

    long double x87_r6_1 = a1[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = a1[0x27];
        long double x87_r6_2 = a1[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = a1[0x28];
        else
            x87_r7_3 = a1[0x27];
    }
    else
        x87_r7_3 = a1[0x26];

    float var_38_4 = sub_4d0950(a1[0x1b]) * x87_r7_3;
    sub_4c7140(Level_StartMission_4(), a1, &var_20, var_38_4, 1);
    __builtin_memset(&a1[0x3c], 0, 0x1d);
    a1[0x47] = 0;
    int32_t* result = sub_4f1320(&a1[0x48]);
    a1[0x5c] = 0;
    return result;
}
