// IGI native provenance: AI_CheckHearing_21 - 0x00463740 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00463740-AI_CheckHearing_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckHearing_21.h"
int32_t AI_CheckHearing_21(void* context)

{
    int32_t* entity_val = *(context + 0x7b0);

    if (!entity_val)
        return 0;

    return *entity_val;
}
