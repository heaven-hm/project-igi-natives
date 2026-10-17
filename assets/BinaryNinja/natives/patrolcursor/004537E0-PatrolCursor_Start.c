// Original IGI.EXE function: PatrolCursor_Start (VA 0x004537E0; static CFG gate PASS, CFG score 1.000).
#include "PatrolCursor_Start.h"
int32_t* PatrolCursor_Start(void** a1, int32_t a2, int32_t a3)

{
    *a1 = PatrolPath_Find(a2);
    a1[2] = 0;
    a1[4] = 0;
    *(a1 + 0x15) = 1;
    a1[5] = 0;
    a1[6] = 0xffffffff;
    int32_t* valA1 = AI_CheckHearing_5(a1, a3);
    a1[1] = valA1;
    int32_t* result = PatrolPathCommand_Process(valA1);

    if (result == 6)
    {
        result = PatrolPath_OnTick(a1);
        a1[1] = result;
    }

    return result;
}
