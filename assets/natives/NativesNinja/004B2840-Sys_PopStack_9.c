#include "004B2840-Sys_PopStack_9.h"
/* 0x004b2840 Sys_PopStack_9 full linked: callers=1 callees=2 */
int32_t sub_4b2840(double a1) __location("st0")

{
    long double x87_r7 = a1;
    long double temp0 = -1.0;
    x87_r7 - temp0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
        return sub_5168e0(-1.0);

    long double x87_r7_3 = a1;
    long double temp1 = 1.0;
    x87_r7_3 - temp1;

    if (!(*(&((x87_r7_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        a1 = 0;
        *(&a1 + 4) = 0x3ff00000;
    }

    return sub_5168e0(a1);
}
