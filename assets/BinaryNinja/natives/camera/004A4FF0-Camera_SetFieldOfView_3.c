// Original IGI.EXE function: Camera_SetFieldOfView_3 (VA 0x004A4FF0; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_3.h"
void* Camera_SetFieldOfView_3(void* context, float param_2)

{
    *(context + 0x30) = param_2;
    return context;
}
