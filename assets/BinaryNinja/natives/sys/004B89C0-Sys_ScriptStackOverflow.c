// IGI native provenance: Sys_ScriptStackOverflow - 0x004B89C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B89C0-Sys_ScriptStackOverflow.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ScriptStackOverflow.h"
int32_t Sys_ScriptStackOverflow()

{
    int32_t data_1 = g_a9659c;

    if (data_1 < 0x100)
    {
        g_a96598 = *((data_1 << 2) + &g_a965c0);
        g_a9659c = data_1 + 1;
        return data_1 + 1;
    }

    Error_Show("Script: Stack overflow.");

    while (true)
        /* nop */
}
