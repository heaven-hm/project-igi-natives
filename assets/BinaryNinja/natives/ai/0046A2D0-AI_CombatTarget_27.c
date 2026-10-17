// Original IGI.EXE function: AI_CombatTarget_27 (VA 0x0046A2D0; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatTarget_27.h"
double* AI_CombatTarget_27(void* a1)

{
    int32_t v_78 = 0;
    int32_t v_74 = 0xc13c2000;
    void v_70;
    DynObj_UpdateDynTree_10(Level_StartMission_4(), &v_70, &g_5bdd78, 1, &v_78, 0xff, nullptr,
        0x80000000);
    double* result;

    if (!result)
        return result;

    double v_68[0xa];
    return AI_AlertAllies_26(a1, &v_68);
}
