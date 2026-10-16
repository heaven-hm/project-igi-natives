#include "gi_platform.h"
#include "004A5955-Camera_ResetMatrix_5.h"
🌐  int32_t _test_whether_TOS_is_int(long double a1 )

{
    long double fpu7 = roundl(a1);
    fpu7 - a1;
    int32_t objC;
    objC = 0;
    int16_t result = (fpu7 < a1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, a1) ? 1 : 0) << 0xa
        | (fpu7 == a1 ? 1 : 0) << 0xe;

    if (!TEST_BITB(*(&result + 1), 6))
        return result;

    long double fpu0 = a1 * g_543f00;
    objC = 1;
    long double x87_r7_2 = roundl(fpu0);
    x87_r7_2 - fpu0;
    result = (x87_r7_2 < fpu0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, fpu0) ? 1 : 0) << 0xa
        | (x87_r7_2 == fpu0 ? 1 : 0) << 0xe | 0x800;

    if (TEST_BITB(*(&result + 1), 6))
        objC = 2;

    return result;
}
