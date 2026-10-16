#include "0040E470-HumanPlayer_CheckCollision_6.h"
/* 0x0040e470 HumanPlayer_CheckCollision_6 full linked: callers=0 callees=4 */
void* HumanPlayer_CheckCollision_6(void* a1, struct human_player* a2)

{
    a2->pad0[0x33d] = 0;
    int32_t ecx;
    ecx = a2->pad0[0x2e8];
    *(&ecx + 1) = a2->pad0[0x2e9];
    *(&ecx + 2) = a2->pad0[0x2ea];
    *(&ecx + 3) = a2->pad0[0x2eb];
    sub_4d61d0(&a2->pad0[0x68], 0, *(sub_489e10(&a2->pad0[0x254], ecx) + 4), 0, 0.200000003f);
    HumanPlayer_CheckCollision_9(a2, 0f);
    void* result = HumanPlayer_UpdateAnimation_4(a2);
    *(a1 + 0x14) = HumanPlayer_ApplyRecoil_6;
    return result;
}
