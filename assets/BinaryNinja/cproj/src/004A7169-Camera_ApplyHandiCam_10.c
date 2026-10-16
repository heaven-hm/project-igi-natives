#include "gi_platform.h"
#include "004A7169-Camera_ApplyHandiCam_10.h"
int32_t Camera_ApplyHandiCam_10() __pure

{
    double v_c = 3145727.0;
    double v_14 = 4195835.0;
    long double x87_r7_6 = v_14 - v_14 / v_c * v_c;
    long double f0 = 1.0;
    x87_r7_6 - f0;
    int16_t valA = (x87_r7_6 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f0) ? 1 : 0) << 0xa
        | (x87_r7_6 == f0 ? 1 : 0) << 0xe;

    if (TEST_BITB((*(int32_t*)(uintptr_t)(&valA + 1)), 6) || TEST_BITB((*(int32_t*)(uintptr_t)(&valA + 1)), 0))
        return 0;

    return 1;
}
