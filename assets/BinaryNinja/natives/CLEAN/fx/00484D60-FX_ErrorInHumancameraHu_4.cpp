// IGI native provenance: FX_ErrorInHumancameraHu_4 - 0x00484D60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00484D60-FX_ErrorInHumancameraHu_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_ErrorInHumancameraHu_4.h"
void* FX_ErrorInHumancameraHu_4(void* context, int32_t param_2)

{
    int32_t context_val;
    int32_t item_4 = context_val;
    int32_t entity_val = 0;

    for (int32_t* i = &g_5c1188; i < 0x5c1588; )
    {
        if (*(i + 5) && **i == param_2)
        {
            *(context + 0x68) = *((entity_val << 3) + &g_5c1188);
            *(context + 0x120) = *((entity_val << 3) + &g_5c1188);
            *(context + 0x118) = entity_val;
            *(context + 0x11c) = entity_val;
            return context;
        }

        i = &i[2];
        entity_val += 1;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
