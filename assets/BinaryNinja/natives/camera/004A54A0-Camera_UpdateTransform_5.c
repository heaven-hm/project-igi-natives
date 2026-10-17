// Original IGI.EXE function: Camera_UpdateTransform_5 (VA 0x004A54A0; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_5.h"
void* const Camera_UpdateTransform_5(int32_t context)

{
    void arg_4;
    void* entity_val = &arg_4;

    while (context >= 0x1000)
    {
        entity_val -= 0x1000;
        context -= 0x1000;
        *entity_val;
    }

    void* entity_1 = entity_val - context;
    *entity_1;
    *(entity_1 - 4) = return_addr;
    return return_addr;
}
