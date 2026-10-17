// Original IGI.EXE function: Script_EvaluateCondition_26 (VA 0x004FA810; static CFG gate PASS, CFG score 1.000).
#include "Script_EvaluateCondition_26.h"
int16_t* Script_EvaluateCondition_26(void* a1, int16_t* a2)

{
    void* srcS = a1;
    Sys_ResolveSymbol_4(*(srcS + 4));
    Resource_Unpack(*(srcS + 4), &a1, 3);
    int16_t* result = a2;
    *result = *(&a1 + 1);
    result = 1;
    return result;
}
