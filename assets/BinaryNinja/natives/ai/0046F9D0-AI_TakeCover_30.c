#include "AI_TakeCover_30.h"
int32_t AI_TakeCover_30(void* a1)

{
    void* objC = *(a1 + 0x1b8);
    long double fpu7 = *(a1 + 0x1bc);
    long double fpu6 = *(objC + 0x24);
    fpu6 - fpu7;

    if (*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
        | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_2 = *(a1 + 0x1bc);
        long double x87_r6_1 = *(objC + 0x20);
        x87_r6_1 - x87_r7_2;

        if (*(&((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe) + 1) & 1)
            *(a1 + 0x1bc) = *(objC + 0x20);
    }
    else
        *(a1 + 0x1bc) = *(objC + 0x24);

    long double x87_r7_3 = *(objC + 0x28);
    long double f0 = 6.2831853071795889;
    x87_r7_3 - f0;
    int16_t result = (x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double x87_r7_5 = -(*(objC + 0x28));
        long double x87_r6_2 = *(a1 + 0x1c0);
        x87_r6_2 - x87_r7_5;
        result = (x87_r6_2 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_5) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
            *(a1 + 0x1c0) = x87_r7_5;
        else
        {
            long double x87_r7_7 = *(a1 + 0x1c0);
            long double x87_r6_3 = *(objC + 0x28);
            x87_r6_3 - x87_r7_7;
            result = (x87_r6_3 < x87_r7_7 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_3, x87_r7_7) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_7 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
                *(a1 + 0x1c0) = *(objC + 0x28);
        }
    }

    return result;
}
