// Original IGI.EXE function: AI_MoveToNode_2 (VA 0x004511D0; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_2.h"
int32_t* AI_MoveToNode_2(int32_t* context)

{
    Qtask_UpdateList(context[3]);
    context[2] = 0;
    return Camera_ApplyHandiCam_33(context);
}
