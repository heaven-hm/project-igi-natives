#include "Sys_ResolveSymbol_11.h"
int32_t Sys_ResolveSymbol_11(double* a1, double* a2)

{
    long double fpu7 = *a1;
    long double f0 = *a2;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_1 = a1[1];
        long double f1_1 = a2[1];
        x87_r7_1 - f1_1;

        if (*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_2 = a1[2];
            long double f2_1 = a2[2];
            x87_r7_2 - f2_1;

            if (*(&((x87_r7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 1;
        }
    }

    return 0;
}
