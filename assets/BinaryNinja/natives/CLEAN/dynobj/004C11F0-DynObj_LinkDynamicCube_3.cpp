// IGI native provenance: DynObj_LinkDynamicCube_3 - 0x004C11F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C11F0-DynObj_LinkDynamicCube_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_LinkDynamicCube_3.h"
int32_t DynObj_LinkDynamicCube_3(int32_t* context)

{
    Sys_CloseFileStream_4(*context, &g_534364, 2);
    int32_t result = context[2] + 1;
    context[2] = result;
    return result;
}
