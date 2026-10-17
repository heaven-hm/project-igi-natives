// IGI native provenance: Train_Action - 0x0042B930 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0042B930-Train_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Train_Action.h"
void* Train_Action(void* context, void** param_2)

{
    int32_t data_val = 0;
    data_val = *(context + 0x1c);
    (*((data_val << 2) + &g_a970e0))(context);
    g_57bca0 = *(context + 0x20) - *(context + 0x6c0);
    g_57bca8 = *(context + 0x28) - *(context + 0x6c8);
    g_57bcb0 = *(context + 0x30) - *(context + 0x6d0);
    float temp_val = *(context + 0x6a0);
    float item_50 = *(context + 0x694);
    float entity_1 = *(context + 0x6ac);
    float temp_1 = *(context + 0x698);
    float entity_2 = *(context + 0x6a4);
    float temp_2 = *(context + 0x6b0);
    float entity_3 = *(context + 0x69c);
    float temp_3 = *(context + 0x6a8);
    float entity_4 = *(context + 0x6b4);
    int32_t temp_4 = *(context + 0x6b8);
    int32_t item_2c = temp_4;
    memcpy(0x57bcc0, &item_50, 0x28);
    float item_28 = temp_1 * *(context + 0x74) + entity_3 * *(context + 0x78) + item_50 * *(context + 0x70);
    float item_24 = entity_2 * *(context + 0x74) + temp_3 * *(context + 0x78) + temp_val * *(context + 0x70);
    float item_20 = temp_2 * *(context + 0x74) + entity_4 * *(context + 0x78) + entity_1 * *(context + 0x70);
    float item_1c = entity_3 * *(context + 0x84) + item_50 * *(context + 0x7c) + temp_1 * *(context + 0x80);
    int32_t item_4 = *(context + 0x94) + temp_4 + 1;
    float item_18 = temp_3 * *(context + 0x84) + temp_val * *(context + 0x7c) + entity_2 * *(context + 0x80);
    float item_14 = entity_4 * *(context + 0x84) + entity_1 * *(context + 0x7c) + temp_2 * *(context + 0x80);
    float item_10 = temp_1 * *(context + 0x8c) + entity_3 * *(context + 0x90) + item_50 * *(context + 0x88);
    float item_c = entity_2 * *(context + 0x8c) + temp_3 * *(context + 0x90) + temp_val * *(context + 0x88);
    float item_8 = temp_2 * *(context + 0x8c) + entity_4 * *(context + 0x90) + entity_1 * *(context + 0x88);
    memcpy(0x57bcc0, &item_28, 0x28);
    *param_2 = context + 0x20;
    param_2[2] = &g_57bca0;
    param_2[1] = 0x57bcc0;
    return context + 0x20;
}
