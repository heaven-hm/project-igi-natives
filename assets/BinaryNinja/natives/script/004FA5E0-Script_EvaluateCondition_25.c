// Original IGI.EXE function: Script_EvaluateCondition_25 (VA 0x004FA5E0; static CFG gate PASS, CFG score 1.000).
#include "Script_EvaluateCondition_25.h"
int32_t Script_EvaluateCondition_25(void* context, int32_t param_2)

{
    char item_8 = 4;
    int32_t item_7 = param_2;
    Sys_ResolveSymbol_4(*(context + 4));
    int32_t result = Sys_CloseFileStream_4(*(context + 4), &item_8, 5);
    result = 1;
    return result;
}
