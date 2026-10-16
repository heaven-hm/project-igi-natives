#include "gi_platform.h"
#include "00528850-Light_CalculateAttenuation_6.h"
void* Light_CalculateAttenuation_6(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x148)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x150)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x158)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x160)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x168)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x170)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xd4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x19f)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x100)) = Light_SetLightColor_6;
    (*(int32_t*)(uintptr_t)(a1 + 0x108)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x14c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x154)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x15c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x164)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x16c)) = 0;
    __builtin_memset(a1 + 0x174, 0, 0x2b);
    (*(int32_t*)(uintptr_t)(a1 + 0x140)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x141)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x1a0)) = 1;
    return a1;
}
