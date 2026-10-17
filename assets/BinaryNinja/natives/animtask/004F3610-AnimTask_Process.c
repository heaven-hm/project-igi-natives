// Original IGI.EXE function: AnimTask_Process (VA 0x004F3610; static CFG gate PASS, CFG score 1.000).
#include "AnimTask_Process.h"
int32_t AnimTask_Process(int32_t* context )

{
    int32_t result = Script_GetArg(context[2], context[1]);
    *context = result * 2 + 1;
    return result;
}
