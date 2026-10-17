// IGI native provenance: Terrain_UpdateWaterWaves_7 - 0x00517F00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00517F00-Terrain_UpdateWaterWaves_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_UpdateWaterWaves_7.h"
int32_t* Terrain_UpdateWaterWaves_7(int32_t* context, int32_t param_2, int32_t* param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t* param_7)

{
    int32_t data_val;
    int32_t temp_val;
    int32_t dest_val;

    if (!param_7)
    {
        temp_val = param_5;
        dest_val = 0;
        data_val = 0;
        param_5 = temp_val;
        param_6 = param_6;
    }
    else
    {
        temp_val = param_5;
        dest_val = *param_7;
        int32_t context_1 = param_7[2];
        data_val = param_7[1];
        param_5 = context_1;
        int32_t source_2 = temp_val - dest_val;

        if (context_1 >= source_2)
            param_5 = source_2;

        int32_t entity_val = param_7[3];
        int32_t context_3 = param_6 - data_val;

        param_6 = entity_val < context_3 ? entity_val : context_3;
    }

    int32_t context_4 = 0;
    int32_t* result = ((data_val * temp_val + dest_val) << 4) + param_4;

    if (param_3 > 0)
    {
        int32_t* source_4 = context;
        int32_t* result_1 = result;
        param_7 = result_1;

        do
        {
            int32_t temp_2 = 0;

            if (param_2 > 0)
            {
                int32_t* data_4 = source_4;

                do
                {
                    int32_t entity_2;

                    if (temp_2 >= param_5 || context_4 >= param_6)
                        entity_2 = 0;
                    else
                        entity_2 = *(result_1 - source_4 + data_4);

                    *data_4 = entity_2;
                    temp_2 += 1;
                    data_4 = &data_4[1];
                } while (temp_2 < param_2);
            }

            context_4 += 1;
            source_4 = &source_4[param_2];
            result = param_3;
            result_1 = &param_7[temp_val];
            param_7 = result_1;
        } while (context_4 < result);
    }

    return result;
}
