// Original IGI.EXE function: ConditionalSound_Action (VA 0x00425560; static CFG gate PASS, CFG score 1.000).
#include "ConditionalSound_Action.h"
int32_t* ConditionalSound_Action(void* a1)

{
    int32_t* result = ConditionalSound_Stop(a1);
    result = 0;
    *(a1 + 0xb0) = 0;
    *(a1 + 0xb1) = 0;
    return result;
}
