// Original IGI.EXE function: HumanPlayer_CheckCollision_6 (VA 0x0040E470; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_CheckCollision_6.h"
void* HumanPlayer_CheckCollision_6(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Bones_PlayAnimation(a2 + 0x68, 0, *(FX_FragmentSimulate_14(a2 + 0x254, *(a2 + 0x2e8)) + 4), 0, 0.200000003f);
    HumanPlayer_CheckCollision_9(a2, 0f);
    void* result = HumanPlayer_UpdateAnimation_4(a2);
    *(a1 + 0x14) = HumanPlayer_ApplyRecoil_6;
    return result;
}
