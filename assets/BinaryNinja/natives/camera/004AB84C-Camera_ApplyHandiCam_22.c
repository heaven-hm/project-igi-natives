// Original IGI.EXE function: Camera_ApplyHandiCam_22 (VA 0x004AB84C; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_22.h"
int32_t* Camera_ApplyHandiCam_22(void* a1, int32_t a2, char* a3)

{
    int32_t* result = a1 + ((a2 - *(a1 + 0x10)) >> 0xc << 3) + 0x18;
    *result += *a3;
    *a3 = 0;
    bool cond_0 = *result != 0xf0;
    result[1] = 0xf1;

    if (!cond_0)
    {
        g_936200 += 1;

        if (g_936200 == 0x20)
            result = Camera_ApplyLineFilter_22(0x10);
    }

    return result;
}
