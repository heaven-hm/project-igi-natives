// IGI native provenance: Sys_ReadFileBlock - 0x004B0720 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0720-Sys_ReadFileBlock.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock.h"
int32_t Sys_ReadFileBlock(int32_t context, int32_t* param_2, int32_t* param_3, int32_t* param_4, int32_t* param_5, int32_t* param_6)

{
    int32_t entity_val = *param_2;
    int32_t result;
    int32_t context_val;

    if (entity_val <= 0)
    {
        context_val = 0xffffffff;
        result = 0;
    }
    else
    {
        entity_val -= 1;
        int32_t temp_1 = entity_val * 5;
        context_val = *(context + (temp_1 << 2) + 0xc);
        int32_t source_1 = *(context + (temp_1 << 2) + 8);
        int32_t dest_1 = *(context + (temp_1 << 2) + 4);
        int32_t flagP1 = *(context + (temp_1 << 2));
        void* data_1 = context + (temp_1 << 2);
        int32_t temp_2 = *(data_1 + 0x10);

        if (temp_2)
        {
            *(data_1 + 0x10) = temp_2 - 1;
            entity_val += 1;
            *(data_1 + 8) -= 1;
        }

        if (param_4)
            *param_4 = source_1;

        if (param_5)
            *param_5 = dest_1;

        if (param_6)
            *param_6 = flagP1;

        result = 1;
    }

    *param_2 = entity_val;

    if (param_3)
        *param_3 = context_val;

    return result;
}
