#include "gi_platform.h"
#include "00525410-Light_RenderLensflare_5.h"
void Light_RenderLensflare_5(void* a1)

{
    Qhash_Init(1);
    int16_t objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x28));
    Sys_OpenFileStream_8(a1, 0, objC1 << 2, objC1, (*(int32_t*)(uintptr_t)(a1 + 0x2a)), 3, (*(int32_t*)(uintptr_t)(a1 + 0x24)));
    Qhash_Reset();
    return;
}
