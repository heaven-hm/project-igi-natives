// IGI native provenance: Menu_RequestScreen_17 - 0x004260C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004260C0-Menu_RequestScreen_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_RequestScreen_17.h"
int32_t Menu_RequestScreen_17(void* context, int32_t param_2)

{
    double item_18;
    Script_CallNativeHandler_23(&item_18, Script_ExecuteLevelScript_23(*(context + 0x2c), param_2));
    double* data_1 = Menu_DrawWidget_16(context);
    long double fpu_val_7_1 = item_18 - *data_1;
    double item_10;
    long double fpu_val_6_1 = item_10 - data_1[1];
    double item_8;
    long double fpu_val_5_1 = item_8 - data_1[2];
    long double fpu_val_4_3 = fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_1 * fpu_val_7_1;
    long double f0 = 150994944.0;
    fpu_val_4_3 - f0;
    bool c1;

    if (!(*(&((fpu_val_4_3 < f0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
            | (FCMP_UO(fpu_val_4_3, f0) ? 1 : 0) << 0xa | (fpu_val_4_3 == f0 ? 1 : 0) << 0xe
            | 0x3000) + 1) & 1))
        return 0;

    return 1;
}
