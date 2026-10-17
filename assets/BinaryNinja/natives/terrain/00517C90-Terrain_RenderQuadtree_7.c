// Original IGI.EXE function: Terrain_RenderQuadtree_7 (VA 0x00517C90; static CFG gate PASS, CFG score 1.000).
#include "Terrain_RenderQuadtree_7.h"
int16_t* Terrain_RenderQuadtree_7(char* context, int32_t param_2, int16_t* param_3, int16_t* param_4, int32_t param_5, int32_t param_6, int32_t* param_7)

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
                    int32_t entity_3;

                    if (flagP1 < param_5)
                        entity_3 = param_6;

                    char data_9;
                    char entity_5;
                    char temp_7;
                    char context_4;

                    if (flagP1 >= param_5 || param_7 >= entity_3)
                    {
                        entity_5 = 0;
                        temp_7 = 0;
                        context_4 = 0;
                        data_9 = 0;
                    }
                    else
                    {
                        entity_3 = *result_1;
                        int32_t data_6 = entity_3 & 0x8000;
                        int32_t data_7 = -(data_6);
                        data_9 = data_7 - data_7;
                        context_4 = entity_3 >> 7 & 0xf8;
                        temp_7 = entity_3 >> 2 & 0xf8;
                        entity_5 = (entity_3 & 0x1f) << 3;
                    }

                    source_1[1] = data_9;
                    *source_1 = context_4;
                    source_1[0xffffffff] = temp_7;
                    source_1[0xfffffffe] = entity_5;
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
