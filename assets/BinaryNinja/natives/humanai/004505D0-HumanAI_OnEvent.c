// Original IGI.EXE function: HumanAI_OnEvent (VA 0x004505D0; static CFG gate PASS, CFG score 1.000).
#include "HumanAI_OnEvent.h"
int32_t HumanAI_OnEvent(int32_t* a1)

{
    int32_t* srcS = a1;
    g_5bda58 = srcS;
    srcS[0xf4e] = Sys_CheckHeap_22(srcS + 0x3d15);
    int32_t* valA2 = srcS[0xf1c];

    if (valA2)
    {
        Qvm_Cleanup(valA2);
        srcS[0xf1c] = 0;
    }

    if (Script_EvaluateCondition_4(srcS) != 0xffffffff)
    {
        int32_t v_10_1 = Script_EvaluateCondition_4(srcS);
        Game_DataSymbolLoad(&srcS[0xedc], "MISSION:AI/%d.qsc");
        srcS[0xf1c] = Qvm_Load(&srcS[0xedc]);
        srcS[0x237] = 0;
    }

    int32_t valA6 = srcS[0xeda];

    if (valA6 != 0xffffffff)
    {
        void* valA7 = Script_FormatString_22(valA6);
        srcS[0xedb] = valA7;

        if (valA7)
        {
            double* valA9 = DynObj_UpdateDynTree_4(srcS[5]);
            Physics_ApplyImpulse_8(&a1, srcS[0xedb], valA9);
            int32_t* valA11 = a1;

            if (valA11)
            {
                if (srcS[0xf8b] != *valA11)
                {
                    double* valA13 = DynObj_UpdateDynTree_4(srcS[5]);
                    srcS[0xfa8] = AI_UpdateOrders_4(&srcS[0xfa9], &srcS[0xfaa], &srcS[0xfac], srcS[0xedb],
                        *a1, valA13);
                    valA11 = a1;
                }

                srcS[0xf8b] = *valA11;
            }
            else
            {
                int32_t __saved_edi_6 = srcS[0xeda];
                int32_t v_c_6 = Script_EvaluateCondition_4(srcS);
                Warning_Show("HumanAI #%d couldn't find closest node in graph #%d");
            }
        }
        else
        {
            int32_t __saved_edi_4 = srcS[0xeda];
            int32_t v_c_3 = Script_EvaluateCondition_4(srcS);
            Warning_Show("HumanAI #%d has AIGraph ID (#%d) but no matching AIGraph was found");
        }
    }

    int32_t valA18 = AI_CombatTarget_22();
    FX_DebrisSpawn_13(&srcS[0x57e], AI_CombatTarget_19(srcS[5]), 6, valA18, 4, 8);
    srcS[0xe8a] = 1;
    return AIConfig_NoHumanaiconfigTaskF(srcS);
}
