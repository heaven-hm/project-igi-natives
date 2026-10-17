// IGI native provenance: CameraBase_Update_2 - 0x004EF9E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EF9E0-CameraBase_Update_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraBase_Update_2.h"
int32_t CameraBase_Update_2(long double context , float* param_2, int32_t* param_3)

{
    Script_TooFewParametersInLi(param_3, 1);
    Profile_ValueSet(param_3[1], *param_3);
    *param_2 = context;
    int32_t result = *param_3 + 1;
    *param_3 = result;
    return result;
}
