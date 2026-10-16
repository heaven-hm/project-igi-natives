#include "004A8A91-Camera_ResetMatrix_14.h"
/* 0x004a8a91 Camera_ResetMatrix_14 full linked: callers=3 callees=0 */
🌐  long double __fload(double a1, int16_t a2 @ 0xa) __pure

{
    if ((a2 & 0x7ff0) != 0x7ff0)
        return a1;

    int16_t var_6_1 = a2 | 0x7fff;
    int32_t ebx_1 = a1;
    int32_t var_a_1 = *(&a1 + 4) << 0xb | ebx_1 >> 0x15;
    return ebx_1;
}
