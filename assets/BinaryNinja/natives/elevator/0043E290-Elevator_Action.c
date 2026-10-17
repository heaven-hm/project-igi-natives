// Original IGI.EXE function: Elevator_Action (VA 0x0043E290; static CFG gate FAIL, CFG score 0.833).
#include "Elevator_Action.h"
void* Elevator_Action(void* context, void** param_2)

{
    int32_t data_val = 0;
    data_val = *(context + 0x1c);
    (*((data_val << 2) + &g_a970e0))(context);
    g_57c0f0 = *(context + 0x20) - *(context + 0x108);
    g_57c0f8 = *(context + 0x28) - *(context + 0x110);
    g_57c100 = *(context + 0x30) - *(context + 0x118);
    float temp_val = *(context + 0x154);
    float item_50 = *(context + 0x148);
    float entity_1 = *(context + 0x160);
    float temp_1 = *(context + 0x14c);
    float entity_2 = *(context + 0x158);
    float temp_2 = *(context + 0x164);
    float entity_3 = *(context + 0x150);
    float temp_3 = *(context + 0x15c);
    float entity_4 = *(context + 0x168);
    int32_t temp_4 = *(context + 0x16c);
    int32_t item_2c = temp_4;
    memcpy(0x57c110, &item_50, 0x28);
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
    memcpy(0x57c110, &item_28, 0x28);
    *param_2 = context + 0x20;
    param_2[2] = &g_57c0f0;
    param_2[1] = 0x57c110;
    return context + 0x20;
}
