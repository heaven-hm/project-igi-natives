#include "gi_platform.h"
#include "00529A10-Light_RenderLensflare_7.h"
int32_t* Light_RenderLensflare_7(void* a1)

{
    ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(a1 + 0x100))))(a1);
    (*(int32_t*)(uintptr_t)(a1 + 0x104)) = (*(int32_t*)(uintptr_t)(a1 + 0x100));
    int32_t* valA1 = SoundSys_SetFrequency_9();
    int32_t v_18 = 0;
    return Camera_SubmitFrame((*(int32_t*)(uintptr_t)(a1 + 0x88)), a1 + 0xb8, a1 + 0x8c, (*(int32_t*)(uintptr_t)(a1 + 0xd0)), 0x3f800000,
        valA1, 0, 0, 0.0f);
}
