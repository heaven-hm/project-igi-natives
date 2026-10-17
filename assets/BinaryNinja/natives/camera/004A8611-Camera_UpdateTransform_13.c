// Original IGI.EXE function: Camera_UpdateTransform_13 (VA 0x004A8611; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_13.h"
int32_t Camera_UpdateTransform_13(int32_t context)

{
    if (context == 1)
        g_936064 = 0x21;
    else if (context > 1 && context <= 3)
        g_936064 = 0x22;

    return context;
}
