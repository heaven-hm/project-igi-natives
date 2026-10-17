// Original IGI.EXE function: HumanPlayer_PlayFootstep_9 (VA 0x004113C0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlayFootstep_9.h"
int32_t HumanPlayer_PlayFootstep_9(void* context)

{
    int32_t result = *(context + 0xde0);

    if (result)
    {
        result -= 1;
        *(context + 0xde0) = result;
    }

    return result;
}
