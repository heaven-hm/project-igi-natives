#include "gi_platform.h"
#include "004585D0-AI_CheckVisibility_10.h"
int32_t AI_CheckVisibility_10(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0xd18)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 0;
    int32_t result = Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = AI_CheckSector_13;
    return result;
}
