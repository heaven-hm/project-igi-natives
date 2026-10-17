// IGI native provenance: FX_AidetectionQtaskMask - 0x00489640 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489640-FX_AidetectionQtaskMask.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_AidetectionQtaskMask.h"
int32_t FX_AidetectionQtaskMask(int16_t context)

{
    int32_t entity_val = 0;

    for (int16_t* i = &g_5c8ac4; i < 0x5c8b04; )
    {
        if (*i == 0x181)
        {
            *((entity_val << 1) + &g_5c8ac4) = context;
            return 1 << (entity_val & 0x1f);
        }

        i = &i[1];
        entity_val += 1;
    }

    Warning_Show("AIDetection - QTask mask is full");
    return 0;
}
