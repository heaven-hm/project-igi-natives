// IGI native provenance: AIAction_Activate - 0x0044D420 - CFG score 94.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044D420-AIAction_Activate.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIAction_Activate.h"
int32_t AIAction_Activate(int32_t context, float param_2 )

// Sig: void AIAction_Activate(int target, int param2, int flags)
// Note: Generic ACTIVATE action: sends the AI to activate/use an object
// (switch, door, alarm...). Params: target = object/task reference, param2 =
// secondary value (retail passes 0), flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
// Use in AI handlers for alarm/objective responses.
{
    int32_t* data_1 = AI_CheckVisibility_2(g_5bda58);
    int32_t data_2 = Script_GetArg(param_2, 0);
    int32_t item_30 = 1;
    data_1[2] = data_2;
    data_1[5] = Script_GetArg(param_2, item_30);
    AI_SelectTarget(FX_LevelQtaskIdDNotDefi, data_1, Script_GetArg(param_2, 2));
    int32_t item_18 = 3;
    int32_t item_10 = 0;
    int32_t item_c = 0x40080000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
