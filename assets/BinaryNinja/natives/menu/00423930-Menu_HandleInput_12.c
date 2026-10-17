// Original IGI.EXE function: Menu_HandleInput_12 (VA 0x00423930; static CFG gate PASS, CFG score 0.917).
#include "Menu_HandleInput_12.h"
int32_t Menu_HandleInput_12(void* context, int32_t param_2)

{
    int32_t dest_val = (g_c28b44 >> 1) + *(context + 0x20) - 0x140;
    int32_t entity_1 = *(context + 0x2c);
    int32_t flagP = *(context + 0x28);
    int32_t i_1 = 4;
    int32_t context_1 = (g_c28b48 >> 1) + *(context + 0x24) - 0xef;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t item_d8 = context_1;
    void item_98;
    int32_t* data_3 = &item_98;
    int32_t i;

    do
    {
        data_3[-1] = 0;
        *data_3 = 0x3f800000;
        data_3[1] = 0;
        data_3[-2] = param_2;
        data_3[-4] = 0;
        data_3[-3] = 0;
        data_3[-5] = 0x3f800000;
        data_3 = &data_3[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    long double fpu7 = dest_val + 1;
    float item_cc = fpu7;
    float item_b4 = fpu7;
    long double fpu6 = item_d8;
    item_d8 = dest_val + 1 + flagP - 1;
    int32_t item_c0 = 0;
    float item_d4_1 = fpu6;
    float item_b0 = fpu6;
    long double fpu5 = item_d8;
    item_d8 = entity_1 + context_1 - 1;
    int32_t data_6 = g_a84a54;
    int32_t item_c4 = 0x80000;
    float item_90 = fpu5;
    float item_8c = fpu6;
    int32_t item_c8 = 1;
    float item_6c = fpu5;
    long double fpu_val_6_2 = item_d8;
    int32_t item_bc = 5;
    float item_68 = fpu_val_6_2;
    float item_48 = fpu7;
    float item_44 = fpu_val_6_2;
    void item_24;
    memcpy(&item_24, &item_b4, 0x24);
    float* item_b8 = &item_b4;
    (*((data_6 << 2) + &g_a94e84))(&item_c8);
    long double fpu_val_7_3 = item_cc + 210.0f;
    float item_b0_1 = item_d4_1;
    int32_t entity_4 = g_a84a54;
    item_b4 = fpu_val_7_3;
    float item_90_1 = fpu_val_7_3;
    int32_t item_bc_1 = 2;
    float* item_b8_1 = &item_b4;
    float item_8c_1 = entity_1 + item_d4_1 - 1.0f;
    return (*((entity_4 << 2) + &g_a94e84))(&item_c8);
}
