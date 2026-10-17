// Original IGI.EXE function: Graph_Action (VA 0x004FAEE0; static CFG gate PASS, CFG score 1.000).
#include "Graph_Action.h"
int32_t* Graph_Action(int32_t* context)

{
    int32_t* dest_val = context;
    void* source_val = dest_val[1];
    context = *(source_val + 0x58);
    void* data_1 = *(source_val + 0x6c);

    if (data_1)
    {
        Sys_ExecuteBytecode_2(data_1);
        *(source_val + 0x6c) = 0;
    }

    Script_ParseEnumString_24(dest_val, &context, 0);
    *(source_val + 0x6c) = Mem_Alloc(Script_UndefinedGraphnodeda(source_val) * context, 4);
    Script_ParseEnumString_23(source_val, context);
    int32_t* result = context;
    *(source_val + 0x58) = result;
    return result;
}
