// IGI native provenance: AIAction_Stunned - 0x0044D8F0 - CFG score 93.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044D8F0-AIAction_Stunned.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIAction_Stunned.h"
int32_t AIAction_Stunned(long double context , int32_t param_2, float param_3 )

// Sig: void AIAction_Stunned(int param1, int flags)
// Note: Stuns the AI (flashbang/knockout reaction). Params: param1 = stun
// duration/context value, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* data_1 = AI_CheckVisibility_2(g_5bda58);
    Profile_ValueSet(param_3, 0.0f);
    data_1[2] = context;
    int32_t item_30 = 1;
    AI_SelectTarget(sub_48e130, data_1, Script_GetArg(param_3, item_30));
    int32_t item_18 = 2;
    int32_t item_10 = 0;
    int32_t item_c = 0x40000000;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
