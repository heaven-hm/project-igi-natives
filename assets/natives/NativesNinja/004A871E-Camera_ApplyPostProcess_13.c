#include "004A871E-Camera_ApplyPostProcess_13.h"
/* 0x004a871e Camera_ApplyPostProcess_13 full linked: callers=1 callees=2 */
long double sub_4a871e(double a1, int32_t* a2)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t var_c = ecx;
    long double x87_r7 = a1;
    long double temp0 = 0.0;
    x87_r7 - temp0;
    int32_t esi;

    if (TEST_BITB(
        *(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1),
        6))
    {
        esi = 0;
        var_c = 0;
    }
    else if (*(&a1 + 6) & 0x7ff0 || (!(*(&a1 + 4) & 0xfffff) && !a1))
    {
        int32_t var_1c_2 = 0;
        var_1c_2 = a1;
        var_c = sub_4a869b(var_1c_2, 0, 0);
        esi = (*(&a1 + 6) >> 4 & 0x7ff) - 0x3fe;
    }
    else
    {
        long double x87_r7_2 = a1;
        long double temp1_1 = 0.0;
        x87_r7_2 - temp1_1;
        esi = 0xfffffc03;
        int32_t eax_1;

        eax_1 = !TEST_BITB(
            *(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1),
            0) ? 0 : 1;

        while (!(*(&a1 + 6) & 0x10))
        {
            *(&a1 + 4) <<= 1;

            if (*(&a1 + 3) & 0x80)
                *(&a1 + 4) |= 1;

            a1 <<= 1;
            esi -= 1;
        }

        *(&a1 + 6) &= 0xffef;

        if (eax_1)
            *(&a1 + 7) |= 0x80;

        int32_t var_1c_1 = 0;
        var_1c_1 = a1;
        var_c = sub_4a869b(var_1c_1, 0, 0);
    }

    *a2 = esi;
    return var_c;
}
