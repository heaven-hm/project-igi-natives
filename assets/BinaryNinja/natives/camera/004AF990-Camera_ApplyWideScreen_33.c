// Original IGI.EXE function: Camera_ApplyWideScreen_33 (VA 0x004AF990; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_33.h"
void* Camera_ApplyWideScreen_33(void* context, void** param_2)

{
    **(context + 4) = param_2;
    param_2[1] = *(context + 4);
    *(context + 4) = param_2;
    *param_2 = context;
    return context;
}
