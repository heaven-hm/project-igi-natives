// IGI native provenance: CameraBase_Action - 0x004EFF30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFF30-CameraBase_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraBase_Action.h"
int32_t CameraBase_Action(long double context , double* param_2, int32_t* param_3)

{
    Script_TooFewParametersInLi(param_3, 1);
    Profile_ValueSet(param_3[1], *param_3);
    *param_2 = context;
    int32_t result = *param_3 + 1;
    *param_3 = result;
    return result;
}
