// Original IGI.EXE function: Camera_ResetMatrix_28 (VA 0x004ADA58; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_28.h"
int32_t Camera_ResetMatrix_28(int32_t a1, int32_t a2, int32_t* a3)

{
    int32_t result = 0;
    int32_t objC = a1 + a2;

    if (objC < a1 || objC < a2)
        result = 1;

    *a3 = objC;
    return result;
}
