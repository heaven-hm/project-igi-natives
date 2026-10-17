// Original IGI.EXE function: Physics_InterpolateWaypoint_3 (VA 0x005042B0; static CFG gate PASS, CFG score 1.000).
#include "Physics_InterpolateWaypoint_3.h"
double* Physics_InterpolateWaypoint_3(void* context, double* param_2)

{
    double* result = param_2;
    long double fpu_val_7_1 = *result - *(context + 0x50);
    long double fpu_val_6_1 = result[1] - *(context + 0x58);
    long double fpu_val_5_1 = result[2] - *(context + 0x60);
    float item_c = fpu_val_5_1 * *(context + 0x80) + fpu_val_6_1 * *(context + 0x74) + fpu_val_7_1 * *(context + 0x68);
    float item_8 = fpu_val_5_1 * *(context + 0x84) + fpu_val_6_1 * *(context + 0x78) + fpu_val_7_1 * *(context + 0x6c);
    float item_4 = fpu_val_5_1 * *(context + 0x88) + fpu_val_6_1 * *(context + 0x7c) + fpu_val_7_1 * *(context + 0x70);
    long double fpu_val_7_4 = item_c;
    long double f1 = *(context + 0x90);
    fpu_val_7_4 - f1;
    result = (fpu_val_7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double fpu_val_7_5 = item_8;
    long double f2 = *(context + 0x94);
    fpu_val_7_5 - f2;
    result = (fpu_val_7_5 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_5 == f2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double fpu_val_7_6 = item_4;
    long double f3 = *(context + 0x98);
    fpu_val_7_6 - f3;
    result = (fpu_val_7_6 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f3 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double fpu_val_7_8 = -(*(context + 0x90));
    long double f4 = item_c;
    fpu_val_7_8 - f4;
    result = (fpu_val_7_8 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_8 == f4 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double fpu_val_7_10 = -(*(context + 0x94));
    long double f5 = item_8;
    fpu_val_7_10 - f5;
    result = (fpu_val_7_10 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f5) ? 1 : 0) << 0xa
        | (fpu_val_7_10 == f5 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double fpu_val_7_12 = -(*(context + 0x98));
    long double f6 = item_4;
    fpu_val_7_12 - f6;
    result = (fpu_val_7_12 < f6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_12, f6) ? 1 : 0) << 0xa
        | (fpu_val_7_12 == f6 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x41)
    {
        result = 1;
        return result;
    }

    result = 0;
    return result;
}
