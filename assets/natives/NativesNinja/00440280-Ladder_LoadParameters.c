#include "00440280-Ladder_LoadParameters.h"
/* 0x00440280 Ladder_LoadParameters full linked: callers=0 callees=11 */
int32_t sub_440280(float a1, int32_t* a2)

{
    int32_t* ebx = a1;
    sub_4c1790(Level_StartMission_3(), ebx);
    void* eax_2 = sub_4cec10(*a2);

    if (eax_2)
    {
        sub_4c5710(a2[1], ebx, eax_2);
        long double x87_r7 = ebx[0x27];
        long double x87_r6 = ebx[0x28];
        x87_r6 - x87_r7;
        long double x87_r7_1;

        if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = ebx[0x28];
        else
            x87_r7_1 = ebx[0x27];

        long double x87_r6_1 = ebx[0x26];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = ebx[0x27];
            long double x87_r6_2 = ebx[0x28];
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = ebx[0x28];
            else
                x87_r7_3 = ebx[0x27];
        }
        else
            x87_r7_3 = ebx[0x26];

        long double x87_r7_6 = sub_4d0950(ebx[0x1b]) * x87_r7_3;
        sub_4c7140(a2[1], ebx, &a2[2], x87_r7_6, 1);
        memcpy(&ebx[0x1c], &a2[0xe], 0x28);
        int32_t ebp_1 = a2[0x22];
        ebx[0x4c] = ebp_1;
        sub_4c4950(ebx, ebx, ebp_1);
        int64_t var_18;
        WeaponType_RegisterType_2(&var_18, ebx, 2);
        void* var_c;
        WeaponType_RegisterType_2(&var_c, ebx, 3);
        float var_10;
        float var_4;
        long double x87_r7_8 = var_10 - var_4;
        long double temp0 = 0f;
        x87_r7_8 - temp0;
        int16_t result = (x87_r7_8 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp0) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp0 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
            x87_r7_8 = -(x87_r7_8);

        var_18 = x87_r7_8 * 0.00081380208333333337;
        ebx[0x4e] = var_18;
        return result;
    }

    int32_t __saved_esi_1 = *a2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
