// Original IGI.EXE function: Camera_ApplyWideScreen_17 (VA 0x004A9BD1; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_17.h"
int32_t _isintTOS(long double context )

{
    long double fpu7 = roundl(context);
    fpu7 - context;

    if (!TEST_BITB(
            *(&((fpu7 < context ? 1 : 0) << 8 | (FCMP_UO(fpu7, context) ? 1 : 0) << 0xa
                | (fpu7 == context ? 1 : 0) << 0xe) + 1),
            6))
        return 0;

    long double fpu_val_7_2 = context * g_544572;
    long double fpu_val_6_2 = roundl(fpu_val_7_2);
    fpu_val_6_2 - fpu_val_7_2;

    if (TEST_BITB(
            *(&((fpu_val_6_2 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_2) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_2 ? 1 : 0) << 0xe) + 1),
            6))
        return 2;

    return 1;
}
