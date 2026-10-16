#include "gi_platform.h"
#include "00489C30-FX_FireBallUpdate_14.h"
int32_t* FX_FireBallUpdate_14(void* a1, int32_t a2)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x258)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x25c)) = a2;
    int32_t* result = FX_SmokeEmit_14(a1);
    (*(int32_t*)(uintptr_t)(a1 + 0x2e8)) = 0xffffffff;
    return result;
}
