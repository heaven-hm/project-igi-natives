// Original IGI.EXE function: Camera_ApplyHandiCam_33 (VA 0x004AF960; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_33.h"
int32_t* Camera_ApplyHandiCam_33(int32_t* context)

{
    *context[1] = *context;
    *(*context + 4) = context[1];
    context[1] = 0;
    *context = 0;
    return context;
}
