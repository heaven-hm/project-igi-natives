// IGI native provenance: Human_SetParent - 0x00463310 - CFG score 77.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00463310-Human_SetParent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_SetParent.h"
void* Human_SetParent(void* context, void* param_2)

{
    long double fpu7 = *(context + 0x20);
    *(context + 0x76c) = param_2;
    long double fpu_val_7_1 = fpu7 - *(param_2 + 0x20);
    long double fpu_val_6_1 = *(context + 0x28) - *(param_2 + 0x28);
    long double fpu_val_5_1 = *(context + 0x30) - *(param_2 + 0x30);
    double item_50 =
        *(param_2 + 0x7c) * fpu_val_6_1 + *(param_2 + 0x88) * fpu_val_5_1 + *(param_2 + 0x70) * fpu_val_7_1;
    int32_t item_48 =
        *(param_2 + 0x80) * fpu_val_6_1 + *(param_2 + 0x8c) * fpu_val_5_1 + *(param_2 + 0x74) * fpu_val_7_1;
    double item_40 =
        *(param_2 + 0x84) * fpu_val_6_1 + *(param_2 + 0x90) * fpu_val_5_1 + *(param_2 + 0x78) * fpu_val_7_1;
    memcpy(context + 0x770, &item_50, 0x18);
    long double fpu_val_7_3 = *(param_2 + 0x70);
    long double fpu_val_6_3 = *(param_2 + 0x74);
    long double fpu_val_5_3 = *(param_2 + 0x78);
    long double fpu_val_4_14 = fpu_val_6_3 * *(context + 0x7c) + fpu_val_5_3 * *(context + 0x80);
    long double fpu_val_3_15 = fpu_val_7_3 * *(context + 0x78);
    *(&item_50 + 4) = *(param_2 + 0x7c);
    int32_t entity_1 = *(param_2 + 0x88);
    item_40 = *(param_2 + 0x80);
    *(&item_40 + 4) = *(param_2 + 0x8c);
    float entity_4 = *(param_2 + 0x84);
    float item_28 = fpu_val_4_14 + fpu_val_3_15;
    float entity_5 = *(param_2 + 0x90);
    float item_24 =
        item_40 * *(context + 0x7c) + entity_4 * *(context + 0x80) + *(&item_50 + 4) * *(context + 0x78);
    int32_t item_4 = *(context + 0x9c) + *(param_2 + 0x94) + 1;
    float item_20 =
        *(&item_40 + 4) * *(context + 0x7c) + entity_5 * *(context + 0x80) + entity_1 * *(context + 0x78);
    float item_1c =
        fpu_val_5_3 * *(context + 0x8c) + fpu_val_7_3 * *(context + 0x84) + fpu_val_6_3 * *(context + 0x88);
    float item_18 =
        entity_4 * *(context + 0x8c) + *(&item_50 + 4) * *(context + 0x84) + item_40 * *(context + 0x88);
    float item_14 =
        entity_5 * *(context + 0x8c) + entity_1 * *(context + 0x84) + *(&item_40 + 4) * *(context + 0x88);
    float item_10 =
        fpu_val_6_3 * *(context + 0x94) + fpu_val_5_3 * *(context + 0x98) + fpu_val_7_3 * *(context + 0x90);
    float item_c =
        item_40 * *(context + 0x94) + entity_4 * *(context + 0x98) + *(&item_50 + 4) * *(context + 0x90);
    float item_8 = *(&item_40 + 4) * *(context + 0x94) + entity_5 * *(context + 0x98) + entity_1 * *(context + 0x90);
    memcpy(context + 0x788, &item_28, 0x28);
    return AI_SelectTarget_21(context);
}
