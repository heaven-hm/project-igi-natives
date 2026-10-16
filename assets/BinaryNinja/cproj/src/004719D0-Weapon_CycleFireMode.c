#include "gi_platform.h"
#include "004719D0-Weapon_CycleFireMode.h"
int32_t Weapon_CycleFireMode(float* a1, int32_t* a2)

{
    long double fpu7 = *a1;
    long double f0 = 0.0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        long double x87_r7_2 = *a1 - a1[2];
        long double x87_r6_1 = 0.0f;
        x87_r6_1 - x87_r7_2;

        if (*(&((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r6_2 = 1.0f;
            x87_r6_2 - x87_r7_2;

            if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_2 = 1.0f;
        }
        else
            x87_r7_2 = 0.0f;

        *a1 = x87_r7_2;
    }

    if (a1[3] > 0)
    {
        int32_t result = a1[3] - 1;
        a1[3] = result;
        return result;
    }

    long double fp0 = Sys_AllocateMemory_14(a2);
    long double f1 = *a1;
    fp0 - f1;
    long double x87_r7_6;

    if (*(&((fp0 < f1 ? 1 : 0) << 8 | (FCMP_UO(fp0, f1) ? 1 : 0) << 0xa
            | (fp0 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_6 = *a1;
    else
        x87_r7_6 = Sys_AllocateMemory_14(a2);

    *a1 = x87_r7_6;
    int32_t v_8 = (Sys_AllocateMemory_14(a2) + 1.0f) * a1[4] * 0.5.0f;
    a1[3] = v_8;
    a1[3] = v_8 - 1;
    return v_8 - 1;
}
