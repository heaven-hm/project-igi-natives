#include "004A5955-Camera_ResetMatrix_5.h"
/* 0x004a5955 Camera_ResetMatrix_5 full linked: callers=2 callees=0 */
🌐  int32_t _test_whether_TOS_is_int(long double a1 @ st0)

{
    long double x87_r7 = roundl(a1);
    x87_r7 - a1;
    int32_t ecx;
    ecx = 0;
    int16_t result = (x87_r7 < a1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, a1) ? 1 : 0) << 0xa
        | (x87_r7 == a1 ? 1 : 0) << 0xe;

    if (!TEST_BITB(*(&result + 1), 6))
        return result;

    long double x87_r0 = a1 * g_543f00;
    ecx = 1;
    long double x87_r7_2 = roundl(x87_r0);
    x87_r7_2 - x87_r0;
    result = (x87_r7_2 < x87_r0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, x87_r0) ? 1 : 0) << 0xa
        | (x87_r7_2 == x87_r0 ? 1 : 0) << 0xe | 0x800;

    if (TEST_BITB(*(&result + 1), 6))
        ecx = 2;

    return result;
}
