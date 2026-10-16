#include "gi_platform.h"
#include "0051BC60-LevelTimer_LoadParameters.h"
int32_t LevelTimer_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0x6c);
    Script_ExecuteLevelScript_6(a1 + 0xbc);
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
    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x64)) = 0;
    return 0;
}
