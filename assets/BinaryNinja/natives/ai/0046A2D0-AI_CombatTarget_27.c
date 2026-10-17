// Original IGI.EXE function: AI_CombatTarget_27 (VA 0x0046A2D0; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatTarget_27.h"
double* AI_CombatTarget_27(void* context)

{
    int32_t item_78 = 0;
    int32_t item_74 = 0xc13c2000;
    void item_70;
    DynObj_UpdateDynTree_10(Level_StartMission_4(), &item_70, &g_5bdd78, 1, &item_78, 0xff, nullptr,
        0x80000000);
    double* result;

    if (!result)
        return result;

    double item_68[0xa];
    return AI_AlertAllies_26(context, &item_68);
}
