#include "gi_platform.h"
#include "00456480-AI_UpdateOrders_8.h"
int32_t AI_UpdateOrders_8(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 0;
    int32_t result = Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = AI_AlertAllies_8;
    return result;
}
