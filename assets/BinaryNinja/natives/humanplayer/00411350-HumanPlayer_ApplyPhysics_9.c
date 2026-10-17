// Original IGI.EXE function: HumanPlayer_ApplyPhysics_9 (VA 0x00411350; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyPhysics_9.h"
int32_t HumanPlayer_ApplyPhysics_9(void* context)

{
    long double fpu7 = *(context + 0xddc);
    long double f0 = 0.0f;
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double fpu_val_7_1 = *(context + 0xddc);
        long double f1_1 = 1.0f;
        fpu_val_7_1 - f1_1;
        long double fpu_val_7_2 = *(context + 0xddc);
        long double fpu_val_7_3;

        fpu_val_7_3 = *(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe
            | 0x3800) + 1) & 0x41 ? fpu_val_7_2 - 0.0166666675f : fpu_val_7_2 - 0.0111111114f;

        *(context + 0xddc) = fpu_val_7_3;
        long double fpu_val_7_4 = *(context + 0xddc);
        long double f2_1 = 0.0f;
        fpu_val_7_4 - f2_1;
        result = (fpu_val_7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
            *(context + 0xddc) = 0;
    }

    return result;
}
