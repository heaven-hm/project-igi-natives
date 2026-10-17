// Original IGI.EXE function: PatrolCursor_Start (VA 0x004537E0; static CFG gate PASS, CFG score 1.000).
#include "PatrolCursor_Start.h"
int32_t* PatrolCursor_Start(void** context, int32_t param_2, int32_t param_3)

{
    *context = PatrolPath_Find(param_2);
    context[2] = 0;
    context[4] = 0;
    *(context + 0x15) = 1;
    context[5] = 0;
    context[6] = 0xffffffff;
    int32_t* data_1 = AI_CheckHearing_5(context, param_3);
    context[1] = data_1;
    int32_t* result = PatrolPathCommand_Process(data_1);

    if (result == 6)
    {
        result = PatrolPath_OnTick(context);
        context[1] = result;
    }

    return result;
}
