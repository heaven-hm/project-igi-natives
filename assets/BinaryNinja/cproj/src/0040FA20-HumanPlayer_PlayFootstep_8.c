#include "gi_platform.h"
#include "0040FA20-HumanPlayer_PlayFootstep_8.h"
int32_t HumanPlayer_PlayFootstep_8(void* a1, void* a2)

{
    char result = AI_CheckSector_22((*(int32_t*)(uintptr_t)(a2 + 0x4ec)));

    if (!result)
        return result;

    void* tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 4));
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 1;
    int32_t objC2 = *(tmpD1 + 4);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = objC2;
    return objC2(a1, a2);
}
