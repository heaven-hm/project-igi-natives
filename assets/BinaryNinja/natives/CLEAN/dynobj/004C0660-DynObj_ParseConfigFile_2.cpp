// IGI native provenance: DynObj_ParseConfigFile_2 - 0x004C0660 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0660-DynObj_ParseConfigFile_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_ParseConfigFile_2.h"
int32_t* DynObj_ParseConfigFile_2(int32_t* context)

{
    context[2] = context;
    *context = &context[1];
    context[1] = 0;
    return context;
}
