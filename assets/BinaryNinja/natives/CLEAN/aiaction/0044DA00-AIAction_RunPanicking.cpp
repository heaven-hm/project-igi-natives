// IGI native provenance: AIAction_RunPanicking - 0x0044DA00 - CFG score 94.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044DA00-AIAction_RunPanicking.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIAction_RunPanicking.h"
int32_t AIAction_RunPanicking(long double context , int32_t param_2, float param_3 )

// Sig: void AIAction_RunPanicking(int param1, int flags)
// Note: Sends the AI into PANIC running (civilians under fire). Params: param1
// = panic target/context, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* data_1 = AI_CheckVisibility_2(g_5bda58);
    Profile_ValueSet(param_3, 0.0f);
    *(data_1 + 0x20) = context;
    int32_t item_30 = 1;
    int32_t data_2 = Script_GetArg(param_3, item_30);
    Env_ScanViewCone_12(&data_1[2]);
    AI_SelectTarget(sub_48e270, data_1, data_2);
    int32_t item_18 = 2;
    int32_t item_10 = 0;
    int32_t item_c = 0x40000000;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
