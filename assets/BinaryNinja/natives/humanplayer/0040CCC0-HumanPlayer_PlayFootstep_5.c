// Original IGI.EXE function: HumanPlayer_PlayFootstep_5 (VA 0x0040CCC0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlayFootstep_5.h"
int32_t* HumanPlayer_PlayFootstep_5(int32_t* a1, void* a2)

{
    void* valA = AI_CombatTarget_21(a2);

    if (!(a1[2] & 1))
        return a1;

    AI_CombatTarget_20(a2);
    AI_CheckHearing_20(a2);
    AI_TakeCover_22(*(a2 + 0x4ec));
    AI_UpdateOrders_20(a2);
    AI_SelectTarget_20(a2);
    AI_UpdatePatrol_21(a2, nullptr);
    Human_ViewCam(a2, 1);
    AI_SelectTarget_19(a2);
    AI_CheckVisibility_21(a2, Menu_UpdateLanguage_23(valA));
    return HumanPlayer_PlaySound_5(a2, 6);
}
