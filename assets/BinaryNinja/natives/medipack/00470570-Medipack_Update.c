// IGI native provenance: Medipack_Update - 0x00470570 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470570-Medipack_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Medipack_Update.h"
void* Medipack_Update(int32_t* context )

{
    void* data_1 = *(context[1] + 0x6e4);

    if (data_1)
    {
        Sys_ExecuteBytecode_2(data_1);
        *(context[1] + 0x6e4) = 0;
    }

    int32_t* data_2 = Script_FormatString_31(*context, "Factor of human max damage to add for each round");

    if (!data_2)
        data_2 = Script_CallNativeHandler_31(*context, "Factor of human max damage to add for each round", 0x3c23d70a);

    int32_t* entity_2 = data_2[0x49];
    *(context[1] + 0x6e4) = Mem_Alloc(4, 4);
    void* result = context[1];
    **(result + 0x6e4) = entity_2;
    return result;
}
