// Original IGI.EXE function: AnimTask_Process (VA 0x004F3610; static CFG gate PASS, CFG score 1.000).
#include "AnimTask_Process.h"
int32_t AnimTask_Process(int32_t* a1 @ 0x8)

{
    int32_t result = Script_GetArg(a1[2], a1[1]);
    *a1 = result * 2 + 1;
    return result;
}
