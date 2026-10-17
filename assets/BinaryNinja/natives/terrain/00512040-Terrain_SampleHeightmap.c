// IGI native provenance: Terrain_SampleHeightmap - 0x00512040 - CFG score 81.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00512040-Terrain_SampleHeightmap.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_SampleHeightmap.h"
int32_t Terrain_SampleHeightmap(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t* param_7, int32_t* param_8, int32_t* param_9, char param_10, char param_11, char param_12)

{
    memcpy(&g_a7dab0, param_4, 0x18);
    memcpy(0xa7db10, context, 0x30);
    int32_t result = *param_7;
    g_a7da70 = result;
    int32_t temp_val = param_7[1];
    g_a7da74 = temp_val;
    int32_t context_val = param_7[2];
    g_a7da78 = context_val;
    int32_t flagP = param_7[3];
    g_a7da7c = flagP;
    memcpy(0xa7dac8, param_5, 0x18);
    memcpy(0xa7db40, param_2, 0x30);
    g_a7da80 = *param_8;
    g_a7da84 = param_8[1];
    g_a7da88 = param_8[2];
    g_a7da8c = param_8[3];
    memcpy(0xa7dae0, param_6, 0x18);
    memcpy(0xa7db70, param_3, 0x30);
    g_a7da90 = *param_9;
    g_a7da94 = param_9[1];
    g_a7da98 = param_9[2];
    g_a7da9c = param_9[3];
    int32_t item_18_1;
    int32_t item_14_1;

    if (!(param_10 & 0x10))
    {
        result = param_12;

        if (param_11 & 0x10)
        {
            if (0x10 & result)
            {
                Terrain_CalculateNormals(1, 0);
                return Terrain_CalculateNormals(2, 0);
            }

            int32_t data_3 = g_a7da84;
            g_a7daa0 = g_a7da80;
            int32_t temp_2 = g_a7da8c;
            memcpy(0xa7daf8, 0xa7dac8, 0x18);
            memcpy(0xa7dba0, 0xa7db40, 0x30);
            int32_t entity_6 = g_a7da88;
            g_a7daa4 = data_3;
            g_a7daa8 = entity_6;
            g_a7daac = temp_2;
            Terrain_CalculateNormals(1, 0);
            return Terrain_CalculateNormals(3, 2);
        }

        if (!(0x10 & result))
            return result;

        int32_t temp_3 = g_a7da98;
        g_a7daa0 = g_a7da90;
        int32_t data_6 = g_a7da9c;
        item_14_1 = 0;
        memcpy(0xa7daf8, 0xa7dae0, 0x18);
        g_a7daa8 = temp_3;
        memcpy(0xa7dba0, 0xa7db70, 0x30);
        int32_t entity_7 = g_a7da94;
        g_a7daac = data_6;
        g_a7daa4 = entity_7;
        item_18_1 = 2;
    }
    else
    {
        if (param_11 & 0x10)
        {
            Terrain_CalculateNormals(0, 2);
            return Terrain_CalculateNormals(1, 2);
        }

        if (param_12 & 0x10)
        {
            Terrain_CalculateNormals(0, 1);
            return Terrain_CalculateNormals(2, 1);
        }

        item_14_1 = 2;
        memcpy(0xa7daf8, &g_a7dab0, 0x18);
        g_a7daa0 = result;
        memcpy(0xa7dba0, 0xa7db10, 0x30);
        g_a7daa4 = temp_val;
        g_a7daa8 = context_val;
        g_a7daac = flagP;
        item_18_1 = 0;
    }

    Terrain_CalculateNormals(item_18_1, item_14_1);
    return Terrain_CalculateNormals(3, 1);
}
