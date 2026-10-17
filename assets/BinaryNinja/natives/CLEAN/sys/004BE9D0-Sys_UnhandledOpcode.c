// IGI native provenance: Sys_UnhandledOpcode - 0x004BE9D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BE9D0-Sys_UnhandledOpcode.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_UnhandledOpcode.h"
int32_t Sys_UnhandledOpcode(int32_t* context)

{
    char* data_1 = *context + context[5];
    char entity_1 = *data_1;
    int32_t entity_2;

    if (entity_1 == 7)
        entity_2 = 3;
    else if (entity_1 == 0xb)
        entity_2 = 4;
    else
    {
        Error_Show("Unhandled opcode.");

        while (true)
            /* nop */
    }

    Sys_ReadFileBlock_28(context, &data_1[1], entity_2);
    int32_t temp_val = context[5];
    int32_t i = 0xffffffff;
    int32_t dest_val = *context + temp_val + 1;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    context[5] = ~i - 1 + temp_val + 2;
    return 0;
}
