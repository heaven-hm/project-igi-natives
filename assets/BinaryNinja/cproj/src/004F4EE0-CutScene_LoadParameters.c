#include "gi_platform.h"
#include "004F4EE0-CutScene_LoadParameters.h"
int32_t CutScene_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0x7c);
    Script_ExecuteLevelScript_6(a1 + 0xcc);
    Script_ExecuteLevelScript_6(a1 + 0x11c);
    Script_ExecuteLevelScript_6(a1 + 0x16c);
    Script_ExecuteLevelScript_6(a1 + 0x1bc);
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
    (*(int32_t*)(uintptr_t)(a1 + 0x62)) = 0;
    int32_t tmpD1 = g_a76c7c;
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x258)) = tmpD1;
    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x26d)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x61)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x64)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x210)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x20c)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x25c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x264)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x260)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x268)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x270)) = 0xffffffff;
    return 0;
}
