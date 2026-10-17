// IGI native provenance: AI_UpdateOrders_2 - 0x00451270 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00451270-AI_UpdateOrders_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateOrders_2.h"
int32_t AI_UpdateOrders_2(void* context, int32_t param_2)

{
    int32_t result = 0;
    int32_t i_1 = *(context + 0x128);

    if (i_1 > 0)
    {
        int32_t* entity_val = context + 0x90;
        int32_t i;

        do
        {
            if (*entity_val == param_2)
                result += 1;

            entity_val = &entity_val[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
