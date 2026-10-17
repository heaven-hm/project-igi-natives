// IGI native provenance: Terrain_ConnectGraphNode_4 - 0x00516C91 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00516C91-Terrain_ConnectGraphNode_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_ConnectGraphNode_4.h"
uint32_t Terrain_ConnectGraphNode_4(char* context, int32_t param_2, uint32_t param_3, int32_t* param_4)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    char* dest_1 = param_2 * param_3;
    char* context_val = context;
    char* entity_1 = dest_1;
    char* item_8_1 = dest_1;
    context = entity_1;

    if (!dest_1)
        return 0;

    int32_t* source_1 = param_4;

    if (!(source_1[3] & 0x10c))
        param_4 = 0x1000;
    else
        param_4 = source_1[6];

    while (true)
    {
        char* data_3;

        if (source_1[3] & 0x10c)
            data_3 = source_1[1];

        if (source_1[3] & 0x10c && data_3)
        {
            char* dest_2 = entity_1;

            if (entity_1 >= data_3)
                dest_2 = data_3;

            Camera_ResetMatrix_20(context_val, *source_1, dest_2);
            context -= dest_2;
            source_1[1] -= dest_2;
            *source_1 = &dest_2[*source_1];
            context_val += dest_2;
            dest_1 = item_8_1;
        }
        else if (entity_1 < param_4)
        {
            uint32_t data_7 = Camera_UpdateViewCone_9(source_1);

            if (data_7 == 0xffffffff)
                break;

            *context_val = data_7;
            context_val = &context_val[1];
            context -= 1;
            param_4 = source_1[6];
        }
        else
        {
            char* data_4 = entity_1;

            if (param_4)
                data_4 = entity_1 - COMBINE(0, data_4) % param_4;

            void* data_6 = Camera_UpdateViewCone_23(source_1[4], context_val, data_4);

            if (!data_6)
            {
                source_1[3] |= 0x10;
                break;
            }

            if (data_6 == 0xffffffff)
            {
                source_1[3] |= 0x20;
                break;
            }

            context -= data_6;
            context_val += data_6;
        }

        if (!context)
            return param_3;

        entity_1 = context;
    }

    return COMBINE(0, dest_1 - context) / param_2;
}
