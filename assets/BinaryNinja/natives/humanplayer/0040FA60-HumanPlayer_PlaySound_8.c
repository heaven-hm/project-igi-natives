// Original IGI.EXE function: HumanPlayer_PlaySound_8 (VA 0x0040FA60; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlaySound_8.h"
void* HumanPlayer_PlaySound_8(void* a1, void* a2)

{
    *(a2 + 0x4e8) = 0;
    *(a1 + 0x14) = HumanPlayer_UpdateAnimation_8;
    return a2;
}
