#include "HumanPlayer_PlayerDeath.h"
int32_t HumanPlayer_PlayerDeath(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Bones_PlayAnimation(a2 + 0x68, 0,
        *(FX_FragmentSimulate_14(a2 + 0x254, *(a2 + 0x2e8)) + (Sys_FreeMemory_14(Level_SetMission_5(), 2) << 2)
            + 8),
        0, 0.200000003f);
    HumanPlayer_CheckCollision_9(a2, 0f);
    FX_TrailUpdate_15(a2);
    HumanPlayer_UpdateAnimation_4(a2);
    Human_ViewCam(a2, 5);
    AI_MoveToNode_22(*(a2 + 0x4ec));
    AI_TakeCover_20(a2);
    AI_TakeCover_21(a2, "player_death_", 3);
    *(a2 + 0x664) = *(a2 + 0x688);
    *(a2 + 0x668) = *(a2 + 0x68c);
    int32_t result = *(a2 + 0x690);
    *(a2 + 0x66c) = result;
    *(a1 + 0x14) = HumanPlayer_LoadParameters_8;
    return result;
}
