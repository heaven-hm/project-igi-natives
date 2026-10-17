// Original IGI.EXE function: HumanPlayer_UpdateAnimation_7 (VA 0x0040F230; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateAnimation_7.h"
void* HumanPlayer_UpdateAnimation_7(void* a1, void* a2)

{
    HumanPlayer_CheckCollision_9(a2, 1.26116862e-44f);
    void* result = AI_SelectTarget_22(*(a2 + 0x4ec), -0.610865235f, 0xbeb2b8c3, 0x3d6e4bae, 0x3d082b3f);
    *(a2 + 0x4d0) = 0;
    *(a1 + 0x14) = HumanPlayer_CheckCollision_7;
    return result;
}
