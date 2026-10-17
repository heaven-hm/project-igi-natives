// Original IGI.EXE function: FX_DebrisSpawn_18 (VA 0x0048B6E0; static CFG gate PASS, CFG score 1.000).
#include "FX_DebrisSpawn_18.h"
int32_t FX_DebrisSpawn_18(float context, void* param_2)

{
    double item_30[0x2];
    Script_CallNativeHandler_23(&item_30, context);
    double item_20;
    double item_20_1 = *(*(param_2 + 0x3b6c) + 0x80) * 4096.0 + item_20;
    double item_18[0x3];
    AI_UpdatePatrol_3(&item_18, param_2);
    int32_t item_34 = *(param_2 + 0x14);
    char item_38 = 1;
    char data_1 = Level_LoadObjects_4();
    int16_t result = DynObj_RegisterSymbol_12(Level_StartMission_4(), &item_30, &item_18, data_1, &item_38,
        0xffffffff, 0xffffffff, &context);

    if (result)
    {
        result = 1;
        return result;
    }

    long double fpu_val_7_3 = context;
    long double f0 = 0.790000021f;
    fpu_val_7_3 - f0;
    result = (fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        result = 0;
        return result;
    }

    result = 1;
    return result;
}
