// IGI native provenance: Terrain_SelectTerrainLOD_7 - 0x00517DD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00517DD0-Terrain_SelectTerrainLOD_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_SelectTerrainLOD_7.h"
int16_t* Terrain_SelectTerrainLOD_7(char* context, int32_t param_2, int16_t* param_3, int16_t* param_4, int32_t param_5, int32_t param_6, int32_t* param_7)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t data_val;
    int32_t entity_1;
    int32_t source_val;

    if (!param_7)
    {
        entity_1 = param_5;
        source_val = 0;
        data_val = 0;
        param_5 = entity_1;
        param_6 = param_6;
    }
    else
    {
        entity_1 = param_5;
        source_val = *param_7;
        int32_t context_1 = param_7[2];
        data_val = param_7[1];
        param_5 = context_1;
        int32_t dest_2 = entity_1 - source_val;

        if (context_1 >= dest_2)
            param_5 = dest_2;

        int32_t temp_1 = param_7[3];
        int32_t dest_4 = param_6 - data_val;

        param_6 = temp_1 < dest_4 ? temp_1 : dest_4;
    }

    param_7 = nullptr;
    int16_t* result = &param_4[data_val * entity_1 + source_val];

    if (param_3 > 0)
    {
        int32_t temp_4 = param_2;
        int16_t* result_1 = result;
        char* source_1 = &context[2];
        param_4 = result_1;
        context = source_1;
        bool flag_0_1;

        do
        {
            int32_t flagP1 = 0;

            if (temp_4 > 0)
            {
                do
                {
                    int32_t* data_4;

                    if (flagP1 < param_5)
                        data_4 = param_7;

                    char data_6;
                    char entity_6;
                    char temp_6;
                    char context_2;

                    if (flagP1 >= param_5 || data_4 >= param_6)
                    {
                        data_6 = 0;
                        entity_6 = 0;
                        temp_6 = 0;
                        context_2 = 0;
                    }
                    else
                    {
                        data_4 = *result_1;
                        temp_6 = *(&data_4 + 1) & 0xf8;
                        entity_6 = data_4 >> 3 & 0xfc;
                        context_2 = -1;
                        data_6 = (data_4 & 0x1f) << 3;
                    }

                    source_1[1] = context_2;
                    *source_1 = temp_6;
                    source_1[0xffffffff] = entity_6;
                    source_1[0xfffffffe] = data_6;
                    flagP1 += 1;
                    result_1 = &result_1[1];
                    source_1 = &source_1[4];
                } while (flagP1 < param_2);

                temp_4 = param_2;
            }

            source_1 = &context[temp_4 << 2];
            result = param_3;
            result_1 = &param_4[entity_1];
            flag_0_1 = param_7 + 1 < result;
            param_7 += 1;
            param_4 = result_1;
            context = source_1;
        } while (flag_0_1);
    }

    return result;
}
