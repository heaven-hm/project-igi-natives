// Original IGI.EXE function: CameraBase_Cleanup_6 (VA 0x004F0350; static CFG gate PASS, CFG score 1.000).
#include "CameraBase_Cleanup_6.h"
int32_t CameraBase_Cleanup_6(char* context, int32_t* param_2)

{
    Script_TooFewParametersInLi(param_2, 1);
    Sys_ResolveSymbol_23(param_2[1], *param_2, context, 0x10);
    int32_t result = *param_2 + 1;
    *param_2 = result;
    return result;
}
