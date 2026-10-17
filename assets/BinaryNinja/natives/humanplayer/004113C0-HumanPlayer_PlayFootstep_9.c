// Original IGI.EXE function: HumanPlayer_PlayFootstep_9 (VA 0x004113C0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlayFootstep_9.h"
int32_t HumanPlayer_PlayFootstep_9(void* a1)

{
    int32_t result = *(a1 + 0xde0);

    if (result)
    {
        result -= 1;
        *(a1 + 0xde0) = result;
    }

    return result;
}
