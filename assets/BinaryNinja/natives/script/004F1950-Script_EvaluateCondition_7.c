// Original IGI.EXE function: Script_EvaluateCondition_7 (VA 0x004F1950; static CFG gate PASS, CFG score 1.000).
#include "Script_EvaluateCondition_7.h"
int32_t* Script_EvaluateCondition_7(int32_t a1)

{
    int32_t* result = Mem_Alloc((a1 << 4) + 0xc, 4);
    result[1] = a1;
    *result = 0;
    result[2] = &result[3];
    return result;
}
