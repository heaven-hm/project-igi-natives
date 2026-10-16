#include "004769B0-Grenade_LoadParameters.h"
/* 0x004769b0 Grenade_LoadParameters full linked: callers=0 callees=9 */
int32_t* sub_4769b0(float a1)

{
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    *(a1 + 0x728) = 0;
    *(a1 + 0x724) = Frames_GetUpdateCounter();
    *(a1 + 0x72c) = 0;
    *(a1 + 0x730) = 0;
    sub_4c5710(Level_StartMission_4(), a1, 0);
    long double x87_r7 = *(a1 + 0x9c);
    long double x87_r6 = *(a1 + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    float var_24_2 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
    sub_4c7140(Level_StartMission_4(), a1, &var_18, var_24_2, 2);
    return sub_4c1790(Level_CheckQTaskID_4(), a1);
}
