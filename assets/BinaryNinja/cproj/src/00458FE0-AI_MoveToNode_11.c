#include "gi_platform.h"
#include "00458FE0-AI_MoveToNode_11.h"
int32_t AI_MoveToNode_11(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 0;
    int32_t result = Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_45bdc0;
    return result;
}
