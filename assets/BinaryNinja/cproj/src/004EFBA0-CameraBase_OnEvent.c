#include "gi_platform.h"
#include "004EFBA0-CameraBase_OnEvent.h"
int32_t CameraBase_OnEvent(long double a1 , long double a2 , long double a3 , float* a4, float a5)

{
    int32_t* srcS = a5;
    float dstD = *srcS;
    Script_TooFewParametersInLi(srcS, 3);
    Profile_ValueSet(srcS[1], dstD);
    Profile_ValueSet(srcS[1], dstD + 1);
    Profile_ValueSet(srcS[1], dstD + 2);
    Sys_ReadFileBlock_12(a4, a1, a2, a3);
    int32_t result = *srcS + 3;
    *srcS = result;
    return result;
}
