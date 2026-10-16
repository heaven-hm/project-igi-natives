#include "gi_platform.h"
#include "00465970-AI_CheckSector_23.h"
void* AI_CheckSector_23(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x1b8)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x1bc)) = a3;
    (*(int32_t*)(uintptr_t)(a1 + 0x1c0)) = 1.0 / a4;
    return a1;
}
