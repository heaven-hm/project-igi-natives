// Original IGI.EXE function: Camera_UpdateTransform_2 (VA 0x004A26C0; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_2.h"
int32_t Camera_UpdateTransform_2(void* context)

{
    int32_t result =
        *(context + 0x6c) * 255.0f - ((((*(context + 0x64) * -255.0f) << 8) + *(context + 0x68) * -255.0f) << 8);
    int32_t entity_4;
    int32_t dest_val;
    dest_val = __memfill_u32(0x935c10, result, 0x100);
    return result;
}
