#include "gi_platform.h"
#include "004511D0-AI_MoveToNode_2.h"
int32_t* AI_MoveToNode_2(int32_t* a1)

{
    Qtask_UpdateList(a1[3]);
    a1[2] = 0;
    return Camera_ApplyHandiCam_33(a1);
}
