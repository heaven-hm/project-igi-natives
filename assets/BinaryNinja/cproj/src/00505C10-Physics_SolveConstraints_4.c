#include "gi_platform.h"
#include "00505C10-Physics_SolveConstraints_4.h"
void* Physics_SolveConstraints_4(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, char a7, int32_t a8)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x38)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = a4;
    (*(int32_t*)(uintptr_t)(a1 + 0x3c)) = a3;
    (*(int32_t*)(uintptr_t)(a1 + 0x48)) = a6;
    (*(int32_t*)(uintptr_t)(a1 + 0x44)) = a5;
    (*(int32_t*)(uintptr_t)(a1 + 0x4e)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x4d)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x4c)) = a7;
    (*(int32_t*)(uintptr_t)(a1 + 0x50)) = a8;
    return a1;
}
