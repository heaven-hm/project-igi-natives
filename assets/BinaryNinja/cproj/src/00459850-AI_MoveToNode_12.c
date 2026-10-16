#include "gi_platform.h"
#include "00459850-AI_MoveToNode_12.h"
int32_t AI_MoveToNode_12(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 0;
    int32_t result = Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_45ca80;
    return result;
}
