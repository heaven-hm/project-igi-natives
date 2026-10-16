#include "AIAction_Patrol.h"
int32_t AIAction_Patrol(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_Patrol(int target, int mustBeZero, int flags)
// Note: Orders the AI into PATROL behaviour. Params: target = patrol goal/node
// reference from your script, mustBeZero = retail template always passes 0,
// flags = AIACTIONFLAG enum: NONE=0, PUSHABLE=1 (action may be replaced by
// higher priority). Use inside AI event handlers e.g. AIEVENT_IDLE branch.
// Template in igi.exe: AIAction_Patrol(xxxx, 0, AIACTIONFLAG_NONE).
{
    int32_t* valA1 = AI_CheckVisibility_2(g_5bda58);
    int32_t valA2 = Script_GetArg(a2, 0);
    int32_t v_30 = 1;
    valA1[2] = valA2;
    valA1[3] = Script_GetArg(a2, v_30);
    AI_SelectTarget(sub_48e8c0, valA1, Script_GetArg(a2, 2));
    int32_t v_18 = 3;
    int32_t v_10 = 0;
    int32_t v_c = 0x40080000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
