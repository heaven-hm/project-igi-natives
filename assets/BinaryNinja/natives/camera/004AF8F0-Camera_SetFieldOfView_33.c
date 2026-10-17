// Original IGI.EXE function: Camera_SetFieldOfView_33 (VA 0x004AF8F0; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_33.h"
void* Camera_SetFieldOfView_33(void* context, void** param_2)

{
    param_2[1] = *(context + 8);
    *param_2 = context + 4;
    **(context + 8) = param_2;
    *(context + 8) = param_2;
    return context;
}
