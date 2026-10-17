// IGI native provenance: Water_Process - 0x00518930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518930-Water_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Water_Process.h"
int32_t Water_Process(void* context, float param_2)

{
    int32_t* source_val = param_2;
    double* data_val = source_val[2];
    long double fpu_val_7_2 = source_val[1] * 0.5f / source_val[3];
    long double fpu_val_6_3 = (*(context + 0x4be8) - *data_val + source_val[3]) * fpu_val_7_2;
    long double fpu_val_5_4 = (*(context + 0x4bf0) - data_val[1] + source_val[3]) * fpu_val_7_2;
    long double fpu_val_4_4 = (*(context + 0x4c00) - *data_val + source_val[3]) * fpu_val_7_2;
    float item_20 = fpu_val_4_4;
    float item_1c = fpu_val_5_4;
    float item_18 = fpu_val_6_3;
    long double fpu_val_7_4 = (*(context + 0x4c08) - data_val[1] + source_val[3]) * fpu_val_7_2;
    float item_14 = fpu_val_7_4;
    SoundSys_SetFrequency_3(*source_val, fpu_val_6_3, fpu_val_5_4, item_20, item_1c, item_18, item_14);
    return SoundSys_SetFrequency_3(*source_val, item_20, item_1c, item_18, item_14, fpu_val_4_4, fpu_val_7_4);
}
