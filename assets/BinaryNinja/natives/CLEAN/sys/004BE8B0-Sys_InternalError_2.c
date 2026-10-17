// IGI native provenance: Sys_InternalError_2 - 0x004BE8B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BE8B0-Sys_InternalError_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_InternalError_2.h"
int32_t Sys_InternalError_2(int32_t* context)

{
    char* data_1 = *context + context[5];

    if (*data_1 == 4)
    {
        Sys_PushStack_29(context, *(data_1 + 1));
        int32_t result = context[5] + 3;
        context[5] = result;
        return result;
    }

    Error_Show("Internal error.");

    while (true)
        /* nop */
}
