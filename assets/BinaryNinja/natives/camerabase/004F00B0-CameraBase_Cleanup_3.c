// Original IGI.EXE function: CameraBase_Cleanup_3 (VA 0x004F00B0; static CFG gate PASS, CFG score 1.000).
#include "CameraBase_Cleanup_3.h"
int32_t CameraBase_Cleanup_3(int32_t* context, int32_t* param_2)

{
    Script_TooFewParametersInLi(param_2, 1);
    *context = Script_GetArg(param_2[1], *param_2);
    int32_t result = *param_2 + 1;
    *param_2 = result;
    return result;
}
