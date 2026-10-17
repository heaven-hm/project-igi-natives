// Original IGI.EXE function: HumanPlayer_PlayFootstep_6 (VA 0x0040DF70; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlayFootstep_6.h"
void* HumanPlayer_PlayFootstep_6(void* a1, void* a2)

{
    if (!*(a2 + 0x33d))
    {
        int32_t valA1 = Human_StateAnimation(a2, *(a1 + 0x10), 0.200000003f);
        *(a1 + 0x14) = sub_40dfc0;
        return valA1;
    }

    Human_StateAnimation(a2, 0x13, 0.200000003f);
    *(a1 + 0x14) = sub_40dfc0;
    return a1;
}
