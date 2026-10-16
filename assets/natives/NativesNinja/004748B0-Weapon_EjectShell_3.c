#include "004748B0-Weapon_EjectShell_3.h"
/* 0x004748b0 Weapon_EjectShell_3 full linked: callers=1 callees=0 */
float sub_4748b0(float a1) __location("eax")

{
    float ecx = a1;
    long double x87_r7_1 = *(ecx + 0x1e4) * 0.0174532924f;
    long double x87_r6 = *(ecx + 0x1f8);
    x87_r6 - x87_r7_1;
    float result;
    result = (x87_r6 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        long double x87_r7_4 = *(ecx + 0x1e0) * 0.0174532924f;
        long double x87_r6_1 = *(ecx + 0x1f8);
        x87_r6_1 - x87_r7_4;
        result = (x87_r6_1 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
            *(ecx + 0x1f8) = x87_r7_4;
    }
    else
        *(ecx + 0x1f8) = x87_r7_1;

    long double x87_r7_7 = *(ecx + 0x1e8) * 0.0174532924f;
    a1 = x87_r7_7;
    long double temp0 = 6.2831853071795889;
    x87_r7_7 - temp0;
    result = (x87_r7_7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp0) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double x87_r7_10 = -(*(ecx + 0x1e8)) * 0.0174532924f;
        long double x87_r6_2 = *(ecx + 0x1fc);
        x87_r6_2 - x87_r7_10;
        result = (x87_r6_2 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_10) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
        {
            *(ecx + 0x1fc) = x87_r7_10;
            return result;
        }

        long double x87_r7_12 = *(ecx + 0x1fc);
        long double temp1_1 = a1;
        x87_r7_12 - temp1_1;
        result = (x87_r7_12 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_12 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            result = a1;
            *(ecx + 0x1fc) = result;
        }
    }

    return result;
}
