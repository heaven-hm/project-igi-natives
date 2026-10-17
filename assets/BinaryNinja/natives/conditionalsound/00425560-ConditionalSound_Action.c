// Original IGI.EXE function: ConditionalSound_Action (VA 0x00425560; static CFG gate PASS, CFG score 1.000).
#include "ConditionalSound_Action.h"
int32_t* ConditionalSound_Action(void* context)

{
    int32_t* result = ConditionalSound_Stop(context);
    result = 0;
    *(context + 0xb0) = 0;
    *(context + 0xb1) = 0;
    return result;
}
