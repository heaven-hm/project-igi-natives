#include "0044D870-AIAction_LookAtEvent.h"
/* 0x0044d870 AIAction_LookAtEvent full linked: callers=0 callees=6 */
int32_t AIAction_LookAtEvent(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIAction_LookAtEvent(int eventId, int flags)
// Note: Turns the AI to LOOK toward an event's source without moving. Params:
// eventId = AIEVENT_* value, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* eax_1 = sub_451030(g_5bda58);
    void* var_28 = &eax_1[2];
    AIFunction_GetEventData();
    float var_2c = 0f;
    float var_30 = a3;
    Profile_ValueSet(var_30, var_2c);
    eax_1[8] = a1;
    sub_450e10(sub_48e080, eax_1, sub_4b8a20(a3, 1));
    int32_t var_18 = 2;
    int32_t var_10 = 0;
    int32_t var_c = 0x40000000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}
