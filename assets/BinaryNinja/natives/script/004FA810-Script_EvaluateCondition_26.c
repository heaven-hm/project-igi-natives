// IGI native provenance: Script_EvaluateCondition_26 - 0x004FA810 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FA810-Script_EvaluateCondition_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
