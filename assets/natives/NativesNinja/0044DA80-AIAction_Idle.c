#include "0044DA80-AIAction_Idle.h"
/* 0x0044da80 AIAction_Idle full linked: callers=0 callees=3 */
int32_t AIAction_Idle(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_Idle(int param)
// Note: Puts the AI into IDLE (stands, resumes idle animation countdown).
// Param: idle context value (retail scripts pass their idle value). Use in
// AIEVENT_IDLE handler instead of Patrol for stationary guards.
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    int32_t var_30 = 0;
    sub_450e10(sub_48e510, var_30, eax_1);
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
