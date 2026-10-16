#include "gi_platform.h"
#include "004BE950-Sys_ReadFileBlock_30.h"
int32_t Sys_ReadFileBlock_30(void* a1, int32_t a2)

{
    int32_t objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c)) - 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x18)) -= 1;
    int32_t tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 0x28));
    (*(int32_t*)(uintptr_t)(a1 + 0x1c)) = objC1;
    *(tmpD2 + (objC1 << 2)) = 5;
    (*(int32_t*)(uintptr_t)(*(a1 + 0x24) + (*(a1 + 0x18) << 2))) = a2;
    return a2;
}
