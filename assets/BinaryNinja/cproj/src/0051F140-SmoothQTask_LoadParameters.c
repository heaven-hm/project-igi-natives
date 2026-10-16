#include "gi_platform.h"
#include "0051F140-SmoothQTask_LoadParameters.h"
int32_t SmoothQTask_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0xa8);
    (*(int32_t*)(uintptr_t)(a1 + 0x38)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x48)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x58)) = 0x3f800000;
    __builtin_memset(a1 + 0x20, 0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0xa0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x44)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x4c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x50)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x54)) = 0;
    __builtin_memset(a1 + 0x5c, 0, 0x40);
    (*(int32_t*)(uintptr_t)(a1 + 0xf8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x9c)) = 0x3ff00000;
    (*(int32_t*)(uintptr_t)(a1 + 0xa4)) = 0x3ff00000;
    return 0;
}
