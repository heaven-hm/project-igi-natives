#include "gi_platform.h"
#include "004A26C0-Camera_UpdateTransform_2.h"
int32_t Camera_UpdateTransform_2(void* a1)

{
    int32_t result =
        (*(int32_t*)(uintptr_t)(a1 + 0x6c)) * 255.0f - (((((*(int32_t*)(uintptr_t)(a1 + 0x64)) * -255.0f) << 8) + (*(int32_t*)(uintptr_t)(a1 + 0x68)) * -255.0f) << 8);
    int32_t objC4;
    int32_t dstD;
    dstD = __memfill_u32(0x935c10, result, 0x100);
    return result;
}
