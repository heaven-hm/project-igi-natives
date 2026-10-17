// IGI native provenance: AIGraph_Setup - 0x00509610 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00509610-AIGraph_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIGraph_Setup.h"
int32_t AIGraph_Setup(void* context)

{
    void* data_val = *(context + 0xb8);

    if (data_val)
    {
        Sys_ExecuteBytecode_2(data_val);
        *(context + 0xb8) = 0;
    }

    return (*((Script_FormatString_21() << 2) + &g_a976e0))(context);
}
