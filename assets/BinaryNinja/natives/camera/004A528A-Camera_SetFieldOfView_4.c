// Original IGI.EXE function: Camera_SetFieldOfView_4 (VA 0x004A528A; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_4.h"
uint32_t Camera_SetFieldOfView_4(int32_t* a1)

{
    int32_t f0 = a1[1];
    a1[1] -= 1;

    if (f0 - 1 < 0)
        return Camera_UpdateViewCone_9(a1);

    char* objC = *a1;
    uint32_t result = *objC;
    *a1 = &objC[1];
    return result;
}
