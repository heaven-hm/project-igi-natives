// Original IGI.EXE function: AI_AFCaF (VA 0x004513F0; static CFG gate PASS, CFG score 1.000).
#include "AI_AFCaF.h"
int32_t AI_AFCaF(long double context , float param_2)

{
    int32_t saved_esi_1;
    int32_t saved_src = saved_esi_1;
    float source_val = param_2;
    void* item_8 = source_val + 0x20;
    AI_CheckVisibility_3();
    param_2 = context;
    long double fpu_val_7_1 = -(*(source_val + 0x3ec8));
    long double fpu6 = param_2;
    fpu6 - fpu_val_7_1;
    int16_t result = (fpu6 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu6 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        param_2 = fpu_val_7_1;
    else
    {
        long double fpu_val_7_3 = *(source_val + 0x3ec8);
        long double f0_1 = param_2;
        fpu_val_7_3 - f0_1;
        result = (fpu_val_7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f0_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
            param_2 = *(source_val + 0x3ec8);
    }

    double item_c_1 = param_2;
    double item_14 = context;
    char* item_18 = "A:  %f, CA: %f";
    int32_t item_1c = 0xffffffff;
    float item_20 = source_val;
    *(source_val + 0x3c78) = param_2 * 0.318309873f;
    return result;
}
