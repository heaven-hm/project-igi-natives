// IGI native provenance: CameraBase_Cleanup_4 - 0x004F0110 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0110-CameraBase_Cleanup_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraBase_Cleanup_4.h"
int32_t CameraBase_Cleanup_4(int16_t* context, int32_t* param_2)

{
    Script_TooFewParametersInLi(param_2, 1);
    *context = Script_GetArg(param_2[1], *param_2);
    int32_t result = *param_2 + 1;
    *param_2 = result;
    return result;
}
