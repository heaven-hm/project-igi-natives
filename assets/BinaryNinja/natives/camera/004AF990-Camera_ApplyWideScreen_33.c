// Original IGI.EXE function: Camera_ApplyWideScreen_33 (VA 0x004AF990; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_33.h"
void* Camera_ApplyWideScreen_33(void* a1, void** a2)

{
    **(a1 + 4) = a2;
    a2[1] = *(a1 + 4);
    *(a1 + 4) = a2;
    *a2 = a1;
    return a1;
}
