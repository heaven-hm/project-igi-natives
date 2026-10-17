// IGI native provenance: Sys_DispatchOpcode_30 - 0x004BEC40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BEC40-Sys_DispatchOpcode_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DispatchOpcode_30.h"
int32_t Sys_DispatchOpcode_30(void* context, int32_t param_2)

{
    if (param_2 < *(context + 8))
    {
        int32_t entity_2 = *(*(context + 0x10) + (param_2 << 2));

        if (entity_2 < *(context + 0xc))
            return *(context + 0x14) + entity_2;
    }

    return 0;
}
