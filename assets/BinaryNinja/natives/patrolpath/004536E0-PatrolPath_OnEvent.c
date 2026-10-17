// IGI native provenance: PatrolPath_OnEvent - 0x004536E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004536E0-PatrolPath_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PatrolPath_OnEvent.h"
int32_t PatrolPath_OnEvent(void* context)

{
    int32_t* data_val = *(context + 8);
    int32_t entity_val = *data_val;
    int32_t entity_1 = -(entity_val);
    int32_t* i = (entity_1 - entity_1) & data_val;
    int32_t result = 0;

    while (i)
    {
        i = *i;
        result += 1;

        if (!i)
            break;

        if (!*i)
            break;
    }

    return result;
}
