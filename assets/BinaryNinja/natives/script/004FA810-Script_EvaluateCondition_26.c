// Original IGI.EXE function: Script_EvaluateCondition_26 (VA 0x004FA810; static CFG gate PASS, CFG score 1.000).
#include "Script_EvaluateCondition_26.h"
int16_t* Script_EvaluateCondition_26(void* context, int16_t* param_2)

{
    void* source_val = context;
    Sys_ResolveSymbol_4(*(source_val + 4));
    Resource_Unpack(*(source_val + 4), &context, 3);
    int16_t* result = param_2;
    *result = *(&context + 1);
    result = 1;
    return result;
}
