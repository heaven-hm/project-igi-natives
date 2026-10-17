// Original IGI.EXE function: Camera_UpdateTransform_2 (VA 0x004A26C0; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_2.h"
int32_t Camera_UpdateTransform_2(void* a1)

{
    int32_t result =
        *(a1 + 0x6c) * 255f - ((((*(a1 + 0x64) * -255f) << 8) + *(a1 + 0x68) * -255f) << 8);
    int32_t objC4;
    int32_t dstD;
    dstD = __memfill_u32(0x935c10, result, 0x100);
    return result;
}
