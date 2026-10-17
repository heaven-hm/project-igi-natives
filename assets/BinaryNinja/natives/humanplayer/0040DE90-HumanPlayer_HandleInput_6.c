// Original IGI.EXE function: HumanPlayer_HandleInput_6 (VA 0x0040DE90; static CFG gate PASS, CFG score 0.889).
#include "HumanPlayer_HandleInput_6.h"
void** HumanPlayer_HandleInput_6(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    void** result = HumanPlayer_CheckCollision_9(a2, 0f);
    __builtin_memset(a2 + 0x664, 0, 0x18);
    *(a1 + 0x14) = HumanPlayer_ApplyPhysics_6;
    return result;
}
