// Original IGI.EXE function: AI_MoveToNode_23 (VA 0x00465820; static CFG gate FAIL, CFG score 0.833).
#include "AI_MoveToNode_23.h"
int32_t AI_MoveToNode_23(int32_t* context, void* param_2)

{
    context[4] = 0xe147ae14;
    context[5] = 0x40a6147a;

    if (AI_MoveToNode_19(param_2))
    {
        strncpy(&context[4], "ffff", 4);
        context[5] = 0x40966666;
    }

    *context = *(param_2 + 0x20);
    context[1] = *(param_2 + 0x24);
    context[2] = *(param_2 + 0x28);
    int32_t result = *(param_2 + 0x2c);
    context[3] = result;
    *(context + 0x10) = *(param_2 + 0x30) + *(context + 0x10);
    return result;
}
