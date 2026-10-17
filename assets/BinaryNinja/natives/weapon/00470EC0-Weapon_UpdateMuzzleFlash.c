// IGI native provenance: Weapon_UpdateMuzzleFlash - 0x00470EC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470EC0-Weapon_UpdateMuzzleFlash.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateMuzzleFlash.h"
float* Weapon_UpdateMuzzleFlash(float* context, float* param_2, float* param_3, double* param_4)

{
    long double fpu_val_7_1 = *param_4 - *(context + 0x28);
    long double fpu_val_6_1 = param_4[1] - *(context + 0x30);
    long double fpu_val_5_1 = param_4[2] - *(context + 0x38);
    float* data_1 = param_3;
    float item_c = fpu_val_5_1 * context[2] + fpu_val_6_1 * context[1] + fpu_val_7_1 * *context;
    float item_8 = fpu_val_5_1 * context[5] + fpu_val_6_1 * context[4] + fpu_val_7_1 * context[3];
    long double fpu_val_7_3 = fpu_val_5_1 * context[8] + fpu_val_6_1 * context[7] + fpu_val_7_1 * context[6];
    *data_1 = fpu_val_7_3;
    long double f1 = 0.0f;
    fpu_val_7_3 - f1;
    data_1 = (fpu_val_7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&data_1 + 1) & 0x41)
        return data_1;

    long double fpu_val_7_4 = 1.0 / fpu_val_7_3;
    *param_2 = context[0x12] * item_c * fpu_val_7_4 + context[0x14];
    param_2[1] = context[0x13] * item_8 * fpu_val_7_4 + context[0x15];
    return param_2;
}
