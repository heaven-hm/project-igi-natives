// Original IGI.EXE function: CameraBase_Update_2 (VA 0x004EF9E0; static CFG gate PASS, CFG score 1.000).
#include "CameraBase_Update_2.h"
int32_t CameraBase_Update_2(long double a1 @ fp0, float* a2, int32_t* a3)

{
    Script_TooFewParametersInLi(a3, 1);
    Profile_ValueSet(a3[1], *a3);
    *a2 = a1;
    int32_t result = *a3 + 1;
    *a3 = result;
    return result;
}
