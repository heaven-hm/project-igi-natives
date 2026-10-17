// Original IGI.EXE function: CameraBase_Update_2 (VA 0x004EF9E0; static CFG gate PASS, CFG score 1.000).
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
