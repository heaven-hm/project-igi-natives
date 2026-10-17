// Original IGI.EXE function: Camera_ResetMatrix_14 (VA 0x004A8A91; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_14.h"
long double __fload(double context, int16_t param_2 ) {
    if ((param_2 & 0x7ff0) != 0x7ff0)
        return context;

    int16_t item_6_1 = param_2 | 0x7fff;
    int32_t context_1 = context;
    int32_t item_a_1 = *(&context + 4) << 0xb | context_1 >> 0x15;
    return context_1;
}
