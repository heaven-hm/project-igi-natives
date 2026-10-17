// Original IGI.EXE function: Script_EvaluateCondition_25 (VA 0x004FA5E0; static CFG gate PASS, CFG score 1.000).
#include "Script_EvaluateCondition_25.h"
int32_t Script_EvaluateCondition_25(void* a1, int32_t a2)

{
    char v_8 = 4;
    int32_t v_7 = a2;
    Sys_ResolveSymbol_4(*(a1 + 4));
    int32_t result = Sys_CloseFileStream_4(*(a1 + 4), &v_8, 5);
    result = 1;
    return result;
}
