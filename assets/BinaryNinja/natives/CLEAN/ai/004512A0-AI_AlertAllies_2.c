// IGI native provenance: AI_AlertAllies_2 - 0x004512A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004512A0-AI_AlertAllies_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_AlertAllies_2.h"
int32_t* AI_AlertAllies_2(int32_t* context, void* param_2, char param_3)

{
    int32_t temp_val = context[0x4a];

    if (temp_val == 1)
    {
        context[0x4a] = 0;
        return AI_MoveToNode_2(context);
    }

    int32_t entity_val = 0;

    if (temp_val > 0)
    {
        int32_t* source_1 = &context[4];

        while (*source_1 != *(param_2 + 0x14))
        {
            entity_val += 1;
            source_1 = &source_1[1];

            if (entity_val >= temp_val)
                return context;
        }

        context[0x4a] = temp_val - 1;
        context[entity_val + 4] = context[temp_val + 3];
        context[entity_val + 0x24] = context[context[0x4a] + 0x24];

        if (param_3)
            context[0x4b] += 1;
    }

    return context;
}
