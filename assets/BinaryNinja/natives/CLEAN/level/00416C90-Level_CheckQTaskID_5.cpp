// IGI native provenance: Level_CheckQTaskID_5 - 0x00416C90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416C90-Level_CheckQTaskID_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Level_CheckQTaskID_5.h"
long double Level_CheckQTaskID_5(float context, double* param_2 , float param_3)

{
    float source_val = context;
    double* data_val = *(source_val + 4);
    double item_18 = *data_val - *param_2;
    double item_10 = data_val[1] - param_2[1];
    double item_8 = data_val[2] - param_2[2];
    long double fpu_val_7_8 = Sys_OpenFileStream_11(&item_18) - param_3 - *(source_val + 0xc);
    context = fpu_val_7_8;
    long double f0 = 0.0f;
    fpu_val_7_8 - f0;

    if (*(&((fpu_val_7_8 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_8 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        return *(source_val + 8);

    long double fpu_val_7_10 = context;
    long double f1 = *(source_val + 0x10);
    fpu_val_7_10 - f1;

    if (!(*(&((fpu_val_7_10 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_10 == f1 ? 1 : 0) << 0xe) + 1) & 1))
        return 0.0f;

    return (*(source_val + 0x10) - context) * *(source_val + 8) / *(source_val + 0x10);
}
