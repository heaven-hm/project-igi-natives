// Original IGI.EXE function: Render_SetupLighting_12 (VA 0x004DA790; static CFG gate PASS, CFG score 1.000).
#include "Render_SetupLighting_12.h"
uint32_t Render_SetupLighting_12(float* context, double* param_2, float param_3, float param_4, void** param_5)

{
    int32_t arg_18;

    if (!param_5)
        Render_ComputeNormals_12(&param_5, &arg_18);

    void item_c;
    Hazinglayers_Process(&item_c, context, &g_bcab08, param_2, param_5, arg_18);
    long double fpu_val_7_2 = g_bcab20 * 0.829999983f + 0.170000002f;
    long double f0 = 1.0f;
    fpu_val_7_2 - f0;

    if (*(&((fpu_val_7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        param_3 = fpu_val_7_2 * param_3;

    *context = *context * 1.52587891e-05.0f;
    uint32_t result = Display_OpenDevice_18(param_3);
    param_5 = result;
    long double fpu_val_7_11 = (param_5 - 130.0f) * param_4 * 1.52587891e-05.0f + *context;
    *context = fpu_val_7_11;
    long double fpu6 = 0.0f;
    fpu6 - fpu_val_7_11;
    result = (fpu6 < fpu_val_7_11 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu_val_7_11) ? 1 : 0) << 0xa
        | (fpu6 == fpu_val_7_11 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 0x41))
    {
        *context = 0.0f;
        return result;
    }

    long double fpu_val_6_1 = 1.0f;
    fpu_val_6_1 - fpu_val_7_11;
    result = (fpu_val_6_1 < fpu_val_7_11 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_11) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_11 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        *context = fpu_val_7_11;
        return result;
    }

    *context = 1.0f;
    return result;
}
