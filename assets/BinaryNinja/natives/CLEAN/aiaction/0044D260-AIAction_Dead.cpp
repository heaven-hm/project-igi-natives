// IGI native provenance: AIAction_Dead - 0x0044D260 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044D260-AIAction_Dead.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIAction_Dead.h"
int32_t AIAction_Dead(int32_t context, float param_2 )

// Sig: void AIAction_Dead(int param)
// Note: Runs the DEATH handling action for the AI (plays death, releases
// tasks). Param: param = death context value passed by retail scripts. Use in
// AIEVENT_DEAD handler.
{
    int32_t data_1 = Script_GetArg(param_2, 0);
    int32_t item_30 = 0;
    AI_SelectTarget(sub_48ab70, item_30, data_1);
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
