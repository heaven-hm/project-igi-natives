// Original IGI.EXE function: AIAction_LookAtEvent (VA 0x0044D870; static CFG gate PASS, CFG score 0.944).
#include "AIAction_LookAtEvent.h"
int32_t AIAction_LookAtEvent(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void AIAction_LookAtEvent(int eventId, int flags)
// Note: Turns the AI to LOOK toward an event's source without moving. Params:
// eventId = AIEVENT_* value, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* valA1 = AI_CheckVisibility_2(g_5bda58);
    Env_ScanViewCone_12(&valA1[2]);
    float v_2c = 0f;
    float v_30 = a3;
    Profile_ValueSet(v_30, v_2c);
    valA1[8] = a1;
    AI_SelectTarget(sub_48e080, valA1, Script_GetArg(a3, 1));
    int32_t v_18 = 2;
    int32_t v_10 = 0;
    int32_t v_c = 0x40000000;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}
