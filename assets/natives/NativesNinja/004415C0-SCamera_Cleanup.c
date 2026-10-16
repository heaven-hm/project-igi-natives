#include "004415C0-SCamera_Cleanup.h"
/* 0x004415c0 SCamera_Cleanup full linked: callers=0 callees=16 */
char* sub_4415c0(float a1)

{
    int32_t* esi = a1;
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    sub_4c1790(Level_InitTextures_4(), esi);
    sub_4c1790(g_57c18c, esi);
    sub_4c5710(Level_StartMission_4(), esi, 0);
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

    float var_2c_3 = sub_4d0950(esi[0x1b]) * x87_r7_3;
    sub_4c7140(Level_StartMission_4(), esi, &var_18, var_2c_3, 1);
    double* eax_6 = sub_4c3440(esi);
    sub_4dccb0(esi[0x1a], esi, eax_6);
    esi[0x974] = esi[5];
    __builtin_memset(&esi[0x3c], 0, 0x14);
    char* result = sub_4896c0(&esi[0x62], 1, 6, sub_464250() | sub_443670(), 4, 8);
    __builtin_memset(&esi[0x96e], 0, 0x15);
    esi[0x41] = 0;
    esi[0x42] = 0x3f000000;
    esi[0x975] = 0;
    esi[0x976] = 0;
    esi[0x977] = 0;
    esi[0x978] = 0;
    return result;
}
