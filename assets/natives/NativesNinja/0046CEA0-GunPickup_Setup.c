#include "0046CEA0-GunPickup_Setup.h"
/* 0x0046cea0 GunPickup_Setup full linked: callers=0 callees=9 */
int32_t sub_46cea0(float a1)

{
    int32_t* esi = a1;
    long double x87_r7 = *(esi + 0x100);
    long double temp0 = *(esi + 0x118);
    x87_r7 - temp0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_2 = *(esi + 0x120) * -0.5;
        int32_t ecx_1 = esi[0x47];
        esi[0x40] = esi[0x46];
        esi[0x41] = ecx_1;
        *(esi + 0x120) = x87_r7_2;
        long double st0_1 = sub_4b4770(Level_SetMission_5());
        long double temp2_1 = 0.5;
        st0_1 - temp2_1;
        char* eax_5 = "weapondrop_01";

        if (*(&((st0_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp2_1) ? 1 : 0) << 0xa
                | (st0_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            eax_5 = "weapondrop_02";

        struct status_msg* eax_7 = sub_4e6b00(sub_4f0ee0(), eax_5);

        if (eax_7)
            sub_4e6c30(eax_7, &esi[0x3c]);
    }

    long double x87_r7_4 = *(esi + 0x100);
    long double temp1 = *(esi + 0x118);
    x87_r7_4 - temp1;
    long double x87_r7_6;
    long double temp4_1;

    if (*(&((x87_r7_4 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_5 = *(esi + 0x120);
        long double temp3_1 = 0.0;
        x87_r7_5 - temp3_1;
        x87_r7_6 = *(esi + 0x120);

        if (*(&((x87_r7_5 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_6 = -(x87_r7_6);

        temp4_1 = 409.60000000000002;
        x87_r7_6 - temp4_1;
    }

    if (!(*(&((x87_r7_4 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41) || !(*(&((x87_r7_6 < temp4_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_6, temp4_1) ? 1 : 0) << 0xa | (x87_r7_6 == temp4_1 ? 1 : 0) << 0xe) + 1)
        & 1))
    {
        *(esi + 0x100) = *(esi + 0x100) - *(esi + 0x120);
        *(esi + 0x120) = *(esi + 0x120) + 44.600888888888889;
    }
    else
    {
        esi[0x48] = 0;
        esi[0x49] = 0;
    }

    long double x87_r7_11 = esi[0x27];
    long double x87_r6 = esi[0x28];
    x87_r6 - x87_r7_11;
    long double x87_r7_12;

    if (!(*(&((x87_r6 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7_11) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7_11 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_12 = esi[0x28];
    else
        x87_r7_12 = esi[0x27];

    long double x87_r6_1 = esi[0x26];
    x87_r6_1 - x87_r7_12;
    long double x87_r7_14;

    if (*(&((x87_r6_1 < x87_r7_12 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_12) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_12 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_15 = esi[0x27];
        long double x87_r6_2 = esi[0x28];
        x87_r6_2 - x87_r7_15;

        if (!(*(&((x87_r6_2 < x87_r7_15 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_2, x87_r7_15) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_15 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_14 = esi[0x28];
        else
            x87_r7_14 = esi[0x27];
    }
    else
        x87_r7_14 = esi[0x26];

    float var_8_5 = sub_4d0950(esi[0x1b]) * x87_r7_14;
    sub_4c6940(Level_StartMission_4(), esi, &esi[0x3c], var_8_5);
    char result = *(esi + 0x129);

    if (!result)
        return result;

    return QTask_FindType(esi);
}
