#include "00528460-Light_UpdateGlobalLight_6.h"
/* 0x00528460 Light_UpdateGlobalLight_6 full linked: callers=1 callees=1 */
void sub_528460(float a1)

{
    void* ecx_2 = g_a8437c;

    if (!ecx_2)
        return;

    long double x87_r7_1 = a1;
    long double temp0_1 = *(ecx_2 + 0x194);
    x87_r7_1 - temp0_1;

    if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        *(ecx_2 + 0x194) = a1;
        sub_527520(g_a8437c);
    }
}
