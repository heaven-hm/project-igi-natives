// Original IGI.EXE function: AI_MoveToNode_2 (VA 0x004511D0; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_2.h"
int32_t* AI_MoveToNode_2(int32_t* a1)

{
    Qtask_UpdateList(a1[3]);
    a1[2] = 0;
    return Camera_ApplyHandiCam_33(a1);
}
