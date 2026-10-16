#include "gi_platform.h"
#include "0046B7D0-AI_SelectTarget_28.h"
void* AI_SelectTarget_28(void* a1, float a2, int32_t a3)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = a3;
    (*(int32_t*)(uintptr_t)(a1 + 0x5c)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = a3;
    return a1;
}
