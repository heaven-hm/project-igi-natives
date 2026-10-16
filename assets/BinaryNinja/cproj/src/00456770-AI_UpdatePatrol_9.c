#include "gi_platform.h"
#include "00456770-AI_UpdatePatrol_9.h"
int32_t AI_UpdatePatrol_9(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 1;
    int32_t result =
        Bones_PlayAnimation(a2 + 0x68, 0, (*(int32_t*)(uintptr_t)(FX_FragmentSimulate_14(a2 + 0x254, *(a2 + 0x2e8)) + 4)), 0, 0.0f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_4561a0;
    return result;
}
