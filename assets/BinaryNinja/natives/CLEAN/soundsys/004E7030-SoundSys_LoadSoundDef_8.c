// IGI native provenance: SoundSys_LoadSoundDef_8 - 0x004E7030 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7030-SoundSys_LoadSoundDef_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_LoadSoundDef_8.h"
int32_t* SoundSys_LoadSoundDef_8(int32_t* context, int32_t* param_2, float param_3)

{
    long double fpu7 = param_3;
    long double f0 = 1.0;
    fpu7 - f0;
    int32_t data_val;
    data_val = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&data_val + 1) & 1))
    {
        *context = param_2[0xa];
        return param_2;
    }

    long double fpu_val_7_1 = param_3;
    long double f1 = 0.0;
    fpu_val_7_1 - f1;
    data_val = (fpu_val_7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f1 ? 1 : 0) << 0xe;

    if (*(&data_val + 1) & 0x41)
    {
        *context = *param_2;
        return param_2;
    }

    int32_t* temp_2 = param_2;
    int32_t entity_2 = param_3 * 10.0f;
    float item_10 = entity_2 * 0.100000001f;
    float item_c_2 = (entity_2 + 1) * 0.100000001f;
    param_2 = temp_2[entity_2];
    long double fpu_val_7_10 = item_10;
    long double f2 = param_3;
    fpu_val_7_10 - f2;
    data_val = (fpu_val_7_10 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_10 == f2 ? 1 : 0) << 0xe;

    if (*(&data_val + 1) & 0x40)
    {
        int32_t data_3 = temp_2[entity_2];
        *context = data_3;
        return data_3;
    }

    long double fpu_val_7_11 = item_c_2;
    long double f3 = param_3;
    fpu_val_7_11 - f3;
    data_val = (fpu_val_7_11 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_11 == f3 ? 1 : 0) << 0xe;

    if (!(*(&data_val + 1) & 0x40))
    {
        *context = (temp_2[entity_2 + 1] - param_2) / (item_c_2 - item_10) * (param_3 - item_10) + param_2;
        return data_val;
    }

    *context = temp_2[entity_2 + 1];
    return context;
}
