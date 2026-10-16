#include "004AD441-Camera_ApplyPostProcess_27.h"
/* 0x004ad441 Camera_ApplyPostProcess_27 full linked: callers=1 callees=1 */
int32_t sub_4ad441(double a1, int32_t a2 @ 0xa)

{
    int16_t edx_1 = a2 & 0x7ff0;

    if (edx_1 == 0x7ff0)
    {
        int32_t var_c = 0x7ff0;
        var_c = a1;
        int32_t eax_1 = sub_4a86c4(var_c, 0x7ff0);

        if (eax_1 == 1)
            return 0x200;

        if (eax_1 == 2)
            return 4;

        if (eax_1 == 3)
            return 2;

        return 1;
    }

    int32_t eax_7 = a2 & 0x8000;

    if (!edx_1 && (*(&a1 + 4) & 0xfffff || a1))
    {
        int32_t eax_9 = -(eax_7);
        int32_t eax_10 = eax_9 - eax_9;
        eax_10 &= 0x90;
        return eax_10 + 0x80;
    }

    long double x87_r7_1 = a1;
    long double temp1 = 0.0;
    x87_r7_1 - temp1;

    if (!TEST_BITB(
        *(&((x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1 ? 1 : 0) << 0xe) + 1),
        6))
    {
        int32_t eax_17 = -(eax_7);
        int32_t eax_18 = eax_17 - eax_17;
        eax_18 &= 8;
        return eax_18 + 0x100;
    }

    int32_t eax_14 = -(eax_7);
    int32_t eax_15 = eax_14 - eax_14;
    eax_15 &= 0xe0;
    return eax_15 + 0x40;
}
