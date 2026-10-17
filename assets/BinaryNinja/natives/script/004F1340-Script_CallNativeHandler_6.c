// IGI native provenance: Script_CallNativeHandler_6 - 0x004F1340 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1340-Script_CallNativeHandler_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_CallNativeHandler_6.h"
char* Script_CallNativeHandler_6(int32_t* context)

{
    int32_t i = 0;

    if (context[0x13] > 0)
    {
        int32_t* context_1 = &context[3];

        do
        {
            Qtask_UpdateList(*context_1);
            i += 1;
            context_1 = &context_1[1];
        } while (i < context[0x13]);
    }

    void* data_3 = *context;
    context[0x13] = 0;

    if (data_3)
    {
        Sys_ExecuteBytecode_2(data_3);
        *context = 0;
    }

    void* data_4 = context[1];

    if (data_4)
    {
        Sys_ExecuteBytecode_2(data_4);
        context[1] = 0;
    }

    char* result = context[2];

    if (result)
    {
        result = Sys_PushStack_24(result);
        context[2] = 0;
    }

    return result;
}
