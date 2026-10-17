// IGI native provenance: Sys_DispatchOpcode_19 - 0x004B7430 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7430-Sys_DispatchOpcode_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DispatchOpcode_19.h"
int32_t Sys_DispatchOpcode_19(void* context, int32_t param_2)

{
    int32_t result = *(context + 8);
    *(context + 8) = result + 1;
    *(context + (result << 2) + 0x14) = param_2;
    return result;
}
