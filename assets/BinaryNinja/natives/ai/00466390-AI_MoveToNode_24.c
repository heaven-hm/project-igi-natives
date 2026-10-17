// IGI native provenance: AI_MoveToNode_24 - 0x00466390 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00466390-AI_MoveToNode_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_MoveToNode_24.h"
int32_t AI_MoveToNode_24(int32_t context, int32_t param_2, int32_t param_3)

{
    *(context + (param_2 << 2) + 0x74) = param_3;
    return param_3;
}
