// IGI native provenance: AI_MoveToNode_4 - 0x00452C10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00452C10-AI_MoveToNode_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_MoveToNode_4.h"
void* AI_MoveToNode_4(int32_t* context, int32_t param_2, int32_t param_3)

{
    context[4] -= 1;
    AI_CheckHearing_4(context, param_2, param_3, 0);
    void* result = context[4];

    if (result)
        return result;

    Camera_ApplyHandiCam_33(context);
    context[1] = 0;
    *context = 0;
    return Camera_SetFieldOfView_33(&g_58a9e8, context);
}
