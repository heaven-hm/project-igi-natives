// IGI native provenance: Terrain_UpdateWaterWaves - 0x00511500 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00511500-Terrain_UpdateWaterWaves.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_UpdateWaterWaves.h"
int32_t Terrain_UpdateWaterWaves()

{
    long double fpu_val_7_1 = g_bcabc0 + g_bcabb8;
    int32_t entity_val = g_bcabbc;
    g_c311ac = g_bcabb8;
    g_c311a0 = g_bcab2c;
    int32_t data_2 = g_b16c6c;
    g_c31084 = fpu_val_7_1;
    long double fpu_val_7_3 = g_bcabc4 + g_bcabbc;
    g_c311a8 = entity_val;
    int32_t temp_val = g_bcab28;
    g_c31080 = fpu_val_7_3;
    long double fpu_val_7_5 = g_bcabc8 + g_bcabb8;
    g_c311a4 = temp_val;
    g_c311b0 = fpu_val_7_5;
    g_c311b4 = g_bcabcc + g_bcabbc;
    int32_t item_34_1 = data_2 + 0x40;
    g_c311b8 = 1.0f / (data_2 - 0x40);
    item_34_1 = item_34_1 * 0.375;
    g_c31088 = item_34_1;
    g_c28fc0 = g_c311b8 * 2.66666675f;
    char data_4 = Terrain_SelectTerrainLOD_8();
    long double fpu_val_7_14 = g_bcab08;
    float item_30 = g_bcab10;
    long double fpu_val_6_1 = g_bcab18;
    g_c3108c = data_4;
    float item_2c = fpu_val_6_1;
    float item_28;
    memcpy(&item_28, &g_bcaae0, 0x28);
    long double fpu_val_7_15 = -(fpu_val_7_14);
    long double fpu_val_6_3 = -(item_30);
    long double fpu_val_5_1 = -(item_2c);
    float item_1c;
    float item_18;
    float item_14;
    float item_30_1 = item_14 * fpu_val_5_1 + item_18 * fpu_val_6_3 + item_1c * fpu_val_7_15;
    float item_10;
    float item_c;
    float item_8;
    float item_2c_1 = item_8 * fpu_val_5_1 + item_c * fpu_val_6_3 + item_10 * fpu_val_7_15;
    float item_24;
    float item_20;
    g_943b78 = item_20 * fpu_val_5_1 + item_24 * fpu_val_6_3 + item_28 * fpu_val_7_15;
    int32_t result = g_b16c9c;
    g_943b80 = item_2c_1;
    memcpy(0x943b50, &item_28, 0x28);
    g_943b7c = item_30_1;

    if (result)
    {
        int32_t data_6 = Display_CheckCapabilities_7();
        result = Sys_ReadFileBlock_3();

        if (result == data_6)
            return Terrain_Draw();
    }

    return result;
}
