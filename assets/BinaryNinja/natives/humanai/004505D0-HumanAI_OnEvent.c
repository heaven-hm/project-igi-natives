// IGI native provenance: HumanAI_OnEvent - 0x004505D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004505D0-HumanAI_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_OnEvent.h"
int32_t HumanAI_OnEvent(int32_t* context)

{
    int32_t* source_val = context;
    g_5bda58 = source_val;
    source_val[0xf4e] = Sys_CheckHeap_22(source_val + 0x3d15);
    int32_t* data_2 = source_val[0xf1c];

    if (data_2)
    {
        Qvm_Cleanup(data_2);
        source_val[0xf1c] = 0;
    }

    if (Script_EvaluateCondition_4(source_val) != 0xffffffff)
    {
        int32_t item_10_1 = Script_EvaluateCondition_4(source_val);
        Game_DataSymbolLoad(&source_val[0xedc], "MISSION:AI/%d.qsc");
        source_val[0xf1c] = Qvm_Load(&source_val[0xedc]);
        source_val[0x237] = 0;
    }

    int32_t data_6 = source_val[0xeda];

    if (data_6 != 0xffffffff)
    {
        void* data_7 = Script_FormatString_22(data_6);
        source_val[0xedb] = data_7;

        if (data_7)
        {
            double* data_9 = DynObj_UpdateDynTree_4(source_val[5]);
            Physics_ApplyImpulse_8(&context, source_val[0xedb], data_9);
            int32_t* data_11 = context;

            if (data_11)
            {
                if (source_val[0xf8b] != *data_11)
                {
                    double* data_13 = DynObj_UpdateDynTree_4(source_val[5]);
                    source_val[0xfa8] = AI_UpdateOrders_4(&source_val[0xfa9], &source_val[0xfaa], &source_val[0xfac], source_val[0xedb],
                        *context, data_13);
                    data_11 = context;
                }

                source_val[0xf8b] = *data_11;
            }
            else
            {
                int32_t saved_edi_6 = source_val[0xeda];
                int32_t item_c_6 = Script_EvaluateCondition_4(source_val);
                Warning_Show("HumanAI #%d couldn't find closest node in graph #%d");
            }
        }
        else
        {
            int32_t saved_edi_4 = source_val[0xeda];
            int32_t item_c_3 = Script_EvaluateCondition_4(source_val);
            Warning_Show("HumanAI #%d has AIGraph ID (#%d) but no matching AIGraph was found");
        }
    }

    int32_t data_18 = AI_CombatTarget_22();
    FX_DebrisSpawn_13(&source_val[0x57e], AI_CombatTarget_19(source_val[5]), 6, data_18, 4, 8);
    source_val[0xe8a] = 1;
    return AIConfig_NoHumanaiconfigTaskF(source_val);
}
