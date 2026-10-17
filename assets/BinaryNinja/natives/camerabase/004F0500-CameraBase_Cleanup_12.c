// Original IGI.EXE function: CameraBase_Cleanup_12 (VA 0x004F0500; static CFG gate PASS, CFG score 1.000).
#include "CameraBase_Cleanup_12.h"
int32_t CameraBase_Cleanup_12(char* a1, int32_t* a2)

{
    Script_TooFewParametersInLi(a2, 1);
    *a1 = Script_GetArg(a2[1], *a2);
    int32_t result = *a2 + 1;
    *a2 = result;
    return result;
}
