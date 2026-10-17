// IGI native provenance: Graph_Process - 0x004F9160 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F9160-Graph_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Graph_Process.h"
void* Graph_Process(void* context)

{
    void* result = *(context + 0x6c);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(context + 0x6c) = 0;
    }

    return result;
}
