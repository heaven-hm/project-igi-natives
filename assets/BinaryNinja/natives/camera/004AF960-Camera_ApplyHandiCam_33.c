// Original IGI.EXE function: Camera_ApplyHandiCam_33 (VA 0x004AF960; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_33.h"
int32_t* Camera_ApplyHandiCam_33(int32_t* a1)

{
    *a1[1] = *a1;
    *(*a1 + 4) = a1[1];
    a1[1] = 0;
    *a1 = 0;
    return a1;
}
