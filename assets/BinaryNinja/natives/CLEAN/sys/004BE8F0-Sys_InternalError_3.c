// IGI native provenance: Sys_InternalError_3 - 0x004BE8F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BE8F0-Sys_InternalError_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_InternalError_3.h"
int32_t Sys_InternalError_3(int32_t* context)

{
    int32_t temp_val = 0;
    char* data_1 = *context + context[5];
    temp_val = *data_1;
    int32_t entity_1 = *(data_1 + 1);

    if (temp_val == 2)
    {
        Sys_PushStack_29(context, entity_1);
        int32_t data_8 = context[5] + 5;
        context[5] = data_8;
        return data_8;
    }

    if (temp_val == 6)
    {
        Sys_ReadFileBlock_30(context, entity_1);
        int32_t data_6 = context[5] + 5;
        context[5] = data_6;
        return data_6;
    }

    Error_Show("Internal error.");

    while (true)
        /* nop */
}
