#include "gi_platform.h"
#include "00520200-NoiseQTask_LoadParameters.h"
int32_t NoiseQTask_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0xd8);
    (*(int32_t*)(uintptr_t)(a1 + 0x38)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x48)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x58)) = 0x3f800000;
    __builtin_memset(a1 + 0x20, 0, 0x18);
    __builtin_memset(a1 + 0x88, 0, 0x44);
    (*(int32_t*)(uintptr_t)(a1 + 0xd0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x44)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x4c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x50)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x54)) = 0;
    __builtin_memset(a1 + 0x5c, 0, 0x28);
    (*(int32_t*)(uintptr_t)(a1 + 0x128)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xcc)) = 0x3ff00000;
    (*(int32_t*)(uintptr_t)(a1 + 0xd4)) = 0x3ff00000;
    return 0;
}
