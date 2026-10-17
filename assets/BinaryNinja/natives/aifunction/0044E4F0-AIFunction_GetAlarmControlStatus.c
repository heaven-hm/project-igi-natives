// Original IGI.EXE function: AIFunction_GetAlarmControlStatus (VA 0x0044E4F0; static CFG gate PASS, CFG score 0.857).
#include "AIFunction_GetAlarmControlStatus.h"
int32_t AIFunction_GetAlarmControlStatus(int32_t a1)

// Sig: int AIFunction_GetAlarmControlStatus()
// Note: RETURNS the status/state of the bound alarm control (raised/used state
// as tracked by the engine). Takes no args.
{
    int32_t valA = *(g_5bda58 + 0x3ac4);
    int32_t v_18;

    if (valA == 0xffffffff)
    {
        v_18 = 0;
        int32_t v_10_1 = 0;
        int32_t v_c = 0;
        char* v_8 = &g_567c74;
        memcpy(a1, &v_18, 0x18);
        return a1;
    }

    int32_t valA2 = Script_ExecuteLevelScript_4(valA);

    if (valA2)
    {
        v_18 = Env_ActivateEntity(valA2);
        int32_t v_10;
        v_10 = Env_ActivateEntity(valA2);
        char* v_8_2 = &g_567c74;
        memcpy(a1, &v_18, 0x18);
        return a1;
    }

    int32_t v_28_1 = *(g_5bda58 + 0x3ac4);
    Warning_Show("AlarmControl ID #%d not defined");
    v_18 = valA2;
    int32_t v_10_2 = valA2;
    int32_t v_c_1 = valA2;
    char* v_8_1 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
