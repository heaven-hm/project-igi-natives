// Original IGI.EXE function: AIGraph_Cleanup (VA 0x005092A0; static CFG gate PASS, CFG score 1.000).
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
