// Original IGI.EXE function: Camera_ResetMatrix_8 (VA 0x004A68C4; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_8.h"
int32_t* Camera_ResetMatrix_8()

{
    int32_t* result = g_936054;

    if (result == 1)
    {
    label_4a68e0:
        Camera_ProgramNameUnknown(0xfc);
        int32_t valA = g_9361bc;

        if (valA)
            valA();

        result = Camera_ProgramNameUnknown(0xff);
    }
    else if (!result && g_543e80 == 1)
        goto label_4a68e0;

    return result;
}
