// IGI native provenance: AI_MoveToNode_3 - 0x004522A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004522A0-AI_MoveToNode_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_MoveToNode_3.h"
int32_t* AI_MoveToNode_3(void* context, int32_t param_2, double* param_3, char param_4)

{
    *(context + 0x3ec8) = 0x40490fdb;
    *(context + 0x3ecc) = 0x40490fdb;
    return AI_ExpandRoute(context, param_2, param_3, param_4);
}
