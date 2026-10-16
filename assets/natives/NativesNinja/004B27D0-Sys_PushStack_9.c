#include "004B27D0-Sys_PushStack_9.h"
/* 0x004b27d0 Sys_PushStack_9 full linked: callers=5 callees=2 */
int32_t sub_4b27d0(float a1) __location("st0")

{
    long double x87_r7 = a1;
    long double temp0 = -1.0;
    x87_r7 - temp0;
    double var_8 = x87_r7;
    bool c1 = /* bool c1 = unknown  {fst qword [esp], st0} */;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
            | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa | (x87_r7 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1)
            & 1)
        return sub_5168e0(-1.0);

    long double temp1 = 1.0;
    x87_r7 - temp1;

    if (!(*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        var_8 = 0;
        *(&var_8 + 4) = 0x3ff00000;
    }

    return sub_5168e0(var_8);
}
