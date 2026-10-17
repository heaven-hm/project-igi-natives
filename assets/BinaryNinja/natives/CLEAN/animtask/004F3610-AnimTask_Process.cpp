// IGI native provenance: AnimTask_Process - 0x004F3610 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3610-AnimTask_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimTask_Process.h"
int32_t AnimTask_Process(int32_t* context )

{
    int32_t result = Script_GetArg(context[2], context[1]);
    *context = result * 2 + 1;
    return result;
}
