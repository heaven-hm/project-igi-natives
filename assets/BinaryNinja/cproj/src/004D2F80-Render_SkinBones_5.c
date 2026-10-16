#include "gi_platform.h"
#include "004D2F80-Render_SkinBones_5.h"
void* Render_SkinBones_5(void* a1, void* a2)

{
    __builtin_memset(a1, 0, 0x84);
    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x74)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = (*(int32_t*)(uintptr_t)(a2 + 0x78));
    (*(int32_t*)(uintptr_t)(a2 + 0x78)) = a1;
    return a2;
}
