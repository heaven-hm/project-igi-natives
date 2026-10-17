// IGI native provenance: Menu_UpdateLanguage_17 - 0x00426260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00426260-Menu_UpdateLanguage_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_17.h"
int32_t* Menu_UpdateLanguage_17(float* context, int32_t* param_2, void* param_3)

{
    void* data_val = *(param_3 + 0x4c);
    long double fpu_val_7_2 = *(param_3 + 0x64) - *(data_val + 0xf8) * 0.0263671875f;
    long double fpu_val_6_1 = *(data_val + 0x720) + fpu_val_7_2 * 0.00999999978f;
    *context = fpu_val_6_1;
    long double f0 = 0.0f;
    fpu_val_6_1 - f0;
    data_val = (fpu_val_6_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == f0 ? 1 : 0) << 0xe | 0x3000;

    if (!(*(&data_val + 1) & 1))
    {
        long double f1_1 = 1.0f;
        fpu_val_6_1 - f1_1;
        data_val = (fpu_val_6_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&data_val + 1) & 0x41))
            *context = 1.0f;
    }
    else
        *context = 0.0f;

    long double fpu_val_6_3 = *(param_3 + 0x70);
    long double f2 = 0.0f;
    fpu_val_6_3 - f2;
    data_val = (fpu_val_6_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, f2) ? 1 : 0) << 0xa
        | (fpu_val_6_3 == f2 ? 1 : 0) << 0xe | 0x3800;

    if (*(&data_val + 1) & 0x40)
    {
        long double f3_1 = -5.0;
        fpu_val_7_2 - f3_1;
        data_val = (fpu_val_7_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f3_1 ? 1 : 0) << 0xe;

        if (!(*(&data_val + 1) & 1))
        {
            *param_2 = 0;
            return param_2;
        }
    }

    *param_2 = 0x3f800000;
    return data_val;
}
