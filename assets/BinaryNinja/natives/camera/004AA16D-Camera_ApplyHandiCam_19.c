// Original IGI.EXE function: Camera_ApplyHandiCam_19 (VA 0x004AA16D; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_19.h"
int32_t Camera_ApplyHandiCam_19(char context, int32_t param_2, char param_3)

{
    uint32_t data_2 = context;

    if (!(*(data_2 + 0xc32321) & param_3))
    {
        int32_t result;

        if (!param_2)
            result = 0;
        else
            result = g_54407a[data_2] & param_2;

        if (!result)
            return result;
    }

    return 1;
}
