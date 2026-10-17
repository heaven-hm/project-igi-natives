// IGI native provenance: AI_MoveToNode_2 - 0x004511D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004511D0-AI_MoveToNode_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_MoveToNode_2.h"
int32_t* AI_MoveToNode_2(int32_t* context)

{
    Qtask_UpdateList(context[3]);
    context[2] = 0;
    return Camera_ApplyHandiCam_33(context);
}
