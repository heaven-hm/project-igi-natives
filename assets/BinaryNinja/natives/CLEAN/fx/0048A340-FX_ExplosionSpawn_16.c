// IGI native provenance: FX_ExplosionSpawn_16 - 0x0048A340 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048A340-FX_ExplosionSpawn_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_ExplosionSpawn_16.h"
float* FX_ExplosionSpawn_16(float* context, void* param_2, int32_t param_3)

{
    int32_t* entity_3 = *(param_2 + 0x70) + param_3 * 0x84 + 0x18;
    float temp_1 = *entity_3;
    float temp_2 = entity_3[1];
    float entity_4 = entity_3[2];
    float item_c = entity_4 * *(param_2 + 0x90) + temp_2 * *(param_2 + 0x84) + temp_1 * *(param_2 + 0x78);
    float item_18_1 = item_c;
    long double fpu_val_7_15 =
        entity_4 * *(param_2 + 0x94) + temp_2 * *(param_2 + 0x88) + temp_1 * *(param_2 + 0x7c) + *(param_2 + 0x518);
    long double fpu_val_7_17 =
        entity_4 * *(param_2 + 0x98) + temp_2 * *(param_2 + 0x8c) + temp_1 * *(param_2 + 0x80) + *(param_2 + 0x51c);
    *context = item_c + *(param_2 + 0x514);
    context[1] = fpu_val_7_15;
    context[2] = fpu_val_7_17;
    return context;
}
