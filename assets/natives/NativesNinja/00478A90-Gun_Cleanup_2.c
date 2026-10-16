#include "00478A90-Gun_Cleanup_2.h"
/* 0x00478a90 Gun_Cleanup_2 full linked: callers=0 callees=7 */
int32_t sub_478a90(float a1, double** a2)

{
    int16_t eax;
    eax = *(a1 + 0xf0);
    double** ebp;

    if (!eax)
    {
        ebp = a2;
        memcpy(a1 + 0x20, *ebp, 0x18);
    }
    else
    {
        long double x87_r7_1 = *(a1 + 0x9c);
        long double x87_r6_1 = *(a1 + 0xa0);
        x87_r6_1 - x87_r7_1;
        long double x87_r7_2;

        if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_2 = *(a1 + 0xa0);
        else
            x87_r7_2 = *(a1 + 0x9c);

        long double x87_r6_2 = *(a1 + 0x98);
        x87_r6_2 - x87_r7_2;
        long double x87_r7_4;

        if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_5 = *(a1 + 0x9c);
            long double x87_r6_3 = *(a1 + 0xa0);
            x87_r6_3 - x87_r7_5;

            if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_4 = *(a1 + 0xa0);
            else
                x87_r7_4 = *(a1 + 0x9c);
        }
        else
            x87_r7_4 = *(a1 + 0x98);

        long double x87_r7_7 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_4;
        ebp = a2;
        sub_4c6940(Level_StartMission_4(), a1, *ebp, x87_r7_7);
    }

    memcpy(a1 + 0x70, ebp[1], 0x28);
    WeaponType_UpdateAnim(a1 + 0x178, a1, 2);
    int32_t* edx = *(a1 + 0x130);
    *(a1 + 0x178) = *(a1 + 0x20) + *(a1 + 0x178);
    *(a1 + 0x180) = *(a1 + 0x28) + *(a1 + 0x180);
    *(a1 + 0x188) = *(a1 + 0x30) + *(a1 + 0x188);
    return sub_47b270(*edx, a1 + 0x178);
}
