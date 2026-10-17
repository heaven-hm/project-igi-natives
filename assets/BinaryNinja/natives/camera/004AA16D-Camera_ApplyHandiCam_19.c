// Original IGI.EXE function: Camera_ApplyHandiCam_19 (VA 0x004AA16D; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_19.h"
int32_t Camera_ApplyHandiCam_19(char a1, int32_t a2, char a3)

{
    uint32_t valA2 = a1;

    if (!(*(valA2 + 0xc32321) & a3))
    {
        int32_t result;

        if (!a2)
            result = 0;
        else
            result = g_54407a[valA2] & a2;

        if (!result)
            return result;
    }

    return 1;
}
