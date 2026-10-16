#include "gi_platform.h"
#include "0048E870-FX_TrailUpdate_20.h"
int32_t* FX_TrailUpdate_20(void* a1)

{
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0x3ab0));

    if (valA)
    {
        AI_CombatTarget_5(valA);
        (*(int32_t*)(uintptr_t)(a1 + 0x3ab0)) = 0;
    }

    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0x3ab4));

    if (result)
    {
        result = AI_CombatTarget_5(result);
        (*(int32_t*)(uintptr_t)(a1 + 0x3ab4)) = 0;
    }

    return result;
}
