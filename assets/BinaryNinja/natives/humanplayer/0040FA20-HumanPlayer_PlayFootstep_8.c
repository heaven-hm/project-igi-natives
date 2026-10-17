// Original IGI.EXE function: HumanPlayer_PlayFootstep_8 (VA 0x0040FA20; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlayFootstep_8.h"
int32_t HumanPlayer_PlayFootstep_8(void* a1, void* a2)

{
    char result = AI_CheckSector_22(*(a2 + 0x4ec));

    if (!result)
        return result;

    void* tmpD1 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 1;
    int32_t objC2 = *(tmpD1 + 4);
    *(a1 + 0x14) = objC2;
    return objC2(a1, a2);
}
