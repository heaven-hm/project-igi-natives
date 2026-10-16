#include "0044D7D0-AIAction_MoveToEvent.h"
/* 0x0044d7d0 AIAction_MoveToEvent full linked: callers=0 callees=6 */
int32_t AIAction_MoveToEvent(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_MoveToEvent(int eventId, int flags)
// Note: Moves the AI toward the source position of an EVENT it received.
// Params: eventId = AIEVENT_* whose position to move to, flags = AIACTIONFLAG
// (NONE=0/PUSHABLE=1). Use in event handlers (gunshot heard -> move there).
{
    int32_t* eax_1 = sub_451030(g_5bda58);
    void* var_28 = &eax_1[2];
    AIFunction_GetEventData();
    int32_t var_2c = 0;
    float var_30 = a2;
    eax_1[9] = sub_4b8a20(var_30, var_2c);
    sub_450e10(sub_48dfe0, eax_1, sub_4b8a20(a2, 1));
    int32_t var_18 = 2;
    int32_t var_10 = 0;
    int32_t var_c = 0x40000000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
