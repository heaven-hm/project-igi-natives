// Original IGI.EXE function: FX_ExplosionSpawn_7 (VA 0x00486210; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_7.h"
int32_t FX_ExplosionSpawn_7(int32_t context, int32_t param_2, float param_3, float param_4, int32_t param_5)

{
    int32_t data_4 = param_2 * 0x40b;
    float temp_val = *(context + (data_4 << 2) + 0x44);
    void* entity_2 = context + (data_4 << 2);
    float item_d8 = *(entity_2 + 0x48);
    int32_t data_7;
    int32_t temp_2;
    temp_2 = HIGHD(0x38e38e39 * (9 - *(entity_2 + 0x24)));
    data_7 = LOWD(0x38e38e39 * (9 - *(entity_2 + 0x24)));
    int32_t temp_3 = temp_2 >> 1;
    long double fpu7 = temp_3 + (temp_3 >> 0x1f);
    long double f0 = 0.0f;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        fpu7 = 0.0f;

    void* entity_3 = *(entity_2 + 0x3c);
    float item_cc = fpu7 * 0.600000024f + 0.150000006f;
    long double fpu_val_7_4;

    if (!entity_3)
        fpu_val_7_4 = 37.0f;
    else
    {
        int32_t data_11;
        data_11 = Sys_ExecuteBytecode_17(entity_3);
        fpu_val_7_4 = data_11;
    }

    float item_dc = param_3 + 117.5f;
    long double fpu_val_7_5 = fpu_val_7_4 * 0.5f;
    void* item_10c = entity_3;
    g_a84a50 = 0;
    g_a84a58 = 0;
    float item_d4_2 = fpu_val_7_5 + param_4;
    float item_e0_1 = temp_val * 117.5f;
    float item_d0 = item_dc - item_e0_1;
    long double fpu_val_7_6 = fpu_val_7_5 * item_d8;
    item_d8 = item_d4_2 - fpu_val_7_6;
    float item_dc_1 = item_e0_1 + item_dc;
    float item_e0_2 = fpu_val_7_6 + item_d4_2;
    void* item_110 = entity_3;
    Sys_DispatchOpcode_14(item_d0, item_d8, item_dc_1 - item_d0, item_e0_2 - item_d8, 0.0f, 0.0f, 0.0f, 0x3ea8f5c3,
        0x3f800000, 0x80000, param_5);
    float entity_5 = item_d8;
    float item_b4 = item_d0;
    float item_b0 = entity_5;
    float item_90 = item_dc_1;
    float item_8c = entity_5;
    float item_6c = item_d0;
    int32_t item_9c = 0;
    int32_t item_98 = 0x3f000000;
    int32_t item_94 = 0;
    float item_a0 = item_cc;
    int32_t item_a8 = 0;
    int32_t item_a4 = 0;
    int32_t item_ac = 0x3f800000;
    int32_t item_78 = 0;
    int32_t item_74 = 0x3f000000;
    int32_t item_70 = 0;
    float item_7c = item_cc;
    int32_t item_84 = 0;
    int32_t item_80 = 0;
    int32_t item_88 = 0x3f800000;
    float item_68 = item_e0_2;
    int32_t item_54 = 0;
    int32_t item_50 = 0x3f000000;
    int32_t item_4c = 0;
    float item_58 = item_cc;
    int32_t item_60 = 0;
    int32_t item_5c = 0;
    int32_t item_64 = 0x3f800000;
    float item_48 = item_dc_1;
    float item_44 = item_e0_2;
    float item_34 = item_cc;
    int32_t temp_7 = g_a84a54;
    int32_t item_30 = 0;
    int32_t item_2c = 0x3f800000;
    int32_t item_28 = 0;
    int32_t item_3c = 0;
    int32_t item_38 = 0;
    int32_t item_40 = 0x3f800000;
    int32_t item_c4 = 0x80000;
    int32_t item_c8 = 0;
    int32_t item_c0 = param_5;
    int32_t item_bc = 4;
    float* item_b8 = &item_b4;
    (*((temp_7 << 2) + &g_a94e84))(&item_c8);
    int32_t* data_16 = &item_98;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        data_16[-1] = 0;
        strncpy(data_16, "fff?", 8);
        data_16[-2] = 0x3f000000;
        data_16[-4] = 0;
        data_16[-3] = 0;
        data_16[-5] = 0x3f800000;
        data_16 = &data_16[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    float entity_7 = item_d8;
    item_b4 = item_d0;
    float item_b0_1 = entity_7;
    float item_90_1 = item_dc_1;
    float item_6c_1 = item_dc_1;
    float item_8c_1 = entity_7;
    float item_44_1 = item_e0_2;
    float item_68_1 = item_e0_2;
    item_48 = item_d0;
    void item_24;
    memcpy(&item_24, &item_b4, 0x24);
    int32_t entity_10 = g_a84a54;
    item_c8 = 1;
    int32_t item_c0_1 = param_5;
    int32_t item_bc_1 = 5;
    float* item_b8_1 = &item_b4;
    return (*((entity_10 << 2) + &g_a94e84))(&item_c8);
}
