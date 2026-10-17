// IGI native provenance: AIAction_FallFlat - 0x0044D2C0 - CFG score 92.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044D2C0-AIAction_FallFlat.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIAction_FallFlat.h"
int32_t AIAction_FallFlat(long double context , int32_t param_2, float param_3 )

// Sig: void AIAction_FallFlat(int param1, int param2)
// Note: Knocks the AI flat on the ground (ragdoll-ish fall, e.g. after
// explosion/surrender). Params: two ints observed in retail calls (pass 0,0
// unless mapping specific values). Use for scripted knockdowns.
{
    void* data_16 = g_5bda58;
    void* data_val = Script_ExecuteLevelScript_23(*(data_16 + 0x3b6c), *(data_16 + 0x3e2c));
    int32_t data_1 = Physics_CalculateSplineLength_9();
    void* item_30 = data_val;
    int32_t item_18;

    if (Physics_InterpolateWaypoint_9(item_30, data_1))
    {
        item_18 = 2;
        int32_t item_10 = 0;
        int32_t item_c = 0x40000000;
        char* item_8 = &g_567c74;
        memcpy(param_2, &item_18, 0x18);
        return param_2;
    }

    int32_t* data_5 = *(Env_CheckAmbientArea_12() + 0x2c);

    if (data_5)
    {
        int32_t source_1 = *data_5;

        if (source_1)
        {
            double* data_7 = DynObj_UpdateDynTree_4(*(g_5bda58 + 0x14));
            long double fp0_1 = Sys_DispatchOpcode_11(DynObj_UpdateDynTree_4(source_1), data_7);
            long double f0_1 = *(g_5bda58 + 0x3db8);
            fp0_1 - f0_1;

            if (*(&((fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                | (fp0_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                item_18 = 2;
                int32_t item_10_1 = 0;
                int32_t item_c_1 = 0x40000000;
                char* item_8_1 = &g_567c74;
                memcpy(param_2, &item_18, 0x18);
                return param_2;
            }
        }
    }

    int32_t* data_13 = AI_CheckVisibility_2(g_5bda58);
    Profile_ValueSet(param_3, 0.0f);
    data_13[2] = context;
    item_30 = 1;
    AI_SelectTarget(sub_48eb40, data_13, Script_GetArg(param_3, item_30));
    item_18 = 2;
    int32_t item_10_2 = 0;
    int32_t item_c_2 = 0x40000000;
    char* item_8_2 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
