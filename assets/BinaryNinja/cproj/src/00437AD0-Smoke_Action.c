#include "gi_platform.h"
#include "00437AD0-Smoke_Action.h"
void* Smoke_Action(void* a1, int32_t* a2)

{
    float* objC = a2[1];
    double v_20 = objC[2] * (*(int32_t*)(uintptr_t)(a1 + 0x140)) + objC[1] * (*(int32_t*)(uintptr_t)(a1 + 0x138)) + *objC * (*(int32_t*)(uintptr_t)(a1 + 0x130));
    double v_18 = objC[5] * (*(int32_t*)(uintptr_t)(a1 + 0x140)) + objC[4] * (*(int32_t*)(uintptr_t)(a1 + 0x138)) + objC[3] * (*(int32_t*)(uintptr_t)(a1 + 0x130));
    double v_10 = objC[8] * (*(int32_t*)(uintptr_t)(a1 + 0x140)) + objC[7] * (*(int32_t*)(uintptr_t)(a1 + 0x138)) + objC[6] * (*(int32_t*)(uintptr_t)(a1 + 0x130));
    memcpy(a1 + 0x40, &v_20, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = **a2 + (*(int32_t*)(uintptr_t)(a1 + 0x40));
    (*(int32_t*)(uintptr_t)(a1 + 0x48)) = (*(int32_t*)(uintptr_t)(*a2 + 8)) + (*(int32_t*)(uintptr_t)(a1 + 0x48));
    (*(int32_t*)(uintptr_t)(a1 + 0x50)) = (*(int32_t*)(uintptr_t)(*a2 + 0x10)) + (*(int32_t*)(uintptr_t)(a1 + 0x50));
    return a1;
}
