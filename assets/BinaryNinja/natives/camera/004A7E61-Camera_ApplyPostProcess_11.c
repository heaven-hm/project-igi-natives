// Original IGI.EXE function: Camera_ApplyPostProcess_11 (VA 0x004A7E61; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_11.h"
int32_t* Camera_ApplyPostProcess_11(int32_t a1, int32_t* a2, int32_t* a3)

{
    int32_t f0 = a2[1];
    a2[1] -= 1;
    uint32_t valA1;

    if (f0 - 1 < 0)
    {
        int32_t v_c_1 = a1;
        valA1 = Camera_ApplyHandiCam_11(a2);
    }
    else
    {
        char valA = a1;
        **a2 = valA;
        *a2 += 1;
        valA1 = valA;
    }

    if (valA1 != 0xffffffff)
    {
        *a3 += 1;
        return a3;
    }

    *a3 = 0xffffffff;
    return a3;
}
