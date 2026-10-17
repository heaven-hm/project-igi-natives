// Original IGI.EXE function: CameraBase_Action (VA 0x004EFF30; static CFG gate PASS, CFG score 1.000).
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
