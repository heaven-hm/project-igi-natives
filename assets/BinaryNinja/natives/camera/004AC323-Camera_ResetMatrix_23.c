// Original IGI.EXE function: Camera_ResetMatrix_23 (VA 0x004AC323; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_23.h"
int32_t Camera_ResetMatrix_23(int32_t* context)

{
    g_936210 += 1;
    void* data_val = Camera_ApplyHandiCam_20(0x1000);
    context[2] = data_val;

    if (!data_val)
    {
        context[3] |= 4;
        context[2] = &context[5];
        context[6] = 2;
    }
    else
    {
        context[3] |= 8;
        context[6] = 0x1000;
    }

    int32_t result = context[2];
    context[1] = 0;
    *context = result;
    return result;
}
