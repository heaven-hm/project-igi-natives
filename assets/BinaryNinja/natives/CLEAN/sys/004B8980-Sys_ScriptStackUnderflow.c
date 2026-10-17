// IGI native provenance: Sys_ScriptStackUnderflow - 0x004B8980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B8980-Sys_ScriptStackUnderflow.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ScriptStackUnderflow.h"
int32_t Sys_ScriptStackUnderflow(int32_t context)

{
    int32_t data_2 = g_a9659c;

    if (data_2)
    {
        int32_t entity_val = g_a96598;
        g_a9659c = data_2 - 1;
        *(((data_2 - 1) << 2) + &g_a965c0) = entity_val;
        return Sys_ExecuteBytecode_23(context);
    }

    Error_Show("Script: Stack underflow.");

    while (true)
        /* nop */
}
