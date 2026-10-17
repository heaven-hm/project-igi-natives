// IGI native provenance: Light_UpdateGlobalLight_2 - 0x005233A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005233A0-Light_UpdateGlobalLight_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_UpdateGlobalLight_2.h"
int32_t Light_UpdateGlobalLight_2(void* context)

{
    Sys_ExecuteBytecode_2(*(context + 0x34));
    void* entity_val = *(context + 0x30);
    *(context + 0x34) = 0;
    Sys_ExecuteBytecode_2(entity_val);
    void* temp_val = *(context + 0x1c);
    *(context + 0x30) = 0;
    Sys_ExecuteBytecode_2(temp_val);
    void* data_1 = *(context + 8);
    *(context + 0x1c) = 0;
    Sys_ExecuteBytecode_2(data_1);
    *(context + 8) = 0;
    int32_t* source_val = context + 0xc;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        Sys_ExecuteBytecode_2(source_val[5]);
        source_val[5] = 0;
        Sys_ExecuteBytecode_2(*source_val);
        *source_val = 0;
        source_val = &source_val[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return Sys_ExecuteBytecode_2(context);
}
