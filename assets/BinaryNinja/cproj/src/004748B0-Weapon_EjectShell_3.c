#include "gi_platform.h"
#include "004748B0-Weapon_EjectShell_3.h"
float Weapon_EjectShell_3(float a1) __location("valA")

{
    float objC = a1;
    long double x87_r7_1 = *(objC + 0x1e4) * 0.0174532924.0f;
    long double fpu6 = *(objC + 0x1f8);
    fpu6 - x87_r7_1;
    float result;
    result = (fpu6 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu6, x87_r7_1) ? 1 : 0) << 0xa
        | (fpu6 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        long double x87_r7_4 = *(objC + 0x1e0) * 0.0174532924.0f;
        long double x87_r6_1 = *(objC + 0x1f8);
        x87_r6_1 - x87_r7_4;
        result = (x87_r6_1 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
            *(objC + 0x1f8) = x87_r7_4;
    }
    else
        *(objC + 0x1f8) = x87_r7_1;

    long double x87_r7_7 = *(objC + 0x1e8) * 0.0174532924.0f;
    a1 = x87_r7_7;
    long double f0 = 6.2831853071795889;
    x87_r7_7 - f0;
    result = (x87_r7_7 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f0) ? 1 : 0) << 0xa
        | (x87_r7_7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double x87_r7_10 = -(*(objC + 0x1e8)) * 0.0174532924.0f;
        long double x87_r6_2 = *(objC + 0x1fc);
        x87_r6_2 - x87_r7_10;
        result = (x87_r6_2 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_10) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
        {
            *(objC + 0x1fc) = x87_r7_10;
            return result;
        }

        long double x87_r7_12 = *(objC + 0x1fc);
        long double f1_1 = a1;
        x87_r7_12 - f1_1;
        result = (x87_r7_12 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_12 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            result = a1;
            *(objC + 0x1fc) = result;
        }
    }

    return result;
}
