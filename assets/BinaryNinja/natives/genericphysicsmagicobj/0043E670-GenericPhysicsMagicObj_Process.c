// IGI native provenance: GenericPhysicsMagicObj_Process - 0x0043E670 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043E670-GenericPhysicsMagicObj_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GenericPhysicsMagicObj_Process.h"
void* GenericPhysicsMagicObj_Process(void* context, int32_t* param_2)

{
    int32_t* entity_1 = *param_2 + 0x20;
    int32_t item_c = *entity_1;
    int32_t item_8 = entity_1[1];
    int32_t entity_2 = entity_1[2];
    float item_18 = param_2[2];
    int32_t item_4 = entity_2;
    float entity_3 = param_2[3];
    float temp_3 = param_2[4];
    float item_24 = temp_3 * *(context + 0x88) + entity_3 * *(context + 0x7c) + item_18 * *(context + 0x70);
    float item_20 = temp_3 * *(context + 0x8c) + entity_3 * *(context + 0x80) + item_18 * *(context + 0x74);
    void* temp_5 = *(context + 0x1b4);
    long double fpu_val_7_10 = temp_3 * *(context + 0x90) + entity_3 * *(context + 0x84);
    long double fpu_val_6_11 = item_18 * *(context + 0x78);
    item_18 = item_24;
    float item_1c = fpu_val_7_10 + fpu_val_6_11;
    long double fpu_val_7_12 = item_1c;
    long double fpu_val_6_12 = item_20;
    long double fpu5 = item_24;
    long double fpu_val_7_15 = *(temp_5 + 8) * 100.0f
        / sqrtl(fpu5 * fpu5 + fpu_val_6_12 * fpu_val_6_12 + fpu_val_7_12 * fpu_val_7_12);
    item_18 = item_24 * fpu_val_7_15;
    float item_14_2 = item_20 * fpu_val_7_15;
    float item_10_2 = item_1c * fpu_val_7_15;
    return ForceAccumulator_Add(context + 0xf0, &item_18);
}
