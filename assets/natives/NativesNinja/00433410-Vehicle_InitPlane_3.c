#include "00433410-Vehicle_InitPlane_3.h"
/* 0x00433410 Vehicle_InitPlane_3 full linked: callers=1 callees=9 */
float Vehicle_InitPlane_3(float a1) __location("eax")

{
    int32_t* esi = a1;
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
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

    float var_24_2 = sub_4d0950(esi[0x1b]) * x87_r7_3;
    sub_4c7140(Level_StartMission_4(), esi, &var_18, var_24_2, 2);
    esi[0x20a] = sub_4e6ab0(2);
    esi[0x20d] = 0;
    esi[0x55] = 0;
    sub_4f4680(esi);
    esi[0x1d0] = 0x3f800000;
    esi[0x20c] = 0;
    *(esi + 0x831) = 1;
    return Vehicle_UpdateRudder_3(esi);
}
