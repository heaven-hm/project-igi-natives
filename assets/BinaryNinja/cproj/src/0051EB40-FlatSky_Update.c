#include "gi_platform.h"
#include "0051EB40-FlatSky_Update.h"
int32_t FlatSky_Update(void* a1)

{
    int32_t objC1 = Display_SetBackgroundColourFn((*(int32_t*)(uintptr_t)(a1 + 0x78)) * 255.0f, (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * 255.0f,
        (*(int32_t*)(uintptr_t)(a1 + 0x80)) * 255.0f);

    if ((*(int32_t*)(uintptr_t)(a1 + 0xc8)))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0xb0)) = (*(int32_t*)(uintptr_t)(a1 + 0xbc));
        (*(int32_t*)(uintptr_t)(a1 + 0xb4)) = (*(int32_t*)(uintptr_t)(a1 + 0xc0));
        (*(int32_t*)(uintptr_t)(a1 + 0xb8)) = (*(int32_t*)(uintptr_t)(a1 + 0xc4));
        (*(int32_t*)(uintptr_t)(a1 + 0x98)) = (*(int32_t*)(uintptr_t)(a1 + 0xa4));
        (*(int32_t*)(uintptr_t)(a1 + 0x9c)) = (*(int32_t*)(uintptr_t)(a1 + 0xa8));
        objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xac));
        (*(int32_t*)(uintptr_t)(a1 + 0xa0)) = objC1;
    }

    int32_t v_10_1 = objC1;
    Light_ComputeDirectionalLight_10((*(int32_t*)(uintptr_t)(a1 + 0x84)), (*(int32_t*)(uintptr_t)(a1 + 0x88)) * 3.14159274.0f * 0.00555555569.0f);
    return Light_SampleLightmap_9((*(int32_t*)(uintptr_t)(a1 + 0x84)), a1 + 0x8c, a1 + 0xa4, a1 + 0x98, a1 + 0xbc,
        a1 + 0xb0);
}
