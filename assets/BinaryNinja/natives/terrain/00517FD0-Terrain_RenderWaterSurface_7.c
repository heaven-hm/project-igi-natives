// IGI native provenance: Terrain_RenderWaterSurface_7 - 0x00517FD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00517FD0-Terrain_RenderWaterSurface_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_RenderWaterSurface_7.h"
void* Terrain_RenderWaterSurface_7(void* context, int32_t param_2, int32_t param_3, int32_t param_4, char* param_5, int32_t param_6, int32_t* param_7, int32_t param_8, int32_t* param_9)

{
    int32_t* temp_12 = param_9;
    int32_t data_val;
    int32_t entity_val;
    int32_t* context_val;

    if (!temp_12)
    {
        context_val = param_7;
        entity_val = 0;
        data_val = 0;
        param_9 = context_val;
        param_8 = param_8;
    }
    else
    {
        context_val = param_7;
        entity_val = *temp_12;
        int32_t* dest_1 = temp_12[2];
        data_val = temp_12[1];
        param_9 = dest_1;
        int32_t* source_2 = context_val - entity_val;

        if (dest_1 >= source_2)
            param_9 = source_2;

        int32_t temp_val = temp_12[3];
        int32_t dest_3 = param_8 - data_val;

        param_8 = temp_val < dest_3 ? temp_val : dest_3;
    }

    int32_t flagP = param_4;
    void* item_8;

    if (flagP)
        item_8 = data_val * context_val + entity_val + flagP;

    int32_t temp_5 = 0;
    int32_t item_4 = 0;
    char* entity_1 = data_val * context_val + entity_val + param_5;
    void* result = context;
    param_5 = entity_1;
    context = result;

    if (param_3 > 0)
    {
        do
        {
            int32_t dest_5 = 0;

            if (param_2 > 0)
            {
                char* data_4 = result + 3;
                void* flagP2 = item_8 - entity_1;

                do
                {
                    if (dest_5 >= param_9 || temp_5 >= param_8)
                    {
                        *data_4 = 0;
                        data_4[0xffffffff] = 0;
                        data_4[0xfffffffe] = 0;
                        data_4[0xfffffffd] = 0;
                    }
                    else
                    {
                        char temp_7;

                        if (!param_4)
                        {
                            char temp_8 = *entity_1;
                            char f0_1 = temp_8;
                            temp_8 = -(temp_8);
                            temp_7 = (temp_8 - temp_8) & 0xff;
                        }
                        else
                            temp_7 = *(entity_1 + flagP2);

                        *data_4 = temp_7;
                        int32_t temp_9 = 0;
                        temp_9 = *entity_1;
                        data_4[0xffffffff] = *(param_6 + (temp_9 << 2) + 2);
                        int32_t context_3 = 0;
                        context_3 = *entity_1;
                        data_4[0xfffffffe] = *(param_6 + (context_3 << 2) + 1);
                        int32_t context_5 = 0;
                        context_5 = *entity_1;
                        data_4[0xfffffffd] = *(param_6 + (context_5 << 2));
                        temp_5 = item_4;
                    }

                    dest_5 += 1;
                    entity_1 = &entity_1[1];
                    data_4 = &data_4[4];
                } while (dest_5 < param_2);

                context_val = param_7;
                flagP = param_4;
                entity_1 = param_5;
                result = context;
            }

            if (flagP)
                item_8 += context_val;

            entity_1 += context_val;
            temp_5 += 1;
            result += param_2 << 2;
            param_5 = entity_1;
            context = result;
            item_4 = temp_5;
        } while (temp_5 < param_3);
    }

    return result;
}
