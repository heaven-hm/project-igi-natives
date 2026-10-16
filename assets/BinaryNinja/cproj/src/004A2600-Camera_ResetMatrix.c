#include "gi_platform.h"
#include "004A2600-Camera_ResetMatrix.h"
int32_t Camera_ResetMatrix(void* a1)

{
    int32_t i_1 = 4;
    int32_t srcS1 =
        (*(int32_t*)(uintptr_t)(a1 + 0x6c)) * 128.0f - (((((*(int32_t*)(uintptr_t)(a1 + 0x64)) * -128.0f) << 8) + (*(int32_t*)(uintptr_t)(a1 + 0x68)) * -128.0f) << 8);
    int32_t tmpD2 = 0x935c10;
    int32_t result =
        (*(int32_t*)(uintptr_t)(a1 + 0x6c)) * 255.0f - (((((*(int32_t*)(uintptr_t)(a1 + 0x64)) * -255.0f) << 8) + (*(int32_t*)(uintptr_t)(a1 + 0x68)) * -255.0f) << 8);
    int32_t i;

    do
    {
        int32_t tmpD3 = tmpD2 + 0x80;
        int32_t objC8;
        int32_t dstD2;
        dstD2 = __memfill_u32(tmpD2, srcS1, 0x20);
        tmpD2 = tmpD3 + 0x80;
        i = i_1;
        i_1 -= 1;
        int32_t objC9;
        int32_t dstD4;
        dstD4 = __memfill_u32(tmpD3, result, 0x20);
    } while (i != 1);
    return result;
}
