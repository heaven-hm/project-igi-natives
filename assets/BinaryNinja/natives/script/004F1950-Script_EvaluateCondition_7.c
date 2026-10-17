// IGI native provenance: Script_EvaluateCondition_7 - 0x004F1950 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1950-Script_EvaluateCondition_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_EvaluateCondition_7.h"
int32_t* Script_EvaluateCondition_7(int32_t context)

{
    int32_t* result = Mem_Alloc((context << 4) + 0xc, 4);
    result[1] = context;
    *result = 0;
    result[2] = &result[3];
    return result;
}
