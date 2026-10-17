// Original IGI.EXE function: AI_CheckHearing_2 (VA 0x00451050; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_2.h"
void* AI_CheckHearing_2(void* context, int32_t* param_2)

{
    param_2[1] = 0;
    *param_2 = 0;
    return Camera_SetFieldOfView_33(context + 0x1508, param_2);
}
