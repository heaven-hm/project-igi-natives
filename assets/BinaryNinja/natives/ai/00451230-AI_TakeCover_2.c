// IGI native provenance: AI_TakeCover_2 - 0x00451230 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00451230-AI_TakeCover_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_TakeCover_2.h"
int32_t AI_TakeCover_2(void* context, void* param_2)

{
    int32_t data_val = 0;
    int32_t entity_val = *(context + 0x128);

    if (entity_val > 0)
    {
        int32_t* temp_1 = context + 0x10;

        do
        {
            if (*(param_2 + 0x14) == *temp_1)
                return *(context + (data_val << 2) + 0x90);

            data_val += 1;
            temp_1 = &temp_1[1];
        } while (data_val < entity_val);
    }

    return 0xffffffff;
}
