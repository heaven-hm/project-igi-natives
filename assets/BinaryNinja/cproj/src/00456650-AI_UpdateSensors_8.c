#include "gi_platform.h"
#include "00456650-AI_UpdateSensors_8.h"
int32_t AI_UpdateSensors_8(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 0;
    Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    (*(int32_t*)(uintptr_t)(a2 + 0x664)) = (*(int32_t*)(uintptr_t)(a2 + 0x688));
    int32_t result = (*(int32_t*)(uintptr_t)(a2 + 0x68c));
    (*(int32_t*)(uintptr_t)(a2 + 0x668)) = result;
    (*(int32_t*)(uintptr_t)(a2 + 0x66c)) = (*(int32_t*)(uintptr_t)(a2 + 0x690));
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = AI_CheckSector_8;
    return result;
}
