#include "gi_platform.h"
#include "004BDA30-Sys_PopStack_29.h"
void* Sys_PopStack_29(void* a1, float a2)

{
    int32_t objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c)) - 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x18)) -= 1;
    int32_t tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 0x28));
    (*(int32_t*)(uintptr_t)(a1 + 0x1c)) = objC1;
    *(tmpD2 + (objC1 << 2)) = 2;
    (*(int32_t*)(uintptr_t)(*(a1 + 0x24) + (*(a1 + 0x18) << 2))) = a2;
    return a1;
}
