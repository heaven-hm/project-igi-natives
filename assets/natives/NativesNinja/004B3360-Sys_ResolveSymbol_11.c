#include "004B3360-Sys_ResolveSymbol_11.h"
/* 0x004b3360 Sys_ResolveSymbol_11 full linked: callers=6 callees=0 */
int32_t sub_4b3360(double* a1, double* a2)

{
    long double x87_r7 = *a1;
    long double temp0 = *a2;
    x87_r7 - temp0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_1 = a1[1];
        long double temp1_1 = a2[1];
        x87_r7_1 - temp1_1;

        if (*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_2 = a1[2];
            long double temp2_1 = a2[2];
            x87_r7_2 - temp2_1;

            if (*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 1;
        }
    }

    return 0;
}
