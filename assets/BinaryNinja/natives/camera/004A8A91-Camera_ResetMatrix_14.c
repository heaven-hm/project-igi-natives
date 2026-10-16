#include "Camera_ResetMatrix_14.h"
🌐  long double __fload(double a1, int16_t a2 @ 0xa) __pure

{
    if ((a2 & 0x7ff0) != 0x7ff0)
        return a1;

    int16_t v_6_1 = a2 | 0x7fff;
    int32_t ctxB1 = a1;
    int32_t v_a_1 = *(&a1 + 4) << 0xb | ctxB1 >> 0x15;
    return ctxB1;
}
