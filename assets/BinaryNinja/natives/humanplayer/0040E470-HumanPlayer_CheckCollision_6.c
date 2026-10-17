// Original IGI.EXE function: HumanPlayer_CheckCollision_6 (VA 0x0040E470; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_CheckCollision_6.h"
void* HumanPlayer_CheckCollision_6(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Bones_PlayAnimation(param_2 + 0x68, 0, *(FX_FragmentSimulate_14(param_2 + 0x254, *(param_2 + 0x2e8)) + 4), 0, 0.200000003f);
    HumanPlayer_CheckCollision_9(param_2, 0.0f);
    void* result = HumanPlayer_UpdateAnimation_4(param_2);
    *(context + 0x14) = HumanPlayer_ApplyRecoil_6;
    return result;
}
