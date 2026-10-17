// Original IGI.EXE function: Camera_SetFieldOfView_11 (VA 0x004A7572; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_11.h"
char* Camera_SetFieldOfView_11(double* context, char* param_2, int32_t param_3)

{
    g_9361c4 = 1;
    char* result = Camera_UpdateViewCone_10(context, param_2, param_3);
    g_9361c4 = 0;
    return result;
}
