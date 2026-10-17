// Original IGI.EXE function: Camera_SetFieldOfView_29 (VA 0x004ADAD7; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_29.h"
int32_t* Camera_SetFieldOfView_29(int32_t* a1)

{
    int32_t srcS = *a1;
    int32_t dstD = a1[1];
    *a1 = srcS * 2;
    int32_t objC2 = a1[2];
    a1[1] = (dstD * 2) | srcS >> 0x1f;
    a1[2] = objC2 << 1 | dstD >> 0x1f;
    return a1;
}
