// IGI native provenance: AI_CheckHearing_28 - 0x0046B060 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046B060-AI_CheckHearing_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckHearing_28.h"
void* AI_CheckHearing_28(int32_t context)

{
    void* result = AI_CombatTarget_28();
    *(result + 0x20) = context;
    return result;
}
