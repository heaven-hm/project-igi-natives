#include "004719D0-Weapon_CycleFireMode.h"
/* 0x004719d0 Weapon_CycleFireMode full linked: callers=1 callees=3 */
int32_t sub_4719d0(float* a1, int32_t* a2)

{
    long double x87_r7 = *a1;
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        long double x87_r7_2 = *a1 - a1[2];
        long double x87_r6_1 = 0f;
        x87_r6_1 - x87_r7_2;

        if (*(&((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r6_2 = 1f;
            x87_r6_2 - x87_r7_2;

            if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_2 = 1f;
        }
        else
            x87_r7_2 = 0f;

        *a1 = x87_r7_2;
    }

    if (a1[3] > 0)
    {
        int32_t result = a1[3] - 1;
        a1[3] = result;
        return result;
    }

    long double st0 = sub_4b4770(a2);
    long double temp1 = *a1;
    st0 - temp1;
    long double x87_r7_6;

    if (*(&((st0 < temp1 ? 1 : 0) << 8 | (FCMP_UO(st0, temp1) ? 1 : 0) << 0xa
            | (st0 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_6 = *a1;
    else
        x87_r7_6 = sub_4b4770(a2);

    *a1 = x87_r7_6;
    int32_t var_8 = (sub_4b4770(a2) + 1f) * a1[4] * 0.5f;
    a1[3] = var_8;
    a1[3] = var_8 - 1;
    return var_8 - 1;
}
