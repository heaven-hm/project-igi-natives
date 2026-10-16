#include "gi_platform.h"
#include "004E99D0-SoundSys_InitSoundSys_14.h"
void* SoundSys_InitSoundSys_14(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0xb8)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0xbc)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0xc0)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0xc8)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0xcc)) = 0x3f800000;
    __builtin_memset(a1 + 0x88, 0, 0x30);
    (*(int32_t*)(uintptr_t)(a1 + 0xc4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x12c)) = 0xbf800000;
    (*(int32_t*)(uintptr_t)(a1 + 0xd0)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0xd4)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0xd8)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0xdc)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0xe0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xe1)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xe2)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xe3)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x103)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x130)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x134)) = 0;
    return a1;
}
