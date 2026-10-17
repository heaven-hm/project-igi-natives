// IGI native provenance: CameraBase_Cleanup_6 - 0x004F0350 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0350-CameraBase_Cleanup_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraBase_Cleanup_6.h"
int32_t CameraBase_Cleanup_6(char* context, int32_t* param_2)

{
    Script_TooFewParametersInLi(param_2, 1);
    Sys_ResolveSymbol_23(param_2[1], *param_2, context, 0x10);
    int32_t result = *param_2 + 1;
    *param_2 = result;
    return result;
}
