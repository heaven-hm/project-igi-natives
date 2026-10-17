// IGI native provenance: PhysicsObj_LoadParameters - 0x004FB2C0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004FB2C0-PhysicsObj_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsObj_LoadParameters.h"
int32_t PhysicsObj_LoadParameters(void* context, int32_t* param_2)

{
    long double fpu_val_7_1 = *(context + 0x20) - *(context + 0x6c0);
    double* temp_val = *param_2;
    double item_28 = *(context + 0x28) - *(context + 0x6c8);
    double item_20 = *(context + 0x30) - *(context + 0x6d0);
    long double fpu_val_6_5 = *temp_val - *(context + 0x6c0);
    double item_68 = temp_val[1] - *(context + 0x6c8);
    double item_60 = temp_val[2] - *(context + 0x6d0);
    long double fpu_val_5_7 =
        *(context + 0x6a0) * item_68 + *(context + 0x6ac) * item_60 + *(context + 0x694) * fpu_val_6_5;
    long double fpu_val_4_7 =
        *(context + 0x6a4) * item_68 + *(context + 0x6b0) * item_60 + *(context + 0x698) * fpu_val_6_5;
    long double fpu_val_3_7 =
        *(context + 0x6a8) * item_68 + *(context + 0x6b4) * item_60 + *(context + 0x69c) * fpu_val_6_5;
    double item_58 =
        *(context + 0x74) * fpu_val_4_7 + *(context + 0x78) * fpu_val_3_7 + *(context + 0x70) * fpu_val_5_7;
    double item_50 =
        *(context + 0x80) * fpu_val_4_7 + *(context + 0x84) * fpu_val_3_7 + *(context + 0x7c) * fpu_val_5_7;
    double item_48 =
        *(context + 0x8c) * fpu_val_4_7 + *(context + 0x90) * fpu_val_3_7 + *(context + 0x88) * fpu_val_5_7;
    *(param_2 + 8) = item_58 + fpu_val_7_1 - fpu_val_6_5;
    *(param_2 + 0x10) = item_50 + item_28 - item_68;
    *(param_2 + 0x18) = item_48 + item_20 - item_60;
    long double fpu_val_7_9 = *(context + 0x694);
    long double fpu_val_6_7 = *(context + 0x698);
    long double fpu_val_5_12 = *(context + 0x69c);
    float temp_1 = *(context + 0x6a0);
    item_28 = *(context + 0x6ac);
    item_20 = *(context + 0x6a4);
    *(&item_20 + 4) = *(context + 0x6b0);
    float temp_5 = *(context + 0x6a8);
    float temp_6 = *(context + 0x6b4);
    item_58 = fpu_val_6_7 * *(context + 0x74) + fpu_val_5_12 * *(context + 0x78) + fpu_val_7_9 * *(context + 0x70);
    int32_t temp_7 = *(context + 0x6b8);
    *(&item_58 + 4) = item_20 * *(context + 0x74) + temp_5 * *(context + 0x78) + temp_1 * *(context + 0x70);
    item_50 = *(&item_20 + 4) * *(context + 0x74) + temp_6 * *(context + 0x78) + item_28 * *(context + 0x70);
    *(&item_50 + 4) =
        fpu_val_6_7 * *(context + 0x80) + fpu_val_5_12 * *(context + 0x84) + fpu_val_7_9 * *(context + 0x7c);
    item_48 = item_20 * *(context + 0x80) + temp_5 * *(context + 0x84) + temp_1 * *(context + 0x7c);
    *(&item_48 + 4) =
        *(&item_20 + 4) * *(context + 0x80) + temp_6 * *(context + 0x84) + item_28 * *(context + 0x7c);
    float item_40 =
        fpu_val_6_7 * *(context + 0x8c) + fpu_val_5_12 * *(context + 0x90) + fpu_val_7_9 * *(context + 0x88);
    float item_3c = item_20 * *(context + 0x8c) + temp_5 * *(context + 0x90) + temp_1 * *(context + 0x88);
    int32_t result = *(context + 0x94);
    int32_t item_34 = result + temp_7 + 1;
    float item_38 =
        *(&item_20 + 4) * *(context + 0x8c) + temp_6 * *(context + 0x90) + item_28 * *(context + 0x88);
    memcpy(&param_2[8], &item_58, 0x28);
    return result;
}
