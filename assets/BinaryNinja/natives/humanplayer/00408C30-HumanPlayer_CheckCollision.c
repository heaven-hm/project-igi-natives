// Original IGI.EXE function: HumanPlayer_CheckCollision (VA 0x00408C30; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_CheckCollision.h"
int32_t HumanPlayer_CheckCollision(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Render_TransformVertices_10(param_2 + 0x68, 0.0f);
    Human_StateAnimation(param_2, *(context + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(param_2, 3);
    *(context + 0x14) = HumanPlayer_ApplyRecoil;
    return result;
}
