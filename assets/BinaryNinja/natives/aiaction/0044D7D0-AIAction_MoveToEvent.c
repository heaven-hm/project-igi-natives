#include "AIAction_MoveToEvent.h"
int32_t AIAction_MoveToEvent(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_MoveToEvent(int eventId, int flags)
// Note: Moves the AI toward the source position of an EVENT it received.
// Params: eventId = AIEVENT_* whose position to move to, flags = AIACTIONFLAG
// (NONE=0/PUSHABLE=1). Use in event handlers (gunshot heard -> move there).
{
    int32_t* valA1 = AI_CheckVisibility_2(g_5bda58);
    Env_ScanViewCone_12(&valA1[2]);
    int32_t v_2c = 0;
    float v_30 = a2;
    valA1[9] = Script_GetArg(v_30, v_2c);
    AI_SelectTarget(sub_48dfe0, valA1, Script_GetArg(a2, 1));
    int32_t v_18 = 2;
    int32_t v_10 = 0;
    int32_t v_c = 0x40000000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
