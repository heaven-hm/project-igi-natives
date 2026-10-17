// IGI native provenance: Menu_UpdateLanguage_11 - 0x00421CD0 - CFG score 93.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 00421CD0-Menu_UpdateLanguage_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_11.h"
int32_t Menu_UpdateLanguage_11(void* context)

{
    float item_e8 = *(context + 0x9c) + 1.0f;
    float item_e0 = (g_c28b48 >> 1) - 0xf0 + *(context + 0xa4) + 1.0f;
    float item_dc = *(context + 0xa0) + 1.0f;
    void* temp_val = *(context + 0x44);
    float item_d8 = (g_c28b48 >> 1) - 0xf0 + *(context + 0xa8) + 1.0f;
    float item_d0 = item_e0 + 20.0f;
    long double fpu_val_7_13 = Menu_FormatScreen_4(temp_val) * 0.125f;
    long double f0 = 1.0f;
    fpu_val_7_13 - f0;
    float item_e4;

    if (!(*(&((fpu_val_7_13 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_13, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_13 == f0 ? 1 : 0) << 0xe) + 1) & 1))
        item_e4 = 1.0f;
    else
        item_e4 = Menu_FormatScreen_4(*(context + 0x44)) * 0.125f;

    float item_cc = item_e4 * 0.200000003f;
    float item_ec_4 = item_e4 * 0.0500000007f;
    float item_e8_1 = (g_c28b44 >> 1) - 0x140 + (item_e8 - 320.0f) * item_e4 + 320.0f;
    int32_t item_98;
    int32_t* data_7 = &item_98;
    int32_t temp_3 = (g_c28b44 >> 1) - 0x140;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t i_1 = 4;
    long double fpu_val_7_25 = temp_3 + (item_dc - 320.0f) * item_e4 + 320.0f;
    float item_dc_1 = fpu_val_7_25;
    int32_t i;

    do
    {
        data_7[-1] = 0;
        *data_7 = 0x3f400000;
        data_7[1] = 0;
        data_7[-2] = item_e4;
        data_7[-4] = 0;
        data_7[-3] = 0;
        data_7[-5] = 0x3f800000;
        data_7 = &data_7[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    float item_90 = fpu_val_7_25;
    float item_6c = fpu_val_7_25;
    float item_b4 = item_e8_1;
    float data_9 = item_d8;
    float item_b0 = item_e0;
    float item_8c = item_e0;
    float item_48 = item_e8_1;
    float item_68 = data_9;
    float item_44 = data_9;
    int32_t temp_7 = g_a84a54;
    void item_24;
    memcpy(&item_24, &item_b4, 0x24);
    int32_t item_c4 = 0x80000;
    int32_t item_c8 = 1;
    int32_t item_c0 = 0;
    int32_t item_bc = 5;
    float* item_b8 = &item_b4;
    (*((temp_7 << 2) + &g_a94e84))(&item_c8);
    item_b4 = item_e8_1;
    float item_b0_1 = item_d0;
    float item_90_1 = item_dc_1;
    float item_8c_1 = item_d0;
    int32_t item_bc_1 = 2;
    (*((g_a84a54 << 2) + &g_a94e84))(&item_c8);
    item_b4 = item_e8_1;
    float item_b0_2 = item_e0;
    float item_90_2 = item_dc_1;
    float item_a0 = item_cc;
    float item_8c_2 = item_e0;
    float entity_10 = item_d8;
    float item_7c = item_cc;
    float item_6c_1 = item_e8_1;
    int32_t item_9c = 0;
    item_98 = 0x3f800000;
    int32_t item_94 = 0;
    int32_t item_a8 = 0;
    int32_t item_a4 = 0;
    int32_t item_ac = 0x3f800000;
    int32_t item_78 = 0;
    int32_t item_74 = 0x3f800000;
    int32_t item_70 = 0;
    int32_t item_84 = 0;
    int32_t item_80 = 0;
    int32_t item_88 = 0x3f800000;
    float item_68_1 = entity_10;
    int32_t item_54 = 0;
    int32_t item_50 = 0;
    int32_t item_4c = 0;
    float item_58 = item_ec_4;
    int32_t item_60 = 0;
    int32_t item_5c = 0;
    int32_t item_64 = 0x3f800000;
    item_48 = item_dc_1;
    float item_44_1 = entity_10;
    int32_t item_30 = 0;
    float item_34 = item_ec_4;
    int32_t temp_12 = g_a84a54;
    int32_t item_2c = 0;
    int32_t item_28 = 0;
    int32_t item_3c = 0;
    int32_t item_38 = 0;
    int32_t item_40 = 0x3f800000;
    item_c8 = 0;
    int32_t item_c0_1 = 0;
    int32_t item_bc_2 = 4;
    float* item_b8_1 = &item_b4;
    int32_t entity_11 = (*((temp_12 << 2) + &g_a94e84))(&item_c8);
    int32_t result = *(context + 0x94);

    if (result)
        return result;

    int32_t item_104_1 = entity_11;
    int32_t item_114_1 = entity_11;
    int32_t item_118_1 = entity_11;
    return Sys_DispatchOpcode_14(item_e8_1, item_e0, item_dc_1 - item_e8_1, item_d8 - item_e0, 0.0f, 0.0f, 0.0f,
        item_e4 * 0.660000026f, 0x3f800000, 0x80000, 0);
}
