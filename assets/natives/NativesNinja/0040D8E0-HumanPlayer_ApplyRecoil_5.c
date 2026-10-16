#include "0040D8E0-HumanPlayer_ApplyRecoil_5.h"
/* 0x0040d8e0 HumanPlayer_ApplyRecoil_5 full linked: callers=0 callees=2 */
void* HumanPlayer_ApplyRecoil_5(void* a1, struct human_player* a2)

{
    a2->pad0[0x33d] = 0;
    sub_489e70(a2, *(a1 + 0x10), 0f);
    void* result = HumanPlayer_CheckCollision_9(a2, 0f);
    *(a1 + 0x14) = Ladder_GetOnTop;
    return result;
}
