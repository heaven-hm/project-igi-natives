// IGI native provenance: Menu_RequestScreen_20 - 0x00428B60 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00428B60-Menu_RequestScreen_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_RequestScreen_20.h"
int32_t Menu_RequestScreen_20(long double context , long double param_2 , void* param_3, double* param_4)

{
    long double fpu_val_7_1 = *param_4 - *(param_3 + 0x20);
    long double fpu_val_6_1 = param_4[1] - *(param_3 + 0x28);
    long double fpu_val_5_1 = param_4[2] - *(param_3 + 0x30);
    double item_20 =
        *(param_3 + 0x88) * fpu_val_5_1 + *(param_3 + 0x7c) * fpu_val_6_1 + *(param_3 + 0x70) * fpu_val_7_1;
    double item_18 =
        *(param_3 + 0x8c) * fpu_val_5_1 + *(param_3 + 0x80) * fpu_val_6_1 + *(param_3 + 0x74) * fpu_val_7_1;
    double item_10 =
        *(param_3 + 0x90) * fpu_val_5_1 + *(param_3 + 0x84) * fpu_val_6_1 + *(param_3 + 0x78) * fpu_val_7_1;
    void item_50;
    memcpy(&item_50, &item_20, 0x18);
    WeaponType_InitType();
    double item_28 = context;
    memcpy(&item_50, &item_20, 0x18);
    WeaponType_GetConfig();
    long double fpu0 = -1.0;
    long double f0 = item_28;
    fpu0 - f0;

    if (*(&((fpu0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu0, f0) ? 1 : 0) << 0xa
        | (fpu0 == f0 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
    {
        long double fpu_val_0_1 = 1.0;
        long double f1_1 = item_28;
        fpu_val_0_1 - f1_1;

        if (*(&((fpu_val_0_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_0_1 == f1_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        {
            item_28 = 0;
            *(&item_28 + 4) = 0x3ff00000;
        }
    }
    else
    {
        item_28 = 0;
        *(&item_28 + 4) = 0xbff00000;
    }

    long double fpu_val_0_2 = -1.0;
    fpu_val_0_2 - param_2;
    int16_t result = (fpu_val_0_2 < param_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_2, param_2) ? 1 : 0) << 0xa
        | (fpu_val_0_2 == param_2 ? 1 : 0) << 0xe | 0x800;

    if (*(&result + 1) & 0x41)
    {
        long double fpu_val_0_3 = 1.0;
        fpu_val_0_3 - param_2;
        result = (fpu_val_0_3 < param_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_3, param_2) ? 1 : 0) << 0xa
            | (fpu_val_0_3 == param_2 ? 1 : 0) << 0xe | 0x800;

        if (*(&result + 1) & 1)
            param_2 = 1.0;
    }
    else
        param_2 = -1.0;

    *(param_3 + 0x734) = item_28;
    *(param_3 + 0x73c) = param_2;
    return result;
}
