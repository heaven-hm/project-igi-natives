// IGI native provenance: AIGraph_Cleanup - 0x005092A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005092A0-AIGraph_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIGraph_Cleanup.h"
char* AIGraph_Cleanup(int32_t* context)

{
    void* source_val = context[1];
    Physics_SolveConstraints_7(source_val);
    char* result = *(source_val + 0xb8);

    if (!result)
        return result;

    int32_t source_1 = *(source_val + 0x58);
    return Script_ParseEnumString_24(context, result, (source_1 * source_1) << 3);
}
