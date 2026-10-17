// IGI native provenance: AIAction_Patrol - 0x0044D0E0 - CFG score 94.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044D0E0-AIAction_Patrol.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIAction_Patrol.h"
int32_t AIAction_Patrol(int32_t context, float param_2 )

// Sig: void AIAction_Patrol(int target, int mustBeZero, int flags)
// Note: Orders the AI into PATROL behaviour. Params: target = patrol goal/node
// reference from your script, mustBeZero = retail template always passes 0,
// flags = AIACTIONFLAG enum: NONE=0, PUSHABLE=1 (action may be replaced by
// higher priority). Use inside AI event handlers e.g. AIEVENT_IDLE branch.
// Template in igi.exe: AIAction_Patrol(xxxx, 0, AIACTIONFLAG_NONE).
{
    int32_t* data_1 = AI_CheckVisibility_2(g_5bda58);
    int32_t data_2 = Script_GetArg(param_2, 0);
    int32_t item_30 = 1;
    data_1[2] = data_2;
    data_1[3] = Script_GetArg(param_2, item_30);
    AI_SelectTarget(sub_48e8c0, data_1, Script_GetArg(param_2, 2));
    int32_t item_18 = 3;
    int32_t item_10 = 0;
    int32_t item_c = 0x40080000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
