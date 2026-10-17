// IGI native provenance: DynObj_LinkDynamicCube_11 - 0x004CE3E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CE3E0-DynObj_LinkDynamicCube_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_LinkDynamicCube_11.h"
int32_t DynObj_LinkDynamicCube_11(int32_t context, int32_t param_2, int32_t param_3)

{
    *(context + (param_2 << 2) + 0xd3c) = param_3;
    return param_3;
}
