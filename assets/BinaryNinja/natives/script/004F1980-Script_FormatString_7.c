// Original IGI.EXE function: Script_FormatString_7 (VA 0x004F1980; static CFG gate FAIL, CFG score 0.778).
#include "Script_FormatString_7.h"
int32_t* Script_FormatString_7(int32_t* context, int32_t param_2)

{
    int32_t* result = Script_EvaluateCondition_7(*context + param_2);
    int32_t entity_1 = *context << 4;
    int32_t source_1;
    int32_t dest_1;
    dest_1 = memcpy(result[2], context[2], entity_1 & 0xfffffffc);
    memcpy(dest_1, source_1, entity_1 & 3);
    *result = *context;
    return result;
}
