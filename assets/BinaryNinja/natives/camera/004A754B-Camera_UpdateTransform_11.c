// Original IGI.EXE function: Camera_UpdateTransform_11 (VA 0x004A754B; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_11.h"
char* Camera_UpdateTransform_11(double* context, char* param_2, void* param_3, int32_t param_4)

{
    g_9361c4 = 1;
    char* result = Camera_E000(context, param_2, param_3, param_4);
    g_9361c4 = 0;
    return result;
}
