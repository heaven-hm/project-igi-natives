#include "0048BE30-FX_FireBallUpdate_19.h"
/* 0x0048be30 FX_FireBallUpdate_19 full linked: callers=2 callees=12 */
int32_t sub_48be30(void* a1, void* a2)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    float var_4 = sub_4b4770(Level_SetMission_5());

    if (*(a1 + 0x3df8) >= 0)
    {
        uint32_t eax_2 = Frames_GetUpdateCounter();

        if (*(a1 + 0x3df8) >= eax_2)
            return 0xffffffff;
    }

    *(a1 + 0x3df8) = Frames_GetUpdateCounter() + 0xa;

    if (!*(a1 + 0x8cc) && !*(a1 + 0x8bc) && !*(a1 + 0x8b8))
        return 0xffffffff;

    if (sub_509890(sub_4f9720(*(a1 + 0x3b6c), *(a1 + 0x3e2c)), sub_509880()))
        return 0xffffffff;

    long double st0_1 = sub_4b4770(Level_SetMission_5());
    long double temp0 = *(a1 + 0x3d54);
    st0_1 - temp0;

    if (*(&((st0_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp0) ? 1 : 0) << 0xa
        | (st0_1 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_2 = *(a1 + 0x3d58);
        long double temp1_1 = 0f;
        x87_r7_2 - temp1_1;

        if (*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            return 0;

        long double x87_r7_3 = *(a1 + 0x3d58);
        long double temp2_1 = var_4;
        x87_r7_3 - temp2_1;

        if (*(&((x87_r7_3 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double x87_r7_4 = *(a2 + 8);
            long double temp3_1 = *(a1 + 0x3db8);
            x87_r7_4 - temp3_1;

            if (!(*(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                return 0;
        }

        var_4 = sub_4b4770(Level_SetMission_5());
        char eax_20 = sub_4526e0(a1);
        char edx_3;

        if (!(eax_20 & 1) || *(a1 + 0x3df4) == 1)
            edx_3 = 0;
        else
            edx_3 = 1;

        char ecx_7;

        if (!(eax_20 & 2) || *(a1 + 0x3df4) == 0xffffffff)
            ecx_7 = 0;
        else
            ecx_7 = 1;

        if (edx_3)
        {
            long double x87_r7_6 = *(a1 + 0x3d60);
            long double temp4_1 = 0f;
            x87_r7_6 - temp4_1;
            long double x87_r7_7;
            long double temp5_1;

            if (!(*(&((x87_r7_6 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_6, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                x87_r7_7 = *(a1 + 0x3d60);
                temp5_1 = var_4;
                x87_r7_7 - temp5_1;
            }

            if (*(&((x87_r7_6 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40 || *(&(
                    (x87_r7_7 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1)
                return 1;
        }

        if (ecx_7)
        {
            long double x87_r7_8;
            long double temp6_1;

            if (*(a1 + 0x3d60) != 0x3f800000)
            {
                x87_r7_8 = *(a1 + 0x3d60);
                temp6_1 = var_4;
                x87_r7_8 - temp6_1;
            }

            if (*(a1 + 0x3d60) == 0x3f800000 || !(*(&((x87_r7_8 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1))
                return 2;
        }
    }

    return 0xffffffff;
}
