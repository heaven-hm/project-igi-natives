#include "gi_platform.h"
#include "0045C2E0-AI_UpdateSensors_15.h"
void* AI_UpdateSensors_15(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 1;
    Bones_PlayAnimation(a2 + 0x68, 0, (*(int32_t*)(uintptr_t)(FX_FragmentSimulate_14(a2 + 0x254, *(a2 + 0x2e8)) + 4)), 0, 0.0f);
    void* result = FX_TrailUpdate_15(a2);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = AI_CombatTarget_12;
    return result;
}
