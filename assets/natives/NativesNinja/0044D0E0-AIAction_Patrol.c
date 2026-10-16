#include "0044D0E0-AIAction_Patrol.h"
/* 0x0044d0e0 AIAction_Patrol full linked: callers=0 callees=6 */
int32_t AIAction_Patrol(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_Patrol(int target, int mustBeZero, int flags)
// Note: Orders the AI into PATROL behaviour. Params: target = patrol goal/node
// reference from your script, mustBeZero = retail template always passes 0,
// flags = AIACTIONFLAG enum: NONE=0, PUSHABLE=1 (action may be replaced by
// higher priority). Use inside AI event handlers e.g. AIEVENT_IDLE branch.
// Template in igi.exe: AIAction_Patrol(xxxx, 0, AIACTIONFLAG_NONE).
{
    int32_t* eax_1 = sub_451030(g_5bda58);
    int32_t eax_2 = sub_4b8a20(a2, 0);
    int32_t var_30 = 1;
    eax_1[2] = eax_2;
    eax_1[3] = sub_4b8a20(a2, var_30);
    sub_450e10(sub_48e8c0, eax_1, sub_4b8a20(a2, 2));
    int32_t var_18 = 3;
    int32_t var_10 = 0;
    int32_t var_c = 0x40080000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
