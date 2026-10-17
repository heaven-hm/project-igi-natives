// Original IGI.EXE function: AI_CheckHearing_3 (VA 0x00452080; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_3.h"
int32_t* AI_CheckHearing_3(void* context)

{
    int32_t* result = g_58a9c8;

    if (!*result)
        return 0;

    Camera_ApplyHandiCam_33(result);
    result[1] = 0;
    *result = 0;
    Camera_SetFieldOfView_33(context + 0xe0, result);
    return result;
}
