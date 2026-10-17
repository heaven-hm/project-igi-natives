// IGI native provenance: AI_MoveToNode_8 - 0x00456350 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00456350-AI_MoveToNode_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_MoveToNode_8.h"
int32_t AI_MoveToNode_8(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_TakeCover_8;
    return result;
}
