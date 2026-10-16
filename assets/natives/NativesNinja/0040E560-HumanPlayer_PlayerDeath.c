#include "0040E560-HumanPlayer_PlayerDeath.h"
/* 0x0040e560 HumanPlayer_PlayerDeath full linked: callers=0 callees=11 */
int32_t HumanPlayer_PlayerDeath(void* a1, struct human_player* a2)

{
    a2->pad0[0x33d] = 0;
    int32_t ecx;
    ecx = a2->pad0[0x2e8];
    *(&ecx + 1) = a2->pad0[0x2e9];
    *(&ecx + 2) = a2->pad0[0x2ea];
    *(&ecx + 3) = a2->pad0[0x2eb];
    int32_t eax_1 = sub_489e10(&a2->pad0[0x254], ecx);
    sub_4d61d0(&a2->pad0[0x68], 0, *(eax_1 + (sub_4b47c0(Level_SetMission_5(), 2) << 2) + 8), 0,
        0.200000003f);
    HumanPlayer_CheckCollision_9(a2, 0f);
    sub_48a330(a2);
    HumanPlayer_UpdateAnimation_4(a2);
    Human_ViewCam(a2, 5);
    sub_464700(a2->pad4ec);
    sub_4635f0(a2);
    sub_4638a0(a2, "player_death_", 3);
    a2->pad2[0x174] = a2->pad2[0x198];
    a2->pad2[0x178] = a2->pad2[0x19c];
    int32_t result = a2->pad2[0x1a0];
    a2->pad2[0x17c] = result;
    *(a1 + 0x14) = HumanPlayer_LoadParameters_8;
    return result;
}
