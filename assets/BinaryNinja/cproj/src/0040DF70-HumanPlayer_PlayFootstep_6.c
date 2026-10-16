#include "gi_platform.h"
#include "0040DF70-HumanPlayer_PlayFootstep_6.h"
void* HumanPlayer_PlayFootstep_6(void* a1, void* a2)

{
    if (!(*(int32_t*)(uintptr_t)(a2 + 0x33d)))
    {
        int32_t valA1 = Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.200000003.0f);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_40dfc0;
        return valA1;
    }

    Human_StateAnimation(a2, 0x13, 0.200000003.0f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_40dfc0;
    return a1;
}
