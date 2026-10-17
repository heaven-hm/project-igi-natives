// IGI native provenance: Script_ParseEnumString_20 - 0x004F7CC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F7CC0-Script_ParseEnumString_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumString_20.h"
long double Script_ParseEnumString_20(void* context, float param_2, float param_3)

{
    double* source_val = param_2;
    double item_18 = *source_val - *(context + 0x2c08);
    double item_10 = source_val[1] - *(context + 0x2c10);
    double item_8 = source_val[2] - *(context + 0x2c18);
    Camera_ApplyHandiCam_5();
    long double fpu_val_6_2 = *source_val - (item_18 - param_3);
    *source_val = fpu_val_6_2;
    Camera_ApplyHandiCam_5();
    long double fpu_val_5_2 = source_val[1] - (item_10 - param_3);
    source_val[1] = fpu_val_5_2;
    Camera_ApplyHandiCam_5();
    long double fpu_val_4_1 = item_8;
    long double fpu_val_3_2 = source_val[2] - (fpu_val_4_1 - param_3);
    source_val[2] = fpu_val_3_2;
    long double fpu_val_2_1 = param_3 * 0.5f;
    long double f1 = item_18;
    fpu_val_2_1 - f1;

    if (*(&((fpu_val_2_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_2_1, f1) ? 1 : 0) << 0xa
            | (fpu_val_2_1 == f1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
        *source_val = fpu_val_6_2 - param_3;

    long double f2 = item_10;
    fpu_val_2_1 - f2;

    if (*(&((fpu_val_2_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_2_1, f2) ? 1 : 0) << 0xa
            | (fpu_val_2_1 == f2 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
        source_val[1] = fpu_val_5_2 - param_3;

    fpu_val_4_1 - fpu_val_2_1;

    if (!(*(&((fpu_val_4_1 < fpu_val_2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_1, fpu_val_2_1) ? 1 : 0) << 0xa
            | (fpu_val_4_1 == fpu_val_2_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41))
        source_val[2] = fpu_val_3_2 - param_3;

    long double fpu_val_3_5 = param_3 * -0.5f;
    long double f3 = item_18;
    fpu_val_3_5 - f3;

    if (!(*(&((fpu_val_3_5 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_3_5, f3) ? 1 : 0) << 0xa
            | (fpu_val_3_5 == f3 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41))
        *source_val = param_3 + *source_val;

    long double f4 = item_10;
    fpu_val_3_5 - f4;

    if (!(*(&((fpu_val_3_5 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_3_5, f4) ? 1 : 0) << 0xa
            | (fpu_val_3_5 == f4 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41))
        source_val[1] = param_3 + source_val[1];

    fpu_val_4_1 - fpu_val_3_5;

    if (*(&((fpu_val_4_1 < fpu_val_3_5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_1, fpu_val_3_5) ? 1 : 0) << 0xa
            | (fpu_val_4_1 == fpu_val_3_5 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        source_val[2] = param_3 + source_val[2];

    return item_8;
}
