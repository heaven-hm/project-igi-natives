// IGI native provenance: Light_UpdateGlobalLight_10 - 0x0052D420 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052D420-Light_UpdateGlobalLight_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_UpdateGlobalLight_10.h"
void* Light_UpdateGlobalLight_10()

{
    void* result = DynObj_MtpNlodvirmodelD("Sky");
    g_a84570 = result;
    return result;
}
