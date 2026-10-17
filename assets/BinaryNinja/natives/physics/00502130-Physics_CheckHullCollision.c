// Original IGI.EXE function: Physics_CheckHullCollision (VA 0x00502130; static CFG gate PASS, CFG score 1.000).
#include "Physics_CheckHullCollision.h"
void* Physics_CheckHullCollision(int32_t a1)

{
    void* valA = Script_ExecuteLevelScript_4(a1);
    int32_t srcS = 0;

    if (!valA)
        return valA;

    for (int32_t* i = QTask_DeleteTask_2(valA, g_a7a620); i;
            i = QTask_TriggerEvent_2(i, g_a7a620))
        srcS += 1;

    return srcS;
}
