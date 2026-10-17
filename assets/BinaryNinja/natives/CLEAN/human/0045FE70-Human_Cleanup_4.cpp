// IGI native provenance: Human_Cleanup_4 - 0x0045FE70 - CFG score 77.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0045FE70-Human_Cleanup_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_Cleanup_4.h"
void Human_Cleanup_4(void* context, int32_t* param_2)

{
    if (*param_2 == context || param_2[0xc] != *(context + 0xfc))
        return;

    double* data_2 = param_2[1];
    long double fpu_val_7_2 = *(context + 0x20) - *data_2;
    double item_38 = fpu_val_7_2;
    long double fpu_val_6_2 = *(context + 0x28) - data_2[1];
    double item_30_1 = fpu_val_6_2;
    long double fpu_val_5_2 = *(context + 0x30) - data_2[2];
    float* data_3 = param_2[2];
    double item_28_1 = fpu_val_5_2;
    double item_20 = data_3[6] * fpu_val_5_2 + data_3[3] * fpu_val_6_2 + *data_3 * fpu_val_7_2;
    double item_18_1 = data_3[7] * fpu_val_5_2 + data_3[4] * fpu_val_6_2 + data_3[1] * fpu_val_7_2;
    double item_10_1 = data_3[8] * fpu_val_5_2 + data_3[5] * fpu_val_6_2 + data_3[2] * fpu_val_7_2;
    memcpy(&item_38, &item_20, 0x18);
    item_30_1 = 0;
    *(&item_30_1 + 4) = 0;
    long double fp0_1 = Sys_OpenFileStream_11(&item_38);
    long double fpu_val_6_4 = *(param_2 + 0x10);
    long double f0_1 = 0.0;
    fpu_val_6_4 - f0_1;
    long double f1_1;

    if (!(*(&((fpu_val_6_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, f0_1) ? 1 : 0) << 0xa
        | (fpu_val_6_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        f1_1 = *(param_2 + 0x10);
        fp0_1 - f1_1;
    }

    if (!(*(&((fpu_val_6_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_6_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) && !(*(&(
            (fp0_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f1_1) ? 1 : 0) << 0xa
            | (fp0_1 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return;

    *(param_2 + 0x10) = fp0_1;
    item_30_1 = item_18_1;
    *(&item_30_1 + 4) = *(&item_18_1 + 4);
    memcpy(&param_2[6], &item_38, 0x18);
}
