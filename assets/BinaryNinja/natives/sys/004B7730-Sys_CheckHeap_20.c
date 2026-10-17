// IGI native provenance: Sys_CheckHeap_20 - 0x004B7730 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7730-Sys_CheckHeap_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CheckHeap_20.h"
void* Sys_CheckHeap_20(int32_t* context, void* param_2)

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    void* data_val = context[2];
    int32_t dest_val = context[1];
    int32_t entity_1 = *(data_val + 8);
    int32_t source_val = 0;
    int16_t flagP = 0;
    int32_t entity_3 = *context;

    if (!entity_3)
    {
        int32_t data_1 = Sys_CloseFileStream_17(data_val);
        char* entity_4 = nullptr;

        if (dest_val > 0)
        {
            do
            {
                if (!*(entity_4 + dest_val * param_2 + context + 0x10))
                    source_val += data_1;
                else
                {
                    source_val += data_1;
                    flagP = source_val;
                }

                entity_4 = &entity_4[1];
            } while (entity_4 < dest_val);
        }

        int32_t data_2 = context[3];
        *(data_2 + (param_2 << 1)) = flagP;
        return data_2;
    }

    if (entity_3 == 1)
    {
        int32_t data_3 = Sys_DispatchOpcode_17(data_val);
        char* temp_3 = nullptr;

        if (dest_val > 0)
        {
            do
            {
                char entity_8 = *(temp_3 + dest_val * param_2 + context + 0x10);

                if (!entity_8)
                    source_val += data_3;
                else
                {
                    source_val += *(entity_1 + entity_8 * 0x24 - 0x14);
                    flagP = source_val;
                }

                temp_3 = &temp_3[1];
            } while (temp_3 < dest_val);
        }

        data_val = param_2;
        *(context[3] + (data_val << 1)) = flagP;
    }

    return data_val;
}
