#include "004B31F0-Sys_ExecuteBytecode_11.h"
/* 0x004b31f0 Sys_ExecuteBytecode_11 full linked: callers=3 callees=5 */
long double sub_4b31f0(double* a1, double* a2)

{
    if (sub_4b3320(a1))
        return 0.0;

    if (sub_4b3320(a2))
        return 0.0;

    double var_8 = a1[2] * a2[2] + a1[1] * a2[1] + *a1 * *a2;
    double var_10 = sub_4b3130(a1);
    long double x87_r7_9 = var_8 / (sub_4b3130(a2) * var_10);
    long double temp0 = 1.0;
    x87_r7_9 - temp0;

    if (!(*(&((x87_r7_9 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp0) ? 1 : 0) << 0xa
            | (x87_r7_9 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return 0.0;

    long double temp1 = -1.0;
    x87_r7_9 - temp1;

    if (!(*(&((x87_r7_9 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp1) ? 1 : 0) << 0xa
            | (x87_r7_9 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        return sub_516810(x87_r7_9);

    return 3.1415926535897944;
}
