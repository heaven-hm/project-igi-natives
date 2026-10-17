// Original IGI.EXE function: GenericPhysicsObj_Update_2 (VA 0x0043EDF0; static CFG gate PASS, CFG score 1.000).
#include "GenericPhysicsObj_Update_2.h"
void* GenericPhysicsObj_Update_2(void* context, int32_t* param_2)

{
    int32_t* entity_1 = *param_2 + 0x20;
    int32_t item_c = *entity_1;
    int32_t item_8 = entity_1[1];
    int32_t entity_2 = entity_1[2];
    float item_18 = param_2[2];
    int32_t item_4 = entity_2;
    float entity_3 = param_2[3];
    int32_t item_c_1 = 0;
    float temp_3 = param_2[4];
    int32_t item_8_1 = 0;
    int32_t item_4_1 = 0;
    float item_24 = temp_3 * *(context + 0x88) + entity_3 * *(context + 0x7c) + item_18 * *(context + 0x70);
    float item_20 = temp_3 * *(context + 0x8c) + entity_3 * *(context + 0x80) + item_18 * *(context + 0x74);
    long double fpu_val_7_10 = temp_3 * *(context + 0x90) + entity_3 * *(context + 0x84);
    long double fpu_val_6_11 = item_18 * *(context + 0x78);
    item_18 = item_24;
    item_18 = item_24 * 0.200000003f;
    float item_14_2 = item_20 * 0.200000003f;
    float item_10_2 = (fpu_val_7_10 + fpu_val_6_11) * 0.200000003f;
    return ForceAccumulator_Add(context + 0xf0, &item_18);
}
