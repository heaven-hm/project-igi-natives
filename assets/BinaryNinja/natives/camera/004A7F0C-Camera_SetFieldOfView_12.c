// Original IGI.EXE function: Camera_SetFieldOfView_12 (VA 0x004A7F0C; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_12.h"
int32_t Camera_SetFieldOfView_12(int32_t* a1)

{
    *a1 += 8;
    void* objC = *a1;
    *(objC - 4);
    return *(objC - 8);
}
