// Original IGI.EXE function: Camera_ApplyHandiCam_22 (VA 0x004AB84C; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_22.h"
int32_t* Camera_ApplyHandiCam_22(void* context, int32_t param_2, char* param_3)

{
    int32_t* result = context + ((param_2 - *(context + 0x10)) >> 0xc << 3) + 0x18;
    *result += *param_3;
    *param_3 = 0;
    bool flag_0 = *result != 0xf0;
    result[1] = 0xf1;

    if (!flag_0)
    {
        g_936200 += 1;

        if (g_936200 == 0x20)
            result = Camera_ApplyLineFilter_22(0x10);
    }

    return result;
}
