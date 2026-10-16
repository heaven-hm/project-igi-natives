#include "gi_platform.h"
#include "0052AE50-AnimScaleTask_LoadParameters.h"
void* AnimScaleTask_LoadParameters(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x20154)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x2014c)) = 0xffffffff;
    __builtin_memset(a1 + 0x20, 0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x38)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x3c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x44)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x48)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x4c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x50)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x54)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x58)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x5c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x20150)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0xf4)) = 0x20;
    (*(int32_t*)(uintptr_t)(a1 + 0xf8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x200f4)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x200f5)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x20148)) = 0;
    Script_ExecuteLevelScript_6(a1 + 0x200f8);
    __builtin_memset(a1 + 0x6c, 0, 0x88);
    (*(int32_t*)(uintptr_t)(a1 + 0x64)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = 0;
    void* result = Camera_SetFieldOfView_33(&g_a76c28, a1 + 0x60);
    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = a1;
    (*(int32_t*)(uintptr_t)(a1 + 0x20160)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x20164)) = 0;
    return result;
}
