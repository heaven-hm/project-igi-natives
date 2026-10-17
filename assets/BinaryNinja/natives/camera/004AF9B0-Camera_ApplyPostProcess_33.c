// Original IGI.EXE function: Camera_ApplyPostProcess_33 (VA 0x004AF9B0; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_33.h"
int32_t Camera_ApplyPostProcess_33(int32_t* a1)

{
    int32_t result = 0;
    int32_t* i = **a1;

    while (i)
    {
        i = *i;
        result += 1;
    }

    return result;
}
