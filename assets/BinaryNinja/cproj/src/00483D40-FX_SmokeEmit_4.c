#include "gi_platform.h"
#include "00483D40-FX_SmokeEmit_4.h"
void* FX_SmokeEmit_4(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x110)) = 0x44800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x114)) = 0x46200000;
    (*(int32_t*)(uintptr_t)(a1 + 0x108)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x124)) = 1;
    return a1;
}
