// IGI native provenance: DynObj_Missing - 0x004CEC10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CEC10-DynObj_Missing.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_Missing.h"
void* DynObj_Missing(char* context)

{
    void* result = DynObj_Johan(context);

    if (result)
        return result;

    if (*context)
        return DynObj_Johan("missing");

    return 0;
}
