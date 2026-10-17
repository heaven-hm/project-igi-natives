// Original IGI.EXE function: Human_Action (VA 0x0045E3E0; static CFG gate PASS, CFG score 1.000).
#include "Human_Action.h"
void Human_Action(void* a1, char* a2)

{
    if (a1 != *(a2 + 4) && a1 != *(a2 + 8) && a1 != *(a2 + 0xc))
    {
        if (!AI_CheckHearing_19(a1))
        {
            void* valA5 = *(a2 + 0xc);
            bool cond_0_1;

            if (valA5)
                cond_0_1 = AI_CombatTarget_19(valA5) == AI_CombatTarget_19(a1);

            if (!valA5 || !cond_0_1)
            {
                *a2 = 1;
                return;
            }
        }
        else
        {
            long double fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
            long double f0_1 = *(a2 + 0x10);
            fp0_1 - f0_1;

            if (*(&((fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                | (fp0_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                *a2 = 1;
                return;
            }
        }
    }

    *a2 = 0;
}
