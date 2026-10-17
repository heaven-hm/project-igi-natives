// Original IGI.EXE function: Camera_UpdateTransform_11 (VA 0x004A754B; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_11.h"
char* Camera_UpdateTransform_11(double* a1, char* a2, void* a3, int32_t a4)

{
    g_9361c4 = 1;
    char* result = Camera_E000(a1, a2, a3, a4);
    g_9361c4 = 0;
    return result;
}
