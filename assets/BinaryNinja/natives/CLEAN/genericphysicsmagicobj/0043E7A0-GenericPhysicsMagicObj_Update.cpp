// IGI native provenance: GenericPhysicsMagicObj_Update - 0x0043E7A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043E7A0-GenericPhysicsMagicObj_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GenericPhysicsMagicObj_Update.h"
void* GenericPhysicsMagicObj_Update(void* context, void* param_2)

{
    double* entity_val = *(param_2 + 4);
    long double fpu_val_7_1 = *(context + 0x20) - *entity_val;
    double item_10 = *(context + 0x28) - entity_val[1];
    double item_8 = *(context + 0x30) - entity_val[2];
    long double fpu_val_6_4 = item_10;
    long double fpu5 = item_8;
    float item_24 = fpu5 * *(context + 0x88) + fpu_val_6_4 * *(context + 0x7c) + fpu_val_7_1 * *(context + 0x70);
    long double fpu_val_4_5 = fpu5 * *(context + 0x8c);
    long double fpu_val_3_5 = fpu_val_6_4 * *(context + 0x80);
    float item_18 = item_24;
    float item_20 = fpu_val_4_5 + fpu_val_3_5 + fpu_val_7_1 * *(context + 0x74);
    float item_1c = fpu5 * *(context + 0x90) + fpu_val_6_4 * *(context + 0x84) + fpu_val_7_1 * *(context + 0x78);
    long double fpu_val_7_4 = item_1c;
    long double fpu_val_6_9 = item_20;
    long double fpu_val_5_4 = item_24;
    item_10 = item_1c;
    long double fpu_val_7_7 = *(*(context + 0x1b4) + 8) * 200.0f
        / sqrtl(fpu_val_5_4 * fpu_val_5_4 + fpu_val_6_9 * fpu_val_6_9 + fpu_val_7_4 * fpu_val_7_4);
    item_18 = item_24 * fpu_val_7_7;
    float item_14_1 = item_20 * fpu_val_7_7;
    item_10 = item_10 * fpu_val_7_7;
    *(&item_10 + 4) = 0;
    item_8 = 0;
    *(&item_8 + 4) = 0;
    return ForceAccumulator_Add(context + 0xf0, &item_18);
}
