// Original IGI.EXE function: Camera_SetFieldOfView_4 (VA 0x004A528A; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_4.h"
uint32_t Camera_SetFieldOfView_4(int32_t* context)

{
    int32_t f0 = context[1];
    context[1] -= 1;

    if (f0 - 1 < 0)
        return Camera_UpdateViewCone_9(context);

    char* entity_val = *context;
    uint32_t result = *entity_val;
    *context = &entity_val[1];
    return result;
}
