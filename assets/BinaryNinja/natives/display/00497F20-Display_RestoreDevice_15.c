// Original IGI.EXE function: Display_RestoreDevice_15 (VA 0x00497F20; static CFG gate PASS, CFG score 1.000).
#include "Display_RestoreDevice_15.h"
float* Display_RestoreDevice_15(float* context, float* param_2, double* param_3)

{
    long double fpu_val_7_1 = *param_3 - g_bcab08;
    long double fpu_val_6_1 = param_3[1] - g_bcab10;
    long double fpu_val_5_1 = param_3[2] - g_bcab18;
    float* data_1 = param_2;
    float item_c = g_bcaae8 * fpu_val_5_1 + g_bcaae4 * fpu_val_6_1 + g_bcaae0 * fpu_val_7_1;
    float item_8 = g_bcaaf4 * fpu_val_5_1 + g_bcaaf0 * fpu_val_6_1 + g_bcaaec * fpu_val_7_1;
    long double fpu_val_4_11 =
        g_bcab00 * fpu_val_5_1 + g_bcaafc * fpu_val_6_1 + g_bcaaf8 * fpu_val_7_1;
    *data_1 = fpu_val_4_11;
    long double f0 = 0.0f;
    fpu_val_4_11 - f0;
    data_1 = (fpu_val_4_11 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_11, f0) ? 1 : 0) << 0xa
        | (fpu_val_4_11 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (*(&data_1 + 1) & 0x41)
        return data_1;

    long double fpu_val_7_3 = 1.0 / fpu_val_4_11;
    *context = g_bcab28 * item_c * fpu_val_7_3 + g_bcab30;
    context[1] = g_bcab2c * item_8 * fpu_val_7_3 + g_bcab34;
    return context;
}
