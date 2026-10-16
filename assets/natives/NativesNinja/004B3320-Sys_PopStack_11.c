#include "004B3320-Sys_PopStack_11.h"
/* 0x004b3320 Sys_PopStack_11 full linked: callers=16 callees=0 */
int32_t sub_4b3320(double* a1)

{
    long double x87_r7 = *a1;
    long double temp0 = 0.0;
    x87_r7 - temp0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_1 = a1[1];
        long double temp1_1 = 0.0;
        x87_r7_1 - temp1_1;

        if (*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_2 = a1[2];
            long double temp2_1 = 0.0;
            x87_r7_2 - temp2_1;

            if (*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 1;
        }
    }

    return 0;
}
