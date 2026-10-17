// IGI native provenance: Sys_PopStack_19 - 0x004B7470 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7470-Sys_PopStack_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_19.h"
void* Sys_PopStack_19(void* context)

{
    if (context)
    {
        void* data_1 = *(context + 0xc);

        if (data_1)
            return data_1 + context;
    }

    return 0;
}
