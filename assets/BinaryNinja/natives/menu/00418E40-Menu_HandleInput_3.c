// IGI native provenance: Menu_HandleInput_3 - 0x00418E40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418E40-Menu_HandleInput_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_HandleInput_3.h"
void* Menu_HandleInput_3(void* context, char* param_2)

{
    int32_t source_val = 0;

    if (*(context + 0x2666) > 0)
    {
        char* dest_1 = context + 0x264;
        int32_t data_val;

        do
        {
            int32_t data_1;
            int32_t entity_val;
            int32_t temp_val;
            data_1 = Camera_UpdateTransform_6(data_val, temp_val, entity_val, param_2, dest_1);

            if (!data_1)
                return context + source_val * 0x58 + 0x2a4;

            data_val = *(context + 0x2666);
            source_val += 1;
            dest_1 = &dest_1[0x58];
        } while (source_val < data_val);
    }

    return 0;
}
