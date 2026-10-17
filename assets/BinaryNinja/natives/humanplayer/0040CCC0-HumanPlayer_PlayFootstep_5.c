// IGI native provenance: HumanPlayer_PlayFootstep_5 - 0x0040CCC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040CCC0-HumanPlayer_PlayFootstep_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
