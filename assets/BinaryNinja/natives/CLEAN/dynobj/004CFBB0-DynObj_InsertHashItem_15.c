// IGI native provenance: DynObj_InsertHashItem_15 - 0x004CFBB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CFBB0-DynObj_InsertHashItem_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_InsertHashItem_15.h"
int32_t DynObj_InsertHashItem_15(int32_t* context)

{
    Resource_Flush(context[4]);
    Camera_ApplyHandiCam_33(context);
    return Sys_ExecuteBytecode_2(context);
}
