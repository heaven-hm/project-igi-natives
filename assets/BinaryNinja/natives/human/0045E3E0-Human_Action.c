// Original IGI.EXE function: Human_Action (VA 0x0045E3E0; static CFG gate PASS, CFG score 1.000).
#include "Human_Action.h"
void Human_Action(void* context, char* param_2)

{
    if (context != *(param_2 + 4) && context != *(param_2 + 8) && context != *(param_2 + 0xc))
    {
        if (!AI_CheckHearing_19(context))
        {
            void* data_5 = *(param_2 + 0xc);
            bool flag_0_1;

            if (data_5)
                flag_0_1 = AI_CombatTarget_19(data_5) == AI_CombatTarget_19(context);

            if (!data_5 || !flag_0_1)
            {
                *param_2 = 1;
                return;
            }
        }
        else
        {
            long double fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
            long double f0_1 = *(param_2 + 0x10);
            fp0_1 - f0_1;

            if (*(&((fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                | (fp0_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                *param_2 = 1;
                return;
            }
        }
    }

    *param_2 = 0;
}
