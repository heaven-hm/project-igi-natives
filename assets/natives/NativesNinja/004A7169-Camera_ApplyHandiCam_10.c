#include "004A7169-Camera_ApplyHandiCam_10.h"
/* 0x004a7169 Camera_ApplyHandiCam_10 full linked: callers=1 callees=0 */
int32_t sub_4a7169() __pure

{
    double var_c = 3145727.0;
    double var_14 = 4195835.0;
    long double x87_r7_6 = var_14 - var_14 / var_c * var_c;
    long double temp0 = 1.0;
    x87_r7_6 - temp0;
    int16_t eax = (x87_r7_6 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp0) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp0 ? 1 : 0) << 0xe;

    if (TEST_BITB(*(&eax + 1), 6) || TEST_BITB(*(&eax + 1), 0))
        return 0;

    return 1;
}
