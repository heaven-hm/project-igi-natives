// IGI native provenance: DynObj_LinkDynamicCube_2 - 0x004C0720 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0720-DynObj_LinkDynamicCube_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_LinkDynamicCube_2.h"
int32_t* DynObj_LinkDynamicCube_2(int32_t* context, int32_t param_2, int32_t param_3)

{
    *context = param_2;
    context[1] = param_3;
    context[4] = &context[2];
    context[2] = &context[3];
    context[3] = 0;
    return context;
}
