// Original IGI.EXE function: AIAction_LookAtEvent (VA 0x0044D870; static CFG gate PASS, CFG score 0.944).
#include "AIAction_LookAtEvent.h"
int32_t AIAction_LookAtEvent(long double context , int32_t param_2, float param_3 )

// Sig: void AIAction_LookAtEvent(int eventId, int flags)
// Note: Turns the AI to LOOK toward an event's source without moving. Params:
// eventId = AIEVENT_* value, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* data_1 = AI_CheckVisibility_2(g_5bda58);
    Env_ScanViewCone_12(&data_1[2]);
    float item_2c = 0.0f;
    float item_30 = param_3;
    Profile_ValueSet(item_30, item_2c);
    data_1[8] = context;
    AI_SelectTarget(sub_48e080, data_1, Script_GetArg(param_3, 1));
    int32_t item_18 = 2;
    int32_t item_10 = 0;
    int32_t item_c = 0x40000000;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
