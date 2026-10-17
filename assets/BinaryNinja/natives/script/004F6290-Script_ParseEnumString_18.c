// Original IGI.EXE function: Script_ParseEnumString_18 (VA 0x004F6290; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumString_18.h"
int32_t Script_ParseEnumString_18(double context, double param_2, double param_3, double param_4, double param_5, double param_6, double param_7, double param_8, double param_9) {
    int32_t item_28 = 0;
    long double fpu_val_7_2 = (param_4 - param_2) * 0.5;
    long double fpu_val_6_1 = param_7 - param_5;
    long double f0 = 0.0;
    fpu_val_6_1 - f0;

    if (*(&((fpu_val_6_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == f0 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
    {
        param_4 = 0;
        *(&param_4 + 4) = 0;
    }
    else
    {
        long double fpu_val_5_2 = param_6 - param_5;
        param_4 = (fpu_val_5_2 + fpu_val_5_2) / fpu_val_6_1 * (param_3 - context) * 0.5;
    }

    long double fpu_val_6_5 = param_8 - param_6;
    long double f1 = 0.0;
    fpu_val_6_5 - f1;

    if (*(&((fpu_val_6_5 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, f1) ? 1 : 0) << 0xa
        | (fpu_val_6_5 == f1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
    {
        param_5 = 0;
        *(&param_5 + 4) = 0;
    }
    else
    {
        long double fpu_val_5_7 = param_7 - param_6;
        param_5 = (fpu_val_5_7 + fpu_val_5_7) / fpu_val_6_5 * fpu_val_7_2;
    }

    int32_t item_2c = *(&param_5 + 4);
    int32_t item_34 = *(&param_4 + 4);
    int32_t item_3c = *(&param_3 + 4);
    double item_20[0x4];
    Terrain_ConnectGraphNode_7(&item_20, param_2, *(&param_2 + 4), param_3, param_4, param_5);
    long double fpu_val_7_6 = param_7 - param_6;
    long double f2 = 0.0;
    fpu_val_7_6 - f2;

    if (!(*(&((fpu_val_7_6 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f2) ? 1 : 0) << 0xa
            | (fpu_val_7_6 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        item_28 = (param_9 - param_6) / fpu_val_7_6;

    int32_t item_2c_1 = 0;
    return Terrain_SampleHeightmap_7(&item_20, item_28);
}
