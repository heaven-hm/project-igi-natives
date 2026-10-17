// Original IGI.EXE function: Camera_SetFieldOfView_29 (VA 0x004ADAD7; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_29.h"
int32_t* Camera_SetFieldOfView_29(int32_t* context)

{
    int32_t source_val = *context;
    int32_t dest_val = context[1];
    *context = source_val * 2;
    int32_t entity_2 = context[2];
    context[1] = (dest_val * 2) | source_val >> 0x1f;
    context[2] = entity_2 << 1 | dest_val >> 0x1f;
    return context;
}
