// IGI native provenance: AI_TakeCover_28 - 0x0046B4E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046B4E0-AI_TakeCover_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_TakeCover_28.h"
void* AI_TakeCover_28(int32_t context)

{
    void* result = AI_CombatTarget_28();
    *(result + 0x38) = context;
    return result;
}
