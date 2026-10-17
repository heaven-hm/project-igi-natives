// Original IGI.EXE function: AI_CheckHearing_2 (VA 0x00451050; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_2.h"
void* AI_CheckHearing_2(void* a1, int32_t* a2)

{
    a2[1] = 0;
    *a2 = 0;
    return Camera_SetFieldOfView_33(a1 + 0x1508, a2);
}
