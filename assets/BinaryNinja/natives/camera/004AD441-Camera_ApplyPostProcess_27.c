// Original IGI.EXE function: Camera_ApplyPostProcess_27 (VA 0x004AD441; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_27.h"
int32_t Camera_ApplyPostProcess_27(double a1, int32_t a2 @ 0xa)

{
    int16_t tmpD1 = a2 & 0x7ff0;

    if (tmpD1 == 0x7ff0)
    {
        int32_t v_c = 0x7ff0;
        v_c = a1;
        int32_t valA1 = Camera_ApplyWideScreen_13(v_c, 0x7ff0);

        if (valA1 == 1)
            return 0x200;

        if (valA1 == 2)
            return 4;

        if (valA1 == 3)
            return 2;

        return 1;
    }

    int32_t valA7 = a2 & 0x8000;

    if (!tmpD1 && (*(&a1 + 4) & 0xfffff || a1))
    {
        int32_t valA9 = -(valA7);
        int32_t valA10 = valA9 - valA9;
        valA10 &= 0x90;
        return valA10 + 0x80;
    }

    long double x87_r7_1 = a1;
    long double f1 = 0.0;
    x87_r7_1 - f1;

    if (!TEST_BITB(
        *(&((x87_r7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1 ? 1 : 0) << 0xe) + 1),
        6))
    {
        int32_t valA17 = -(valA7);
        int32_t valA18 = valA17 - valA17;
        valA18 &= 8;
        return valA18 + 0x100;
    }

    int32_t valA14 = -(valA7);
    int32_t valA15 = valA14 - valA14;
    valA15 &= 0xe0;
    return valA15 + 0x40;
}
