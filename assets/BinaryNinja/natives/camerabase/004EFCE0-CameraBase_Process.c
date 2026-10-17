// Original IGI.EXE function: CameraBase_Process (VA 0x004EFCE0; static CFG gate PASS, CFG score 1.000).
#include "CameraBase_Process.h"
int32_t CameraBase_Process(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, float* a4, float a5)

{
    int32_t* srcS = a5;
    Script_TooFewParametersInLi(srcS, 3);
    float dstD = *srcS;
    Profile_ValueSet(srcS[1], dstD);
    Profile_ValueSet(srcS[1], dstD + 1);
    Profile_ValueSet(srcS[1], dstD + 2);
    Sys_DispatchOpcode_13(a4, a1, a2, a3);
    int32_t result = *srcS + 3;
    *srcS = result;
    return result;
}
