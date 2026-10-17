// IGI native provenance: Terrain_CalculateNormals_6 - 0x00517A30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00517A30-Terrain_CalculateNormals_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_CalculateNormals_6.h"
int32_t* Terrain_CalculateNormals_6(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t* result_2 = context;
    void* context_val = nullptr;
    int32_t* result = nullptr;

    while (context_val < param_2)
    {
        int32_t data_2 = Terrain_ConnectGraphNode_6(context_val + context);
        int32_t* result_1;

        if (result)
        {
            result_1 = Mem_Alloc(0x20, 4);
            *result_2 = result_1;
        }
        else
        {
            result_1 = Mem_Alloc(0x20, 4);
            result = result_1;
        }

        result_2 = result_1;
        *result_2 = 0;
        result_2[2] = 0;
        result_2[4] = data_2;
        result_2[5] = 0;
        result_2[6] = Terrain_ConnectGraphNode_6(context_val + context + 4);
        result_2[7] = context_val + context + 8;
        result_2[1] = param_3;
        result_2[3] = 0;

        if (data_2 == 0x464f524d)
        {
            result_2[5] = Terrain_ConnectGraphNode_6(context_val + context + 8);
            result_2[2] = Terrain_CalculateNormals_6(context_val + context + 0xc, result_2[6] - 4, result_2);
        }

        context_val = context_val + result_2[6] + 8;

        if (context_val & 1)
            context_val += 1;
    }

    return result;
}
