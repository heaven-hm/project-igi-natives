// IGI native provenance: AI_AlertAllies - 0x00450DC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450DC0-AI_AlertAllies.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_AlertAllies.h"
void* AI_AlertAllies(void* context)

{
    int32_t* entity_val = *(context + 0x8fc);
    int32_t data_val = *entity_val;
    int32_t data_1 = -(data_val);
    return (data_1 - data_1) & entity_val;
}
