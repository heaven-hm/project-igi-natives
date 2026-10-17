// Original IGI.EXE function: HumanPlayer_PlayFootstep_5 (VA 0x0040CCC0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlayFootstep_5.h"
int32_t* HumanPlayer_PlayFootstep_5(int32_t* context, void* param_2)

{
    void* data_val = AI_CombatTarget_21(param_2);

    if (!(context[2] & 1))
        return context;

    AI_CombatTarget_20(param_2);
    AI_CheckHearing_20(param_2);
    AI_TakeCover_22(*(param_2 + 0x4ec));
    AI_UpdateOrders_20(param_2);
    AI_SelectTarget_20(param_2);
    AI_UpdatePatrol_21(param_2, nullptr);
    Human_ViewCam(param_2, 1);
    AI_SelectTarget_19(param_2);
    AI_CheckVisibility_21(param_2, Menu_UpdateLanguage_23(data_val));
    return HumanPlayer_PlaySound_5(param_2, 6);
}
