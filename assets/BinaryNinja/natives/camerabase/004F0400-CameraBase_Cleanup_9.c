// Original IGI.EXE function: CameraBase_Cleanup_9 (VA 0x004F0400; static CFG gate PASS, CFG score 1.000).
#include "CameraBase_Cleanup_9.h"
int32_t CameraBase_Cleanup_9(char* context, int32_t* param_2)

{
    Script_TooFewParametersInLi(param_2, 1);
    Sys_ResolveSymbol_23(param_2[1], *param_2, context, 0x100);
    int32_t result = *param_2 + 1;
    *param_2 = result;
    return result;
}
