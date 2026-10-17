// Original IGI.EXE function: Gun_Cleanup_2 (VA 0x00478A90; static CFG gate PASS, CFG score 0.905).
#include "Gun_Cleanup_2.h"
int32_t Gun_Cleanup_2(float a1, double** a2)

{
    int16_t valA;
    valA = *(a1 + 0xf0);
    double** flagP;

    if (!valA)
    {
        flagP = a2;
        memcpy(a1 + 0x20, *flagP, 0x18);
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

        long double x87_r7_7 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_4;
        flagP = a2;
        WorldObject_CommitTransform(Level_StartMission_4(), a1, *flagP, x87_r7_7);
    }

    memcpy(a1 + 0x70, flagP[1], 0x28);
    WeaponType_UpdateAnim(a1 + 0x178, a1, 2);
    int32_t* tmpD = *(a1 + 0x130);
    *(a1 + 0x178) = *(a1 + 0x20) + *(a1 + 0x178);
    *(a1 + 0x180) = *(a1 + 0x28) + *(a1 + 0x180);
    *(a1 + 0x188) = *(a1 + 0x30) + *(a1 + 0x188);
    return Weapon_CycleFireMode_6(*tmpD, a1 + 0x178);
}
