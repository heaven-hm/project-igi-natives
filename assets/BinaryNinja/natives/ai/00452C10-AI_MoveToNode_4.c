// Original IGI.EXE function: AI_MoveToNode_4 (VA 0x00452C10; static CFG gate PASS, CFG score 1.000).
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
