// Original IGI.EXE function: Camera_ApplyWideScreen_17 (VA 0x004A9BD1; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_17.h"
🌐  int32_t _isintTOS(long double a1 @ fp0)

{
    long double fpu7 = roundl(a1);
    fpu7 - a1;

    if (!TEST_BITB(
            *(&((fpu7 < a1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, a1) ? 1 : 0) << 0xa
                | (fpu7 == a1 ? 1 : 0) << 0xe) + 1),
            6))
        return 0;

    long double x87_r7_2 = a1 * g_544572;
    long double x87_r6_2 = roundl(x87_r7_2);
    x87_r6_2 - x87_r7_2;

    if (TEST_BITB(
            *(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe) + 1),
            6))
        return 2;

    return 1;
}
