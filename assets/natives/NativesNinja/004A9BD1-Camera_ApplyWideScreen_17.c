#include "004A9BD1-Camera_ApplyWideScreen_17.h"
/* 0x004a9bd1 Camera_ApplyWideScreen_17 full linked: callers=2 callees=0 */
🌐  int32_t _isintTOS(long double a1 @ st0)

{
    long double x87_r7 = roundl(a1);
    x87_r7 - a1;

    if (!TEST_BITB(
            *(&((x87_r7 < a1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, a1) ? 1 : 0) << 0xa
                | (x87_r7 == a1 ? 1 : 0) << 0xe) + 1),
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
