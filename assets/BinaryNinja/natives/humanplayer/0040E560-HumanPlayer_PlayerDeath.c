// Original IGI.EXE function: HumanPlayer_PlayerDeath (VA 0x0040E560; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlayerDeath.h"
int32_t HumanPlayer_PlayerDeath(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Bones_PlayAnimation(param_2 + 0x68, 0,
        *(FX_FragmentSimulate_14(param_2 + 0x254, *(param_2 + 0x2e8)) + (Sys_FreeMemory_14(Level_SetMission_5(), 2) << 2)
            + 8),
        0, 0.200000003f);
    HumanPlayer_CheckCollision_9(param_2, 0.0f);
    FX_TrailUpdate_15(param_2);
    HumanPlayer_UpdateAnimation_4(param_2);
    Human_ViewCam(param_2, 5);
    AI_MoveToNode_22(*(param_2 + 0x4ec));
    AI_TakeCover_20(param_2);
    AI_TakeCover_21(param_2, "player_death_", 3);
    *(param_2 + 0x664) = *(param_2 + 0x688);
    *(param_2 + 0x668) = *(param_2 + 0x68c);
    int32_t result = *(param_2 + 0x690);
    *(param_2 + 0x66c) = result;
    *(context + 0x14) = HumanPlayer_LoadParameters_8;
    return result;
}
