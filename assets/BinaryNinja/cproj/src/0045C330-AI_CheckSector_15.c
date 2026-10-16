#include "gi_platform.h"
#include "0045C330-AI_CheckSector_15.h"
void* AI_CheckSector_15(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 1;
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0xd14)) = 0;
    Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    void* result = FX_TrailUpdate_15(a2);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = AI_UpdatePatrol_16;
    return result;
}
