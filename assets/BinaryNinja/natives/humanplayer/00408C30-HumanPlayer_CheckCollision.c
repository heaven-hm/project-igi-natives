// Original IGI.EXE function: HumanPlayer_CheckCollision (VA 0x00408C30; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_CheckCollision.h"
int32_t HumanPlayer_CheckCollision(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Render_TransformVertices_10(a2 + 0x68, 0f);
    Human_StateAnimation(a2, *(a1 + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(a2, 3);
    *(a1 + 0x14) = HumanPlayer_ApplyRecoil;
    return result;
}
