#include "gi_platform.h"
#include "004590F0-AI_UpdateOrders_11.h"
int32_t AI_UpdateOrders_11(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 0;
    int32_t result = Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_45bf90;
    return result;
}
